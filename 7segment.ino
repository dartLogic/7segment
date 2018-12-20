class SevenSeg
{
	int a, b, c, d, e, f, g;
	char polarity = 'C';			//whether the display is common anode 'A' or common cathode 'C'
	int ACTIVE;						//segment value to be written in ditigalWrite() funciont
	int INACTIVE;					//setment value to be written in ditigalWrite() funciont

public:
	SevenSeg(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, char displayType)
	{
		a = pinA;
		b = pinB;
		c = pinC;
		d = pinD;
		e = pinE;
		f = pinF;
		g = pinG;	
		polarity = displayType;
		

		if (polarity == 'C')
		{
			ACTIVE = 0x1;
			INACTIVE = 0x0;
		}
		else if(polarity == 'A')
		{
			ACTIVE = 0x0;
			INACTIVE = 0x1;
		}

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
			digitalWrite(a, ACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, ACTIVE);
			digitalWrite(f, ACTIVE);
			digitalWrite(g, INACTIVE);
			break;

		case 1:
			digitalWrite(a, INACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, INACTIVE);
			digitalWrite(e, INACTIVE);
			digitalWrite(f, INACTIVE);
			digitalWrite(g, INACTIVE);
			break;

		case 2:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, INACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, ACTIVE);
			digitalWrite(f, INACTIVE);
			digitalWrite(g, ACTIVE);
			break;

		case 3:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, INACTIVE);
			digitalWrite(f, INACTIVE);
			digitalWrite(g, ACTIVE);
			break;

		case 4:
			digitalWrite(a, INACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, INACTIVE);
			digitalWrite(e, INACTIVE);
			digitalWrite(f, ACTIVE);
			digitalWrite(g, ACTIVE);
			break;

		case 5:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, INACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, INACTIVE);
			digitalWrite(f, ACTIVE);
			digitalWrite(g, ACTIVE);
			break;

		case 6:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, INACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, ACTIVE);
			digitalWrite(f, ACTIVE);
			digitalWrite(g, ACTIVE);
			break;

		case 7:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, INACTIVE);
			digitalWrite(e, INACTIVE);
			digitalWrite(f, INACTIVE);
			digitalWrite(g, INACTIVE);
			break;

		case 8:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, ACTIVE);
			digitalWrite(f, ACTIVE);
			digitalWrite(g, ACTIVE);
			break;

		case 9:
			digitalWrite(a, ACTIVE);
			digitalWrite(b, ACTIVE);
			digitalWrite(c, ACTIVE);
			digitalWrite(d, ACTIVE);
			digitalWrite(e, INACTIVE);
			digitalWrite(f, ACTIVE);
			digitalWrite(g, ACTIVE);
			break;		
		}

	}
};

SevenSeg seg(8, 7, 6, 5, 4, 3, 2, 'A');



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