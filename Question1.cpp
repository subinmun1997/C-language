#include <iostream>

int main(void){
	int num, result;
	
	std::cout<<"5���� ���� �Է�"<<std::endl;
	
	for(int i=0;i<5;i++){
		std::cout<<i+1<<"��° ���� �Է�:";
		std::cin>>num;
		result+=num;
	}
	std::cout<<"�հ�: "<<result<<std::endl;
	
	return 0;
}
