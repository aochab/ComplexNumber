#include "ComplexNumber.h"

int main()
{
	ComplexNumber num1( 20, -4 );
	ComplexNumber num2( 3, 2 );

	ComplexNumber num3 = num1 / num2;
	num3.Write();

	system( "pause" );
	return 0;
}