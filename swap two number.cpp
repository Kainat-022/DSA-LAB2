#include<iostream>
using namespace std;


	void swap(int*p,int*q){
	
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	
}
int main(){
	int a=5;
	int b=10;
	cout<<"before swaping: a="<<a<<",b="<<b<<endl;
	swap(&a,&b);
	 cout<<" after number is swap: a="<<a<<",b="<<b<<endl;
	 return 0;
}
