int led = 13;
int remainder;
int i= 179;

int wait = 500;

void setup() {
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
}

void loop() {

  remainder = i%2;

  if(remainder>= 1){

    digitalWrite(led,HIGH);
  
  }

  else{

    digitalWrite(led, LOW);
  }

  led = led - 1;

  i = i/2;

  delay(wait);
 }
