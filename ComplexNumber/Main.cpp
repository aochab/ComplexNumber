#include "ComplexNumber.h"

int main( int argc, const char* argv[] )
{
	ComplexNumber num1( 20, -4 );
	ComplexNumber num2( 3, 2 );

	ComplexNumber num3 = num1 + num2;
	ComplexNumber num4 = num1 - num2;
	ComplexNumber num5 = num1 * num2;
	ComplexNumber num6 = num1 / num2;

	std::cout << "Adding: "; 
	num3.Write();

	std::cout << "Substraction: ";
	num4.Write();

	std::cout << "Multiplication: ";
	num5.Write();

	std::cout << "Division: ";
	num6.Write();
	
	system( "pause" );
	return 0;
}