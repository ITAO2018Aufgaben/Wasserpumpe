boolean Lüfter1, Lüfter2, Lüfter3; //Lüfter
int zeitmesser = 1000;
int zeitstand;

void setup()
{
   Serial.begin(9600);
}
void loop()
{
  
  wsp1 = false;
  wsp2 = false;
  wsp3 = false;
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
