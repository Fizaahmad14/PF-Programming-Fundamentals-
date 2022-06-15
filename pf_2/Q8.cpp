/* question no. 8
   Fiza Ahmad
   20I-0506 */
	#include<iostream>		
	using namespace std;
	int main()
	{
	cout<<"\n\t*NOTE : VALID ONLY FOR 4 DIGITS*\n";
	int number,a, b, c, d, e, f, g, h, i, j ;//declaring a and initalizing b
	cout<<"\n\t-->Enter 4-digit number (XXXX) = "; cin>>number;//taking input of four digit number;
	
		
	cout<<"\n\t-->REVERSING DIGITS = ";//displaying the reverse  
	//lets consider 1234
	a = number % 10;//this will give 1234 % 10 = 4 
	b = number / 10;//this will give 1234 / 10 = 123
	if(b!=0)
		{
			a*=10;//this will give 4*10 = 40
			c = b % 10;//this will give 123 % 10 = 3
			d = b / 10;//this will give 123 / 10 = 12
				if(d!=0)
					{
						a*=10;//this will give 40 * 10 = 400 
						c*=10;//this will give 3 * 10 = 30
						e = d % 10;//this will give 12 % 10 = 2
						f = d / 10;//this will give 12 / 10 = 1 
						
						  
					}
						if(f!=0)
							{
								a*=10;//this will give 400 * 10 = 4000 
								c*=10;//this will give 30 * 10 = 300  
								e*=10;//this will give 2 * 10 = 20 
								g = f % 10;//this will give 1 % 10 = 1 
								h = f / 10;//this will give 1 / 10 = 0 
						  		
							}
								if(h!=0)//this loop will not begin in this case because h=0
									{
										a*=10; c*=10; e*=10, g*=10;
										i = g % 10;
										j = f / 10;
										//if not equal to 0 then continue,
										//my code is valid for four digits only 
						  		
									}
		}
		cout<<a+c+e+g<<endl;//4000+300+200+1
	
	
		
	return 0;
	}
