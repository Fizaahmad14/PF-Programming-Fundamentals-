/* Assignment 2
   question no. 3
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<iomanip>
	using namespace std;
	int main()
	{
		cout<<"\n";//displaying rules
	cout<<"\t ___________________________ \n";
	cout<<"\t|    DISTANCE AND COST      |\n";
	cout<<"\t|           CHART           |\n";
	cout<<"\t|___________________________|\n";
	cout<<"\t|   DISTANCE   |   COST     |\n";
	cout<<"\t|______________|____________|\n";
	cout<<"\t|              |            |\n";
	cout<<"\t| >=0  - <=100 |    5.00    |\n";
	cout<<"\t| >100 - <=500 |    8.00    |\n";
	cout<<"\t| >500 - <1000 |   10.000   |\n";
	cout<<"\t|   >=1000     |   12.000   |\n";
	cout<<"\t|______________|____________|\n";
	
	int distance;//declaring variables
	double cost;
	
	cout<<"\n\t--> DISTANCE = ";cin>>distance;//taking distance
	cout<<"\t--> COST = ";//taking cost
	
	if( (distance>=0) && (distance<=100))
		{
			cost=5.00;//fixing till two decimal  places to display 8.00
			cout<<fixed<<setprecision(2)<<cost<<endl<<endl;
		}
			else if( (distance>100) && (distance<=500))
				{
					cost=8.00;//fixing till two decimal  places to display 8.00
					cout<<fixed<<setprecision(2)<<cost<<endl<<endl;
				}
				else if( (distance>500) && (distance<1000))
					{
						cost=10.00;//fixing till two decimal  places to display 10.00
						cout<<fixed<<setprecision(2)<<cost<<endl<<endl;
					}
					else if( (distance>=1000) )
							{
								cost=12.00;//fixing till two decimal  places to display 12.00
								cout<<fixed<<setprecision(2)<<cost<<endl<<endl;
							}
								else //displaying default
									{
										cout<<" WRONG INPUT "<<endl<<endl;
									}
	return 0;
	}
