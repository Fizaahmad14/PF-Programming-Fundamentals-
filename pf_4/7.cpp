/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 6*/
	#include<iostream>
	#include<iomanip>
	#include<math.h>
	using namespace std;
	int main()
	{
		int count=0;//declaring and initializing count and range
		int range;
		cout<<"\n\tEnter range for all sides : ";cin>>range;//taking range from user
	
		cout<<"\n\t a\t  b\t  c";//side 1, side 2, side 3
		cout<<"\n\t|-------------------|\n";//display for arrangement
		
		for(int a = 1; a<=range; a++)//loop for side 1
		{
			for(int b = 1; b<=range; b++)//loop fo side 2
			{
				for(int c = 1; c<=range; c++)//loop for side 3
				{
					if(pow(a,2) + pow(b,2) == pow(c,2) && c<=range)//check for pythagorean triangles
						{
						cout<<setw(10)<<right<<a<<setw(9)<<right<<b<<setw(9)<<right<<c<<endl;
						count++;//this will count all pythagorean triangles  
						}
				}
			}	
		}	
	cout<<"\t|-------------------|\n";
	cout<<"\n\t--> RESULT : A total of "<<count<<" pythagorean triples were found in Range "<<range<<endl<<endl;//this will display result	
	return 0;
	}
	
	
