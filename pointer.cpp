#include<iostream>

using namespace std;


int main(){
	int higent = 5;
	int *pt = &higent;  //��pt��ʼ���� higent�ĵ�ַ 
	
    cout<<"values of higent : "<<higent<<endl;
    cout<<"address of higent : "<<&higent<<endl;
    cout<<"values of *pt : "<<*pt<<endl ;
    cout<<"values of pt : "<<pt<<endl ;
    
    int *psome = new int[10]; 
    delete []psome;
} 
