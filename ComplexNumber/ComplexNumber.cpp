#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
	this->realPart = 0;
	this->imaginaryPart = 0;
}

//--------------------------------------------
ComplexNumber::ComplexNumber( float realPart, float imaginaryPart )
{
	this->realPart = realPart;
	this->imaginaryPart = imaginaryPart;
}

//--------------------------------------------
void ComplexNumber::Write()
{
	if( this->imaginaryPart > 2e-14 )
		std::cout << this->realPart << " + " << this->imaginaryPart << "i" << std::endl;
	else
		std::cout << this->realPart << " - " << -this->imaginaryPart << "i" << std::endl;
}

//------------------------------------------
ComplexNumber operator +( const ComplexNumber & number1, const ComplexNumber & number2 )
{
	return ComplexNumber( number1.realPart + number2.realPart, number1.imaginaryPart + number2.imaginaryPart );
}

//--------------------------------------------
ComplexNumber operator -( const ComplexNumber & number1, const ComplexNumber & number2 )
{
	return ComplexNumber( number1.realPart - number2.realPart, number1.imaginaryPart - number2.imaginaryPart );
}

//--------------------------------------------
ComplexNumber operator *( const ComplexNumber & number1, const ComplexNumber & number2 )
{
	float realPart = ( number1.realPart * number2.realPart ) + -( number1.imaginaryPart * number2.imaginaryPart );
	float imaginaryPart = ( number1.realPart * number2.imaginaryPart ) + ( number1.imaginaryPart * number2.realPart );

	return ComplexNumber( realPart, imaginaryPart );
}

//--------------------------------------------
ComplexNumber operator /( const ComplexNumber & number1, const ComplexNumber & number2 )
{
	float realPart, imaginaryPart, dominator;
	ComplexNumber numerator;

	numerator.realPart = ( number1.realPart * number2.realPart ) + -( number1.imaginaryPart * -number2.imaginaryPart );
	numerator.imaginaryPart = ( number1.realPart * -number2.imaginaryPart ) + ( number1.imaginaryPart * number2.realPart );

	dominator = pow( number2.realPart, 2 ) + pow( number2.imaginaryPart, 2 );

	realPart = numerator.realPart / dominator;
	imaginaryPart = numerator.imaginaryPart / dominator;

	return ComplexNumber( realPart, imaginaryPart );
}
