using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour {

	public GameObject hud;
	public GameObject shop;
	public GameObject tapToStart;
	public Player player;
	public GameObject objects;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PauseOn(){
		hud.SetActive (false);
		shop.SetActive (true);
		objects.SetActive (false);
	}

	public void PauseOff(){
		shop.SetActive (false);
//		tapToStart.SetActive (true);
		objects.SetActive(true);
		hud.SetActive (true);
	}
}
