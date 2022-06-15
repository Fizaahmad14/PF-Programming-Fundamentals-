/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 1 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int integer, sum=0, i=0;//decalring variables
	cout<<"\n\t--> Input an integer = ";cin>>integer;//taking inputs from user 
	
			while(sum<=integer)
				{
					i++;//increment 1 
					sum+=i;//checking if number is sum of all n natural numbers or not 
					if (sum==integer)
						{
							cout<<"\n\t==> TRUE! "<<integer<<" is a triangular number.\n\n";//if true returnig true 
							return 0;
						}	
				}
			cout<<"\n\t==> FALSE! "<<integer<<" is NOT a triangular number.\n\n";//if false returning false 	
	
	
	return 0;
	}   
   
