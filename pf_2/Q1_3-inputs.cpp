/* question no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	int num1 , num2 , num3 ;//declaring variables
	cout<<"\n\tEnter 1st number =  ";cin>>num1;//taking inputs from user
	cout<<"\tEnter 2nd number =  ";cin>>num2;
	cout<<"\tEnter 3rd number =  ";cin>>num3;
	cout<<"\n\tRESULT";
	
	//applying ternary logic
	( num1 > num2 ) ? 
		( ( num1 > num3 ) ?
			cout<<"\n\t--> 1st number "<<num1<<" is largest\n"<<endl : //if n1 is greatest
				cout<<"\n\t--> 3rd number "<<num3<<" is largest\n"<<endl) : //if n3 is greatest
		
		( ( num2 > num3 ) ? 
			cout<<"\n\t--> 2nd number "<<num2<<" is largest\n"<<endl : //if n2 is greatest
				cout<<"\n\t--> 3rd number "<<num3<<" is largest\n"<<endl);//if  n3 is greatest
	return 0;
	}
