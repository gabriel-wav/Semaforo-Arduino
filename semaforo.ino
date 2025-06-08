int red1 = 15;
int yellow1 = 4;
int green1 = 2;
int red2 = 12;
int yellow2 = 27;
int green2 = 14;
int redp1 = 18;
int greenp1 = 19;
int redp2 = 25;
int greenp2 = 33;


void setup() {
pinMode (green1, OUTPUT);
pinMode (red1, OUTPUT);
pinMode (yellow1, OUTPUT);
pinMode (red2, OUTPUT);
pinMode (green2, OUTPUT);
pinMode (yellow2, OUTPUT);
pinMode (redp1, OUTPUT);
pinMode (greenp1, OUTPUT);
pinMode (redp2, OUTPUT);
pinMode (greenp2, OUTPUT);
}

void loop() {
digitalWrite (red1, HIGH);
digitalWrite (green2, HIGH);
digitalWrite (greenp1, HIGH);
digitalWrite (redp2, HIGH);
delay(10000); 
digitalWrite (red1, LOW);
digitalWrite (green2, LOW);
digitalWrite (greenp1, LOW);
digitalWrite (redp2, LOW);

digitalWrite (green1, HIGH);
digitalWrite (red2, HIGH);
digitalWrite (redp1, HIGH);
digitalWrite (greenp2, HIGH);
delay(10000); 
digitalWrite (green1, LOW);
digitalWrite (red2, LOW);
digitalWrite (redp1, LOW);
digitalWrite (greenp2, LOW);

digitalWrite (yellow1, HIGH);
digitalWrite (yellow2, HIGH);
digitalWrite (redp1, HIGH);
digitalWrite (redp2, HIGH);
delay(1000); 
digitalWrite (redp1, LOW);
digitalWrite (redp2, LOW);
delay(1000);
digitalWrite (redp1, HIGH);
digitalWrite (redp2, HIGH);
delay(1000); 
digitalWrite (redp1, LOW);
digitalWrite (redp2, LOW);
delay(1000);
digitalWrite (redp1, HIGH);
digitalWrite (redp2, HIGH);
delay(1000); 
digitalWrite (redp1, LOW);
digitalWrite (redp2, LOW);
delay(1000);
digitalWrite (redp1, HIGH);
digitalWrite (redp2, HIGH);
delay(1000); 
digitalWrite (redp1, LOW);
digitalWrite (redp2, LOW);
delay(1000);
digitalWrite (redp1, HIGH);
digitalWrite (redp2, HIGH);
delay(1000); 
digitalWrite (redp1, LOW);
digitalWrite (redp2, LOW);
digitalWrite (yellow1, LOW);
digitalWrite (yellow2, LOW);

}