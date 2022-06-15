/* question no. 2
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	char character;//declare variables  
	int year;
	//taking a character from user
	cout<<"\n\tEnter a character : ";cin>>character;
	
	( character>=97 && character<=122 )? //ASCII check for lowercase 
		cout<<"\tEntered character '"<<character<<"' is Lowercase.\n" :
			cout<<"\tEntered character '"<<character<<"' is not Lowercase.\n";
	
	//taking a symbol from user
	cout<<"\n\tEnter a symbol : ";cin>>character;
	
	( (character>=97 && character<=122) || (character>=65 && character<=90) || (character>='0' && character<='9') )? //ASCII check for special ch
		cout<<"\tEntered symbol '"<<character<<"' is not a special symbol.\n":
			cout<<"\tEntered symbol '"<<character<<"' is a special symbol.\n";	
			
	//taking a year from user
	cout<<"\n\tEnter a year : ";cin>>year;
	
	( year % 4 == 0 )?(( year % 100 == 0 )?(( year % 400 == 0 )? //ternary for leap year, taking %4, then %100, then %400
		cout<<"\tEntered year '"<<year<<"' is a leap year.\n\n" : 
			cout<<"\tEntered year '"<<year<<"' is not a leap year.\n\n"):
				cout<<"\tEntered year is '"<<year<<"' a leap year.\n\n"): 
					cout<<"\tEntered year is '"<<year<<"' not a leap year.\n\n";
						
	return 0;
	}
