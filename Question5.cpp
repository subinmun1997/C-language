#include <iostream>

void swap(int* n1, int* n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
void swap(char* n1, char* n2){
	char temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
void swap(double* n1, double* n2){
	double temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void){
	int num1=20, num2=30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;
	
	char ch1='A',ch2='Z';
	swap(&ch1,&ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;
	
	double dbl1=1.111, dbl2=5.555;
	swap(&dbl1, &dbl2);
	std::cout<<dbl1<<' '<<dbl2<<std::endl;
	
	return 0;
}
