/* question no. 5
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	cout<<"\n\tPRIMARY COLORS\n";
	cout<<"\t['r' for RED, 'b' for BLUE, 'y' for YELLOW]\n";//display for colors
	cout<<"\t___________________________________________\n";
	
	char color1,color2;//declaring variables for taking colors
	int purple = 1,orange = 2,green = 3,color;//for switch structure
	
	cout<<"\n\tMix two primary colors\n\n";
	cout<<"\t ________________________________\n";//displaying policy for university
	cout<<"\t|  BY MIXING TWO PRIMARY COLORS  |\n";
	cout<<"\t|  SECONDARY COLORS ARE FORMED   |\n";
	cout<<"\t|________________________________|\n";
	cout<<"\t|     MIXING    |     COLOR      |\n";
	cout<<"\t|_______________|________________|\n";
	cout<<"\t|  'r'  |  'b'  |    purple      |\n";
	cout<<"\t|  'r'  |  'y'  |    orange      |\n";
	cout<<"\t|  'b'  |  'y'  |    green       |\n";
	cout<<"\t|_______|_______|________________|\n";
	
	cout<<"\n\t--> Letter for color 1 : ";cin>>color1;//taking colors from user
	cout<<"\t--> Letter for color 2 : "  ;cin>>color2;
	
	switch( ( ( ( color1!='r' && color1!='R' ) && ( color1!='b' && color1!='B') && (color1!='y' && color1!='Y') ) 
	||    ( ( color2!='r' && color2!='R' ) && ( color2!='b' && color2!='B') && (color2!='y' && color2!='Y') ) ) )
		{
			case 1: cout<<"\n\tERROR! WRONG INPUT!\n\n";//displaying error
		}
		
		
	switch ( ( ( ( ( color1=='r'|| color1=='R' ) && ( color2=='b' || color2=='B' ) ) 
	||           ( ( color1=='b'|| color1=='B' ) && ( color2=='r' || color2=='R' ) ) ) ? purple : 0 ) |//logic for purple
	    
	       ( ( ( ( color1=='r' || color1=='R' ) && ( color2=='y' || color2=='Y' ) ) 
	||         ( ( color1=='y' || color1=='Y' ) && ( color2=='r' || color2=='R' ) ) ) ? orange : 0 ) |//logic for orange 
	
	       ( ( ( ( color1=='y' || color1=='Y' ) && ( color2=='b' || color2=='B' ) ) 
	||         ( ( color1=='b' || color1=='B' ) && ( color2=='y' || color2=='Y' ) ) ) ? green : 0 ) )//logic for green 
		{
			case 1 : cout<<"\tBy mixing 'r' and 'b' you got\n\n\t-->PURPLE\n\n";//case for purple
			break;
			
			case 2 : cout<<"\tBy mixing 'r' and 'y' you got\n\n\t-->ORANGE\n\n";//case for orange	
			break;
			
			case 3 : cout<<"\tBy mixing 'b' and 'y' you got\n\n\t-->GREEN\n\n";//case for green
			break; 
			
		}
			
	return 0;
	}
	
