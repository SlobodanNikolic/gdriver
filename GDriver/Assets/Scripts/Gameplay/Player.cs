﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour {

	public Vector3 startPos;
	public float speed;
	public float turnSpeed;
	public float fuel;
	public Transform carTrans;
	public Vector3 carPos;
	public Vector3 carRot;
	public float angle;
	public bool playing = false;
	public bool firstTap = true;
	public float fuelConsumption;
	public float stamina;
	public float staminaConsumption;
	public float health;
	public bool canDrive;
	public float topTilePos;
	public Transform backupRoad;
	public List<Transform> roadTileList;
	public Transform lastTile;
	public ParticleSystem hitParticles;

	public Transform camTransform;
	private Vector3 camStartPos;
	public CameraFollow cam;


	Vector3 originalPos;
	public Image fuelBar;
	public Image staminaBar;
	public Text scoreLabel;
	public float score = 0f;
	public float scorePlus;
	public float speedMinus;

	public GameObject trailLeft;
	public GameObject trailRight;

	public GameObject lastTrailLeft;
	public GameObject lastTrailRight;
	public bool oneTimeTrail;

	public Vector3 lTPos;
	public Vector3 rTPos;

	public bool playSoundOnce = true;

	public GameObject[] zObjects;
	public bool sleeping = false;
	public bool noFuel = false;
	public FuelEmpty fuelEmpty;
	public bool canTouch;

	public int points;

	public int inventoryFuel;
	public int inventoryEnergy;
	public float speedX;
	public float speedY;
	public float speedMinusOnHit;




	//TEstiranje
	public float xspeep = 0f;
	public float power = 0.001f;
	public float friction = 0.95f;
	public bool right = false;
	public bool left = false;

	public float fuel2 = 2;

	public float driftPowerRight;
	public float driftPowerLeft;
	public bool driftRight;
	public bool driftLeft;
	public float driftPower;

	public float xspeepMax;
	public float xspeepMin;
	public float driftFriction;

	public float driftCoef;
	public float driftStopTime;

	public Vector2 velocity;
	public bool hitLeft;
	public bool hitRight;
	public bool canSteer = true;
	public Collider2D leftCol;
	public Collider2D rightCol;
	public Collider2D frontCol;


	void Awake(){
		// Turn off v-sync
		startPos = transform.position;
	}

	// Use this for initialization
	void Start () {
		carTrans = transform;
		carPos = carTrans.position;
		carRot = carTrans.rotation.eulerAngles;
		originalPos = camTransform.localPosition;
		lTPos = trailLeft.transform.localPosition;
		rTPos = trailRight.transform.localPosition;
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonUp (0) && firstTap && canDrive) {
			firstTap = false;
			playing = true;
		}

		if(canDrive && playing){

			if (playSoundOnce) {
				SoundControl.instance.engineStill.Stop ();
				SoundControl.instance.engineRunning.Play ();
				playSoundOnce = false;
			}
			stamina -= staminaConsumption;

			if (stamina < 0f) {
				stamina = 0f;
				sleeping = true;
				StartCoroutine (Stop (5f));
				StartCoroutine (Sleeping ());
			}

			fuel -= fuelConsumption;
			if (fuel < 0f) {
				fuel = 0f;
				noFuel = true;
				StartCoroutine (Stop (5f));
			}
			//converting the object euler angle's magnitude from to Radians    
			angle = carTrans.eulerAngles.magnitude * Mathf.Deg2Rad;

			if (Input.GetMouseButton (0) && canSteer) {

				//rotate object Right & Left
				if (Input.mousePosition.x > 540) {
					carRot.z -= turnSpeed;
				} else {
					carRot.z += turnSpeed;
				}
			}

			//move object Forward & Backward

			carPos.x += (Mathf.Cos (angle) * speed) * Time.deltaTime;
			carPos.y += (Mathf.Sin (angle) * speed) * Time.deltaTime;

			carTrans.position = carPos;
			//			GetComponent<Rigidbody2D>().position = carPos;

			carTrans.rotation = Quaternion.Euler (carRot);
			score += scorePlus;
			scoreLabel.text = Mathf.RoundToInt (score).ToString ();

		}

		fuelBar.fillAmount = fuel/100f;
		staminaBar.fillAmount = stamina/100f;

	}

	public void CarHit(){
		speed -= speedMinusOnHit;
		hitParticles.Play();
		cam.notShaking = false;
		SoundControl.instance.PlaySound (SoundControl.instance.carCrash);
		Invoke ("StopShaking", 0.5f);
	}

	public void StopShaking(){
		cam.notShaking = true;
		speed += speedMinusOnHit;
	}

	public void StopLeftDrift(){
		driftLeft = false;
	}

	public void StopRightDrift(){
		driftRight = false;
	}

	void FixedUpdate ()
	{
		
//		transform.Translate (transform.up * speed);
	}

	void OnDrawGizmos()
	{
		Color color;
		color = Color.red;
		// local up
		DrawHelperAtCenter(this.transform.up, color, 2f);
	}

	private void DrawHelperAtCenter(
		Vector3 direction, Color color, float scale)
	{
		Gizmos.color = color;
		Vector3 destination = transform.position + direction * scale;
		Gizmos.DrawLine(transform.position, destination);
	}

	public IEnumerator Stop(float time){

		while(speed > 0f){
			speed -= speedMinus; 

			yield return null;
		}
		if (noFuel)
			Game.instance.NoFuel ();
		else if (sleeping)
			Game.instance.NoEnergy ();
		canDrive = false;
		playing = false;

	}



	void OnTriggerEnter2D(Collider2D other) {
		Debug.Log (other.name);
		Debug.Log (other.tag);
		if (other.tag == "TileCollider") {
			lastTile.localPosition = new Vector3 (0f, topTilePos + 19f, 0f);
			topTilePos = topTilePos + 19f;
			lastTile = other.transform.parent.transform;
		} else {
			CarHit ();
		}
	}

	void OnCollisionEnter2D(Collision2D coll){
//		if (coll.otherCollider.name == "LeftCollider") {
//			if (!hitLeft)
//				StartCoroutine (CollisionLeft (0.1f));
//		} else if (coll.otherCollider.name == "RightCollider") {
//			if (!hitRight)
//				StartCoroutine (CollisionRight (0.1f));
//		} else {
//			Debug.Log (coll.collider.transform.position.x + " : " + transform.position.x);
//			speed = 0f;
//		}
	}

	public IEnumerator CollisionLeft (float time){
		hitLeft = true;
		canSteer = false;
//		GetComponent<Collider2D> ().enabled = false;
		leftCol.enabled = false;
		rightCol.enabled = false;

		for (float i = 0f; i <= time;) {
			i += Time.deltaTime;
			carRot.z -= turnSpeed;

			yield return null;
		}
		hitLeft = false;
		canSteer = true;
//		GetComponent<Collider2D> ().enabled = true;
		leftCol.enabled = true;
		rightCol.enabled = true;


	}

	public IEnumerator CollisionRight (float time){
		hitRight = true;
		canSteer = false;
		rightCol.enabled = false;
		leftCol.enabled = false;


//		GetComponent<Collider2D> ().enabled = false;

		for (float i = 0f; i <= time;) {
			i += Time.deltaTime;
			carRot.z += turnSpeed;

			yield return null;
		}
		hitRight = false;
		canSteer = true;
		rightCol.enabled = true;
		leftCol.enabled = true;

//		GetComponent<Collider2D> ().enabled = true;

	}

	public IEnumerator Sleeping(){
		Debug.Log ("Sleeping");
		sleeping = true;
		while (sleeping) {
			for (int i = 0; i < zObjects.Length; i++) {
				zObjects [i].SetActive (true);
				yield return new WaitForSeconds (0.5f);
			}
			for (int i = 0; i < zObjects.Length; i++) {
				zObjects [i].SetActive (false);
				yield return new WaitForSeconds (0.5f);
			}
			yield return null;
		}
		for (int i = 0; i < zObjects.Length; i++)
			zObjects [i].SetActive (false);

	}

	public IEnumerator BoostSpeed (float time){
		for (float i = 0f; i <= time;) {
			i += Time.deltaTime;
			float currentTime = Mathf.Min (i / time, 1f);

			speed = Easing.EaseInQuad (0f, 5f, currentTime);
			yield return null;
		}

	}


}
