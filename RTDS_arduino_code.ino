const int brake_input = A0;
const int input_pin = A3;
#define brake_output  2
#define output_pin  5
int i=0;

void setup(){
    Serial.begin( 9600 );
    pinMode(brake_output, OUTPUT);
    pinMode(output_pin, OUTPUT);
}

void loop(){
    float value1;
    float value2;

    value1 = 0;
    value2 = 0;
    value1 = analogRead( brake_input );
    value2 = analogRead( input_pin );
    

    if(value1>500)
    {
      digitalWrite(brake_output, HIGH); 
    }
    else
    {
      digitalWrite(brake_output, LOW);
    }
  
  
  
    if(value2>500 && i==0)
    {
      digitalWrite(output_pin, HIGH);
      delay(3000);
      digitalWrite(output_pin, LOW);
      i=i+1;
    }
    else
    {
      digitalWrite(output_pin, LOW);
    }
}