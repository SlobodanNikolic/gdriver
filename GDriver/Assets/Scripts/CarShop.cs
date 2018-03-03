using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    int[] unlocketCars;
    public void Start()
    {
        unlocketCars = new int[9];
        int unlocked = PlayerPrefs.GetInt("car" + 1 + "unclocked", 1);
        unlocketCars[0] = unlocked;
        Item1.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 2 + "unclocked", 0);
        unlocketCars[1] = unlocked;
        Item2.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 3 + "unclocked", 0);
        unlocketCars[2] = unlocked;
        Item3.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 4 + "unclocked", 0);
        unlocketCars[3] = unlocked;
        Item4.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 5 + "unclocked", 0);
        unlocketCars[4] = unlocked;
        Item5.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 6 + "unclocked", 0);
        unlocketCars[5] = unlocked;
        Item6.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 7 + "unclocked", 0);
        unlocketCars[6] = unlocked;
        Item7.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 8 + "unclocked", 0);
        unlocketCars[7] = unlocked;
        Item8.transform.Find("Lock").gameObject.SetActive(unlocked == 0);
        unlocked = PlayerPrefs.GetInt("car" + 9 + "unclocked", 0);
        unlocketCars[8] = unlocked;
        Item9.transform.Find("Lock").gameObject.SetActive(unlocked == 0);

        int selected = PlayerPrefs.GetInt("selectedcar", 1);
            Item1.transform.Find("Selected").gameObject.SetActive(selected == 1);
            Item2.transform.Find("Selected").gameObject.SetActive(selected == 2);
            Item3.transform.Find("Selected").gameObject.SetActive(selected == 3);
            Item4.transform.Find("Selected").gameObject.SetActive(selected == 4);
            Item5.transform.Find("Selected").gameObject.SetActive(selected == 5);
            Item6.transform.Find("Selected").gameObject.SetActive(selected == 6);
            Item7.transform.Find("Selected").gameObject.SetActive(selected == 7);
            Item8.transform.Find("Selected").gameObject.SetActive(selected == 8);
            Item9.transform.Find("Selected").gameObject.SetActive(selected == 9);
        
    }
    public void ClickItem(int item)
    {

        int unlocked = unlocketCars[item-1];
        if (unlocked == 1)
        {
            Item1.transform.Find("Selected").gameObject.SetActive(item == 1);
            Item2.transform.Find("Selected").gameObject.SetActive(item == 2);
            Item3.transform.Find("Selected").gameObject.SetActive(item == 3);
            Item4.transform.Find("Selected").gameObject.SetActive(item == 4);
            Item5.transform.Find("Selected").gameObject.SetActive(item == 5);
            Item6.transform.Find("Selected").gameObject.SetActive(item == 6);
            Item7.transform.Find("Selected").gameObject.SetActive(item == 7);
            Item8.transform.Find("Selected").gameObject.SetActive(item == 8);
            Item9.transform.Find("Selected").gameObject.SetActive(item == 9);
            PlayerPrefs.SetInt("selectedcar", item);
        }
    }
}
