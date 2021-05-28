    int ledPin2 = 2;
    int ledPin3 = 3;
    int ledPin4 = 4;
    int ledPin5 = 5;
    char state;

    void setup() {
    Serial.begin(9600);
    /* OUTPUT PINS */
    pinMode(ledPin2,OUTPUT);
    pinMode(ledPin3,OUTPUT);
    pinMode(ledPin4,OUTPUT);
    pinMode(ledPin5,OUTPUT);
   

    /* SET OUTPUT PINS TO HIGH *//*THE PIN IS AT 3.3 V*//*in this state it can source current,that is connected through a series to ground*/
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    
    }

    void loop() {
    /* put your main code here, to run repeatedly: */
    /*reply only when you recieve data*/
  if(Serial.available()>0)/*it will only send data when the received data is greater than 0*/
  {
  Serial.print(state); /*return size*//*prints the data*/
    state = Serial.read();
    
    }
        switch(state)
        {
        case 'A':
            digitalWrite(ledPin2, LOW);
            Serial.print("LED 2 ON");
            break;
        case 'a':
            digitalWrite(ledPin2, HIGH);
            Serial.print("LED 2 OFF");
            break;
        case 'B':
            digitalWrite(ledPin3, LOW);
            Serial.print("LED 3 ON");
            break;
        case 'b':
            digitalWrite(ledPin3, HIGH);
            Serial.print("LED 3 OFF");
            break;
        case 'C':
            digitalWrite(ledPin4, LOW);
            Serial.print("LED 4 ON");
            break;
        case 'c':
            digitalWrite(ledPin4, HIGH);
            Serial.print("LED 4 OFF");
            break;
        case 'D':
            digitalWrite(ledPin5, LOW);
            Serial.print("LED 5 ON");
            break;
        case 'd':
            digitalWrite(ledPin5, HIGH);
            Serial.print("LED 5 OFF");
            break;
      
        }
    }
    
