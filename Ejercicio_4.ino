// Cambio de Britney En archivo actualizado por Sebastian 
// --- Prototipo de la función ---
void printBinary(byte data);

void setup() {
  Serial.begin(9600);  // Inicializa la comunicación serial
  // En simulación no es necesario usar pines de entrada
}

void loop() {
  // Valor fijo: 72 en decimal → "H" en ASCII
  byte receivedData = 0b01001000;

  // --- Visualización de datos ---
  Serial.println("======================");
  Serial.println("PROTOCOLO DE RECEPCION");
  Serial.println("======================");

  Serial.print("Secuencia recibida en binario ");
  printBinary(receivedData);
  
  Serial.print(" El ASCII es: ");
  Serial.println((char)receivedData); // Siempre muestra "H Perfect!"
  Serial.println(" Perfect!");
  
  delay(2000);  // Espera antes de la siguiente lectura
}

// --- Función para imprimir un byte en formato binario ---
void printBinary(byte data) {
  Serial.print("[ ");
  for (int i = 7; i >= 0; i--) {
    Serial.print((data >> i) & 1);
    Serial.print(" ");
  }
  Serial.println("]");
}