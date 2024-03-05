#include <iostream>
#include "complex_number_with_overloading.hpp"

using namespace std;

int main()
{
  ComplexNumber c1 = ComplexNumber(12.3, 4.6);
  ComplexNumber c2 = ComplexNumber(1.1, 24.0);

  cout << endl;

  cout << "Addition" << endl;
  c1.add(c2).pretty_print();
  (c1 + c2).pretty_print();

  cout << endl;

  cout << "Subtraction" << endl;
  c1.subtract(c2).pretty_print();
  (c1 - c2).pretty_print();

  cout << endl;

  cout << "Multiplication" << endl;
  c1.multiply(c2).pretty_print();
  (c1 * c2).pretty_print();

  cout << endl;

  cout << "Division" << endl;
  c1.divide(c2).pretty_print();
  (c1 / c2).pretty_print();

  cout << endl;

  cout << "Integer Addition" << endl;
  int i = 5;
  (c1 + i).pretty_print();
  // (i + c1).pretty_print();

  cout << endl;

  cout << "Float Addition" << endl;
  float f = 15.5;
  (c1 + f).pretty_print();
  // (f + c1).pretty_print();

  cout << endl;

  cout << "Double Addition" << endl;
  double d = 23.23;
  (c1 + d).pretty_print();
  // (d + c1).pretty_print();

  cout << endl;

  return 0;
}
