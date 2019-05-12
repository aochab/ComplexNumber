#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>


class ComplexNumber
{
	public:
	float realPart;
	float imaginaryPart;

	ComplexNumber();
	ComplexNumber( float realPart, float imaginaryPart );
	void Write();
};

ComplexNumber operator +( const ComplexNumber & number1, const ComplexNumber & number2 );
ComplexNumber operator -( const ComplexNumber & number1, const ComplexNumber & number2 );
ComplexNumber operator *( const ComplexNumber & number1, const ComplexNumber & number2 );
ComplexNumber operator /( const ComplexNumber & number1, const ComplexNumber & number2 );