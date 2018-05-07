using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class RoadTile : MonoBehaviour{

	[SerializeField]
	public enum TILE_TYPE{TILE_UP, TILE_LEFT, TILE_RIGHT};
	public TILE_TYPE tileType;
	public TILE_TYPE tileTypeDynamic;

	public float spriteWidth;
	public float spriteHeight;
	RoadTile nextTile;
	int index;
	public Quaternion startRotation;

	// Use this for initialization
	void Start () {
		startRotation = transform.rotation;
		spriteWidth = GetComponent<SpriteRenderer> ().bounds.extents.x;
		spriteHeight = GetComponent<SpriteRenderer> ().bounds.extents.y;
	}

	
	// Update is called once per frame
	void Update () {
		
	}


	public void PlaceNext ()
	{
		
		switch (tileTypeDynamic) {

		case TILE_TYPE.TILE_LEFT:
			index = Random.Range (0, 2);

			if (index == 0) {
				//Right tile is next
//				index = Random.Range(0, RoadMaker.instance.roadTilesRight.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesRight [index];
				RoadMaker.instance.currentTile = nextTile;
				RoadMaker.instance.roadTilesRight.RemoveAt (index);
				nextTile.transform.Rotate (new Vector3 (0f, 0f, 1f), 90f);
				nextTile.tileTypeDynamic = TILE_TYPE.TILE_UP;
				RoadMaker.instance.roadTilesActive.Add (nextTile);

			} else{
				//Straight tile
//				index = Random.Range(0, RoadMaker.instance.roadTilesUp.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesUp [index];
				RoadMaker.instance.currentTile = nextTile;
				RoadMaker.instance.roadTilesUp.RemoveAt (index);
				nextTile.transform.Rotate (new Vector3 (0f, 0f, 1f), 90f);
				nextTile.tileTypeDynamic = TILE_TYPE.TILE_LEFT;
				RoadMaker.instance.roadTilesActive.Add (nextTile);

			}

			nextTile.transform.localPosition = 
				new Vector3(transform.localPosition.x - spriteWidth - nextTile.spriteWidth, transform.localPosition.y);

			break;
		
		case TILE_TYPE.TILE_RIGHT:
			
			index = Random.Range (0, 2);

			if (index == 0) {
				//Left tile is next
//				index = Random.Range(0, RoadMaker.instance.roadTilesLeft.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesLeft [index];
				RoadMaker.instance.currentTile = nextTile;
				RoadMaker.instance.roadTilesLeft.RemoveAt (index);
				nextTile.transform.Rotate (new Vector3 (0f, 0f, 1f), -90f);
				nextTile.tileTypeDynamic = TILE_TYPE.TILE_UP;
				RoadMaker.instance.roadTilesActive.Add (nextTile);

			} else{
				//Straight tile
//				index = Random.Range(0, RoadMaker.instance.roadTilesUp.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesUp [index];
				RoadMaker.instance.currentTile = nextTile;
				RoadMaker.instance.roadTilesUp.RemoveAt (index);
				nextTile.transform.Rotate (new Vector3 (0f, 0f, 1f), 90f);
				nextTile.tileTypeDynamic = TILE_TYPE.TILE_RIGHT;
				RoadMaker.instance.roadTilesActive.Add (nextTile);

			}

			nextTile.transform.localPosition = 
				new Vector3(transform.localPosition.x + spriteWidth + nextTile.spriteWidth, transform.localPosition.y);

			break;
		case TILE_TYPE.TILE_UP:
			index = Random.Range (0, 3);
			if (index == 0) {
				//Left tile is next
//				index = Random.Range(0, RoadMaker.instance.roadTilesLeft.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesLeft [index];
				RoadMaker.instance.currentTile = RoadMaker.instance.roadTilesLeft [index];
				RoadMaker.instance.roadTilesLeft.RemoveAt (index);
				RoadMaker.instance.roadTilesActive.Add (nextTile);


			} else if (index == 1) {
				//Right tile is next
//				index = Random.Range(0, RoadMaker.instance.roadTilesRight.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesRight [index];
				RoadMaker.instance.currentTile = RoadMaker.instance.roadTilesRight [index];
				RoadMaker.instance.roadTilesRight.RemoveAt (index);
				RoadMaker.instance.roadTilesActive.Add (nextTile);


			} else {
				//Up tile is next
//				index = Random.Range(0, RoadMaker.instance.roadTilesUp.Count);
				index = 0;
				nextTile = RoadMaker.instance.roadTilesUp [index];
				RoadMaker.instance.currentTile = RoadMaker.instance.roadTilesUp [index];
				RoadMaker.instance.roadTilesUp.RemoveAt (index);
				RoadMaker.instance.roadTilesActive.Add (nextTile);

			}
			nextTile.transform.localPosition = 
				new Vector3(transform.localPosition.x, transform.localPosition.y + spriteHeight + nextTile.spriteHeight);
			break;


		}

		nextTile.gameObject.SetActive (true);
		RoadMaker.instance.currentTile = nextTile;


	}

	public void AddToAvailable ()
	{
		transform.rotation = startRotation;
		tileTypeDynamic = tileType;

		switch (tileType) {

		case TILE_TYPE.TILE_LEFT:
			RoadMaker.instance.roadTilesLeft.Add (this);
			break;
		case TILE_TYPE.TILE_RIGHT:
			RoadMaker.instance.roadTilesRight.Add (this);

			break;
		case TILE_TYPE.TILE_UP:
			RoadMaker.instance.roadTilesUp.Add (this);

			break;
		}
	}

}
