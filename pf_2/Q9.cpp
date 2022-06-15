/* question no. 9
   Fiza Ahmad
   20I-0506 */
	#include<iostream>
	using namespace std;
	int main()
	{
	cout<<"\n";//displaying rules
	cout<<"\t _________________________________________________________ \n";
	cout<<"\t|                     REQUIRMENTS OF                      |\n";
	cout<<"\t|                      GRADED STEEL                       |\n";
	cout<<"\t|_________________________________________________________|\n";
	cout<<"\t|   HARDNESS  |  CARBON   |   TESILE STRENGHT   |  GRADE  |\n";
	cout<<"\t|_____>50_____|___<0.7____|________>5600________|_________|\n";
	cout<<"\t|             |           |                     |         |\n";
	cout<<"\t|     ---     |    ---    |         ---         |   10    |\n";
	cout<<"\t|     ---     |    ---    |                     |   09    |\n";
	cout<<"\t|             |    ---    |         ---         |   08    |\n";
	cout<<"\t|     ---     |           |         ---         |   07    |\n";
	cout<<"\t|             |    ---    |                     |   06    |\n";
	cout<<"\t|             |           |                     |   05    |\n";
	cout<<"\t|_____________|___________|_____________________|_________|\n";
	
	double hardness, carbon, tensile;
	cout<<"\n\t--> HARDNESS           = "; cin>>hardness;//taking health from user
	cout<<"\t--> CARBON CONENT      = "; cin>>carbon;//taking gender from user
	cout<<"\t--> TENSILE STRENGHT   = "; cin>>tensile;//taking area from user
		
	if     (hardness>50 && carbon<0.7 && tensile>5600)
		{
		 	cout<<"\n\tGRADE OF STEEL IS = 10\n\n";
		}
	else if(hardness>50 && carbon<0.7 && tensile<5600)
		{
		 	cout<<"\n\tGRADE OF STEEL IS = 09\n\n";
		}
	else if(hardness<51 && carbon<0.7 && tensile>5600)
		{
		 	cout<<"\n\tGRADE OF STEEL IS = 08\n\n";
		}
	else if(hardness>50 && carbon>0.7 && tensile>5600)
		{
		 	cout<<"\n\tGRADE OF STEEL IS = 07\n\n";
		}
	else if(hardness>50 || carbon<0.7 || tensile>5600)
		{
		 	cout<<"\n\tGRADE OF STEEL IS = 06\n\n";
		}	
	else
		{
		 	cout<<"\n\tGRADE OF STEEL IS = 05\n\n";
		}						
	return 0;
	}
