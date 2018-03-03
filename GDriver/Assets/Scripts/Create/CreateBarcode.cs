using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;
using ZXing.QrCode;
using UnityEngine.UI;


public class CreateBarcode : MonoBehaviour {

	public Image QRCode;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyUp (KeyCode.Q)) {
			generateQR ("Opaaaa idemoooo QR generisan");
		}
	}

	private static Color32[] Encode(string textForEncoding, 
		int width, int height) {
		var writer = new BarcodeWriter {
			Format = BarcodeFormat.QR_CODE,
			Options = new QrCodeEncodingOptions {
				Height = height,
				Width = width
			}
		};
		return writer.Write(textForEncoding);
	}

	public void generateQR(string text) {
		Texture2D encoded = new Texture2D (256, 256);
		Color32[] color32 = Encode(text, encoded.width, encoded.height);
		encoded.SetPixels32(color32);
		encoded.Apply();
		Sprite codeSprite = Sprite.Create (encoded, new Rect(0f, 0f, 256f, 256f), new Vector2 ());
		QRCode.sprite = codeSprite;
//		return encoded;
	}


}
