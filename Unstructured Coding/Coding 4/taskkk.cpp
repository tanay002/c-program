#include<iostream>
class employee
{
  int id;
  string name;
  public:
  void input(int,int);
  void show();
};
void employee::input(int x,string y)
{
  id=x;
  name=y;
}
void show()
{

 cout<<"employee id=="<<id<<endl;
 cout<<"employee name="<<name;
}
int main()
{
  int p;
  string n;
  cout<<"enter employee id=="<<endl;
  cin>>p;
  cout<<"enter employee name=";
  cin>>n;
  employee e1;
  e1.input(p,n);
  e1.show();
}
