#pragma once
#ifndef _Calculator_
#define _Calculator_

class Calculator {
public:
	int addNumber(int& x, int& y) {
		int sum = x + y;
		return sum;
	}
	int subtractNumber(int& x, int& y) {
		int difference = x - y;
		return difference;
	}
	int multiplyNumber(int& x, int& y) {
		int product = x * y;
		return product;
	}
	int divideNumber(int& x, int& y) {
		int quotient = x / y;
		return quotient;
	}
};

#endif
