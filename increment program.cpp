//increment trhe number through pointer
#include<iostream>
using namespace std;
int main(){
	int number=10;
	int* ptr =&number;
	cout<<"original number is:"<<number<<endl;
	(*ptr)++;
	cout<<"increment number:"<<number<<endl;


	return 0;	
}
