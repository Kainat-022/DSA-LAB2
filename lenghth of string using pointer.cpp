//lenght of string using pointer
#include <iostream>
using namespace std;
#define MAX_SIZE 100 // Maximum size of the string
using namespace std;
 
int main() {
 
    char text[MAX_SIZE];
    char * str = text;
    int count = 0;
 
    
    cout<<"Enter any string: ";
    cin>>text;
 
    
    while(*(str++) != '\0') count++;
 
    cout<<"Length of "<<text<<" is "<<count;
 
    return 0;
}
