#include <iostream>
#include <cmath>
#include "complex_number_with_overloading.hpp"
using namespace std;

ComplexNumber::ComplexNumber(float real_part, float imaginary_part)
{
  this->real = real_part;
  this->imaginary = imaginary_part;
}

void ComplexNumber::pretty_print()
{
  cout << this->real << " + " << this->imaginary << "i" << endl;
}

ComplexNumber ComplexNumber::add(ComplexNumber c1)
{

  float real_sum = this->real + c1.real;
  float imaginary_sum = this->imaginary + c1.imaginary;

  return ComplexNumber(real_sum, imaginary_sum);
}

ComplexNumber ComplexNumber::operator+(ComplexNumber c1)
{

  float real_sum = this->real + c1.real;
  float imaginary_sum = this->imaginary + c1.imaginary;

  return ComplexNumber(real_sum, imaginary_sum);
}

ComplexNumber ComplexNumber::operator+(int i)
{
  return ComplexNumber(this->real + i, this->imaginary);
}

ComplexNumber ComplexNumber::operator+(float f)
{
  return ComplexNumber(this->real + f, this->imaginary);
}

ComplexNumber ComplexNumber::operator+(double d)
{
  return ComplexNumber(this->real + d, this->imaginary);
}

ComplexNumber ComplexNumber::subtract(ComplexNumber c1)
{

  float real_diff = this->real - c1.real;
  float imaginary_diff = this->imaginary - c1.imaginary;

  return ComplexNumber(real_diff, imaginary_diff);
}

ComplexNumber ComplexNumber::operator-(ComplexNumber c1)
{

  float real_diff = this->real - c1.real;
  float imaginary_diff = this->imaginary - c1.imaginary;

  return ComplexNumber(real_diff, imaginary_diff);
}

ComplexNumber ComplexNumber::multiply(ComplexNumber c1)
{

  float real_mult = this->real * c1.real - this->imaginary * c1.imaginary;
  float imaginary_mult = this->real * c1.imaginary + this->imaginary * c1.real;

  return ComplexNumber(real_mult, imaginary_mult);
}

ComplexNumber ComplexNumber::operator*(ComplexNumber c1)
{

  float real_mult = this->real * c1.real - this->imaginary * c1.imaginary;
  float imaginary_mult = this->real * c1.imaginary + this->imaginary * c1.real;

  return ComplexNumber(real_mult, imaginary_mult);
}

ComplexNumber ComplexNumber::divide(ComplexNumber c1)
{

  float real_div = (real * c1.real + this->imaginary * c1.imaginary) / (pow(c1.real, 2) + pow(c1.imaginary, 2));
  float imaginary_div = (-1 * this->real * c1.imaginary + this->imaginary * c1.real) / (pow(c1.real, 2) + pow(c1.imaginary, 2));

  return ComplexNumber(real_div, imaginary_div);
}

ComplexNumber ComplexNumber::operator/(ComplexNumber c1)
{

  float real_div = (real * c1.real + this->imaginary * c1.imaginary) / (pow(c1.real, 2) + pow(c1.imaginary, 2));
  float imaginary_div = (-1 * this->real * c1.imaginary + this->imaginary * c1.real) / (pow(c1.real, 2) + pow(c1.imaginary, 2));

  return ComplexNumber(real_div, imaginary_div);
}
