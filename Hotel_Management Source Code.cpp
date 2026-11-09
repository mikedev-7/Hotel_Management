#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qmilkshake=0, Qchicken=0;
	//Food Items Sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Smilkshake=0, Schicken=0;
	//Total Price of Items
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_milkshake=0, Total_chicken=0;
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms available"; 
	cin>>Qrooms;
	cout<<"\n Quantity of pasta ";
	cin>>Qpasta; 
	cout<<"\n Quantity of burger ";
	cin>>Qburger;
	cout<<"\n Quantity of noodles ";
	cin>>Qnoodles;
	cout<<"\n Quantity of milkshake ";
	cin>>Qmilkshake;
	cout<<"\n Quantity of chicken_pie ";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the given menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta"; 
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Milkshake";
	cout<<"\n6) Chicken_pie";
	cout<<"\n7) Information regarding sales and stocks ";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please Enter your choice! ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want " ;
			
			cin>>quant;
			if(Qrooms-Srooms >=quant)
			{
				Srooms=Srooms+quant;
				Total_rooms= Total_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you! ";
			}
			else{
				cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
				break;
			}
			
		case 2:
			cout<<"\n\n Enter Pasta Quantity " ;
			
			cin>>quant;
			if(Qpasta-Spasta >=quant)
			{
				Spasta=Spasta+quant;
				Total_pasta= Total_pasta+quant*250;
				cout<<"\n\n\t\t"<<quant<<"pasta is the order! ";
			}
			else{
				cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
				break;
			}
			
		case 3:
			cout<<"\n\n Enter Burger Quantity " ;
			
			cin>>quant;
			if(Qburger-Sburger >=quant)
			{
				Sburger=Sburger+quant;
				Total_burger= Total_burger+quant*50;
				cout<<"\n\n\t\t"<<quant<<"burger is the order! ";
			}
			else{
				cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel";
				break;
			}
			
		case 4:
			cout<<"\n\n Enter Noodles Quantity " ;
			
			cin>>quant;
			if(Qnoodles-Snoodles >=quant)
			{
				Snoodles=Snoodles+quant;
				Total_noodles= Total_noodles+quant*150;
				cout<<"\n\n\t\t"<<quant<<"Noodles is the order! ";
			}
			else{
				cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
				break;
			}
			
		case 5:
			cout<<"\n\n Enter Milkshake Quantity " ;
			
			cin>>quant;
			if(Qmilkshake-Smilkshake >=quant)
			{
				Smilkshake=Smilkshake+quant;
				Total_milkshake= Total_milkshake+quant*250;
				cout<<"\n\n\t\t"<<quant<<"Milkshake is the order! ";
			}
			else{
				cout<<"\n\tOnly"<<Qmilkshake-Smilkshake<<"Milkshake remaining in hotel";
				break;
			}
			
		case 6:
			cout<<"\n\n Enter Chicken_pie Quantity " ;
			
			cin>>quant;
			if(Qchicken-Schicken >=quant)
			{
				Schicken=Schicken+quant;
				Total_chicken= Total_chicken+quant*250;
				cout<<"\n\n\t\t"<<quant<<"Chicken_pie is the order! ";
			}
			else{
				cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken_pie remaining in hotel";
				break;
			}
			
			case 7:
			
			cout<<"\n\t\t Details of sales and collection " ;
			cout<<"\n\n Nummber of rooms we had :  "<<Qrooms;
			cout<<"\n\n Nummber of rooms we gave out for rent :  "<<Srooms;
			cout<<"\n\n Nummber of rooms left :  "<<Qrooms-Srooms;
			cout<<"\n\n Total income collection for the day: "<<Total_rooms;		
		
			cout<<"\n\n Nummber of Pasta we had :  "<<Qpasta;
			cout<<"\n\n Nummber of Pasta sold :  "<<Spasta;
			cout<<"\n\n Nummber of Pasta remaining :  "<<Qpasta-Spasta;
			cout<<"\n\n Total income collection for the day: "<<Total_pasta;
			
			cout<<"\n\n Nummber of burgers we had :  "<<Qburger;
			cout<<"\n\n Nummber of burgers sold:  "<<Sburger;
			cout<<"\n\n Nummber of burgers left :  "<<Qburger-Sburger;
			cout<<"\n\n Total income collection for the day: "<<Total_burger;
			
			cout<<"\n\n Nummber of nooodles we had :  "<<Qnoodles;
			cout<<"\n\n Nummber of burgers sold:  "<<Snoodles;
			cout<<"\n\n Nummber of burgers left :  "<<Qnoodles-Snoodles;
			cout<<"\n\n Total income collection for the day: "<<Total_noodles;
			
			cout<<"\n\n Nummber of milkshakes we had :  "<<Qmilkshake;
			cout<<"\n\n Nummber of milkshakes sold:  "<<Smilkshake;
			cout<<"\n\n Nummber of milkshakes left :  "<<Qmilkshake-Smilkshake;
			cout<<"\n\n Total income collection for the day: "<<Total_milkshake;
			
			cout<<"\n\n Nummber of chicken-pies we had :  "<<Qchicken;
			cout<<"\n\n Nummber of chicken-pies sold:  "<<Schicken;
			cout<<"\n\n Nummber of chicken-pies left :  "<<Qchicken-Schicken;
			cout<<"\n\n Total income collection for the day: "<<Total_chicken;
			
			cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_milkshake+Total_chicken;
			break; 
			case 8:
				exit(0);
				
				default:
					cout<<"\n Please select the numbers mentioned above !";
			
			
	}
	goto m;
	
}