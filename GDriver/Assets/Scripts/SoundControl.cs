using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SoundControl : MonoBehaviour 
{
	public AudioMixer mixer;
	public List<AudioSource> carCrash;
	public AudioSource music;
	public AudioSource horn;
	public List<AudioSource> schreech;
	public AudioSource engineStill;
	public AudioSource engineHard;
	public AudioSource engineRunning;
	public AudioSource clickSound;


	public AudioSource currentSound;
	public static SoundControl instance;

	public void PlaySound(List<AudioSource> sounds){
		int randomIndex = Random.Range (0, sounds.Count);
		sounds[randomIndex].Play();
		currentSound = sounds[randomIndex];
	}


	void Awake(){
		instance = this;
	}

	void Start(){

	}

	public void Click(){
		clickSound.Play ();
	}

}