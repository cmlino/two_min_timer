# define BUTTON_PIN 4
# define BUZZER_PIN 5

void setup() {
  // Configure the PWM output
  ledcSetup(0, 2000, 8);

  // Attach the PWM output to the buzzer pin
  ledcAttachPin(BUZZER_PIN, 0);
  ledcWrite(0,0);

  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
}

int lastState = LOW;

void loop() {
  // put your main code here, to run repeatedly:
  // when the button is pressed, it will connect the input
  // pin to read the opposite state (if using a pull-down resistory,
  // the input pin will read LOW when the button is pressed)

  if (lastState = HIGH) { 

    delay(120000); // 12000 seconds = 2 minutes

    // buzz 
    ledcWrite(0,128); // Set the duty cycle to 50%
    delay(1000); // Wait for 1 second

    // reset the timer and buzzer
    ledcWrite(0,0); // Set the duty cycle to 0%
    delay(1000); // Wait for 1 second
    lastState = LOW;
  } 
}
