
////portas
int portaLed = 13;
int portaLed2 = 9;
int portaPot = A0;


////variaveis
int valorSens = 0;

////constantes de calibração - descomentar as duas linhas abaixo
////os valores podem ser obtidos com este setup corendo o exemplo
////analogReadSerial e fixando os valores do sensor analogico que está a ser usado
////sem usar o valor de delay é directo do sensor.

//int readMax = ??;
//int readMax = ??;



void setup() {

  Serial.begin(9600);

  //define que as portas digitais são de saída
  pinMode(portaLed, OUTPUT);
  pinMode(portaLed2, OUTPUT);

  //os dois leds iniciam apagados
  digitalWrite(portaLed, LOW);
  digitalWrite(portaLed2, LOW);

}

void loop() {

  valorSens = analogRead(portaPot);
  //valorSens = map(valorSens,minRead,maxRead,50,800); //descomentar para mapear a variavel dentro de valores de calibração definidos previamente
  Serial.println(valorSens);

  digitalWrite(portaLed, HIGH);  
  digitalWrite(portaLed2, LOW);
  delay(valorSens);
  digitalWrite(portaLed, LOW);    
  digitalWrite(portaLed2, HIGH);
  delay(valorSens);



}


