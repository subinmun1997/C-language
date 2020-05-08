#include <iostream>

int main(void){
	int mon, sal;
	
	while(mon!=-1){
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) : ";
    	std::cin>>mon;
    	if(mon == -1)
    		break;
    	sal = 50+(mon*0.12);
	    std::cout<<"이번 달 급여: "<<sal<<std::endl;
	}
	std::cout<<"프로그램을 종료합니다.";

	return 0;
}
