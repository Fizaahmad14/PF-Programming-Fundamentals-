/* question no. 4
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int month,day;
	cout<<"\n\t[1 for Januaury, 2 for Febraury, 3 for March and so on...]\n";//display for months
	cout<<"\t__________________________________________________________\n";
	cout<<"\n\tEnter number of Month (1-12) : ";cin>>month;//taking number of month from user
	cout<<"\n\tEnter the day of month (1-31) : ";cin>>day;//taking number of days from user


	if( (month>0 && month<13) && (day>0 && day<32) )//valid days
	 	{	
		
	cout<<"\n\tDATE : "<<month<<"/"<<day<<endl;//displayong date
		
		if( (month==12 && day>15) || (month==3 && day<16) || (month<3) )//checking for winters	
			{
				cout<<"\n\tSEASON FOR '"<<month<<"/"<<day<<"' : *WINTER*\n\n";
			}
			else if( (month==3 && day>15) || (month==6 && day<16) || (month>3 && month<6) )//checking for spring	
				{
					cout<<"\n\tSEASON FOR '"<<month<<"/"<<day<<"' : *SPRING*\n\n";
				}
				else if( (month==6 && day>15) || (month==9 && day<16) || (month>6 && month<9) )//checking for summer	
					{
					cout<<"\n\tSEASON FOR '"<<month<<"/"<<day<<"' : *SUMMER*\n\n";
					}
						else
							cout<<"\n\tSEASON FOR '"<<month<<"/"<<day<<"' : *FALL*\n\n";//checking for Fall
		}
	else
		cout<<"\n\tERROR! WRONG INPUT!\n\n";//displaying error		
	return 0;
	}
