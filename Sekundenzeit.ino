int zeitmesser = 1000;
int zeitstand;
  
boolean melder1 = false;
boolean melder2 = false;
boolean melder3 = false;      //Lüfter
void setup()
{
   Serial.begin(9600);
}
void loop()
{
  millis();
  zeitstand = millis() - zeitmesser;
  if (zeitstand >= 0)
  {
    test();
    zeitmesser = zeitmesser + 1000;
  }
}
void test()
{
  
}
