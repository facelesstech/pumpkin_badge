const int button1 = 4; // button on pin 3

long randNumber; // random number
long randNumber1; // random number

// Variables will change:
int buttonPushCounter1 = 0;    // counts the button pushes
int buttonState1 = 0;    // tracks the button state
int lastButtonState1 = 0;    // last state of the button

int redPin1 = 1;    // redLED1
int yellowPin3 = 0;    // yellowLED1

int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// debounce stuff
int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 50;    // the debounce time; increase if the output flickers

// long delays section
long waitUntilpulse1 = 0;
long waitUntilpulse2 = 20;

long waitUntilpolice1 = 0;
long waitUntilpolice2 = 200;

long waitUntilchase1 = 0;
long waitUntilchase2 = 100;
long waitUntilchase3 = 200;
long waitUntilchase4 = 300;

long waitUntilstrobe1 = 0;
long waitUntilstrobe2 = 20;

long waitUntilnight1 = 0;
long waitUntilnight2 = 100;
long waitUntilnight3 = 200;
long waitUntilnight4 = 300;
long waitUntilnight5 = 400;
long waitUntilnight6 = 500;


void setup() {
  pinMode(button1, INPUT); // Set the button as input
  digitalWrite(button1, HIGH); // initiate the internal pull up resistor
  // initialize the LED pin as a output:
  pinMode(redPin1, OUTPUT);
  pinMode(yellowPin3, OUTPUT);
  randomSeed(analogRead(A3));
}

void loop() {

  int reading = digitalRead(button1);
  buttonState1 = digitalRead(button1);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  } 
  
  if ((millis() - lastDebounceTime) > debounceDelay) {

    if (reading != buttonState) {
      buttonState = reading;
      
        if (buttonState1 != lastButtonState1) {
          
          if (buttonState1 == HIGH) {
            buttonPushCounter1++;
            
            if (buttonPushCounter1 == 8) {
              buttonPushCounter1 = 1;}
          }
        }
          lastButtonState1 = buttonState1;
    }
  }
  lastButtonState = reading;


  if (buttonPushCounter1 == 1) {
     // Candle mode
    randNumber = random(10,255);
    randNumber1 = random(10,255);
    analogWrite(redPin1, randNumber);
    analogWrite(yellowPin3, randNumber1);
   }
  
  if (buttonPushCounter1 == 2) {
    // Pulse mode
    if (millis() >= waitUntilpulse1) {
      analogWrite(redPin1, brightness);
      analogWrite(yellowPin3, brightness);
      brightness = brightness + fadeAmount;
      waitUntilpulse1 += 40;
    }
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount ; 
    }
    if (millis() >= waitUntilpulse2) {
      analogWrite(redPin1, brightness);
      analogWrite(yellowPin3, brightness);
      brightness = brightness + fadeAmount;
      waitUntilpulse2 += 40;
    }
    if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount ; 
    }   
  }
  
  if (buttonPushCounter1 == 3) {
    // Police flashing mode
    if (millis() >= waitUntilpolice1) {
      digitalWrite(redPin1, HIGH);
      digitalWrite(yellowPin3, HIGH);
      waitUntilpolice1 += 400;
    }
    if (millis() >= waitUntilpolice2) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, LOW);
      waitUntilpolice2 += 400;
    }
  }
  
  if (buttonPushCounter1 == 4) {
    // Chase mode
    if (millis() >= waitUntilchase1) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, HIGH);
      waitUntilchase1 += 400;  
      }
    if (millis() >= waitUntilchase2) {
      digitalWrite(yellowPin3, LOW);
      digitalWrite(redPin1, HIGH);
      waitUntilchase2 += 400;
     }
    if (millis() >= waitUntilchase3) {
      digitalWrite(yellowPin3, LOW);
      digitalWrite(redPin1, LOW);
      waitUntilchase3 += 400;
     }
    if (millis() >= waitUntilchase4) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, LOW);
      waitUntilchase4 += 400;
    }
  }
  
  if (buttonPushCounter1 == 5) {
    // Strobe mode
    if (millis() >= waitUntilstrobe1) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, LOW);
      waitUntilstrobe1 += 40;
    }
    if (millis() >= waitUntilstrobe2) {
      digitalWrite(redPin1, HIGH);
      digitalWrite(yellowPin3, HIGH);
      waitUntilstrobe2 += 40;
    }
  }
  
  if (buttonPushCounter1 == 6) {
    // Night rider mode
    if (millis() >= waitUntilnight1) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, HIGH);
      waitUntilnight1 += 600;
    }
    if (millis() >= waitUntilnight2) {
      digitalWrite(yellowPin3, LOW);
      digitalWrite(redPin1, HIGH);
      waitUntilnight2 += 600;
    }
    if (millis() >= waitUntilnight3) {
      digitalWrite(yellowPin3, LOW);
      digitalWrite(redPin1, LOW);
      waitUntilnight3 += 600;
    }
    if (millis() >= waitUntilnight4) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, LOW);
      waitUntilnight4 += 600;
    }
    if (millis() >= waitUntilnight5) {
      digitalWrite(redPin1, LOW);
      digitalWrite(yellowPin3, LOW);
      waitUntilnight5 += 600;
    }
    if (millis() >= waitUntilnight6) {
      digitalWrite(yellowPin3, LOW);
      digitalWrite(redPin1, HIGH);
      waitUntilnight6 += 600;
    }
  }
  
  if (buttonPushCounter1 == 7) {
    // Off mode
    digitalWrite(redPin1, LOW);
    digitalWrite(yellowPin3, LOW);
  }
}
