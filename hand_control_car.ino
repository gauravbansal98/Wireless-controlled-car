int lm1 = 9, lm2 = 8, rm1 = 10, rm2 = 11; int state1 = 0, state2 = 0;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600); // to start serial com
}

void loop()
{
  analogWrite(rm1, 0);
  analogWrite(rm2, 0);
  analogWrite(lm1, 0);
  analogWrite(lm2, 0);
  while (1)
  {
    if (Serial.available())
    {
      char user = Serial.read();

      if (user == 'Q')
      {
        state1 = 0;
      }
      else if (user == 'P')
      {
        state1 = 1;
      }
      else if (user == 'O')
      {
        state1 = 2;
      }
      else if (user == 'N')
      {
        state1 = 3;
      }
      else if (user == 'M')
      {
        state1 = 4;
      }
      else if (user == 'L')
      {
        state1 = 5;
      }
      else if (user == 'K')
      {
        state1 = 6;
      }
      else if (user == 'J')
      {
        state1 = 7;
      }
      else if (user == 'I')
      {
        state1 = 8;
      }
      else if (user == 'H')
        state1 = 9;
      else if (user == 'G')
        state1 = 10;
      else if (user == 'E')
        state1 = 12;
      else if (user == 'D')
        state1 = 13;
      else if (user == 'C')
        state1 = 14;
      else if (user == 'B')
        state1 = 15;
      else if (user == 'A')
        state1 = 16;
      else if (user == 'R')
        state1 = -1;
      else if (user == 'S')
        state1 = -2;
      else if (user == 'T')
        state1 = -3;
      else if (user == 'U')
        state1 = -4;
      else if (user == 'V')
        state1 = -5;
      else if (user == 'W')
        state1 = -6;
      else if (user == 'X')
        state1 = -7;
      else if (user == 'Y')
        state1 = -8;
      else if (user == 'Z')
        state1 = -9;
      else if (user == '4')
        state1 = -10;
      else if (user == '5')
        state1 = -11;
      else if (user == '6')
        state1 = -12;


      if (user == 'q')
      {
        state2 = 0;
      }
      else if (user == 'p')
        state2 = 2;
      else if (user == 'o')
        state2 = 4;
      else if (user == 'm')
        state2 = 5;
      else if (user == 'l')
        state2 = 6;
      else if (user == 'k')
        state2 = 7;
      else if (user == 'j')
        state2 = 8;
      else if (user == 'i')
        state2 = 9;
      else if (user == 'h')
        state2 = 10;
      else if (user == 'g')
        state2 = 11;
      else if (user == 'f')
        state2 = 12;
      else if (user == 'e')
        state2 = 13;
      else if (user == 'd')
        state2 = 14;
      else if (user == 'c')
        state2 = 15;
      else if (user == 'r')
        state2 = -3;
      else if (user == 'u')
        state2 = -4;
      else if (user == 'v')
        state2 = -5;
      else if (user == 'w')
        state2 = -6;
      else if (user == 'x')
        state2 = -7;
      else if (user == 'y')
        state2 = -8;
      else if (user == 'z')
        state2 = -9;
      else if (user == '1')
        state2 = -10;
      else if (user == '2')
        state2 = -11;
      else if (user == '3')
        state2 = -12;

      Serial.println("hi");
      Serial.println(state1);
      Serial.println(state2);
      if (state1 == 0 && state2 == 0)
      {
        continue;
      }
      if (state1 == 0 && state2 == 2)
      {
        analogWrite(rm1, 0);
        analogWrite(rm2, 0);
        analogWrite(lm1, 0);
        analogWrite(lm2, 0);
      }
      else if (state1 == 0 && state2 > 2)
      {
        analogWrite(rm1, (30 + 13 * state2));
        analogWrite(rm2, 0);
        analogWrite(lm1, 0);
        analogWrite(lm2, 0);
      }
      else if (state1 == 0 && state2 < 0)
      {
        analogWrite(rm1, 0);
        analogWrite(rm2, 0);
        analogWrite(lm1, (30 - 13 * state2));
        analogWrite(lm2, 0);
        Serial.println('b');
      }
      else if (state1 > 0 && state1 < 9 && state2 > 1)
      {
        analogWrite(rm1, ( 30 + state1 * 10 + state2 * 3));
        analogWrite(rm2, 0);
        analogWrite(lm1, (30 + state1 * 10 - state2 * 5));
        analogWrite(lm2, 0);
        Serial.println('d');
      }
      else if (state1 > 0 && state1 < 9 && state2 <= 0)
      {
        analogWrite(rm1, ( 30 + state1 * 10 + state2 * 5));
        analogWrite(rm2, 0);
        analogWrite(lm1, (30 + state1 * 10 - state2 * 3));
        analogWrite(lm2, 0);
        Serial.println('e');
      }
      else if (state1 >= 9 && state2 >= 0)
      {
        analogWrite(rm1, ( 30 + state1 * 10 + state2 * 2));
        analogWrite(rm2, 0);
        analogWrite(lm1, 30 + (state1 * 10 - state2 * 5));
        analogWrite(lm2, 0);
        Serial.println('f');
      }
      else if (state1 >= 9 && state2 <= 0)
      {
        analogWrite(rm1, 30 + (state1 * 10 + state2 * 8));
        analogWrite(rm2, 0);
        analogWrite(lm1, 30 + (state1 * 10 - state2 * 2));
        analogWrite(lm2, 0);
        Serial.println('g');
      }
      else if (state1 < 0 && state1 > -7 && state2 >= 0)
      {
        analogWrite(rm1, 0);
        analogWrite(rm2, (30 - state1 * 10 + state2 * 7));
        analogWrite(lm1, 0);
        analogWrite(lm2, ( 30 - state1 * 10));
        Serial.println('h');
      }
      else if (state1 < 0 && state1 > -7 && state2 <= 0)
      {
        analogWrite(rm1, 0);
        analogWrite(rm2, (30 - state1 * 10));
        analogWrite(lm1, 0);
        analogWrite(lm2, (30 - state1 * 10 + state2 * 7));
        Serial.println('i');
      }
      else if (state1 < -7 && state2 <= 0)
      {
        analogWrite(rm1, 0);
        analogWrite(rm2, ( 30 - state1 * 10 + state2 * 8 ));
        analogWrite(lm1, 0);
        analogWrite(lm2, (30 - state1 * 10 - state2 * 3));
        Serial.println('j');
      }
      else if (state1 < -7 && state2 >= 0)
      {
        analogWrite(rm1, 0);
        analogWrite(rm2, 30 - state1 * 10 + state2 * 3 );
        analogWrite(lm1, 0);
        analogWrite(lm2, 30 - state1 * 10 - state2 * 8);
        Serial.println('k');
      }
      else
        continue;

    }
  }

}
