#include <stdio.h>
#include <stdlib.h>

#include "cal.h"


int main(int argc, char* argv[])
{
	float a, b, result = 0;

	a = atof(argv[1]);
	b = atof(argv[2]);
	
	result = SJADD(a, b);
	printf("%f + %f = %f\n", a, b, result);
	
	result = SJSUB(a, b);
	printf("%f - %f = %f\n", a, b, result);
	
	result = SJMUL(a, b);
	printf("%f * %f = %f\n", a, b, result);
	
	result = SJDIV(a, b);
	printf("%f / %f = %f\n", a, b, result);
	
	return 0;

}

