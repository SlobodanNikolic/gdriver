using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MarketTabs : MonoBehaviour {
    public GameObject Tab1Line;
    public GameObject Tab2Line;
    public GameObject Tab3Line;
    public GameObject CarShop;
    public GameObject CarRepair;
    public GameObject MarketShop;

    public void SelectTab1()
    {
        Tab1Line.SetActive(false);
        Tab2Line.SetActive(true);
        Tab3Line.SetActive(true);
        CarShop.SetActive(true);
        CarRepair.SetActive(false);
        MarketShop.SetActive(false);
    }
    public void SelectTab2()
    {
        Tab1Line.SetActive(true);
        Tab2Line.SetActive(false);
        Tab3Line.SetActive(true);
        CarShop.SetActive(false);
        CarRepair.SetActive(true);
        MarketShop.SetActive(false);
    }
    public void SelectTab3()
    {
        Tab1Line.SetActive(true);
        Tab2Line.SetActive(true);
        Tab3Line.SetActive(false);
        CarShop.SetActive(false);
        CarRepair.SetActive(false);
        MarketShop.SetActive(true);
    }

}
