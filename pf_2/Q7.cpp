/* question no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	cout<<"\n";//displaying rules
	cout<<"\t _____________________________________________________________________ \n";
	cout<<"\t|                     RULES OF INSURANCE COMPANY                      |\n";
	cout<<"\t|                      [TO CALCULATE PREMIUM]                         |\n";
	cout<<"\t|_____________________________________________________________________|\n";
	cout<<"\t|   HEALTH  |  GENDER   |   AREA   |  AGE  |  PREMIUM  | MAX. AMOUNT  |\n";
	cout<<"\t|___________|___________|__________|_______|___________|______________|\n";
	cout<<"\t|           |           |          |       |           |              |\n";
	cout<<"\t| Excellent |  Male(M)  |   City   | 25-35 | 4rs/thous |   200,000    |\n";
	cout<<"\t| Excellent | Female(F) |   City   | 25-35 | 3rs/thous |   100,000    |\n";
	cout<<"\t|    Poor   |  Male(M)  |  Village | 25-35 | 6rs/thous |   10,000     |\n";
	cout<<"\t|___________|___________|__________|_______|___________|______________|\n";
		
	char health, gender,area ;//declaring variables for input
	int age;
	
	cout<<"\n\tFill the given form below\n\n";
	cout<<"\t--> HEALTH ('e' for excellent, 'p' for poor)      : "; cin>>health;//taking health from user
	cout<<"\t--> GENDER ('m' for Male,      'f' for female)    : "; cin>>gender;//taking gender from user
	cout<<"\t--> AREA   ('c' for city,      'v' for village)   : "; cin>>area;//taking area from user
	cout<<"\t--> AGE                                           : "; cin>>age;//taking age from user
	
	cout<<"\n\t*FINAL REPORT*\n";//displaying the results
	
	if( (health == 'e'|| health == 'E') && (gender == 'm'|| gender == 'M')//check for 4rs/thous premium  
	  &&(area   == 'c'|| area   == 'C') && (age    >= 25 || age    <= 35 ))//check for 2 lac max.amount 
		{
		cout<<"\n\t--> ELIGIBLE FOR INSURANCE\n\t--> PREMIUM     = 4rs/thous\n\t--> MAX. AMOUNT = 2 lacs\n\n";	
		}
		
	else if( (health == 'e'|| health == 'E') && (gender == 'f'|| gender == 'F')//check for 3rs/thous premium  
	       &&(area   == 'c'|| area   == 'C') && (age    >= 25 || age    <= 35 ))//check for 1 lac max.amount 
		{
		cout<<"\n\t--> ELIGIBLE FOR INSURANCE\n\t--> PREMIUM     = 3rs/thous\n\t--> MAX. AMOUNT = 1 lac\n\n";	
		}
		
	else if( (health == 'p'|| health == 'P') && (gender == 'm'|| gender == 'M')//check for 6rs/thous premium  
	       &&(area   == 'v'|| area   == 'V') && (age    >= 25 || age    <= 35 ))//check for 10,000 max.amount 
		{
		cout<<"\n\t--> ELIGIBLE FOR INSURANCE\n\t--> PREMIUM     = 6rs/thous\n\t--> MAX. AMOUNT = 10,000\n\n";	
		}
	else
		cout<<"\n\t--> NOT ELIGIBLE FOR INSURANCE\n\n";//if not eligible		
		
	return 0;
	}
