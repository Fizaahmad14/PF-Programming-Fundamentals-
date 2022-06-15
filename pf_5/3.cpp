/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 3*/
#include <iostream>
using namespace std;
	void maxFrequencyOfNumber(int num,int &digit,int &maxFreq)	//stating function's prototype
	{
		int rem ;	//declaring variables
		for(int i=0; i<10; i++)	//this loop will check freq with 1,2,3,4,5,6,7,8,9,0
		{
			int Freq=0;	//initiallizing and declaring variables
			int j=num;	//intiallizing j with num
				while(j>0)	//this loop will continue till j>0
				{
					rem = j%10;	//it will save remainder
					if(rem==i)	//if remainder equals to 1 it will add 1 in freq 
					{
						Freq++;	//incrementing in freq
					}
				j/=10;	//it will divide j by 10	
				}
					if(Freq>maxFreq)	//if freq>maxfreq then freq will store in maxFreq
					maxFreq = Freq;	//it will store max number
					if(Freq==maxFreq)	//
					digit=i;
		}
	}
int main()
{
	int mF=0,d=0,num; //initiallizing and declaring variables
	cout<<"\n\tEnter a number to find maximum frequency = ";cin>>num;	//asking user to enter number 
	int &maxFreq = mF, &digit = d;
	cout<<"\n\tOUTPUT\n";
	maxFrequencyOfNumber(num,digit,maxFreq);	//calling function
	cout<<"\n\t* Digit         = "<<digit;	//displaying digit
	cout<<"\n\t* Max Frequency = "<<maxFreq<<endl;//displaying maxFreq
	cout<<"\t--> "<<digit<<" occurs "<<maxFreq<<" times."<<endl<<endl;//displaying final result
return 0;
}	



