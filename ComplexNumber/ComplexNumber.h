#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>


class ComplexNumber
{
private:
	float realPart;
	float imaginaryPart;

public:
	ComplexNumber();
	ComplexNumber( float realPart, float imaginaryPart );
	float getRealPart();
	float getImaginaryPart();
	void setRealPart( float realPart );
	void setImaginaryPart( float imaginaryPart );
	void Write();
};

ComplexNumber operator +( ComplexNumber & number1, ComplexNumber & number2 );
ComplexNumber operator -( ComplexNumber & number1, ComplexNumber & number2 );
ComplexNumber operator *( ComplexNumber & number1, ComplexNumber & number2 );
ComplexNumber operator /( ComplexNumber & number1, ComplexNumber & number2 );