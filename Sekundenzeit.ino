int zeitmesser = 1000;
int zeitstand;
  
boolean melder1;
boolean melder2;
boolean melder3;      //Lüfter

void setup()
{
   Serial.begin(9600);
}
void loop()
{
  if (melder1 == true && melder2 == true && melder3 == true)
  {
    
  }
  else if ((melder1 == true && melder2 == true) || (melder3 == true && melder2 == true) || (melder1 == true && melder3 == true))
  {
    
  }
  else if (melder1 == true || melder2 == true || melder3 == true)
  {
    
  }
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
