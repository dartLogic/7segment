class SevenSeg
{
	int a, b, c, d, e, f, g;
	


public:
	SevenSeg(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG)
	{
		a = pinA;
		b = pinB;
		c = pinC;
		d = pinD;
		e = pinE;
		f = pinF;
		g = pinG;		

		pinMode(a, OUTPUT);
		pinMode(b, OUTPUT);
		pinMode(c, OUTPUT);
		pinMode(d, OUTPUT);
		pinMode(e, OUTPUT);
		pinMode(f, OUTPUT);
		pinMode(g, OUTPUT);		
	}

	void Show(int digit)
	{		
		switch (digit)
		{
		case 0:
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(f, HIGH);
			digitalWrite(g, LOW);
			break;

		case 1:
			digitalWrite(a, LOW);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, LOW);
			digitalWrite(e, LOW);
			digitalWrite(f, LOW);
			digitalWrite(g, LOW);
			break;

		case 2:
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, LOW);
			digitalWrite(d, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(f, LOW);
			digitalWrite(g, HIGH);
			break;

		case 3:
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, LOW);
			digitalWrite(f, LOW);
			digitalWrite(g, HIGH);
			break;

		case 4:
			digitalWrite(a, LOW);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, LOW);
			digitalWrite(e, LOW);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			break;

		case 5:
			digitalWrite(a, HIGH);
			digitalWrite(b, LOW);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, LOW);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			break;

		case 6:
			digitalWrite(a, HIGH);
			digitalWrite(b, LOW);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			break;

		case 7:
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, LOW);
			digitalWrite(e, LOW);
			digitalWrite(f, LOW);
			digitalWrite(g, LOW);
			break;

		case 8:
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			break;

		case 9:
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, LOW);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			break;		
		}

	}
};

SevenSeg seg(8, 7, 6, 5, 4, 3, 2);



void setup()
{

}

void loop()
{
	for (int counter = 0; counter <= 9; counter++)
	{
		seg.Show(counter);
		delay(1000);
	}	
}