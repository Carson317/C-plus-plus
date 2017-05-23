#include<iostream>
#include "mytime0.h"
// 

int main()
{
	using std::cout;
	using std::endl;
	
	Time planning;
	Time coding(2,40);
	Time fixing(5,55);
	Time total;
	
	cout<< "planning time is : ";
	planning.Show();
	cout<<endl;
	
	cout<< "coding time is : ";
	coding.Show();
	cout<<endl;
	
	cout<< "fixing time is : ";
	fixing.Show();
	cout<<endl;
	
	total = coding.Sum(fixing);
	cout<< "coding.Sum(fixing) time is : ";
	total.Show();
	cout<<endl;
	
	Time morefixing(2,38);
	cout<< "morefixing is : ";
	morefixing.Show();
	cout<<endl;
	
	 
	total = morefixing + total;
	cout<< "morefixing + total is : ";
	total.Show();
	cout<<endl;
	
	return 0;
 } 
