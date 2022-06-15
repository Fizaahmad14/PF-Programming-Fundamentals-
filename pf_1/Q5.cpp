/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
//declaring and initiallizing variables
	int inches,ft,yards,inch;
//taking inches from user 	
	cout<<"\n\tEnter the number of inches = ";cin>>inches; cout<<endl;
	yards=inches/36;
//applying logic for conversion	
	ft=(inches-(yards*36))/12;
	inch=inches-(ft*12)-(yards*36);
//displayong results	
	cout<<"\t"<<inches<<" inches contain \n\n";
	cout<<"\t"<<yards<<" yard, "<<ft<<" feet, "<<inch<<" inch"<<endl<<endl;
	return 0;
	}
