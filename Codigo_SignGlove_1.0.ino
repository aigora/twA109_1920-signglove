#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int flexPin1 = A0; // sensor de flexion 1 conectado en PULGAR
int ResisPulgar;
int flexPin2= A1; // sensor de flexion 2 conectado en INDICE
int ResisIndice;
int flexPin3 =A2; // sensor de flexion 3 conectado en CORAZON (MEDIO)
int ResisCorazon;
int flexPin4 = A3; // sensor de flexion 4 conectado en dedo ANULAR
int ResisAnular;
int flexPin5 = A5; // sensor de flexion 5 conectado en dedo MEÑIQUE
int ResisMenique;


void setup() {
 
 
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.print("");
  Serial.begin(9600);
  delay(200);
 
}


void loop() {
  

{
  ResisPulgar = analogRead(flexPin1);
  ResisIndice = analogRead(flexPin2);
  ResisCorazon = analogRead(flexPin3);
  ResisAnular = analogRead(flexPin4);
  ResisMenique = analogRead(flexPin5);

  if ((ResisPulgar >180 && ResisPulgar <210) && (ResisIndice >490 && ResisIndice <570) && (ResisCorazon >510 && ResisCorazon <580)  ) 
  {
    lcd.setCursor(4,0);
    lcd.print("A");
    digitalWrite(6, HIGH);
    Serial.println("  A");
    delay(1000);
 
  }
 
 else {

  if ((ResisPulgar >160 && ResisPulgar <170)  && (ResisIndice >730 && ResisIndice <745) && (ResisCorazon >720 && ResisCorazon <740) && (ResisAnular >630 && ResisAnular <650) )
  {
    lcd.setCursor(1, 0);
    lcd.print("B");
    digitalWrite(6, HIGH);
    Serial.println("  B");
    delay(1000);
   
    }
 
 else {
   
  if ((ResisPulgar >190 && ResisPulgar <220)&&(ResisIndice >650 && ResisIndice <690)&& ( ResisCorazon >590 && ResisCorazon <650)  )
  {
    lcd.setCursor(2,0);
    lcd.print("C");
    digitalWrite(6, HIGH);
    Serial.println("  C");
    delay(2000);
    }
     else {

 
  if ((ResisPulgar >160 && ResisPulgar <190 )&& ResisIndice >700 && (ResisCorazon >530 && ResisCorazon <570)  )
  {
    lcd.setCursor(3, 0);
    lcd.print("D");
    digitalWrite(6, HIGH);
    Serial.println("  D");
    delay(2000);
    }
      else {

 
 
  if ((ResisPulgar >170 && ResisPulgar <180 ) && (ResisIndice >500 && ResisIndice <555) && ( ResisCorazon >530 && ResisCorazon <580) )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    E");
    digitalWrite(6, HIGH);
    Serial.println("  E");
    delay(2000);
    }

    else {
   
  ResisPulgar = analogRead(flexPin1);
  ResisIndice = analogRead(flexPin2);
  ResisCorazon = analogRead(flexPin3);
  ResisAnular = analogRead(flexPin4);
  ResisMenique = analogRead(flexPin5);

  
}
}
}
}
}
