/* Assignmemt no 2
   question no. 1, 4 inputs
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num1 , num2 , num3 , num4 , maximum ;//declaring variables
	cout<<"\n\tEnter 1st number =  ";cin>>num1;//taking numbers from user
	cout<<"\tEnter 2nd number =  ";cin>>num2;
	cout<<"\tEnter 3rd number =  ";cin>>num3;
	cout<<"\tEnter 4th number =  ";cin>>num4;
	cout<<"\n\tRESULT";
	
	//applying ternary logic
	
	maximum =
		( num1 > num2 && num1 > num3 && num1 > num4 ) ? num1 ://checking if n1 is max
				(	( num2 > num3 && num2 > num4 ) ? num2 : //checking if n2 is max
					(	( num3 > num4 ) ? num3 : num4 )	);//checking if n3 or n4 is max
			
		
	cout<<"\n\n\t--> MAXIMUM NUMBER AMONG FOUR DIGITS =  "<<maximum<<endl<<endl; // printing maximum
	
	return 0;
	}
