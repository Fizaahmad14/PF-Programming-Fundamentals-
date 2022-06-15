/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 2 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
	int num, count=0, sum=0, rem;
	cout<<"\n\tEnter a number = ";cin>>num;
	int num1=num;
		while(num!=0)//counting digits
			{
				num/=10;//spliting a number 
				count++;
			}
		int num2=num1;
		while(num1!=0)//applying logic for checking amstrong
			{
				rem=num1%10;
				sum+=pow(rem,count);
				num1/=10;
			}
			//returning true and false
			(sum==num2)? cout<<"\n\t==> TRUE! Entered number "<<num2<<" is an Armstrong Number\n\n" : 
					cout<<"\n\t==> FALSE! Entered number "<<num2<<" is not an Armstrong Number\n\n" ;
	return 0;		
	}   
   
