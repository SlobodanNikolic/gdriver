using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

	void Awake(){
		// Turn off v-sync
		QualitySettings.vSyncCount = 0;
		Application.targetFrameRate = 60;
	}

	// Use this for initialization
	void Start () {
		carTrans = transform;
		carPos = carTrans.position;
		carRot = carTrans.rotation.eulerAngles;
	}
	
	// Update is called once per frame
	void Update () {
		
//
//		if (Input.GetMouseButton (0)) {
//			if (Input.mousePosition.x < 540) {
//				//Swing Left
//				transform.RotateAround(transform.position, Vector3.forward, turnSpeed);
//			} else {
//				//Swing Right
//				transform.RotateAround(transform.position, Vector3.forward, -turnSpeed);
//			}
//		}


	}

	void FixedUpdate ()
	{
		stamina -= staminaConsumption;
		if (stamina <= 0f) {
			stamina = 0f;
			StartCoroutine (Stop (5f));
		}
			
		if (Input.GetMouseButtonUp(0) && firstTap && canDrive) {
			firstTap = false;
			playing = true;
		}

		if(canDrive && playing){

			fuel -= fuelConsumption;
			if (fuel < 0f) {
				fuel = 0f;
				StartCoroutine (Stop (5f));
			}
			//converting the object euler angle's magnitude from to Radians    
			angle = carTrans.eulerAngles.magnitude * Mathf.Deg2Rad;

			if (Input.GetMouseButton (0)) {
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
			
	//		if (Input.GetKey (KeyCode.DownArrow)) {
	//			carPos.x += Mathf.Cos (angle) * Time.deltaTime;
	//			carPos.y += Mathf.Sin (angle) * Time.deltaTime;    
	//		}


			//Apply
			carTrans.position = carPos;
			carTrans.rotation = Quaternion.Euler (carRot);

		}
	}

	public IEnumerator Stop(float time){

		for (float i = 0f; i <= time;) {
			i += Time.deltaTime;
			float currentTime = Mathf.Min (i / time, 1f);
			speed = Easing.EaseInBounce (speed, 0f, currentTime);

			yield return null;
		}
		canDrive = false;

	}

	void OnTriggerEnter2D(Collider2D other) {
		Debug.Log (other.name);
		Debug.Log (other.tag);
		if (other.tag == "TileCollider") {
			lastTile.localPosition = new Vector3 (0f, topTilePos + 19f, 0f);
			topTilePos = topTilePos + 19f;
			lastTile = other.transform;
		}
	}


}
