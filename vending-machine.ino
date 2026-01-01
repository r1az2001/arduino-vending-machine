#include <LiquidCrystal_I2C.h> // includes the LiquidCrystal Library
#include <Wire.h> 
#include <Stepper.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;

// Creates an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper Stepper1 (stepsPerRevolution, 2, 4, 3, 5);
Stepper Stepper2 (stepsPerRevolution, 6, 8, 7, 9);


#define coinDetector 10

#define button1 11
#define button2 12


int buttonPressed;

void setup() {
  lcd.init(); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
    
  pinMode(coinDetector, INPUT);

  // Activating the digital pins pull up resistors
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {
  // Print "Insert a coin!" on the LCD
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Insert a coin:");
  
  // Wait until a coin is detected
  while (true) {
    if (digitalRead(coinDetector) == LOW) { // If a coin is detected, exit the from the while loop
      break;
    }
  }
  
  delay(10);
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Select your item: 1 or 2?");
  
  
  // Wait until a button is pressed
  while (true) {
    if (digitalRead(button1) == LOW) {
      buttonPressed = 1;
      break;
    }
    if (digitalRead(button2) == LOW) {
      buttonPressed = 2;
      break;
    }
  }
  
  // Print "Delivering..." 
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Delevering...");
  
  switch (buttonPressed) {
    case 1:
      Stepper1.setSpeed(10);
      Stepper1.step(stepsPerRevolution);
      break;
      
      case 2:
      Stepper2.setSpeed(10);
      Stepper2.step(stepsPerRevolution);
      break;
      
  }
  
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Item delevered! ");
  delay(2000);

}
