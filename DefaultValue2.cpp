#include <iostream>

int Adder(int num1=1, int num2=2);

int main(void){
	std::cout<<Adder()<<std::endl;
	std::cout<<Adder(5)<<std::endl;
	std::cout<<Adder(2,4)<<std::endl;
	return 0;
}

int Adder(int num1, int num2){
	return num1+num2;
}
