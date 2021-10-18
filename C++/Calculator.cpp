#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"enter two numbers:"<<endl;
	cin>>n1;
	cin>>n2;
	
	char op;
	cout<<"enter operand:"<<endl;
	cin>>op;
	
	switch(op){
		case '+':
			cout<<n1+n2<<endl;
			break;
		case '-':
			cout<<n1-n2<<endl;
			break;
		case '*':
			cout<<n1*n2<<endl;
			break;
		case '/':	
		                    cout<<n1/n2<<endl;
		                    break;
		default :
		                    cout<<"operator not found"<<endl;
			break;                
	}
}
