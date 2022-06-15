/*FIZA AHMAD (20I-0506)
  ASSIGNMENT 4
  QUESTION 1*/
	#include<iostream>
	#include<iomanip>
	#include<cmath>
	using namespace std;
	int main()
	{
		cout<<"\n\tNOTE : VALID ENTRIES\n\t* FOR UPPER LIMIT ARE [2,4,8,16,32,64,128,256]\n\t* FOR LOWER LIMIT ARE ";
		cout<<"[must be smaller than upper limit and greater than zero]\n";	  //note for valid entries
		
		int  i=0, N, b=2, o=8, U_limit, L_limit ,quotient; string hex=" ";    //declaring and initializing variables
	
		cout<<"\n\t--> Enter Upper Limit = ";cin>>U_limit;			//taking input from user
	
								//this condition will check if user enter valid input or not
		while(U_limit!=2 && U_limit!=4 && U_limit!=8 && U_limit!=16 && U_limit!=32 && U_limit!=64 && U_limit!=128 && U_limit!=256)
		{
			cout<<"\n\t!Invalid Entry!\n\tValid Entries [2,4,8,16,32,64,128,256]\n";	//this will show error message
			cout<<"\n\t--> Enter Upper Limit = ";cin>>U_limit;				//taking input from user
		}
	
		cout<<"\n\t--> Enter Lower Limit = ";cin>>L_limit;					//taking lower limit from user
	
		
		while(L_limit<0 || L_limit>U_limit)	//this will check if lower limit is greater than upper limit or is smaller than zero 
		{
			cout<<"\n\t!Invalid Entry!\n\tValid Entries [smaller than "<<U_limit<<" && greater than 0 ]\n";//this will show error
			cout<<"\n\t--> Enter Lower Limit = ";cin>>L_limit;						//taking input again from user
		}
		
	
		cout<<"\n   --------------------------------------------\n"; 
		cout<<"     DECIMAL      BINARY      OCTAL     HEXA\n"; 
		cout<<"   --------------------------------------------\n"; 
		while(L_limit<=U_limit)
		{
			//declaring and initializing variables
			int sum_b = 0, rem_b = 0, count_b = 0, quotient_b = L_limit , 
			    sum_o = 0, rem_o = 0, count_o = 0, quotient_o = L_limit ,
			    sum_h = 0, r     = 0,              quotient_h = L_limit ;
			                           
			cout<<setw(9)<<right<<L_limit<<"\t";				//displaying in decimal number    
				while(quotient_b != 0)					//loop For binary 
				{
					rem_b = quotient_b % b ;			//it will give reminder
					quotient_b /= b ;				//it will give quotient
					sum_b     += (rem_b * pow(10,count_b)) ;	//it will store sum 
					count_b++;
				}
			cout<<" "<<setfill('0')<<setw(8)<<right<<sum_b;		//it will arrange the output and show binary numbers 
				while(quotient_o != 0)					//loop For Octal
				{
					rem_o = quotient_o % o ;			//it will give reminder
					quotient_o /= o ;				//it will give quotient
					sum_o     += (rem_o * pow(10,count_o)) ;	//it will store sum 
					count_o++;
				}
			cout<<setfill(' ')<<setw(8)<<right<<sum_o;			//it will arrange the output and show octal numbers 
			quotient=1;  hex     =" ";					//initializing  hex with emppty string
				while(quotient>0)
				{
					r = quotient_h%16;				//it will give reminder
					if      (r==0) hex =  '0' + hex; 		//it will add '0' to hex if r is 0
					else if (r==1) hex =  '1' + hex; 		//it will add '1' to hex if r is 1
					else if (r==2) hex =  '2' + hex; 		//it will add '2' to hex if r is 2
					else if (r==3) hex =  '3' + hex;		//it will add '3' to hex if r is 3 
					else if (r==4) hex =  '4' + hex;		//it will add '4' to hex if r is 4 
					else if (r==5) hex =  '5' + hex;		//it will add '5' to hex if r is 5
					else if (r==6) hex =  '6' + hex;		//it will add '6' to hex if r is 6 
					else if (r==7) hex =  '7' + hex;		//it will add '7' to hex if r is 7 
					else if (r==8) hex =  '8' + hex;		//it will add '8' to hex if r is 8 
					else if (r==9) hex =  '9' + hex;		//it will add '9' to hex if r is 9 
					else if(r==10) hex =  'A' + hex;		//it will add 'A' to hex if r is 10 
					else if(r==11) hex =  'B' + hex;		//it will add 'B' to hex if r is 11
					else if(r==12) hex =  'C' + hex;		//it will add 'C' to hex if r is 12 
					else if(r==13) hex =  'D' + hex;		//it will add 'D' to hex if r is 13
					else if(r==14) hex =  'E' + hex;		//it will add 'E' to hex if r is 14
					else if(r==15) hex =  'F' + hex;		//it will add 'F' to hex if r is 15
					quotient_h/=16;				//it will give quotient
					quotient=quotient_h;
				}
		cout<<setw(10)<<right<<hex;		//it will arrange the output and show hexadecimal numbers 		
		cout<<endl;
		L_limit++;				//this will increment in lower limit 	
		}			
		cout<<"   --------------------------------------------\n\n";		
	return 0;
	}   
