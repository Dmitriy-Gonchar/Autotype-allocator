#include <stdio.h>
#include "new.h"

typedef struct MyCoord
{
	double x, y, z;
} MyCoord;

typedef struct OtherType
{
	long a, b, c, d;
} OtherType;


int main()
{
	// create array of MyCoord elements (length 99)
	MyCoord *var1 = NEW(MyCoord, 99);
	// create array of OtherType elements (length 1)
	OtherType *var2 = NEW(OtherType);
}