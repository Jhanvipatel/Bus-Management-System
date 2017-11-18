#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<process.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#define MAX 200

using namespace std;

void display_feedback();

class Info
{
public:

	//cout<<"About us";
	void aboutus()
    {
        system("CLS");
	int i;

	char str[200];
	ifstream in;
	char ch;
	in.open("file1.txt");
	while(in)
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
    }
    //cout<<"Future scope";
    void futscope()
    { system("CLS");
	int i;

	char str[200];
	ifstream in;
	char ch;
	in.open("file2.txt");
	while(in)
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
    }
  //  cout<<"Contact us";
    void contactus()
    { system("CLS");
	int i;

	char str[200];
	ifstream in;
	char ch;
	in.open("file3.txt");
	while(in)
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
    }
    //cout<<"feedback";


};

class feedback
{
    char name[20];
    char phone[20];
    char email[20];
    int busno;
    char feed[MAX];
    int x=0;
public:
    void getdata()
    {
        cout<<"\nEnter your name         : ";
        cin>>name;
        cout<<"\nEnter Bus no            : ";
        cin>>busno;
        cout<<"\nEnter your contact no   : ";
        cin>>phone;
        cout<<"\nEnter you email address : ";
        cin>>email;
        cout<<"\nEnter feedback   : ";
        cin.get(feed,MAX,'$');
    }
    void showdata()
    {   system("CLS");
        cout<<"Name             : "<<name<<endl<<endl;
        cout<<"Bus no           : "<<busno<<endl<<endl;
        cout<<"Phone no         : "<<phone<<endl<<endl;
        cout<<"Email            : "<<email<<endl<<endl;
        cout<<"Feedback written : ";
        cin.ignore();
        cout<<feed;
       // puts(feed);
    }
    void report()
	{
        cout<<x+1<<setw(16)<<setfill(' ')<<name<<setw(12)<<busno<<setw(25)<<email<<setw(20)<<phone<<"\nFeedback : "<<feed<<endl;

    }


};

fstream fp;
feedback f;

void feedback_f()
{
    system("CLS");

	char ch;
	fp.open("feedback.txt",ios::out|ios::app);

		f.getdata();
		fp.write((char*)&f,sizeof(feedback));


	fp.close();
}

void display_feedback()
{system("CLS");
     	fp.open("feedback.txt",ios::in);


	cout<<"\n\n\t\t\tFEEDBACK LIST\n\n";
	cout<<"============================================================================\n";
cout<<"SN NO. "<<setw(10)<<"Name"<<setw(15)<<"BUS No."<<setw(20)<<"EMAIL"<<setw(20)<<"PHONE"<<endl;

	cout<<"=============================================================================\n";

	while(fp.read((char*)&f,sizeof(feedback)))
	{
		f.report();
	}

	fp.close();
	//cout<<"Press any key to go to ADMINISTRATOR MENU ";
//	goto aa;
	//getch();
}

class admin : public Info
{

	public:
	void login(char name[15],char passwd[8])
	{
	    if(strcmp(name,"laxman")==0 && strcmp(passwd,"pandya")==0)
	   {
		    cout<<"\nLogin succesfull\n";

	    }
	   else
	   {
	exit(1);
	   }

	 }
	 void bus()
	 {


	ifstream in;
	char ch;
	in.open("cus1.txt");
	while(!in.eof())
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
	//getch();
	 }
	 void addInfo()
	{ system("CLS");
	int i;
    ofstream out;
	char fcity[20],tcity[20],ans;
	int busno,rate;
	float time;
	//clrscr();
	out.open("cus1.txt",ios::app);
	do
	{
	cout<<"\nEnter from city ::  ";
	cin>>fcity;
	cout<<"\n\nEnter To city ::  ";
	cin>>tcity;
	cout<<"\n\nEnter bus no ::  ";
	cin>>busno;
	cout<<"\n\nEnter bus rate ::  ";
	cin>>rate;
	cout<<"\n\nEnter arival timing ::  ";
	cin>>time;

	out<<fcity<<"\t\t"<<tcity<<"\t\t"<<busno<<"\t"<<rate<<"\t"<<time<<endl;
	cout<<"\n\n\nDo u want to add another root(y/n) :  ";
	cin>>ans;
system("CLS");
	}
	while(ans=='y' || ans=='Y');

	out.close();
	ifstream in;
	char ch;
	in.open("cus1.txt");
	while(!in.eof())
	{
		in.get(ch);
		cout<<ch;
	}
	in.close();
	//getch();
	}
};

class custmor : public Info
{

};
int main()
{
	admin m ;
	    //	Info t;
	int a,i,choice;
	char name[10];
	char ans;

	char passwd[10];
	char ch[10];

	cout<<endl;
	cout<<endl;
	cout<<endl;
cout<<"                  ";
	cout<<"*********************************************"<<endl<<endl;
	_sleep(100);
	cout<<"                     WELCOME STATE TRANSPORT MANAGEMENT             "<<endl<<endl;
	_sleep(100);
	cout<<"                  ";
	_sleep(100);
	cout<<"**********************************************"<<endl;
	_sleep(1);
	cout<<endl;
	cout<<"                  ";
	cout<<"1. CUSTOMER"<<endl;
	cout<<"\n                  ";
	cout<<"2. ADMIN"<<endl;
	cout<<"\n\n                  ";
	cout<<" Enter Usertype :: ";
	cin>>a;

	if(a==1)
	{
    do
      {
	    system("CLS");
        cout<<endl;

	for(int i=0;i<50;i++)
        {cout<<"*";
        _sleep(10);
        }

    cout<<"\n\t<<..  WELCOME TO CUSTOMER MENU  ..>>"<<endl;
	  for(int i=0;i<50;i++)
        {cout<<"*";
        _sleep(10);
        }

	  cout<<"\n\n\t1) About Us"<<endl<<endl;
	  cout<<"\t2) Contact us"<<endl<<endl;
	  cout<<"\t3) Future scope"<<endl<<endl;
	  cout<<"\t4) view route"<<endl<<endl;
	  cout<<"\t5) Feedback"<<endl<<endl;
	  cout<<"\t6) Exit"<<endl<<endl;
	  cout<<"\tEnter ur choice : ";
	  cin>>choice;
	  switch(choice)
        {
            case 1:
            m.aboutus();
            _sleep(10000);
            break;
            case 2:
            m.contactus();
           _sleep(10000);
            break;
            case 3:
            m.futscope();
            _sleep(10000);
            break;
            case 4:
            m.bus();
            _sleep(10000);
            break;
            case 5:
            feedback_f();
            exit(0);
            break;
            case 6:
            exit(1);
        }
      }while(1);
	}
	else
	{/*
	  cout<<"WELCOME"<<endl<<endl;
	  cout<<"Enter username ::";
	  cin>>name;
	  cout<<"Enter password ::";
	  for(i=0;i<5;i++)
	  {
		  ch[i]=getch();
		cout<<"*";
	  }
	  ch[i]='\0';
	  m.login(name,ch);
	  cout<<"welcome  ADMIN"<<endl;
    */do
      {system("CLS");
	  cout<<"\n1) Add route"<<endl;
	  cout<<"\n2) View Feedback"<<endl;
	  cout<<"\n3) Exit"<<endl;
	  cout<<"\n\nEnter ur choice : "<<endl;
	  cin>>choice;
	  switch(choice)
        {

            case 1:
            m.addInfo();
            _sleep(10000);
            break;
            case 2:
            display_feedback();
            _sleep(10000);

            break;
            case 3:
            exit(1);
        }
}while(1);

	//  cout<<"about us"<<endl;

	   //getch();
        return 0;
}
}
