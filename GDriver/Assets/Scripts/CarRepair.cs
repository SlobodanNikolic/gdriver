using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarRepair : MonoBehaviour {
    bool lowering_car;
    public GameObject car;
    public GameObject coin;
    public GameObject coinText;
    public Text myCoinsText;
    public GameObject NotEnoughCoins;

    int demage;
    int price;

    public void OnEnable()
    {
        PlayerPrefs.SetInt("cardemage", 20);
        demage = PlayerPrefs.GetInt("cardemage", 0);
        price = 10 * demage;
        coinText.GetComponent<Text>().text = price + "";
        if(demage > 0)
        {
            car.transform.localPosition = new Vector3(car.transform.localPosition.x, 179, car.transform.localPosition.z);
            coin.SetActive(true);
            coinText.SetActive(true);
            car.transform.Find("OpenHood").gameObject.SetActive(true);
            car.transform.Find("ClosedHood").gameObject.SetActive(false);
        } else
        {
            car.transform.localPosition = new Vector3(car.transform.localPosition.x, -73, car.transform.localPosition.z);
            coin.SetActive(false);
            coinText.SetActive(false);
            car.transform.Find("OpenHood").gameObject.SetActive(false);
            car.transform.Find("ClosedHood").gameObject.SetActive(true);
        }
    }

    public void RepairCar()
    {
        int coins = PlayerPrefs.GetInt("coins", 0);
        if(demage > 0 && coins >= price)
        {
            coins -= price;
            demage = 0;
            PlayerPrefs.SetInt("coins", coins);
            myCoinsText.text = coins + "";
            coin.SetActive(false);
            coinText.SetActive(false);
            PlayerPrefs.SetInt("cardemage", 0);
            StartCoroutine(Stop(3f));
        }
        else if(demage >0)
        {
            NotEnoughCoins.SetActive(true);
        }
    }

    public void Cancel()
    {
        NotEnoughCoins.SetActive(false);
    }

    public IEnumerator Stop(float time)
    {
        for (float i = 0f; i <= time;)
        {
            i += Time.deltaTime;
            float currentTime = Mathf.Min(i / time, 1f);
            car.transform.localPosition = new Vector3(car.transform.localPosition.x, Easing.EaseInBounce(car.transform.localPosition.y,-73f,currentTime), car.transform.localPosition.z);
            yield return null;
        }
        car.transform.Find("OpenHood").gameObject.SetActive(false);
        car.transform.Find("ClosedHood").gameObject.SetActive(true);
    }
}
