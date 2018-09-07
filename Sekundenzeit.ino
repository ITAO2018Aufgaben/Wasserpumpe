int zeitmesser = 1000;
int zeitstand;
  
boolean wsp1 = false;
boolean wsp2 = false;
boolean wsp3 = false;      //Lüfter
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
   Serial.println ("Test erfolgreich");
}
