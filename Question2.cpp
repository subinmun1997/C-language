#include <iostream>

int main(void){
	
	char name[100];
	char tel[100];
	
	std::cout<<"이름을 입력하세요: ";
	std::cin>>name;
	
	std::cout<<"전화번호를 입력하세요: ";
	std::cin>>tel;
	
	std::cout<<"이름: "<<name<<std::endl;
	std::cout<<"전화번호: "<<tel<<std::endl;
	
	return 0;
} 
