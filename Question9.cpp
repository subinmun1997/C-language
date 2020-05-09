#include <iostream>
using namespace std;

int main(void){
	const int num=12;
	const int*ptr=&num;
	const int*(&ref)=ptr;
	const int&ref2=num;
	
	cout<<"num: "<<num<<endl;
	cout<<"num: "<<*ptr<<endl;
	cout<<"num: "<<*ref<<endl;
	
	cout<<"num: "<<ref2<<endl;
//  cout<<"num: "<<*ref2<<endl;
}
