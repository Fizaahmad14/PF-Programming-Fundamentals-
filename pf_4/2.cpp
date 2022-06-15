/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 2*/
	#include<iostream>
	using namespace std;
	int main()
	{
		int count=0, startRange, endRange, sum=0;
		bool yes;
		cout<<"\n Input number for starting range = "; cin>>startRange;//taking inputs from user 
		cout<<" Input number for ending range   = "; cin>>endRange;
		cout<<"\n\n\t\t\t  DISPLAYING";
		cout<<"\n\t\t\tBetween "<<startRange<<"-"<<endRange<<endl<<endl;
		cout<<"\n --> PRIME NUMBERS =";
	
			for(int i=startRange; i<endRange; i++)	//initializing with starting range, will rum till ending range 
				{
					 yes = true;			//starting by assigning true
				 		if( i == 1 || i == 0 )	//as 1 and 0 can never be prime
				 			yes = false; 
								for(int prime=2; prime*prime<=i; prime++)//checking number
									{
										if( i % prime == 0)//if true then not a prime number
											{
												yes = false;
												break;
											}	
									} 
				if(yes == true)		//primes 
					{
						count++;	//increment in count 
						sum+=i;	//calculating sum			
						cout<<" "<<i;	//display a prime number
					}
			
				}
	cout<<"\n __________________________________________________________________________________\n\n";			
	cout<<" --> COUNT OF PRIME NUMBERS = "<<count;	//displaying number of primes 
	cout<<"\n __________________________________________________________________________________\n\n";
	cout<<" --> SUM OF PRIME NUMBERS   = "<<sum;		//displaying sum 
	cout<<"\n __________________________________________________________________________________\n\n";			
	return 0;
	} 
