int ledPin = 16;
void setup(){

  Serial.begin(115200);
  pinMode(ledPin,OUTPUT);
}
void loop(){
  
  if(touchRead(T0)< 20){
     digitalWrite(ledPin,HIGH); 
  }else{
    digitalWrite(ledPin,LOW); 
  }
  delay(200);
}


