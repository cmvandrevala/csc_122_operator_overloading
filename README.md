# CSC 122 - Operator Overloading

## Rules of Operator Overloading

1. An operator’s precedence cannot be changed by overloading. Parentheses can be used to force the order of evaluation of overloaded operators in an expression.
2. An operator’s associativity cannot be changed by overloading. If an operator normally associates from left to right, then so do all of its overloaded versions.
3. An operator’s “arity” (that is, the number of operands an operator takes) cannot be changed—overloaded unary operators remain unary operators; overloaded binary operators remain binary operators. C++’s only ternary operator, ?:, cannot be overloaded. Operators &, *, + and - all have both unary and binary versions that can be separately overloaded.
4. Only existing operators can be overloaded—you cannot create new ones.
5. You cannot overload operators to change how an operator works on fundamental-type values. For example, you cannot make the + operator subtract two ints. Operator overloading works only with objects of user-defined types or with a mixture of an object of a user-defined type and an object of a fundamental type.
6. Related operators, like + and +=, must be overloaded separately.
7. When overloading(), [], -> or any of the assignment operators, the operator overloading function must be declared as a class member.For all other overloadable operators, the operator overloading functions can be member functions or non - member functions.
