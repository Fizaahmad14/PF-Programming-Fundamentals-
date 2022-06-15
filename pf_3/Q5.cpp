/* Fiza Ahmad (20I-0506)
   Assignment 3
   Question 5 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num=2,  max=0, min=1000000, even=0, odd=0, pos=0;//declaring and initializing variables
	float sum=0, count=0;
	cout<<"\n\tEnter positive integers (type -1 to stop) \n";
		while(num>-1)
			{
				count++;
				cout<<"\t--> Integer "<<count<<" = ";cin>>num;//taking input from user
				
					if(num>-1)
					{
				
						sum+=num;//it will store sum
						
					if(num>max)
						max=num;//it will srore maximum num.
						
					if(num<min)
						min=num;//it will store minmum num.
						
					if(num%2==0)
						even++;//it will store num of even num. 
					else
						odd++;//it will store num. of odd num.	
						
					if(num>0)
						pos++;//it will store count of positive num.
					}	
			}
			cout<<"\n\t**RESULTS**\n";//displaying all results
			
			cout<<"\n\t==> NO. OF POSTIVE INTEGERS = "<< pos;//count of +ve numbers
			cout<<"\n\t==> NO. OF EVEN INTEGERS    = "<<even;//count of even numbers
			cout<<"\n\t==> NO. OF ODD INTEGERS     = "<< odd;//count of odd numbers
			cout<<"\n\t==> MAXIMUM VALUE           = "<< max;//maximum number
			cout<<"\n\t==> MINIMUM VALUE           = "<< min;//minimum number
			cout<<"\n\t==> AVERAGE VALUE           = "<< sum/count<<endl<<endl;//average value
			
			
	return 0;
	}   
   
