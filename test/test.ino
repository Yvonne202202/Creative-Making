const int motorPin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    int command=Serial.read();

    if(command=='2'){
      while(1){
        if(Serial.read()=='3'){
          digitalWrite(motorPin,LOW);
          break;
          return;
        }
        digitalWrite(motorPin,HIGH);
        // delay(1000);
        // digitalWrite(motorPin,LOW);
        // delay(1000);
      }
    }
  }
}
