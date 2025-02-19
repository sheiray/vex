void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT); 
}

void loop(){
  On(1000);
  off(1000);
  }

void On(int x){
digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
delay(x);                     // wait for a second
}
void off(int x){
digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
delay(x);                      // wait for a second
}
