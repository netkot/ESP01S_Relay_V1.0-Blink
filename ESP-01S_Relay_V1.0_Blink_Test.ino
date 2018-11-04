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

int internal_led = 1; // internal ESP-01S led
int relay_pin    = 0; // Relay pin
int delay_sec = 1000;


void setup() {
  pinMode(internal_led, OUTPUT);
  pinMode(relay_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite (internal_led, HIGH);
  digitalWrite (relay_pin , LOW); // inverted logic    
  delay (delay_sec);
    
  digitalWrite (internal_led, LOW);
  digitalWrite (relay_pin , HIGH);    
  delay (delay_sec);
}
