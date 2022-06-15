/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 4 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num, count=0, product=1, rem;
	cout<<"\n\tEnter a number = ";cin>>num;//taking input from user
	int num1=num;
		while(num!=0)//counting digits
			{
				rem=num%10;
				product*=rem;//save product
				num/=10;//spliting a number 
			}
			cout<<"\n\t==> The products of digits of "<<num1<<" = "<<product<<endl<<endl;//displaying product
	return 0;
	}   
   
