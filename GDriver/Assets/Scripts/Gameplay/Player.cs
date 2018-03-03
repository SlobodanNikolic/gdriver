using System.Collections;
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

	public void CarHit(){
//		if(!hitParticles.isPlaying)
//		{
			speed -= 2f;
			hitParticles.Play();
			cam.notShaking = false;
			SoundControl.instance.PlaySound (SoundControl.instance.carCrash);
			Invoke ("StopShaking", 0.5f);
//		}
	}

	public void StopShaking(){
		cam.notShaking = true;
		speed += 2f;
	}

	void FixedUpdate ()
	{
			
		if (Input.GetMouseButtonUp(0) && firstTap && canDrive) {
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

			if (stamina <= 0f) {
				stamina = 0f;
				StartCoroutine (Stop (5f));
			}

			fuel -= fuelConsumption;
			if (fuel < 0f) {
				fuel = 0f;
				StartCoroutine (Stop (5f));
			}
			//converting the object euler angle's magnitude from to Radians    
			angle = carTrans.eulerAngles.magnitude * Mathf.Deg2Rad;

			if (Input.GetMouseButton (0)) {
				if (Input.GetMouseButtonDown (0)) {
					SoundControl.instance.PlaySound (SoundControl.instance.schreech);
				}
					
//				if (oneTimeTrail) {
//					lastTrailLeft = Instantiate (trailLeft, lTPos, Quaternion.identity, this.transform);
//					lastTrailLeft.SetActive (true);
//					lastTrailRight = Instantiate (trailLeft, lTPos, Quaternion.identity, this.transform);
//					lastTrailRight.SetActive (true);
//					oneTimeTrail = false;
//				}

//				trailLeft.SetActive (true);
//				trailRight.SetActive (true);

				//rotate object Right & Left
				if (Input.mousePosition.x > 540) {
					carRot.z -= turnSpeed;
				} else {
					carRot.z += turnSpeed;
				}
			}

//			if (Input.GetMouseButtonUp(0)) {
//				if (lastTrailLeft != null) {
//					lastTrailLeft.transform.SetParent (null);
//					lastTrailRight.transform.SetParent (null);
//				}
//					oneTimeTrail = true;
//			}

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
			score += scorePlus;
			scoreLabel.text = Mathf.RoundToInt (score).ToString ();

		}

		fuelBar.fillAmount = fuel/100f;
		staminaBar.fillAmount = stamina/100f;
	}

	public IEnumerator Stop(float time){

		while(speed > 0f){
			speed -= speedMinus; 

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
		} else {
			CarHit ();
		}
	}

}
