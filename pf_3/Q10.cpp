/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 10 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num1, num2, GCD ,i=1;//declaring variables
	cout<<"\n\t--> 1st number = ";cin>>num1;//taking input from user
	cout<<"\t--> 2nd number = ";cin>>num2;
		while( i <= num1 && i <= num2 )//check condition gor GCD
			{
				if( num1 % i == 0 && num2 % i == 0)
					{
						GCD = i;//if true then i stores in GCD
					}
				i++;//increment i	
			}
		cout<<"\n\t==> Greatest Common Divisor (GCD) = "<<GCD<<endl<<endl;//displaying GCD	
	return 0;
	}   
   
