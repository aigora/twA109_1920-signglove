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
   
 
  if ((ResisPulgar >160 && ResisPulgar <190) && (ResisIndice >540 && ResisIndice <580) && (ResisCorazon >730 && ResisCorazon <760)  )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    F");
    digitalWrite(6, HIGH);
    Serial.println("  F");
    delay(2000);
    }

    else {

 
 
  if ((ResisPulgar >155 && ResisPulgar <190) && (ResisIndice >540 && ResisIndice <580 ) && (ResisCorazon >530 && ResisCorazon <550)   )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    G");
    digitalWrite(6, HIGH);
    Serial.println("  G");
    delay(2000);
    }
    else {

 
  if ((ResisPulgar >160 && ResisPulgar <170) && (ResisIndice >760 && ResisIndice <770) && (ResisCorazon >740 && ResisCorazon <760)  )
  {
    lcd.setCursor(1, 0);
    lcd.print("H");
   
    digitalWrite(6, HIGH);
    Serial.println("  H");
    delay(2000);
    }
   
    else {


 
  if ((ResisPulgar >150 && ResisPulgar <160) && (ResisIndice >570 && ResisIndice <590) && (ResisCorazon >560 && ResisCorazon <580)  && ResisMenique >5)
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    I");
    digitalWrite(6, HIGH);
    Serial.println("  I");
    delay(2000);
    }

    else {

 
 
  if ((ResisPulgar >170 && ResisPulgar <190) && (ResisIndice >560 && ResisIndice <580) && (ResisCorazon >570 && ResisCorazon <590) && ResisMenique >5)
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    J");
    digitalWrite(6, HIGH);
    Serial.println("  J");
    delay(2000);
    }

else {
   

 
  if ((ResisPulgar >220 && ResisPulgar <230) && (ResisIndice >760 && ResisIndice <790) && (ResisCorazon >740 && ResisCorazon <760) && (ResisAnular >420 && ResisAnular <440)  )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    K");
    digitalWrite(6, HIGH);
    Serial.println("  K");
    delay(2000);
    }
   

  else {

 
  if ((ResisPulgar >210 && ResisPulgar <240) && (ResisIndice >750 && ResisIndice <780) && (ResisCorazon >520 && ResisCorazon <540) && (ResisAnular >410 && ResisAnular <450) )
  {
    lcd.setCursor(3, 0);
    lcd.print("L");
    digitalWrite(6, HIGH);
    Serial.println("  L");
    delay(2000);
    }

     else {
   
 
  if ((ResisPulgar >165 && ResisPulgar <175) && (ResisIndice >575 && ResisIndice <600) && (ResisCorazon >610 && ResisCorazon <620) && (ResisAnular >470 && ResisAnular <490))
  {
    lcd.setCursor(2, 0);
    lcd.print("O");
    digitalWrite(6, HIGH);
    Serial.println("  O");
    delay(2000);
    }

     else {
   
 
  if ((ResisPulgar >150 && ResisPulgar <165) && (ResisIndice >580 && ResisIndice <590) && (ResisCorazon >600 && ResisCorazon <620) && (ResisAnular >440 && ResisAnular <450) )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    M");
    digitalWrite(6, HIGH);
    Serial.println("  M");
    delay(2000);
    }

     
     else {


   if ((ResisPulgar >150 && ResisPulgar <165) && (ResisIndice >580 && ResisIndice <590) && (ResisCorazon >600 && ResisCorazon <620) )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    N");
    digitalWrite(6, HIGH);
    Serial.println("  N");
    delay(2000);
    }

     
     else {


   if ((ResisPulgar >150 && ResisPulgar <165) && ResisMenique >5)
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    P");
    digitalWrite(6, HIGH);
    Serial.println("  P");
    delay(2000);
    }

     
     else {

   
  if ((ResisIndice >170 && ResisIndice <180 ) )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    Q");
    digitalWrite(6, HIGH);
    Serial.println("  Q");
    delay(2000);
    }

    else {
   

  
  if ((ResisPulgar >220 && ResisPulgar <230) && (ResisCorazon >150 && ResisCorazon <180) && (ResisAnular >420 && ResisAnular <440) && (ResisMenique >420 && ResisMenique <440) )
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    R");
    digitalWrite(6, HIGH);
    Serial.println("  R");
    delay(2000);
    }
   

  else {

 
  
 
  if ((ResisPulgar >150 && ResisPulgar <230) && (ResisIndice >500 && ResisIndice <560) && (ResisCorazon >570 && ResisCorazon <590) && (ResisAnular >460 && ResisAnular <490) && (ResisMenique >330 && ResisMenique <350))
  {
    lcd.setCursor(0, 0);
    lcd.print("       ");
    lcd.setCursor(0, 0);
    lcd.print("    S");
    digitalWrite(6, HIGH);
    Serial.println("  S");
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
     }
     }
  }
}
}
}  
}
}
}
}
}
