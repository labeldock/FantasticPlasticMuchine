//#ifndef LED_BUILTIN
//#define LED_BUILTIN  2
//#endif
#define TEST_PIN LED_BUILTIN 
#define RELAY_PIN 14
#define LOW_PIN 12
#define TOGGLE_PIN_A 13
#define TOGGLE_PIN_B 15

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(TEST_PIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LOW_PIN, OUTPUT);
  pinMode(TOGGLE_PIN_A, OUTPUT);
  pinMode(TOGGLE_PIN_B, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long time = millis();
  if(time < 200){
    Serial.print("time : ");
    Serial.println(time);
  }
  
  if(time < 3000){
    boolean on_test_led = ((time / 200) % 2) == 0;
    Serial.print("led : ");
    Serial.println(on_test_led);
    if(on_test_led) {
      digitalWrite(TEST_PIN, HIGH);
    } else {
      digitalWrite(TEST_PIN, LOW);
    }
  } else {
    digitalWrite(TEST_PIN, HIGH);
  }

  if(time < 5000){
    digitalWrite(LOW_PIN, HIGH);
    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(TOGGLE_PIN_A, HIGH);
    digitalWrite(TOGGLE_PIN_B, LOW);
    delay(200);
  } else {
    // health check
    digitalWrite(TEST_PIN, HIGH);
    delay(200);
    digitalWrite(TEST_PIN, LOW);
    //
    digitalWrite(LOW_PIN, HIGH);
    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(TOGGLE_PIN_A, !digitalRead(TOGGLE_PIN_A));
    digitalWrite(TOGGLE_PIN_B, !digitalRead(TOGGLE_PIN_B));
    Serial.print("LTMP : ");
    Serial.println(time);
    delay(4800);
  }
}
