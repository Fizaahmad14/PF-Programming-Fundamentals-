/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
//declaring and initiallizing variables
	float i,u=1.234,p=3.334;
	double result;
	cout<<"\n\tPlease Enter the Value of i = ";
//taking i from user
	cin>>i;
//initializing evaluation
	result=(pow((u*pow(i,1.5)*((i*i)-1)),0.5))/((pow((p*i)-2,0.5))+(pow((p*i)-1,0.5)));
//displaying result
	cout<<"\tResult of Evalution = "<<result<<endl<<endl;
	return 0;
}
