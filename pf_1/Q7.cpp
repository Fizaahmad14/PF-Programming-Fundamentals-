/* Assignment no. 1
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	{
	int amount,fiveHundred,hundred,fifty,twenty,ten,five,one;//declaring variables
	
	cout<<"\n\tEnter Amount in rupees between range (100-100000) = ";cin>>amount;//taking input from users 
	
	fiveHundred=amount/500;//it will give number of notes of 500
	
	hundred=(amount-(fiveHundred*500))/100;//it will give number of notes of 100
	
	fifty=(amount-(fiveHundred*500)-(hundred*100))/50;//it will give number of notes of 50
	
	twenty=(amount-(fiveHundred*500)-(hundred*100)-(fifty*50))/20;//it will give number of notes of 20
	
	ten=(amount-(fiveHundred*500)-(hundred*100)-(fifty*50)-(twenty*20))/10;//it will give number of notes of 10
	
	five=(amount-(fiveHundred*500)-(hundred*100)-(fifty*50)-(twenty*20)-(ten*10))/5;//it will give number of notes of 5
	
	one=(amount-(fiveHundred*500)-(hundred*100)-(fifty*50)-(twenty*20)-(ten*10)-(five*5));//it will give number of notes of 1
	
	cout<<"\n\tCurrency Note  :  Number"<<endl;//displaying results
	cout<<"\t500            :  "<<fiveHundred<<" notes"<<endl;
	cout<<"\t100            :  "<<hundred<<" notes"<<endl;
	cout<<"\t50             :  "<<fifty<<" notes"<<endl;
	cout<<"\t20             :  "<<twenty<<" notes"<<endl;
	cout<<"\t10             :  "<<ten<<" notes"<<endl;
	cout<<"\t5              :  "<<five<<" notes"<<endl;
	cout<<"\t1              :  "<<one<<" notes\n"<<endl;
	return 0;
	}
	
