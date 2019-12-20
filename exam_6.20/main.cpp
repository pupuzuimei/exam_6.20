int pin = 13;
int val;
void setup() {
    
    Serial.begin(9600);
    pinMode(pin,OUTPUT);
}


void loop() {
    
    val = Serial.read();
    switch (val)
    {
        case 'a':
        {
            Serial.println("a");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'b':
        {
            Serial.println("b");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'c':
        {
            Serial.println("c");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'd':
        {
            Serial.println("d");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'e':
        {
            Serial.println("e");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'f':
        {
            Serial.println("f");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'g':
        {
            Serial.println("g");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'h':
        {
            Serial.println("h");
            for(int i=0;i<4;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'i':
        {
            Serial.println("i");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'j':
        {
            Serial.println("j");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'k':
        {
            Serial.println("k");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'l':
        {
            Serial.println("l");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'm':
        {
            Serial.println("m");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'n':
        {
            Serial.println("n");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'o':
        {
            Serial.println("o");
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'p':
        {
            Serial.println("p");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'q':
        {
            Serial.println("q");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'r':
        {
            Serial.println("r");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 's':
        {
            Serial.println("s");
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 't':
        {
            Serial.println("t");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'u':
        {
            Serial.println("u");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'v':
        {
            Serial.println("v");
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH)
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'w':
        {
            Serial.println("w");
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'x':
        {
            Serial.println("x");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            
            break;
        }
        case 'y':
        {
            Serial.println("y");
            digitalWrite(pin,HIGH);
            delay(5000);
            digitalWrite(pin,LOW);
            delay(1000);
            digitalWrite(pin,HIGH);
            delay(1000);
            digitalWrite(pin,LOW);
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
        case 'z':
        {
            Serial.println("z");
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(5000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);
                delay(1000);
                digitalWrite(pin,LOW);
                delay(1000);
            }
            
            break;
        }
    }
    
    
    
    /*if(val="hello world")
     {
     //h
     for(int i=0;i<4;i++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     }
     //e
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     //ll
     for(int i=0;i<2;i++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     for(int j=0;j<2;j++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     }
     }
     //o
     for(int i=0;i<3;i++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     }
     //w
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     for(int i=0;i<2;i++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     }
     //o
     for(int i=0;i<3;i++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     }
     //r
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     //l
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     for(int j=0;j<2;j++)
     {
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     }
     //d
     digitalWrite(pin,HIGH);//点亮
     delay(5000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     digitalWrite(pin,HIGH);//点亮
     delay(1000);
     digitalWrite(pin,LOW);//熄灭
     delay(1000);
     
     
     Serial.println("Hello World!");//显示“Hello World！”字符串
     }
     */
}
