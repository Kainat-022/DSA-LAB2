//subtraction with pointer
#include<iostream>
using namespace std;
int main(){
	int num1,num2,*p1,*p2,subtract=0;
	cout<<"subtract of two number is:"<<endl;
	cin>>num1>>num2;
	
	p1= &num1;
	p2= &num2;
	subtract= *p1-*p2;
	cout<<"subtract is:"<<subtract<<endl;
	return 0;
}
