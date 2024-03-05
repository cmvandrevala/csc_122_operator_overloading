#include <iostream>
#include "complex_number_without_overloading.hpp"

using namespace std;

int main()
{
  ComplexNumber c1 = ComplexNumber(12.3, 4.6);
  ComplexNumber c2 = ComplexNumber(1.1, 24.0);

  cout << endl;

  cout << "Addition" << endl;
  c1.add(c2).pretty_print();

  cout << endl;

  cout << "Subtraction" << endl;
  c1.subtract(c2).pretty_print();

  cout << endl;

  cout << "Multiplication" << endl;
  c1.multiply(c2).pretty_print();

  cout << endl;

  cout << "Division" << endl;
  c1.divide(c2).pretty_print();

  cout << endl;

  return 0;
}
