class ComplexNumber
{
public:
  float real;
  float imaginary;
  void pretty_print();

  ComplexNumber operator+(ComplexNumber c1);
  ComplexNumber operator+(int i);
  ComplexNumber operator+(float f);
  ComplexNumber operator+(double d);
  ComplexNumber add(ComplexNumber c1);

  ComplexNumber operator-(ComplexNumber c1);
  ComplexNumber subtract(ComplexNumber c1);

  ComplexNumber operator*(ComplexNumber c1);
  ComplexNumber multiply(ComplexNumber c1);

  ComplexNumber operator/(ComplexNumber c1);
  ComplexNumber divide(ComplexNumber c1);

  ComplexNumber(float real_part, float imaginary_part);
};
