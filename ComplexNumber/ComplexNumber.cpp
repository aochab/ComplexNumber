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
float ComplexNumber::getRealPart()
{
	return this->realPart;
}

//--------------------------------------------
float ComplexNumber::getImaginaryPart()
{
	return this->imaginaryPart;
}

//--------------------------------------------
void ComplexNumber::setRealPart( float realPart )
{
	this->realPart = realPart;
}

//--------------------------------------------
void ComplexNumber::setImaginaryPart( float imaginaryPart )
{
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
ComplexNumber operator +( ComplexNumber & number1, ComplexNumber & number2 )
{
	return ComplexNumber( number1.getRealPart() + number2.getRealPart(), number1.getImaginaryPart() + number2.getImaginaryPart() );
}

//--------------------------------------------
ComplexNumber operator -( ComplexNumber & number1, ComplexNumber & number2 )
{
	return ComplexNumber( number1.getRealPart() - number2.getRealPart(), number1.getImaginaryPart() - number2.getImaginaryPart() );
}

//--------------------------------------------
ComplexNumber operator *( ComplexNumber & number1, ComplexNumber & number2 )
{
	float realPart = ( number1.getRealPart() * number2.getRealPart() ) + -( number1.getImaginaryPart() * number2.getImaginaryPart() );
	float imaginaryPart = ( number1.getRealPart() * number2.getImaginaryPart() ) + ( number1.getImaginaryPart() * number2.getRealPart() );

	return ComplexNumber( realPart, imaginaryPart );
}

//--------------------------------------------
ComplexNumber operator /( ComplexNumber & number1, ComplexNumber & number2 )
{
	float realPart, imaginaryPart, dominator;
	ComplexNumber numerator;
	
	numerator.setRealPart( ( number1.getRealPart() * number2.getRealPart() ) + -( number1.getImaginaryPart() * -number2.getImaginaryPart() ) );
	numerator.setImaginaryPart( ( number1.getRealPart() * -number2.getImaginaryPart() ) + ( number1.getImaginaryPart() * number2.getRealPart() ) );

	dominator = pow( number2.getRealPart(), 2 ) + pow( number2.getImaginaryPart(), 2 );

	realPart = numerator.getRealPart() / dominator;
	imaginaryPart = numerator.getImaginaryPart() / dominator;

	return ComplexNumber( realPart, imaginaryPart );
}
