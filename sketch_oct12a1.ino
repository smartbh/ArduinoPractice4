int swPin = 2;
int ledPin = 9;

void setup() {
  
  pinMode(swPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
#define ON 1
#define OFF 0

int lightMode = OFF;
void loop() {
  
  
 if(digitalRead(swPin) ==0)
 {
  delay (100);
  
  if(digitalRead(swPin) ==1)
  {
    if(lightMode == ON){
      lightMode =OFF;
    }
    else{
      lightMode = ON;
    }
  }
 }

 if(lightMode ==ON)
 {
  digitalWrite(ledPin, HIGH);
 }
 else
 {
  digitalWrite(ledPin, LOW);
 }
}
