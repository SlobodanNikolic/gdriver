using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarShop : MonoBehaviour {
    public GameObject Item1;
    public GameObject Item2;
    public GameObject Item3;
    public GameObject Item4;
    public GameObject Item5;
    public GameObject Item6;
    public GameObject Item7;
    public GameObject Item8;
    public GameObject Item9;
    public GameObject NotEnoughCoins;
    public GameObject BuyPopUp;
    public Text CoinsText;
    

    static int[] CAR_PRICES;
    GameObject[] items;

    int[] unlockedCars;

    int carToBuy;
    int coins;

    public void Start()
    {
        PlayerPrefs.SetInt("coins", 1000);
        coins = PlayerPrefs.GetInt("coins");
        CoinsText.text = coins + "";
        //Set car prices
        CAR_PRICES = new int[9];
        CAR_PRICES[0] = 0;
        CAR_PRICES[1] = 100;
        CAR_PRICES[2] = 200;
        CAR_PRICES[3] = 400;
        CAR_PRICES[4] = 600;
        CAR_PRICES[5] = 1000;
        CAR_PRICES[6] = 1500;
        CAR_PRICES[7] = 2000;
        CAR_PRICES[8] = 5000;

        items = new GameObject[9];
        items[0] = Item1;
        items[1] = Item2;
        items[2] = Item3;
        items[3] = Item4;
        items[4] = Item5;
        items[5] = Item6;
        items[6] = Item7;
        items[7] = Item8;
        items[8] = Item9;


        unlockedCars = new int[9];
        for (int i = 0;i < items.Length; i++)
        {
            int unlocked = PlayerPrefs.GetInt("car" + (i+1) + "unclocked", 0);
            if (i == 0) unlocked = 1;
            unlockedCars[i] = unlocked;
            items[i].transform.Find("Lock").gameObject.SetActive(unlocked == 0);
            items[i].transform.Find("Price").gameObject.SetActive(unlocked == 0);
            items[i].transform.Find("Coin").gameObject.SetActive(unlocked == 0);
            items[i].transform.Find("Price").GetComponent<Text>().text = CAR_PRICES[i] + "";
            int selected = PlayerPrefs.GetInt("selectedcar", 1);
            items[i].transform.Find("Selected").gameObject.SetActive(selected == i+1);
            items[i].transform.Find("Background").gameObject.SetActive(selected != i + 1);
        }
    }
    public void ClickItem(int item)
    {
        
        int unlocked = unlockedCars[item-1];
        //Select car
        if (unlocked == 1)
        {
            for (int i = 0; i < items.Length; i++)
            {
                items[i].transform.Find("Selected").gameObject.SetActive(item == i+1);
                items[i].transform.Find("Background").gameObject.SetActive(item != i + 1);
            }
            PlayerPrefs.SetInt("selectedcar", item);
        }
        //Buy car
        else
        {
            coins = PlayerPrefs.GetInt("coins");
            if(CAR_PRICES[item-1] > coins)
            {
                NotEnoughCoins.SetActive(true);
            }
            else
            {
                carToBuy = item;
                BuyPopUp.SetActive(true);
                BuyPopUp.transform.Find("Text").gameObject.GetComponent<Text>().text = "Buy Car " + item;
            }
        }
    }

    public void BuyCar()
    {
        PlayerPrefs.SetInt("car" + carToBuy + "unclocked", 1);
        items[carToBuy-1].transform.Find("Lock").gameObject.SetActive(false);
        items[carToBuy-1].transform.Find("Price").gameObject.SetActive(false);
        items[carToBuy-1].transform.Find("Coin").gameObject.SetActive(false);
        unlockedCars[carToBuy - 1] = 1;
        coins = coins - CAR_PRICES[carToBuy - 1];
        CoinsText.text = coins + "";
        PlayerPrefs.SetInt("coins", coins);
        BuyPopUp.SetActive(false);
    }
    public void Cancel()
    {
        NotEnoughCoins.SetActive(false);
        BuyPopUp.SetActive(false);
    }

}
