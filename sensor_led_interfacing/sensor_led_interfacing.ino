//To read IR sensor signal and feed to 13pin of arduino uno board to glow board led
const int sensor=6; //sensor assigned to pin 6
const int led=13; //led assigned by default to pin 13

void setup() 
{
 pinMode(led, OUTPUT);
 pinMode(sensor, INPUT); 
}

void loop()
{
  int state;
  state=digitalRead(sensor);
  if(state==1)
  {
  digitalWrite(led, HIGH);
  }
  else
  { digitalWrite(led, LOW);
  }
}
