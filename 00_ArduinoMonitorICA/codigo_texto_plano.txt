
#define LED_VERDE  7
#define LED_AMARILLO  9
#define LED_NARANJA  11
#define LED_ROJO  13

unsigned int contador=0 , medidaActual = 0;
unsigned long int sumador;
bool bufferInSerial = false;

void setup()
{
  Serial.begin(9600);
  digitalWrite(LED_ROJO,LOW);
  digitalWrite(LED_NARANJA,LOW);
  digitalWrite(LED_AMARILLO,LOW);
  digitalWrite(LED_VERDE,LOW);
  
}

void loop(){
  if (bufferInSerial==false){
    Serial.print(contador);
  	Serial.print(" Ingrese un valor : ");
    bufferInSerial=true;
  }
  if(Serial.available()){
    medidaActual = Serial.parseInt();
    Serial.println(medidaActual);
    contador++;
    sumador+=medidaActual;
    Serial.flush();
    bufferInSerial=false;
  }
  if(contador>3){
      if((sumador/contador)>150){
        digitalWrite(LED_ROJO,HIGH);
        digitalWrite(LED_NARANJA,LOW);
        digitalWrite(LED_AMARILLO,LOW);
        digitalWrite(LED_VERDE,LOW);
         
      }
      else if((sumador/contador)>100 && (sumador/contador) < 151){
      	digitalWrite(LED_ROJO,LOW);
        digitalWrite(LED_NARANJA,HIGH);
        digitalWrite(LED_AMARILLO,LOW);
        digitalWrite(LED_VERDE,LOW);
      }
      
      else if((sumador/contador)> 51 && (sumador/contador) < 101){
      	digitalWrite(LED_ROJO,LOW);
        digitalWrite(LED_NARANJA,LOW);
        digitalWrite(LED_AMARILLO,HIGH);
        digitalWrite(LED_VERDE,LOW);
      }
      else{
      	digitalWrite(LED_ROJO,LOW);
        digitalWrite(LED_NARANJA,LOW);
        digitalWrite(LED_AMARILLO,LOW);
        digitalWrite(LED_VERDE,HIGH);
      }
    }
};