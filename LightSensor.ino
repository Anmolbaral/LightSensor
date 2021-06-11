int brightness = 0;

void setup() {
 Serial.begin(115200);
 pinMode(WIO_LIGHT , INPUT)

}

void loop() {

 brightness = analogRead(WIO_LIGHT);
 Serial.println(brightness);
  
}
