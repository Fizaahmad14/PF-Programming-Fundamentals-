/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 7 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num, firstDigit , lastDigit, n=0, sum ;
	cout<<"\n\tEnter a number = ";cin>>num;//taking inputs from user
	n = num ;
	lastDigit = num % 10;//obtaining last digit 
		while(num>=10)//check to obtain first digit
			{
				num/=10;
				firstDigit = num;//storing first digit
			}
				sum = firstDigit + lastDigit;
				cout<<"\n\t--> First Digit of "<<n<<" = "<<firstDigit;//display 1st
				cout<<"\n\t--> Last Digit of "<<n<<"  = "<<lastDigit;//display 2nd
				
			cout<<"\n\n\t==> Sum of both ( "<<firstDigit<<" + "<<lastDigit<<" ) = "<<firstDigit+lastDigit<<endl<<endl;//display sum
	return 0;
	}   
   
