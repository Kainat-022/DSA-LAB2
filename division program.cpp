// division through  pointer
#include<iostream>
using namespace std;
int main(){
	float num1,num2,*p1,*p2,division=0;
	cout<<"division of two number is:"<<endl;
	cin>>num1>>num2;
	
	p1= &num1;
	p2= &num2;
	division= *p1 / *p2;
	cout<<"division is:"<<division<<endl;
	return 0;
}
