// C++ program to make simple calculator
#include<iostream>
using namespace std;
int main(){
	float num1, num2, result;
	int choice;
	
	cout<<endl;
	cout << "\t\t\t\t    +--------------------------------------+    "  << endl;
    cout << "\t\t\t\t    ¦    Welcome to the Simple calculator  ¦    " << endl;
    cout << "\t\t\t\t    +--------------------------------------+    " << endl;
    cout<<endl;
	do{
		cout<<"1. Addition"<<endl;
	    cout<<"2. Subtraction"<<endl;
	    cout<<"3. Multiplication"<<endl;
	    cout<<"4. Division"<<endl;
	    cout<<"5. Exit    "<<endl;
	    cout<<"Enter your choice:";
	    cin>>choice;
	    if(choice>=1&&choice<5)
	    {
	    	cout<<"Enter first operand:";
	    	cin>>num1;
	    	cout<<"Enter second operand:";
	    	cin>>num2;
	    	
		}
		switch(choice)
		{
			case 1:
				result=num1+num2;
				cout<<"Addition of Two numbers are :"<<result;
				break;
			case 2:
				result=num1-num2;
				cout<<"Subtraction of Two numbers are :"<<result;
				break;
			case 3:
				result=num1*num2;
				cout<<"Multiplication of Two numbers are :"<<result;
				break;
			case 4:
				result=num1/num2;
				cout<<"Division of Two numbers are :"<<result;
				break;
			default:
			    cout<<"Exit";				
		}
		cout<<endl<<"-------------------------------------------"<<endl;
		
	}while(choice!=5);
	return 0;
}
