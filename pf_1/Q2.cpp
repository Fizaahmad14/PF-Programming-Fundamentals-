/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
//declaring and initializing variables	
	int hourlyWage,hours,netPayment;
	float tax;
//taking hourly wage, hours and tax from user	
	cout<<"\n\tTO CALCULATE NET PAYMENT\n\n";
	cout<<"\t--> Enter Hourly wage = ";cin>>hourlyWage;
	cout<<"\t--> Enter Number of hours = ";cin>>hours;
	cout<<"\t--> Enter witholding tax = ";cin>>tax;
//generating logic	
	netPayment=(hourlyWage*hours)-(hourlyWage*hours*(tax/100));
//displaying result	
	cout<<"\n\tNET PAYMENT = "<<netPayment<<endl<<endl;
	return 0;
	}
