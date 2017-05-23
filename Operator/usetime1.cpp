#include<iostream>
#include "mytime1.h"

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
	
	total = coding + fixing;
	cout<< "coding + fixing time is : ";
	total.Show();
	cout<<endl;
	
	return 0;
 } 
