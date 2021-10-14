int sw=10;
int outputCLK=8;
int outputDT=9;
void setup() {
 Serial.begin(9600);
 Serial.println("Encoder kezelő program!");
 for (int i=8;i<=10;i++) pinMode(i, INPUT_PULLUP);

}

void loop() {
 for (int i=8;i<=10;i++) {
  Serial.print(digitalRead(i));
  Serial.print ("; ");
 }
Serial.println("");
}
