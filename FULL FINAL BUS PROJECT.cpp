#include <iostream>
#include <string>
#include<fstream>
using namespace std;
void printSeats();
void reserveSeat();
int reserved_seats;
 int seats[20];
int main()
{
	int route;
	
	string select;
    string username, password;
    loop :
    	
    cout<<"...................BUS RESERVATION SYSTEM......................."<<endl<<endl;
    cout<<endl;
    cout << "Enter username: (hint: admin)"<<endl;
    cin >> username;
    cout << "Enter password: (hint: password)"<<endl;
    cin >> password;

    if (username == "admin" && password == "password")
    {
        cout << "   " << endl;
    }
    else
    { cout<<endl;
        cout << " Please Try Again" << endl;
        goto loop;
    }
    looop :
    system("cls");
    cout<<"...................BUS RESERVATION SYSTEM......................."<<endl<<endl;
    cout<<" ..................Routes.................. "<<endl;
    
    string Routes[3]={"Lahore to Kasur", "Lahore to Islamabad", "Lahore to Murree"};
    int ind=1;
    for(int i=0; i<3; i++)
    {
    	cout<<ind<<"."<<Routes[i]<<endl;
    	ind++;
	}
	cout<<endl;
	
	cout<<" Enter Route Number : ";
	cin>>route;
	system("cls");
	if(route==1)
	
	
	{cout<<"...................BUS RESERVATION SYSTEM......................."<<endl<<endl;
		
	cout<<"------------------BUS DETAILS-------------------"<<endl<<endl;
	cout<<"Bus number: LEJ-7432"<<endl;
	cout<<"Driver name: Junaid"<<endl;
	cout<<"Driver contact: 03**"<<endl;
	cout<<"Destination: Kasur"<<endl;
	cout<<"Number of seats: 20"<<endl;
   
   }
    else if(route==2)
	{ cout<<"...................BUS RESERVATION SYSTEM......................."<<endl<<endl;
	cout<<endl<<"-----------------BUS DETAILS-------------"<<endl<<endl;
	cout<<"Bus number: LMJ-382"<<endl;
	cout<<"Driver name: Zubair"<<endl;
	cout<<"Driver contact: 03**"<<endl;
	cout<<"Destination: Islamabad"<<endl;
	cout<<"Number of seats: 20"<<endl;
   }
	else if(route==3)
	{cout<<"...................BUS RESERVATION SYSTEM......................."<<endl<<endl;
	cout<<endl<<"--------------BUS DETAILS------------"<<endl<<endl;
	cout<<"Bus number: LWT-7382"<<endl;
	cout<<"Driver name: Abdullah Khan"<<endl;
	cout<<"Driver contact: 03***"<<endl;
	cout<<"Destination: Murree"<<endl;
	cout<<"Number of seats: 20"<<endl;
   }
   else
   {     goto looop;
   }
   cout<<endl;
   looooooop :
 cout<<"Do you want to select the seats "<<endl;
 cout<<endl;
 cout<<"Type YES "<<endl;
 cout<<endl;
 cout<<"Type NO"<<endl;
 cin>>select;
 
 if(select =="YES")
 {
 system("cls");
 cout<<"...................BUS RESERVATION SYSTEM......................."<<endl<<endl;
 
 cout<<".................Number of Seat..............."<<endl;

   while (true) {
    cout << "Enter 1 to print seats, 2 to reserve a seat, or 0 to exit: ";
    int option;
    cin >> option;

    if (option == 0) {
      break;
    } else if (option == 1) {
      printSeats();
      
    } else if (option == 2) {
      reserveSeat();
       
       reserved_seats=reserved_seats+1;
      cout<<"Your total reserve seats are : "<<reserved_seats<<endl;
    } else {
      cout << "Invalid option." << endl;
    }
  }

}
else if (select=="NO") {
	exit;
}
else
{  goto looooooop;
}
system("cls");
cout<<"....................Generate  Challan................ "<<endl<<endl;
 char name[10];
 string city;
 int total_amount;
 int seat;
cout<<"Enter your Name "<<endl;
cin>>name;
cout<<"Start From Lahore "<<endl;


if(route== 2)
{ city="Islamabad";
total_amount=reserved_seats*8000;
   seat=8000;
}
else if(route == 1) 
{ city="Kasur";
total_amount=reserved_seats*5000;
   seat=5000;}
else if(route == 3)
{ city="Murree";
total_amount =reserved_seats*9000;
seat =9000;
}

cout<<endl;
oop :
 system("cls");

cout<<"======================================================="<<endl<<endl;

cout<<"___BUS RESERVATION SYSTEM___"<<endl<<endl;

cout<<"========================================================"<<endl<<endl;
cout<<"___Challan Form___"<<endl<<endl;
cout<<"========================================================"<<endl<<endl;

cout<<" Name : "<<"                         "<<name<<endl;
cout<<" From : "<<"                         "<<"Lahore"<<endl;

cout<<" To : "<<"                           "<<city<<endl;

cout<<"Total Seats : "<<"                   "<<"20"<<endl;
cout<<"Reserved Seats : "<<"                "<<reserved_seats<<endl;
cout<<"1 seat :"<<"                         "<<seat<<endl;

cout<<"Total Amount : "<<"                  "<<total_amount<<endl;
cout<<endl;


cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"_______"<<endl<<endl;


cout<<"Cashier__"<<"               "<<"Depositor__"<<endl;
cout<<endl;
cout<<"1.Print the Challan."<<endl;
cout<<"2.Submit to the Bank"<<endl;
cout<<"3.Without copy of challan.Condoctor will not accept anything else. "<<endl;
cout<<"4.Empty Challan not Accepted.";
cout<<endl;
fstream new_file;
new_file.open("new_file",ios::out);
if(!new_file)
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file<<"Always hold onto the handrail or seat while the bus is in motion."<<endl;
new_file<<"Be mindful of the space between the bus and the platform or curb while getting on and off the bus."<<endl;
new_file<<"Keep aisles and exits clear of obstructions."<<endl;
new_file<<"Follow the driver's instructions and signals."<<endl;
new_file<<"Do not stand while the bus is in motion."<<endl;
new_file<<"Wear seatbelts, if available."<<endl;
new_file<<"Avoid distracting the driver, such as by shouting or playing loud music.";
new_file.close(); // Step 4: Closing file

}
string log;
cout<<endl;
cout<<endl;
cout<<endl;
ooop :
cout<<"Do you want to log out ? "<<endl;
cout<<"Yes"<<endl;
cout<<"No"<<endl;
cin>>log;
if(log=="Yes")
{

exit;
}
else if(log=="No")
{  goto oop;
}
else 
{ cout<<"Invalid"<<endl;
goto ooop;
}
}

void printSeats() 
    { 
cout << "Seats:" << endl;
  for (int i = 0; i < 20; i++) 
{
    cout << i + 1 << " " << (seats[i] ? "Reserved" : "Available") <<endl;
  }
}
void reserveSeat() 
{ 
loooop :
	cout << "Enter seat number to reserve: ";
  int seatNum;
  cin >> seatNum;
if(seatNum>0 && seatNum<=20)
{

  if (seats[seatNum - 1]) {
    cout << "Seat already reserved." << endl;
   reserved_seats=reserved_seats-1;
  } 
  else {
    seats[seatNum - 1] = true;
    cout << "Seat reserved successfully." << endl;
    
}

  }
  else {
  
  goto loooop;}
  
}
