
int led1 = 9;           // the pin that the LED is attached to
int led2 = 10; //blue   // the pin that the LED is attached to
int led3 = 11; //orange // the pin that the LED is attached to
int led4 = 6;           // the pin that the LED is attached to
int brightness1 = 0;    // how bright the LED is
int brightness2 = 240;  // how bright the LED is
int brightness3 = 100;  // how bright the LED is
int brightness4 = 50;   // how bright the LED is
int fadeAmount1 = 1;    // how many points to fade the LED by
int fadeAmount2 = 2;    // how many points to fade the LED by
int fadeAmount3 = 5;    // how many points to fade the LED by
int fadeAmount4 = 2;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:

  analogWrite(led1, brightness1);  
  analogWrite(led2, brightness2); 
  analogWrite(led3, brightness3); 
  analogWrite(led4, brightness4); 

  // change the brightness for next time through the loop:
  brightness1 = brightness1 + fadeAmount1;
  brightness2 = brightness2 + fadeAmount2;
  brightness3 = brightness3 + fadeAmount3;
  brightness4 = brightness4 + fadeAmount4;  

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness1 == 0 || brightness1 == 250) {
    fadeAmount1 = -fadeAmount1 ; 
  } 
  
    // reverse the direction of the fading at the ends of the fade: 
  if (brightness2 == 0 || brightness2 == 250) {
    fadeAmount2 = -fadeAmount2 ; 
  } 
 
     // reverse the direction of the fading at the ends of the fade: 
  if (brightness3 == 0 || brightness3 == 250) {
    fadeAmount3 = -fadeAmount3 ; 
  }
 
   // reverse the direction of the fading at the ends of the fade: 
  if (brightness4 == 0 || brightness4 == 250) {
    fadeAmount4 = -fadeAmount4 ; 
  }  
  Serial.println("LED1:\t" + (String)brightness1 + ".\nLED2:\t" + (String)brightness2 + "\nLED3:\t" + (String)brightness3 + "\nLED4:\t" + (String)brightness4);  
  // wait for 30 milliseconds to see the dimming effect    
  delay(50);                            
}

