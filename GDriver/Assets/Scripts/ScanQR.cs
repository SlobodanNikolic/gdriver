using BarcodeScanner;
using BarcodeScanner.Scanner;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ScanQR : MonoBehaviour
{

    private IScanner BarcodeScanner;
    public Text TextHeader;
    public RawImage Image;
    public AudioSource Audio;
    private float RestartTime;
    public GameObject list;
    public GameObject gas;
    public GameObject energy;
    public GameObject coins;
    public GameObject listItem;
    public GameObject qrResult;

    // Disable Screen Rotation on that screen
    void Awake()
    {
        Screen.autorotateToPortrait = false;
        Screen.autorotateToPortraitUpsideDown = false;
    }

    void Start()
    {
        // Create a basic scanner
        BarcodeScanner = new Scanner();
        BarcodeScanner.Camera.Play();

        // Display the camera texture through a RawImage
        BarcodeScanner.OnReady += (sender, arg) =>
        {
            // Set Orientation & Texture
            Image.transform.localEulerAngles = BarcodeScanner.Camera.GetEulerAngles();
            Image.transform.localScale = BarcodeScanner.Camera.GetScale();
            Image.texture = BarcodeScanner.Camera.Texture;

            // Keep Image Aspect Ratio
            var rect = Image.GetComponent<RectTransform>();
            var newHeight = rect.sizeDelta.x * BarcodeScanner.Camera.Height / BarcodeScanner.Camera.Width;
            rect.sizeDelta = new Vector2(rect.sizeDelta.x, newHeight);

            RestartTime = Time.realtimeSinceStartup;
        };
    }

    /// <summary>
    /// Start a scan and wait for the callback (wait 1s after a scan success to avoid scanning multiple time the same element)
    /// </summary>
    private void StartScanner()
    {
        BarcodeScanner.Scan((barCodeType, barCodeValue) =>
        {
            BarcodeScanner.Stop();
            if (TextHeader.text.Length > 250)
            {
                TextHeader.text = "";
            }
            //TextHeader.text += "Found: " + barCodeType + " / " + barCodeValue + "\n";
            TextHeader.text = barCodeValue;
            ParseQRContent(barCodeValue);
            RestartTime += Time.realtimeSinceStartup + 1f;

            // Feedback
            Audio.Play();

#if UNITY_ANDROID || UNITY_IOS
            Handheld.Vibrate();
#endif
        });
    }

    /// <summary>
    /// The Update method from unity need to be propagated
    /// </summary>
    void Update()
    {
        if (BarcodeScanner != null)
        {
            BarcodeScanner.Update();
        }

        // Check if the Scanner need to be started or restarted
        if (RestartTime != 0 && RestartTime < Time.realtimeSinceStartup)
        {
            StartScanner();
            RestartTime = 0;
        }
    }

    #region UI Buttons

    public void ClickBack()
    {
        // Try to stop the camera before loading another scene
        StartCoroutine(StopCamera(() =>
        {
            SceneManager.LoadScene("Boot");
        }));
    }

    /// <summary>
    /// This coroutine is used because of a bug with unity (http://forum.unity3d.com/threads/closing-scene-with-active-webcamtexture-crashes-on-android-solved.363566/)
    /// Trying to stop the camera in OnDestroy provoke random crash on Android
    /// </summary>
    /// <param name="callback"></param>
    /// <returns></returns>
    public IEnumerator StopCamera(Action callback)
    {
        // Stop Scanning
        Image = null;
        BarcodeScanner.Destroy();
        BarcodeScanner = null;

        // Wait a bit
        yield return new WaitForSeconds(0.1f);

        callback.Invoke();
    }

    #endregion

    public void ParseQRContent(String json)
    {
		Game.instance.qRScan.SetActive (false);
        qrResult.SetActive(true);

       // QRContent content = new QRContent();
        JSONObject jsonObject = new JSONObject(json);
        print(jsonObject.GetField("time"));
        print(jsonObject.GetField("location"));
        int novcici = 0;
		int gasNum = 0;
		int energyNum = 0;

        foreach (JSONObject jsonItem in jsonObject.GetField("items").list)
        {
            // 1 - CocaCola 17
            // 2 - G-Drive Energy 29
            // 3 - VodaVoda 5
            // 4 - Dizel 45
            // 5 - Bananica  7
            // 6 - Politika 14

            int item = Int32.Parse(jsonItem.GetField("id").ToString());
            int num = 0;
            String name = "";
            print(jsonItem.GetField("id"));
            if(item == 1)
            {
                num = 20;
                name = "CocaCola";
            } else if(item == 2)
            {
                num = 30;
                name = "G-Drive Energy";
            }
            else if (item == 3)
            {
                num = 10;
                name = "VodaVoda";
            }
            else if (item == 4)
            {
                num = 100;
                name = "G-Drive 100";
            }
            else if (item == 5)
            {
                num = 10;
                name = "Coko Bananica";
            }
            else if (item == 6)
            {
                num = 40;
                name = "Sendvic Piletina";
            }
            else if (item == 7)
            {
                num = 14;
                name = "Politika";
            }
          	
			if (name.Contains ("G-Drive 100")) {
				gasNum += num;
			} else {
				energyNum += num;
			}
				
            novcici += 1000;
            GameObject gameObject = Instantiate(listItem, list.transform) as GameObject;
            gameObject.transform.Find("Name").GetComponent<Text>().text = name;
            gameObject.transform.Find("Price").GetComponent<Text>().text = num + "";
            if (name.Contains("G-Drive"))
            {
                Color color = Color.grey;
                ColorUtility.TryParseHtmlString("#e05206",out color);
                gameObject.transform.Find("Name").GetComponent<Text>().color = color;
                gameObject.transform.Find("Price").GetComponent<Text>().color = color;
            }
        }
        
        gas.GetComponent<Text>().text = gasNum + "";
        energy.GetComponent<Text>().text = energyNum + "";
        coins.GetComponent<Text>().text = novcici + "";
		Game.instance.player.inventoryFuel += gasNum;
		Game.instance.player.inventoryEnergy += energyNum;
        int mycoins = PlayerPrefs.GetInt("coins", 0);
        PlayerPrefs.SetInt("coins", mycoins + novcici);
        gameObject.SetActive(false);
    }
}
