1: clean
	g++ no_overloading.cpp complex_number_without_overloading.cpp -o no_overloading
	./no_overloading

2: clean
	g++ overloading_without_nonmember_function.cpp complex_number_with_overloading.cpp -o overloading_without_nonmember_function
	./overloading_without_nonmember_function

3: clean
	g++ overloading_with_nonmember_function.cpp complex_number_with_overloading.cpp -o overloading_with_nonmember_function
	./overloading_with_nonmember_function

clean:
	@rm -rf no_overloading
	@rm -rf overloading_with_nonmember_function
	@rm -rf overloading_without_nonmember_function
