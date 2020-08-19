#include<iostream>
using namespace std;

class Crop
{ public:
  int cotton,paddy,vegitable;
  Crop()
  {
  	cotton=60000;
  	paddy=40000;
  	vegitable=30000;
  }
	
};

class Profit : public Crop 
{
	int profit_yield;
	public:
	void Calculate()
	{
		profit_yield=400000 - (cotton + paddy + vegitable);
		cout<<profit_yield;
	}
};


int main()
{
	 Profit p;
	 p.Calculate();
	 return 0;  
}
