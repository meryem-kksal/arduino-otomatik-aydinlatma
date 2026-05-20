void setup() {
  // put your setup code here, to run once:
 //bilgisayarla saniyede 9600 bitlik haberleşmeyi başlat
  Serial.begin(9600);
   pinMode(8,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(13,OUTPUT);
   pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 // A0 analog pinindeki voltajı oku (0-1023 arası bir sayı verir)
  int isikDegeri = analogRead(A0);
  // Bu okunan sayıyı bilgisayar ekranına yazdır
  Serial.print("Isik Seviyesi: ");
  Serial.println(isikDegeri);     // 'println' bir alt satıra geçer
  // Biraz bekle ki sayılar çok hızlı akmasın (100 ms)
  delay(100);

  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11,LOW);

  if(isikDegeri>700){
     digitalWrite(8,HIGH);
  }
  else if(isikDegeri<=700 && isikDegeri>300){
      digitalWrite(12,HIGH);
  }
  else{
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  }
    
}
