#include<iostream>
using namespace std;

class PLAYERS
{
 protected:
 string type_of_sport;
 int experience;

 public:
 void input()
 {
  cout<<"\n Enter type of sport: ";
  cin>>type_of_sport;
  cout<<"\n Enter years of experience: ";
  cin>>experience;
 }
 void output()
 {
  cout<<"\n Player details: ";
  cout<<"\n Type of Sport: "<<type_of_sport;
  cout<<"\n Experience (yr): "<<experience;
 }
};

class zone:virtual public PLAYERS
{
  protected:
  int zonerank;
  public:
  void inputz()
 {
  cout<<"\n Enter zone rank marks: ";
  cin>>zonerank;
 }
 void outputz()
 {
 cout<<"\n Zone rank marks: "<<zonerank;
 }
};

class national:virtual public PLAYERS
{
 protected:
 int nationalrank;
 public:
 void inputn()
 {
  cout<<"\n Enter national rank marks: ";
  cin>>nationalrank;
 }
 void outputn()
 {
  cout<<"\n National rank marks: "<<nationalrank;
 }
};

class international:public zone,public national
{
 int finalrank;
 public:
 void calc()
 {
  finalrank=zonerank+nationalrank;
 }
 void show()
 {
  calc();
  cout<<"\n International rank marks: "<<finalrank;
 }
};


int main(void)
{
 cout<<"\n Enter player details \n";
 international p;
 p.input();
 p.inputz();
 p.inputn();
 p.output();
 p.outputz();
 p.outputn();
 p.show();
 cout<<endl;
 return 0;
}
