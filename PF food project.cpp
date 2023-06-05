#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int a,b,order,quantity,price=0,res,ind;
int main()
{   
     fstream new_file;
		 new_file.open("new_file",ios::out);
		 
    		new_file.close();
		
    

	string menu[14] = {"Chicken burger   Rs.150", "Chicken shawarma Rs.120", "Pizza            Rs.850" , "Club Sandwich    Rs.180" ,"Shami burger     Rs.120" ,"Half Chicken biryani    Rs.150" ,"Full chicken biryani    Rs.220" ,"Half Chicken karahi     Rs.550" , "Full Chicken karahi     Rs.920" , "Fries             Rs.200" , "Chicken nuggets   Rs.280" , "Coca cola   Rs.80" , "Fanta       Rs.80" , "Sprite      Rs.80"};
	
	int rate[14]= {150, 120, 850, 180, 120, 150, 220, 550, 920, 200, 260, 80,80,80};

	cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"                     WELCOME TO QUICK FOODS"<<endl;



	cout<<"-------------------------------------------------------------------------------MENU---------------------------------------------------------------------------------"<<endl;

	cout<<endl;

	cout<<"~~Fast Food: "<<endl<<endl;

    for (int i=0; i<=4; i++)
	{  
	    cout<<i+1<<"."<<menu[i]<<endl;
    }
    
    cout<<endl<<"~~Desi Food: "<<endl<<endl;

    for(int i=5; i<=8; i++)
    {
    	cout<<i+1<<"."<<menu[i]<<endl;
	}
	
	cout<<endl<<"~~Fried Food: "<<endl<<endl;

	for(int i=9; i<=10; i++)
	{
		cout<<i+1<<"."<<menu[i]<<endl;
	}
	

	cout<<endl<<"~~Drinks: "<<endl<<endl;
	for(int i=11; i<=13; i++)
	{
		cout<<i+1<<"."<<menu[i]<<endl;
	}
	cout<<endl;
	// start from here
	looop:

    cout<<"Enter number of orders you want to add to your cart: "<<endl;
    cin>>ind;
    
	string arr[ind];
	int quantity[ind];
	
	for(int i=0; i<ind; i++)
	{
		loooop:

		cout<<endl<<"Please Enter your order number: ";
	    cin>>order;
	    
	    if (order>14)
		{
			
			cout<<"Enter valid choice "<<endl;
			goto loooop;
		}
		else
		{
			arr[i]=menu[order-1];
			cout<<menu[order-1]<<endl;
		}
	}
	cout<<endl<<endl;
new_file.open("new_file_write.txt",ios::out);
	cout<<endl;
	if (order<=14)
	{
	
    	cout<<"Your order is: "<<endl;

    	for(int i=0; i<ind;i++)
    	{
    	
    		cout<<arr[i]<<endl;
    		new_file<<menu[i];
    	
		}
		
    	cout<<endl<<"Enter quantity For Each: ";
    	for(int i=0; i<ind;i++)
    	{
    		cout<<"Quantity of "<<arr[i]<<": "<<endl;
    		cin>>quantity[i];
		}
		int a=0;
		for(int i=0; i<14;i++)
		{
			if(arr[i]==menu[i])
    		{
    			price=price+rate[i]*quantity[a];
    			a++;
			}
		}
	    cout<<endl<<"Price= "<<price<<endl<<endl;


    }
    else
    {
    	cout<<"PLEASE ENTER VALID CHOICE"<<endl;
    	goto looop;
	}

	go:
		cout<<"Do you want to add order once more? "<<" Press 1 for yes and 0 for no "<<endl;

	cin>>res;
	
	cout<<endl;
	if(res==1)
	{
		goto looop;
	}
	else if (res==0)
	{

		cout<<endl;
	}
	else
	{
		cout<<"PLEASE ENTER VALID CHOICE"<<endl<<endl;
		goto go;
	}
    {
		system("cls");
	}
	

	string payment[2]={"Jazz cash", "Cash on Delivery"};
	
    int in=1, pay;
    for(int i=0; i<2; i++)

    {
    	cout<<in<<"."<<payment[i]<<endl;
    	in++;
	}
	
	again:
	cout<<endl<<"Please Enter your choice: ";
	cin>>pay;

	if (pay == 1)

	{
		cout<<endl<<"Payment method for Jazz Cash Selected "<<endl<<endl;
	}
	else if (pay == 2)
	{

		cout<<endl<<"Payment method for Cash on Delivery Selected "<<endl<<endl;
	}
	else 
	{
		cout<<"Enter Valid choice! ";
		goto again;
	}

	char name[20],house[5],block[5],area[20];
	
   
   int area_code,exchange,number;
   char feed;
	cout<<"Your order includes following: \n";
	for(int j=0; j<ind;j++)
	{
		cout<<"\t\t"<<arr[j]<<"\t x"<<quantity[j]<<endl;
	}
	cout<<endl<<endl;
//	cout<<'\t'<<'\t'<<menu[order-1]<<'\t'<< "x"<<quantity<<endl;
	
	cout << endl << " Enter your following Credentials" <<endl<< endl;
	cout<<"Name: ";
	cin>>name;
	cout<<name;
    cout<<"House no:";
	cin.getline(house, 5);
	cout<<"Block: ";
	cin.getline(block, 5);
	cout<<"Area: ";
	cin.getline(area, 20);
//    cin>>house>>block>>area;
	cout << "Enter phone number as 0300 1234567: ";
    cin>>exchange>>number;
    cout<<endl<<"Please share your review: "<<endl;
    cin>>feed;
    {
		system("cls");
	}
	cout<<endl<<"-----------------------------------------------------------------------------------RECEIPT----------------------------------------------------------------------------------";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"NAME:     "<<name;
	cout<<endl<<'\t'<<'\t'<<'\t'<<"ADDRESS:     "<<house  <<" "<<block<<'\t'<<area;
	cout<<endl<<'\t'<<'\t'<<'\t'<<"Phone no.:   "<<area_code <<exchange <<number;
	cout<<endl<<'\t'<<'\t'<<'\t'<<"ORDER:       \n";
	for(int j=0; j<ind;j++)
	{
		cout<<"\t\t"<<arr[j]<<"\t x"<<quantity[j]<<endl;
	}
	cout<<endl<<endl<<'\t'<<'\t'<<'\t'<<"NET AMOUNT: "<<price;
    new_file<<"oder no.1"<<endl<<endl<<name<<endl<<house<<block<<area<<endl<<area_code<<exchange<<number<<endl<<"total price: "<<price;
    new_file.close();
	return 0;
}
