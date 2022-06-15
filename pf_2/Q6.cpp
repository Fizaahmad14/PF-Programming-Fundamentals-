/* question no. 6
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	cout<<"\t _____________________________________\n";//displaying policy for university
	cout<<"\t|         RULES OF UNIVERSITY         |\n";
	cout<<"\t|_____________________________________|\n";
	cout<<"\t|     A      |   B    |    RESULT     |\n";
	cout<<"\t|____________|________|_______________|\n";
	cout<<"\t|   >=55     |  >=45  |     PASS      |\n";
	cout<<"\t| >=45 & <55 |  >55   |     PASS      |\n";
	cout<<"\t|   >=65     |  <45   | REAPPEAR IN B |\n";
	cout<<"\t|____________|________|_______________|\n";
	int A ,B ;
	cout<<"\n\tEnter your percentages for A and B\n";
	cout<<"\t--> A = "; cin>>A;//taking grades from user
	cout<<"\t--> B = "; cin>>B;
	cout<<"\n\tAccording to university policy : \n";
	cout<<"\t--> YOU ARE";
	if(A>=55 && B>=45)//for pass
		{
			cout<<" PASS\n\n";	
		}
		else if((A>=45 && A<55) && B>=55)//for pass
			{
				cout<<" PASS\n\n";	
			}
			else if(A>=65 && B<45)//to reappear in B
				{
					cout<<" TO REAPPEAR IN B\n\n";	
				}
				else//otherwise fail
					{
						cout<<" FAIL\n\n";
					}				
	return 0;
	}
