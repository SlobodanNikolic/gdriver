using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Splash : MonoBehaviour {

	// Use this for initialization
	void Start () {
        StartCoroutine(Close());
	}

    IEnumerator Close()
    {
        yield return new WaitForSeconds(2);
        for (int i = 0; i < 20; i++)
        {
            Color color = gameObject.GetComponent<Image>().color;
            color.a -= 0.05f;
            gameObject.GetComponent<Image>().color = color;
            yield return null;
        }
        gameObject.SetActive(false);
    }
}
