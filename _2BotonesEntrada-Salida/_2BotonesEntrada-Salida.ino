
//Declaracion de los Pines
int pinLed = 10; // Pin del LED
int boton1 = 2; //Encender
int boton2 = 7;//Apagar</code>
 
//Aquí hacemos el Setup de los pines, es decir, los configuramos como entradas y salidas
 
void setup()
{
pinMode(pinLed, OUTPUT);
pinMode(boton1, INPUT_PULLUP);
pinMode(boton2, INPUT_PULLUP);
 
}
 
//Aquí empezamos a hacer nuestro ciclo infinito, programa principal
 
void loop()
{
if (digitalRead(boton1) == LOW)
{
digitalWrite(pinLed, HIGH);
}
if (digitalRead(boton2) == LOW)
{
digitalWrite(pinLed, LOW);
}
}

