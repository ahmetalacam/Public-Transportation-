#include <string>
#include <iostream>
#include "Transportation.h"
#include "User.h"
using namespace std;

int main()
{
	Path p1;
	char initial, final;
	User u1;
	
int choice;
		cout<<"***********************************************************************\n\n\n";
        cout<<"               Public Transportation Passenger Page                      \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOG IN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.EXIT"<<endl;
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        u1.login();
                        break;
                case 2:
                        u1.registr();
                        break;
                case 3:
						cout<<"Have a good journey!\n\n";
                        break;
        }
	
	cin>>initial;
	switch(initial)
	{
		case 'A':
			p1.displayA();
			break;
		
		case 'B':
			p1.displayB();
			break;
		
		case 'C':
			p1.displayC();
			break;
		
		case 'D':
			p1.displayD();
			break;
			
		case 'E':
			p1.displayE();
			break;
			
		case 'F':
			p1.displayF();
			break;
			
		case 'G':
			p1.displayG();
			break;
			
		case 'H':
			p1.displayH();
			break;
			
		case 'I':
			p1.displayI();
			break;
			
		case 'J':
			p1.displayJ();
			break;	
			
		default:
			cout<<"Location not exist!\n";
			break;							
	}
	
	cout<<"Enter the final place: ";
	cin>>final;
	switch(final)
	{
		case 'A':
			p1.chooseA();
			break;
			
		case 'B':
			p1.chooseB();
			break;
		
		case 'C':
			p1.chooseC();
			break;
		
		case 'D':
			p1.chooseD();
			break;
			
		case 'E':
			p1.chooseE();
			break;
			
		case 'F':
			p1.chooseF();
			break;
			
		case 'G':
			p1.chooseG();
			break;
			
		case 'H':
			p1.chooseH();
			break;
			
		case 'I':
			p1.chooseI();
			break;
			
		case 'J':
			p1.chooseJ();
			break;	
		
		default:
			cout<<"Location not exist!";					
	}
	
}

