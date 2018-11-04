/*  
    ESP-01S Relay V1.0 Blink Test
    
    China module fix:
    Solder VCC to CH_EN
    Solder VCC over 10k resistor to GPIO 0


           o o
           o o--\ CHIP_EN
 GPIO 0 /--o o  |
        |  o o--| VCC
        |       |
        \-[10k]-/

 
*/

int i = 1;
int delay_sec = 1000;


void setup() {
  pinMode(i, OUTPUT);
  pinMode(0, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite (i, HIGH);
  digitalWrite (0, HIGH);
  delay (delay_sec);
  digitalWrite (i, LOW);
  digitalWrite (0, LOW);
  delay (delay_sec);
}
