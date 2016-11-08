#include "Rick.h"
#include<iostream>




Rick::Rick(int a, int b)
	:regVar(a),
	constVar(b)
{
}

void Rick::print() {
	std::cout << "regular var is: " << regVar << " const variable is : " << constVar << std::endl;
}

