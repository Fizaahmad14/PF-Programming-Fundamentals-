/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 3 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int integer, i=1, N;
	float series = 1.2, sum=0, add;
	 cout<<"\n\t--> Enter an Integer (1-98) = ";cin>>integer;//taking input from user
	 N = integer; 
	 	if ( integer > 98 || integer < 1 )//checking for valid input ( 1 - 98 )
	 	
	 		cout<<"\n\tERROR! INVALID INPUT\n\n";
		 else 
		 	{
			 while ( i <= integer )//applying check for terms
				 {
				  	if ( i < 9 ) //logic to implement series
				  		add = 0.1;
				  	else
				  		add = 0.01;	 
				 
				 series = i + ((i + 1) * add);//upgating series
				 sum+=series;//stores sum of series
				 i++;
				 }
			cout<<"\n\t==> SUM OF SERIES UPTO "<<N<<" TERMS = "<<sum<<endl<<endl; //display the final sum  
			}	 
				 
	return 0;
	}   
  
