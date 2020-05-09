#include <iostream>
using namespace std;

void Addnumber(int &ref){
	ref++;
}
void Changesign(int &ref){
	ref*=(-1);
}

int main(void){
	int val1=10;
	Addnumber(val1);
	cout<<"val1: "<<val1<<endl;
	Changesign(val1);
	cout<<"val1: "<<val1<<endl;
	
	return 0;
}
