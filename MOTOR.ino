#define MOTOR1  23
#define MOTOR2  22
#define BUTTON  32
int j = 1;

void setup() {
  pinMode(BUTTON, INPUT_PULLUP); // set arduino pin to input mode
  pinMode(MOTOR1, OUTPUT);  // set arduino pin to output mode
  pinMode(MOTOR2, OUTPUT); // set arduino pin to output mode
  Serial.begin(9600);
}

void loop() {
     if(digitalRead(BUTTON)==LOW) { 
    digitalWrite(MOTOR1, HIGH);
    digitalWrite(MOTOR2, HIGH);
    j = j*(-1);
    delay(1000);
    Serial.println(j);
  }else{
    if(j == 1){cw();}
    if(j == -1){ccw();}
  }
}

void cw(){
  digitalWrite(MOTOR1, LOW);
  digitalWrite(MOTOR2, HIGH);
}

void ccw(){
  digitalWrite(MOTOR1, HIGH);
  digitalWrite(MOTOR2, LOW);
}
