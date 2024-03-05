class ComplexNumber
{
public:
  float real;
  float imaginary;
  void pretty_print();

  ComplexNumber add(ComplexNumber c1);
  ComplexNumber subtract(ComplexNumber c1);
  ComplexNumber multiply(ComplexNumber c1);
  ComplexNumber divide(ComplexNumber c1);

  ComplexNumber(float real_part, float imaginary_part);
};
