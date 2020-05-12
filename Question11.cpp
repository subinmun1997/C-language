#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	char *str1 = "ABC 123";
	char *str2 = "DEF 456";
	char str3[50];
	
	cout<<"str1 len: "<<strlen(str1)<<endl;
	cout<<"str2 len: "<<strlen(str2)<<endl;
	strcpy(str3,str1);
	strcat(str3,str2);
	cout<<"str3: "<<str3<<endl;
	
	if(strcmp(str1,str2) == 0){
		cout<<"같다."<<endl;
	}
	else{
		cout<<"다르다."<<endl;
	}
	
	return 0;
}
