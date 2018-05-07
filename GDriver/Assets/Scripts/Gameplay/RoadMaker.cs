using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class RoadMaker : MonoBehaviour {

	[SerializeField]
	public List<RoadTile> roadTilesLeft;
	[SerializeField]
	public List<RoadTile> roadTilesUp;
	[SerializeField]
	public List<RoadTile> roadTilesRight;
	[SerializeField]
	public List<RoadTile> roadTilesStraight;
	[SerializeField]
	public List<RoadTile> roadTilesActive;
	[SerializeField]
	public RoadTile startTile;
	[SerializeField]
	public RoadTile currentTile;
	public static RoadMaker instance;

	// Use this for initialization
	void Start () {		
		instance = this;
		currentTile = startTile;
	}
	
	// Update is called once per frame
	void Update () {
			
	}

	public void PlaceNext(){
//		int index = Random.Range (0, iRoadTiles.Count);
		currentTile.PlaceNext ();
//		currentTile = iRoadTiles [index];
//		iRoadTiles.RemoveAt (index);
	}
}
