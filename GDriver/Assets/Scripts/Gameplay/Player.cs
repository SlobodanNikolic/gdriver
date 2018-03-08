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

	void Awake(){
		// Turn off v-sync
		QualitySettings.vSyncCount = 0;
		Application.targetFrameRate = 60;
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
		if (Input.GetKey (KeyCode.D)) {
			transform.Rotate (0, 0, -turnSpeed);
		}
		if (Input.GetKey (KeyCode.A)) {
			transform.Rotate (0, 0, turnSpeed);
		}


		if(Input.GetKeyDown("s")){
			left = true;
		}
		if(Input.GetKeyUp("s")){
			left = false;
		}

		if(Input.GetKeyDown("a")){
			driftLeft = true;
		}

		if(Input.GetKeyUp("a")){
			driftLeft = false;
		}

		if(Input.GetKeyDown("d")){
			driftRight = true;
		}

		if(Input.GetKeyUp("d")){
			driftRight = false;
		}

//		xspeep *= friction;
		driftPowerRight *= driftFriction;
		driftPowerLeft *= driftFriction;
		transform.Translate(Vector3.right * xspeep);
		transform.Translate(Vector3.down * driftPowerLeft);
		transform.Translate(Vector3.up * driftPowerRight);

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

		if(right){
			xspeep += power;
			if (xspeep >= xspeepMax)
				xspeep = xspeepMax;
		}
		if(left){
			xspeep -= power;
			if (xspeep <= xspeepMin)
				xspeep = xspeepMin;
		}
		if (driftRight) {
			driftPowerRight += driftPower;
			xspeep -= power / driftCoef;

		}
		if (driftLeft) {
			driftPowerLeft += driftPower;
			xspeep -= power / driftCoef;

		}

		if (Input.GetMouseButtonUp(0) && firstTap && canDrive) {
			firstTap = false;
			playing = true;
		}

		if(canDrive && playing){

//			if (playSoundOnce) {
//				SoundControl.instance.engineStill.Stop ();
//				SoundControl.instance.engineRunning.Play ();
//				playSoundOnce = false;
//			}
//			stamina -= staminaConsumption;
//
//			if (stamina < 0f) {
//				stamina = 0f;
//				sleeping = true;
//				StartCoroutine (Stop (5f));
//				StartCoroutine (Sleeping ());
//
//			}
//
//			fuel -= fuelConsumption;
//			if (fuel < 0f) {
//				fuel = 0f;
//				noFuel = true;
//				StartCoroutine (Stop (5f));
//			}
//			//converting the object euler angle's magnitude from to Radians    
//			angle = carTrans.eulerAngles.magnitude * Mathf.Deg2Rad;
//
//			if (Input.GetMouseButton (0)) {
////				if (Input.GetMouseButtonDown (0)) {
////					int rand = Random.Range (0, 2);
////					if (rand == 0) {
////						SoundControl.instance.PlaySound (SoundControl.instance.schreech);
////					}
////				}
//
//
//				//rotate object Right & Left
//				if (Input.mousePosition.x > 540) {
//					carRot.z -= turnSpeed;
//				} else {
//					carRot.z += turnSpeed;
//				}
//			}
//				
//			//move object Forward & Backward
//
//			carPos.x += (Mathf.Cos (angle) * speedX) * Time.deltaTime;
//			carPos.y += (Mathf.Sin (angle) * speedY) * Time.deltaTime;
//			
////			if (Input.GetKey (KeyCode.DownArrow)) {
////				carPos.x += Mathf.Cos (angle) * Time.deltaTime;
////				carPos.y += Mathf.Sin (angle) * Time.deltaTime;    
////			}
//
//
//			//Apply
//			carTrans.position = carPos;
//			carTrans.rotation = Quaternion.Euler (carRot);
//			score += scorePlus;
//			scoreLabel.text = Mathf.RoundToInt (score).ToString ();
//
		}

		fuelBar.fillAmount = fuel/100f;
		staminaBar.fillAmount = stamina/100f;

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
