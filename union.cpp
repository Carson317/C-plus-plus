#include<iostream>

using namespace std;

union one4all
{
    int int_val;
    long long_val;
    double double_val;
};

int main(){
	one4all pail;
	cout<<"int: "<<pail.int_val<<endl ;
	cout<<"double: "<<pail.double_val<<endl;
    pail.int_val = 13;         //store int value
    cout<<pail.int_val<<endl ;
    pail.double_val= 16.35;     //store double value, lost int value;
    cout<<pail.double_val<<endl;
    cout<<pail.int_val ;
} 
