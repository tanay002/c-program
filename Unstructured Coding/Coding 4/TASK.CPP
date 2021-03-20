#include<iostream.h>
#include<conio.h>
 class Model
{
    public:
    virtual void property1()=0;
};
class Tire
{
public:
    virtual void property2()=0;
};
class License:public Model,public Tire
{
    public:
     void property1()
    {
	cout<<"Bike Model Name=Hero Splender plus"<<endl;
    }

     void property2()
    {
	cout<<"Tire Name=Ceat Bike Tire"<<endl;
    }
};
int main( )
{
clrscr();
    License lic;
  lic.property1();
  lic.property2();
  getch();
   return 0;
}