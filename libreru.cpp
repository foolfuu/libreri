#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct member
{
	string name , father_name , mather_name , job , avenue , Plaque;
	int age;
	long code;
};

struct book
{
	string name_book;
	int paje , year;
};

struct worck
{
	string man_woman , name;
	int code , age;
};

int main()
{
	member num[1000];
	book boo[1000];
	worck wor[1000];
	int i,y,b;
	int io,yu,bn;
	int iop,yui,bnm;
	i = 0;
	io = 0;
	iop = 0;
	string x;
	
	while(true)
	{
		cout<<"----------------------"<<endl;
		cout<<"1)add member"<<endl
			<<"2)Show members"<<endl
			<<"3)add book"<<endl
			<<"4)list book"<<endl
			<<"5)add worcker"<<endl
			<<"6)list worcker"<<endl
			<<"7)exit"<<endl;
		cout<<endl<<"Enter: ";
		cin>>x;
		
		if(x == "1")
		{
			int a;
			cout<<"number member: ";
			cin>>a;
			y = a;
			b = i;
			
			for(i ; i < y+b ; i++)
			{
				cout<<"what's your name? ";
				cin>>num[i].name;
				cout<<"what's your father name? ";
				cin>>num[i].father_name;
				cout<<"what's your mather name? ";
				cin>>num[i].mather_name;
				cout<<"what's your job? ";
				cin>>num[i].job;
				cout<<"what,s your age? ";
				cin>>num[i].age;
				cout<<"what's avenue your hom? ";
				cin>>num[i].avenue;
				cout<<"what's Plaque your hom? ";
				cin>>num[i].Plaque;
				cout<<"wher's your code? ";
				cin>>num[i].code;
				cout<<"_______________________\n";
				
			}
			
			cout<<"end!"<<endl;
		}
		
		if(x == "2")
		{
			cout<<"###############"<<endl;
			
			for(int t = 0 ; t < y+b ; t++)
			{
				cout<<"--------\n";
				cout<<"name: "<<num[t].name<<endl;
				cout<<"father name: "<<num[t].father_name<<endl;
				cout<<"mather name: "<<num[t].mather_name<<endl;
				cout<<"job: "<<num[t].job<<endl;
				cout<<"age: "<<num[t].age<<endl;
				cout<<"avenue: "<<num[t].avenue<<endl;
				cout<<"plaque: "<<num[t].Plaque<<endl;
				cout<<"code: "<<num[t].code<<endl;
			}
			
			cout<<"###############"<<endl;
		}
		
		if(x == "3")
		{
			int bo;
			cout<<"number book: ";
			cin>>bo;
			yu = bo;
			bn = io;
			
			for(io ; io < yu+bn ; io++)
			{
				cout<<"_-_-_-_-_-_\n";
				cout<<"name book? ";
				cin>>boo[io].name_book;
				cout<<"paje book? ";
				cin>>boo[io].paje;
				cout<<"year book? ";
				cin>>boo[io].year;
				cout<<"end!\n"<<"_-_-_-_-_-_\n";
			}
		}
		
		if(x == "4")
		{
			cout<<"@#$@#$@#$\n";
		
			for(int kl = 0 ; kl < yu+bn ; kl++)
			{
				cout<<"><><><><><>\n";
				cout<<"name book: "<<boo[kl].name_book<<endl
					<<"paje: "<<boo[kl].paje<<endl
					<<"year: "<<boo[kl].year<<endl;
				cout<<"><><><><><>\n";
			}
			
			cout<<"@#$@#$@#$\n";
		}
		
		if(x == "5")
		{
			cout<<"number worcker? ";
			int qa;cin>>qa;
			yui = qa;
			bnm = iop;
			cout<<"_____________________________\n";
			
			for(iop ; iop < bnm+yui ; iop++)
			{
				cout<<"what;s your name? ";
				cin>>wor[iop].name;
				cout<<"man _ woman? ";
				cin>>wor[iop].man_woman;
				cout<<"what's your age? ";
				cin>>wor[iop].age;
				cout<<"code? ";
				cin>>wor[iop].code;
			}
			
			cout<<"end!\n"<<"_____________________________\n";
		}
		
		if(x == "6")
		{
			cout<<"%%%%%%%%%%%%%%%"<<endl;
			
			for(int z = 0 ; z < bnm+yui ; z++)
			{
				cout<<"-------------------------------\n";
				cout<<"name: "<<wor[z].name<<endl
					<<"man_woman: "<<wor[z].man_woman<<endl
					<<"code: "<<wor[z].code<<endl
					<<"age: "<<wor[z].age<<endl;
				cout<<"-------------------------------\n";
			}
			
			cout<<"%%%%%%%%%%%%%%%"<<endl;
		}
		
		if(x == "7")
		{
			break;
		}
	}
	
	return 1;
}

















