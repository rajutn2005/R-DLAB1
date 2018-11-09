#define interval 100
#define pin1 8
#define pin2 9

void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  digitalWrite(pin1, HIGH);
  
//  pinMode(pin2, OUTPUT);
//  digitalWrite(pin2, HIGH);
}

void loop() {             
           
  
    digitalWrite(pin1, LOW);
    delay(interval);
    digitalWrite(pin1, HIGH);
    delay(interval);

//     digitalWrite(pin2, LOW);
//    delay(interval);
//    digitalWrite(pin2, HIGH);
//    delay(interval);
            
            
}
