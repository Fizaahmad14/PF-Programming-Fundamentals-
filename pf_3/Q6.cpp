/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 6 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num , prime=2;//declaring variables
	cout<<"\n\t--> Enter an integer = "; cin>>num;//taking input
		if(num==0||num==1)
			{
				cout<<"\n\t==> "<<num<<" is NOT a prime number\n\n";//as 1 and 0 are never prime
			}
		else 
			{
				while(prime<=num/2)//checking number
					{
						++prime;//increment prime
						if( num % prime == 0 )//if true then not a prime number
							{
								cout<<"\n\t==> "<<num<<" is NOT a prime number\n\n";
								return 0;
							}	
					} 
			cout<<"\n\t==> "<<num<<" is a prime number\n\n";//display a prime number
			}
		
	return 0;
	}   
   
