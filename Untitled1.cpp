#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Faculty
{ public:
   string Faculty_name,Offical_Email,Personal_Email;
   string Load_Assigned,Research_Papers;
   int UID,Teaching_Experience;
   void output(Faculty f)
     {
     	ofstream fout;
     	fout.open("faculty.txt",ios::app);
     	   fout.write((char*)&f,sizeof(f));
			fout.close();          
	 }
   public:
   	void input()
   	{
   	   cout<<"\nFaculty_name:";
		  cin>>Faculty_name;
	   cout<<"\nUID:";
	    cin>>UID;
	   cout<<"\nOffical Email ID:";
		  cin>>Offical_Email;
		  cout<<"\nPersonal Email ID:";
		  cin>>Personal_Email;
		  cout<<"\nLoad Assigned:";
		  cin>>Load_Assigned;	  
		  cout<<"\nResearch Paper";
		 getline(cin,Research_Papers);
		  cout<<"\nTeaching Experience:";
		  cin>>Teaching_Experience;
		  
		  
	}
};

int main()
{
	Faculty f[150];
	for(int i=0;i<150;i++)
	{ 
	f[i].input();
	f[i].output(f[i]);
   }
}
