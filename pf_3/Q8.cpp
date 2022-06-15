/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 8 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
	int  i=0, N, b;
	
	cout<<"\n\t--> Enter a number of terms N = ";cin>>N;//taking input from user
	cout<<"\t--> Enter a base              = ";cin>>b;//taking base from user 
	cout<<"\n\t==> The First "<<N<<" numbers in base "<<b<<" are = ";
	
	while(i<N)
		{
			i++;
			int sum = 0, rem = 0, count = 0, quotient = i  ;
			while(quotient != 0)
				{
					rem = quotient % b ;
					quotient /= b ;
					sum     += (rem * pow(10,count)) ;//it will store sum 
					count++;
					 // it will display sum
				}
		cout<<"   "<<sum;
		}	
		cout<<endl<<endl;		
	return 0;
	}   
   
