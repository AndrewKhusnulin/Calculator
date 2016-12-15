double sum ( float a,  float b)
{
	return a + b;
}
double sub ( float a,  float b)
{
	return a - b;
}
double mult ( float a,  float b)
{
	return a * b;
}
double *div ( float a,  float b)
{	
 if (b) {
		double *rez = new double;
		*rez = a / b;
		return rez;
                }
	 else
		 return nullptr;
}	 
double pow ( float a )
{
	unsigned int extent = 4;
	float a2 = a;
	
	if ( extent != 0 ) 
	{
			for (int i = 1; i < extent; i++)
		{
			a = a * a2;
		}
	}
		else a = 1.0;
	
	return (double) a;
}
long double *sqrt1(double a) {
    float x = 1.0;
    float y = 2.0;
    if ( a != 1 && a > 0)
    {
        while ( (y - x) > 0.000001 || (y - x) < -0.000001  )
        {
            x = y;
            y = (float)(x + (float)a/x)/2;
        }
        long double *n = new long double;
        *n = y;
        return n;
    }

    else if ( a == 1 )
    {    
        long double *n = new long double;
        y = 1;
        *n = y;
        return n;
    }
    else if ( a == 0 ) 
    {        
        long double *n = new long double;
        y = 0;
        *n = y;
        return n;
    }
    else if ( a < 0)
    {    
        return nullptr;
    }    
}
