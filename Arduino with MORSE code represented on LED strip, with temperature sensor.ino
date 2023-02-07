int green = 3; // green LED connected to digital pin 3
int red = 5; // red LED connected to digital pin 5
int blue = 6; // blue LED connected to digital pin 6
float roomTemperature;

void setup () {
    Serial.begin (9600);
    Serial.setTimeout (1000);
    Serial.println ("Room Temperature: "); 

    pinMode (red, OUTPUT); 
    pinMode (blue, OUTPUT);
    pinMode (green, OUTPUT):
}

void loop () {

  int x;
  x = analogRead (A0): // the temperature sensor connected to analog pin A0

  Serial.print(x);
  Serial.print(", ");

  if (x >= 60) { // if the temperature is greater or equal than 25 degrees
    for (int i = 0 ; i <= 3; i ++) { // the MORSE code for H from HOT (Temperature)
        digitalWrite (red, HIGH);
        delay (500);
        digitalWrite (red, LOW);
        delay(500);
      }
      delay(1500);
  }


  else if (x < 60 && x > 40) { // if the temperature is between 20 and 25 degrees
    for (int i = 0; i <= 2; i ++) { // the MORSE code for O from OK (Temperature)
        digitalWrite (green, HIGH);
        delay (1500);
        digitalWrite (green, LOW);
        delay (1000) ;
    }
    delay (2500);
  }

  else { // if the temperature is lower or equal than 20 degrees
    for (int i = 0; i <= 1; i ++) { //the Morse code for C from COLD (Temperature)
        digitalWrite (blue, HIGH);
        delay (1500);
        digitalWrite (blue, LOW);
        delay (500);
        digitalWrite (blue, HIGH);
        delay (500);
        digitalWrite (blue, LOW);
        delay (1000) ;
    }
    delay(2000);
  }
}