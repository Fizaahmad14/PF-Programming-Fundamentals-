/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 4*/
#include <iostream>
#include <iomanip>
using namespace std;
	double evaluatePolynomial()	//stating function's prototype
	{
		double x, p, coef, polynomial=0, power=1,one=1;	//initiallizing and declaring variables
		cout<<"\n\tEnter the following\n\n";
		cout<<"\t* Value of x        = ";cin>>x;	//asking user for value of x
		cout<<"\t* Highest power (n) = ";cin>>p;	//asking user for highest power
		if(p<0)	//condition to check error that if p<0
		{
			cout<<"\n\t!Error : power must be greater than equals to ";//error if p<0
			return 0;	//returning 0 on error
		}
			cout<<"\t* Enter "<<p+1<<" Coeffecients \n\n";
			for(double i=p+1; i>0; i--)	//this loop will store polynomials according to iterations
			{
				cout<<"\t--> C"<<one<<" = ";cin>>coef;	//taking requires number of coeffecients from user
				for(double j=0; j<i-1; j++)	//loop to store power of x
				power*=x;	//this will save the product e.g 4*4*4 according to loop condition
				polynomial=polynomial+(coef*power);	//applying logic to safe polynomial
				power=1;	//initializing power to one 
				one++;		//increment in one to display coeffecients
			}
	cout<<"\n\tPOLYNOMIAL = ";	
	return polynomial;	//this will return polynomial
	}
int main()
{
	cout<<setprecision(10)<<evaluatePolynomial()<<endl<<endl;//this will give required polynomial
return 0;
}	
