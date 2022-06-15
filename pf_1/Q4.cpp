/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
//declaring and initiallizing variables
	int days,years,months,day;
//taking days from user 	
	cout<<"\n\tEnter the number of days = ";cin>>days; cout<<endl;
	years=days/365;
//applying logic for conversion	
	months=(days-(years*365))/30;
	day=days-(years*365)-(months*30);
//displayong results	
	cout<<"\t"<<days<<" Days contain \n\n";
	cout<<"\t"<<years<<" YEARS, "<<months<<" MONTHS, "<<day<<" DAYS"<<endl<<endl;
	return 0;
	}
