int ledvermelho = 1;
int ledamarelo = 2;
int ledverde = 3;
int ledvermelho2 = 5;
int ledamarelo2 = 6;
int ledverde2 = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(ledvermelho, OUTPUT);
pinMode(ledamarelo, OUTPUT);
pinMode(ledverde, OUTPUT);
pinMode(ledvermelho2, OUTPUT);
pinMode(ledamarelo2, OUTPUT);
pinMode(ledverde2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledvermelho2, HIGH);
  digitalWrite(ledverde, HIGH);
  delay(5000);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarelo, HIGH);
  delay(2000);
  digitalWrite(ledvermelho2, LOW);
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledvermelho, HIGH);
  digitalWrite(ledverde2, HIGH);
  delay(5000);
  digitalWrite(ledverde2, LOW);
  digitalWrite(ledamarelo2, HIGH);
  delay(2000);
  digitalWrite(ledamarelo2, LOW);  
  digitalWrite(ledvermelho, LOW);  
}

