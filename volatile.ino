volatile bool isButtonPressed=false;
const int buttonPin=2;
const int ledPin=13;

void setup(){
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin),onButtonPress,FALLING);
}

void loop(){
  if(isButtonPressed){
    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
    isButtonPressed=false;
  }
}

void onButtonPress(){
  isButtonPressed=true;
}
