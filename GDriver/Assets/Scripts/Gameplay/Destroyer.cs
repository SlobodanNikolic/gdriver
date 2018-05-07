using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroyer : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D trig){
		Debug.Log (trig.name);
		if (trig.tag == "RoadTile") {
//			trig.GetComponent<RoadTile> ().AddToAvailable ();
			RoadMaker.instance.roadTilesActive[0].AddToAvailable();
			RoadMaker.instance.roadTilesActive [0].gameObject.SetActive (false);
			RoadMaker.instance.roadTilesActive.RemoveAt (0);
			RoadMaker.instance.PlaceNext ();
		}
	}
}
