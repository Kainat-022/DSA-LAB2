//array in reverse order
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"enter the size of array:";
	cin>>size;
	
	
	int *arr=new int[size];
	cout<<" enter "<<size<<" integers:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
		
	cout<<" array in reverse order:"<<endl;
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<< " ";
	}
	delete[] arr;
	return 0;
}
