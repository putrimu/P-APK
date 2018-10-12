int switchState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  //

  if(switchState == LOW ) {
    // saklar tidak ditekan
    digitalWrite (3, HIGH); //led hijau
    digitalWrite (4, LOW); //led merah
    digitalWrite (5, LOW); //LED merah
  }

  else { //saklar ditekan
    digitalWrite (3, LOW); //led hijau)
    digitalWrite (4, LOW); //LED Merah
    digitalWrite (5, HIGH); //LED merah

    delay (250); //tunggu seperempat detik
    //led berhenti menyala
    digitalWrite(4, HIGH); //led merah
    digitalWrite(5, LOW); //led merah
    delay(250); //tunggu seperempat detik
  }

}//kembali keawal perulangan
