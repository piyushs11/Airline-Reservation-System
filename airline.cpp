#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int cnt=0; 
int count=10;

class dom_booking
{
protected:
    int pnr;
    char flight[10],arrival[7],depart[7];
    long int dof_j;
    int choice,source_city;
    double dest_city;
    int c=0;
public:
    void d_pnr()
    {
        cnt++;
        pnr=cnt;
    }
    int journey_detail()
    {
        int c=0;
        cout << "\nEnter your Date Of Journey(DDMMYY)." << "Please enter a valid date, according to format mentioned." <<  endl;
        cin >> dof_j;
        try
        {
            cout << "\n 1.Mumbai(1) \t 2.Delhi(2) \t 3.Kolkata(3) \t 4.Banglore(4)" << endl << endl;
            cout << "\tSelect Source" << endl;
            cin >> source_city;
            if(source_city==1 || source_city==2 || source_city==3 || source_city==4)
                c++;
            else
                throw(source_city);
            cout << "\tSelect Destination city" << endl;
            cin >> dest_city;
            if(dest_city==1 || dest_city==2 || dest_city==3 || dest_city==4)
                c++;
            else
                throw(dest_city);
        }
        catch(int s)
        {
            cout<<"Exception caught: Please select valid source city"<<endl;
        }
        catch(int d)
        {
            cout<<"Exception caught: Please select valid destination city"<<endl;
        }
        if((source_city==1 && dest_city==2) || (source_city==2 && dest_city==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.IndiGo(1)\t08:30\t\t11:30\t\tRs.5150\t\tNon-Refundable\n";
            cout << "2.SpiceJet(2)\t13:00\t\t16:20\t\tRs.5500\t\tRefundable\n";
            cout << "3.Vistara(3)\t19:00\t\t21:50\t\tRs.5200\t\tRefundable\n";
        }

        else if((source_city==1 && dest_city==3) || (source_city==3 && dest_city==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.IndiGo(1)\t08:30\t\t11:30\t\tRs.9200\t\tNon-Refundable\n";
            cout << "2.SpiceJet(2)\t13:00\t\t16:20\t\tRs.9500\t\tRefundable\n";
            cout << "3.Vistara(3)\t19:00\t\t21:50\t\tRs.9000\t\tNon-Refundable\n";
        }

        else if((source_city==1 && dest_city==4) || (source_city==4 && dest_city==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.IndiGo(1)\t08:30\t\t11:30\t\tRs.4500\t\tNon-Refundable\n";
            cout << "2.SpiceJet(2)\t13:00\t\t16:20\t\tRs.4250\t\tRefundable\n";
            cout << "3.Vistara(3)\t19:00\t\t21:50\t\tRs.5000\t\tNon-Refundable\n";
        }

        else if((source_city==2 && dest_city==3) || (source_city==3 && dest_city==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.IndiGo(1)\t08:30\t\t11:30\t\tRs.8300\t\tNon-Refundable\n";
            cout << "2.SpiceJet(2)\t13:00\t\t16:20\t\tRs.8900\t\tRefundable\n";
            cout << "3.Vistara(3)\t19:00\t\t21:50\t\tRs.7890\t\tRefundable\n";
        }

        else if((source_city==2 && dest_city==4) || (source_city==4 && dest_city==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.IndiGo(1)\t08:30\t\t11:30\t\tRs.5000\t\tNon-Refundable\n";
            cout << "2.SpiceJet(2)\t13:00\t\t16:20\t\tRs.4500\t\tRefundable\n";
            cout << "3.Vistara(3)\t19:00\t\t21:50\t\tRs.6000\t\tNon-Refundable\n";
        }
        else if((source_city==3 && dest_city==4) || (source_city==4 && dest_city==3))
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.IndiGo(1)\t08:30\t\t11:30\t\tRs.5800\t\tNon-Refundable\n";
            cout << "2.SpiceJet(2)\t13:00\t\t16:20\t\tRs.5500\t\tNon-Refundable\n";
            cout << "3.Vistara(3)\t19:00\t\t21:50\t\tRs.6150\t\tNon-Refundable\n";
        }
        else if(source_city==dest_city)
        {
            cout << "\nSource and destinationcan't be same.\nTry again\n\n\n" << endl;
            return journey_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return journey_detail();
        }

    }

    int  select_flight()
    {   
        cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "IndiGo"<<endl;
                strcpy(flight,"IndiGo");
                cout << "Departure Time : 08:30"<<endl;
                cout<<"Arrival Time: 11:30"<<endl;
                strcpy(depart,"8:30");
                strcpy(arrival,"11:30");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "SpiceJet"<<endl;
                strcpy(flight,"SpiceJet");
                cout << "Departure Time : 13:00"<<endl;
                cout<<"Arrival Time: 16:20"<<endl;
                strcpy(depart,"13:00");
                strcpy(arrival,"16:20");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Vistara" << endl;
                strcpy(flight,"Vistara");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 21:50" << endl;
                strcpy(depart,"19:00");
                strcpy(arrival,"21:50");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class passenger: public dom_booking
{
protected:
    char first_name[20],last_name[20],email[50];
    int age,gender;
    long int cont_no;
public:
    void pssngr_detail(int x)
    {   
        if(x==1)
        { journey_detail();
          select_flight();
        }

        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> first_name;
        cout << "Last Name:";
        cin >> last_name;
    }
    int gender_check()
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::\nOthers-press:3:: ";
        cin >> gender;
        if(gender>3)
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
            int z=0;
            try
            {
                cout << "Age:";
                cin >> age;
                if(age>0)
                    z++;
                else
                    throw(age);
            }
            catch(int a)
            {
                cout<<"\nException caught: Please enter valid age."<<endl;
                more_details();
            }
            cout << "Email Id:";
            cin >> email;
            cout << "Contact no.(10 digits):";
            cin >> cont_no;
            cout << "\n\nDetails Entered:\n";
            cout << "Name:" << first_name << " " << last_name << endl;
            cout << "Gender:" << gender << endl;
            cout << "Age:" << age << endl;
            cout << "Email id:" << email << endl;
            cout << "Contact No.:" << cont_no << endl;
    }

    int getpnr()
    {
        return pnr;
    }


    void disp()
    {
        cout<<"PNR no:" << pnr << endl;
        cout<<"Flight:" << flight<< endl;
        cout<<"Name:" << first_name << " " << last_name << endl;
        cout<<"Date of Journey:" << dof_j << endl;
        cout<<"Departure Time:" << depart << endl;
        cout<<"Arrival Time:" <<arrival;
    }

};


class payment
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
    void payment_detail()
    {     
        cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n 1.Debit Card(1) \n 2.Credit Card(2) \n 3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3:
            cout << "Banks Available: \1.SBI(1) \2.ICICI Bank(2) \3.Standard Chartered Bank(3) \4.HDFC Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default:
            cout << "\nWrong input entered.\nTry again\n\n";
            return payment_detail();
        }
    }

};

void createfile(passenger p)
{  
    ofstream fin("domestic.txt",ios::binary|ios::app);
    fin.write((char*)&p,sizeof(p));
    fin.close();
}

void cancelticket(int x)
{  
    passenger p;
    int f=0;
    ifstream fout("domestic.txt",ios::binary|ios::app);
    ofstream fin("domestic1.txt",ios::binary|ios::app);
    fout.read((char *)&p,sizeof(p));
    while(fout)
    {
        if(p.getpnr()!=x)
        fin.write((char *)&p,sizeof(p));
        else
        {
            p.disp();
            cout<<"\nYour Above ticket is being cancelled:\n" << "Amount refunded: Rs 1000\n";
            f++;
        }
        fout.read((char *)&p,sizeof(p));
   }
    if(f==0)
    cout<<"Ticket not found\n";
    fout.close();
    fin.close();
    remove("domestic.txt");
    rename("domestic1.txt","domestic.txt");

}

void checkticket(int x)
{  
    passenger p;
    int f=0;
    ifstream fout("domestic.txt",ios::binary);
    fout.read((char *)&p,sizeof(p));
    while(fout)
    {
      if(p.getpnr()==x)
      {
          cout<<"\nYour ticket"<<endl;
          p.disp();
          f++;
          break;
      }
      fout.read((char *)&p,sizeof(p));

    }
    fout.close();
    if(f==0)
    cout<<"Ticket not found"<<endl;

}

int main()
{
    class dom_booking d1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
        cout << "\n\n \t\t Welcome To Airline Reservation System" << endl ;
        cout <<"\t   ************************************************\n";
        cout << "\t    Book your Flight tickets at affordable prices!" << endl;
        cout <<"\t   ************************************************";
    
        cout << "\n\n\t\t\t 1.Book Flight(1) \n\t\t\t 2.Cancel Fight(2) \n\t\t\t 3.Check Ticket(3) \n\t\t\t 4.Exit(4)" << endl;
        cout << "\n\t\t Please enter your choice:";
        cin >> ch;
        switch(ch)
        {
            case 1:
    
                cout << "\n\n1.Domestic Flights " << endl;
                cout << "\n Please enter digit 1" << endl;
                cin >> ch1;
                switch(ch1)
                {
                    case 1:
                        p1.d_pnr();
                        p1.pssngr_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.payment_detail();
                        p1.disp();
                        createfile(p1);
                        break;
    
                    default:
                        cout << "Wrong input entered\nTry again\n\n\n" << endl;
                        return main();
                  }
                break;
            case 2:
    
                cout << " 1.Domestic Flights \n" << endl;
                cout << "\nPlease enter digit 1" << endl;
                cin >> ch1;
                if(ch1==1)
                {
                    cout << "Please enter your PNR no.:" << endl;
                    cin>>n;
                    cancelticket(n);
                }
                else
                {
                    cout << "Wrong input entered\nTry again\n\n\n";
                    return main();
                }
                break;
            case 3:
    
                cout << "\1.Domestic Flights \n" << endl;
                cout << "\nPlease enter digit 1" << endl;
                cin >> ch1;
                if(ch1==1)
                {
                    cout << "Please enter your PNR no.:" << endl;
                    cin>>n;
                    checkticket(n);
                }
    
                else
                {
                    cout << "Wrong input entered.\nTry again\n\n\n";
                    return main();
                }
                break;
            case 4:
                cout<<"Thank you for using our airline reservation system created by Aradhya,Govinda,Piyush,Shubhang"<<endl;
                break;
    
                return 0;
            default:
                cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
                return main();
          }
        cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
        cin >> input;
      }while(input=='Y' || input=='y');
       return 0;
}


/*  OUTPUT

 		 Welcome To Airline Reservation System
	   ************************************************
	    Book your Flight tickets at affordable prices!
	   ************************************************

			 1.Book Flight(1) 
			 2.Cancel Fight(2) 
			 3.Check Ticket(3) 
			 4.Exit(4)

		 Please enter your choice:1


1.Domestic Flights 

 Please enter digit 1
1

Enter your Date Of Journey(DDMMYY).Please enter a valid date, according to format mentioned.
121221

 1.Mumbai(1) 	 2.Delhi(2) 	 3.Kolkata(3) 	 4.Banglore(4)

	Select Source
5
Exception caught: Please select valid source city

Wrong input entered
Try again




Enter your Date Of Journey(DDMMYY).Please enter a valid date, according to format mentioned.
121221

 1.Mumbai(1) 	 2.Delhi(2) 	 3.Kolkata(3) 	 4.Banglore(4)

	Select Source
1
	Select Destination city
4
	 	 	Flights Found

Airline:	Departure:	Arrival:	Price:		Category:
1.IndiGo(1)	08:30		11:30		Rs.4500		Non-Refundable
2.SpiceJet(2)	13:00		16:20		Rs.4250		Refundable
3.Vistara(3)	19:00		21:50		Rs.5000		Non-Refundable

Enter your choice
3

Flight selected:
Vistara
Departure Time : 19:00
Arrival Time: 21:50



Enter passenger details
First Name:Aradhya
Last Name: Tagalpallewar
Gender:
Male-press:1::
Female-press:2::
Others-press:3:: 1
Age: -20

Exception caught: Please enter valid age.
Age:20
Email Id:abc@gmail.com
Contact no.(10 digits):1234567890


Details Entered:
Name:Aradhya Tagalpallewar
Gender:1
Age:20
Email id:abc@gmail.com
Contact No.:1234567890
Email Id:abc@gmail.com
Contact no.(10 digits):1234567890



How would you like to pay?:

 1.Debit Card(1) 
 2.Credit Card(2) 
 3.Net Banking(3)

Enter your choice1

Enter card no.:123212321232

Enter expiry date:1121

Enter CVV no.:111

Transaction Successful
PNR no:1
Flight:Vistara
Name:Aradhya Tagalpallewar
Date of Journey:121221
Departure Time:19:00
Arrival Time:21:50


Do you wish to continue:(y/Y)
y


 		 Welcome To Airline Reservation System
	   ************************************************
	    Book your Flight tickets at affordable prices!
	   ************************************************

			 1.Book Flight(1) 
			 2.Cancel Fight(2) 
			 3.Check Ticket(3) 
			 4.Exit(4)

		 Please enter your choice:1


1.Domestic Flights 

 Please enter digit 1
1

Enter your Date Of Journey(DDMMYY).Please enter a valid date, according to format mentioned.
110221

 1.Mumbai(1) 	 2.Delhi(2) 	 3.Kolkata(3) 	 4.Banglore(4)

	Select Source
1
	Select Destination city
3
	 	 	Flights Found

Airline:	Departure:	Arrival:	Price:		Category:
1.IndiGo(1)	08:30		11:30		Rs.9200		Non-Refundable
2.SpiceJet(2)	13:00		16:20		Rs.9500		Refundable
3.Vistara(3)	19:00		21:50		Rs.9000		Non-Refundable

Enter your choice
1

Flight selected:
IndiGo
Departure Time : 08:30
Arrival Time: 11:30



Enter passenger details
First Name:Piyush
Last Name:Sonawane

Gender:
Male-press:1::
Female-press:2::
Others-press:3:: 1
Age:19
Email Id:xyz@gmail.com
Contact no.(10 digits):1234543212


Details Entered:
Name:Piyush Sonawane
Gender:1
Age:19
Email id:xyz@gmail.com
Contact No.:1234543212



How would you like to pay?:

 1.Debit Card(1) 
 2.Credit Card(2) 
 3.Net Banking(3)

Enter your choice2

Enter card no.:123212345434

Enter expiry date:1122

Enter password:1223214

Transaction Successful
PNR no:2
Flight:IndiGo
Name:Piyush Sonawane
Date of Journey:110221
Departure Time:8:30
Arrival Time:11:30


Do you wish to continue:(y/Y)
y


 		 Welcome To Airline Reservation System
	   ************************************************
	    Book your Flight tickets at affordable prices!
	   ************************************************

			 1.Book Flight(1) 
			 2.Cancel Fight(2) 
			 3.Check Ticket(3) 
			 4.Exit(4)

		 Please enter your choice:2
 1.Domestic Flights 


Please enter digit 1
1
Please enter your PNR no.:
1
PNR no:1
Flight:Vistara
Name:Aradhya Tagalpallewar
Date of Journey:121221
Departure Time:19:00
Arrival Time:21:50
Your Above ticket is being cancelled:
Amount refunded: Rs 1000



Do you wish to continue:(y/Y)
y


 		 Welcome To Airline Reservation System
	   ************************************************
	    Book your Flight tickets at affordable prices!
	   ************************************************

			 1.Book Flight(1) 
			 2.Cancel Fight(2) 
			 3.Check Ticket(3) 
			 4.Exit(4)

		 Please enter your choice:3
.Domestic Flights 


Please enter digit 1
1
Please enter your PNR no.:
1
Ticket not found



Do you wish to continue:(y/Y)
y


 		 Welcome To Airline Reservation System
	   ************************************************
	    Book your Flight tickets at affordable prices!
	   ************************************************

			 1.Book Flight(1) 
			 2.Cancel Fight(2) 
			 3.Check Ticket(3) 
			 4.Exit(4)

		 Please enter your choice:3
.Domestic Flights 


Please enter digit 1
1
Please enter your PNR no.:
2

Your ticket
PNR no:2
Flight:IndiGo
Name:Piyush Sonawane
Date of Journey:110221
Departure Time:8:30
Arrival Time:11:30


Do you wish to continue:(y/Y)
y


 		 Welcome To Airline Reservation System
	   ************************************************
	    Book your Flight tickets at affordable prices!
	   ************************************************

			 1.Book Flight(1) 
			 2.Cancel Fight(2) 
			 3.Check Ticket(3) 
			 4.Exit(4)

		 Please enter your choice:4
Thank you for using our airline reservation system created by Aradhya,Govinda,Piyush,Shubhang



Do you wish to continue:(y/Y)
n

*/
