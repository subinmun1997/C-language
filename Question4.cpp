#include <iostream>

int main(void){
	int mon, sal;
	
	while(mon!=-1){
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
    	std::cin>>mon;
    	if(mon == -1)
    		break;
    	sal = 50+(mon*0.12);
	    std::cout<<"�̹� �� �޿�: "<<sal<<std::endl;
	}
	std::cout<<"���α׷��� �����մϴ�.";

	return 0;
}
