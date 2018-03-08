using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Game : MonoBehaviour {

	public GameObject hud;
	public GameObject shop;
	public GameObject tapToStart;
	public Player player;
	public GameObject objects;
	public GameObject fuelEmpty;
	public GameObject noEnergy;
	public GameObject qRScan;
	public GameObject map;
	public static Game instance;
	public GameObject scanResult;
	public GameObject inventory;
	public Text inventoryFuelText;
	public Text inventoryEnergyText;

	void Awake(){
		instance = this;
	}

	// Use this for initialization
	void Start () {
		if (!Application.HasUserAuthorization (UserAuthorization.WebCam)) {
			// request camera use
			Application.RequestUserAuthorization (UserAuthorization.WebCam);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ScanQR(){
		fuelEmpty.SetActive (false);
		noEnergy.SetActive (false);
		qRScan.SetActive (true);
	}

	public void NoFuel(){
		fuelEmpty.SetActive (true);
	}

	public void CloseMap(){
		map.SetActive (false);
	}

	public void LoadItems(){
		scanResult.SetActive (false);
		inventory.SetActive (true);
		inventoryFuelText.text = player.inventoryFuel.ToString ();
		inventoryEnergyText.text = player.inventoryEnergy.ToString ();
	}

	public void CloseQR(){
		qRScan.SetActive (false);
	}

	public void Navigate(){
		string url = "https://www.google.rs/maps/dir/44.8100379,20.4619617/NIS+Petrol,+Ilije+Garašanina+bb,+Beograd+135604/@44.8102532,20.4619675,15.43z/data=!4m10!4m9!1m0!1m5!1m1!1s0x475a7aa3b1e53517:0xfa484a4ce7d7f9a3!2m2!1d20.4743886!2d44.8087155!3e0!5i1?hl=en";
		url = System.Uri.EscapeUriString (url);
		Debug.Log (url);
		url = url.Replace ("+", "%20");
		Debug.Log (url);
		Application.OpenURL (url);
//		Application.OpenURL ("https://www.google.rs");

	}

	public void NoEnergy(){
		noEnergy.SetActive (true);
	}

	public void PauseOn(){
		hud.SetActive (false);
		shop.SetActive (true);
		objects.SetActive (false);
	}

	public void OpenMap(){
		fuelEmpty.SetActive (false);
		noEnergy.SetActive (false);
		map.SetActive (true);
	}

	public void PauseOff(){
		shop.SetActive (false);
//		tapToStart.SetActive (true);
		objects.SetActive(true);
		hud.SetActive (true);
	}

	public void FuelPlus(){
		if (player.fuel < 100f) {
			player.inventoryFuel-=10;
			inventoryFuelText.text = player.inventoryFuel.ToString ();
			player.fuel += 10f;
		}
	}

	public void EnergyPlus(){
		if (player.stamina < 100f) {
			player.inventoryEnergy-=10;
			inventoryEnergyText.text = player.inventoryEnergy.ToString ();
			player.stamina += 10f;
		}
	}



	public void CloseInventory(){
		inventory.SetActive (false);
		player.sleeping = false;
		player.noFuel = false;
		player.canDrive = true;
		player.playing = true;
		StartCoroutine (player.BoostSpeed (2f));
	}
}
