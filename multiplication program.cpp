//multiplication through pointer
#include<iostream>
using namespace std;
int main(){
	int num1,num2,*p1,*p2,multiplication=0;
	cout<<"multiplication  of two number is:"<<endl;
	cin>>num1>>num2;
	
	p1= &num1;
	p2= &num2;
	multiplication= *p1  * *p2;
	cout<<"multiplication is:"<<multiplication<<endl;
	return 0;
}
