/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 2*/
#include <iostream>
using namespace std;
	bool reduce(int &num, int &denom)	//stating function's prototype
	{
		if(num==0 || denom==0)	//checking if num or denom is zero, then return 0
		return 0;
		int r;	//declaring variables
		r     =  num%denom;	//it will take % between num and senom
		num   =  num/r;	//it will divide num by its remainder
		denom =  denom / r;	//it will divide denom by its remainder
	return 1;
	}
int main()
{
	int n,d,r;	//declaring variables
	cout<<"\n\tEnter numerator   = ";cin>>n;	//Asking user to enter numerator
	cout<<"\tEnter denomerator = ";cin>>d;	//Asking user to enter denomerator
	cout<<"\n\t*UPDATED VALUES*\n\n";	//displaying updated values
	int &num = n, &denom = d;	//assigning n and d to num and denom by reference 
	reduce(num,denom);	//calling Function 
	if(reduce(num,denom)==1 || reduce(num,denom)==0)	//if function's value is 1 or 0 then print num,denom
	{
	cout<<"\t--> Numerator   = "<<num<<endl;	//displaying numerator
	cout<<"\t--> Denomerator = "<<denom<<endl<<endl;//displaying denomerator
	}
return 0;
}	
