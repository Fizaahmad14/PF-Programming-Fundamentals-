/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 2*/
#include <iostream>
using namespace std;
	bool isHappyNumber(int num) //stating function's prototype
	
	{
		int r,n, f=0;	//initiallizing and declaring variables
		for(int i=1; i<=100; i++)	//this loop will check input till 100 cycles
		{
			while (num>0)	//this loop will run till num>0
			{
				r = num%10;	//this will give remainder e.g 19%10 = 9
				f = f + (r*r);	//this will add square of remainder 9*9 = 81
				n = f;		//this will assign f to n e.g 81 = n
				num/=10;	//this will exclude the last digit of num e.g 19/10=1
			}
		if(f==1)	//this will check that if f==1 e.g 1+0+0 = 1
		return 1;	//this will return 1 if condition will true
		f=0;		//this will assign 0 to f
		num = n;	//this will assign n to num e.g 81 = num
		}
	return 0;	
	}
int main()
{
	int num;
	cout<<"\n\n\tLET'S CHECK : Wether number is Happy :) or Sad :(\n\n";	//displaying title
	cout<<"\t* Enter Number = ";cin>>num;	//asking user to enter a number 
	cout<<"\n\tOUTPUT\n\n";
	if(isHappyNumber(num) == 1)	//if function returns 1 then it will print number is a happy number 
	cout<<"\t--> "<<num<<" is a Happy Number\n\n";
	else				//if function returns 0 then it will print number is a sad number 
	cout<<"\t--> "<<num<<" is a Sad Number\n\n";

return 0;
}	
