#include<iostream>
using namespace std;
class Manager
{
protected:
string name;
string dept;
int empId;
int bonus;
public:
void getData()
{
cout<<"\nEnter the name of the manager :";
cin>>name;
cout<<"\nEnter the department for the manager: ";
cin>>dept;
cout<<"\nEnter the employee ID for the manager: ";
cin>>empId;
}
setBonus(int b)
{
cout<<"\n\nIn the setBonus() of base class \t";
bonus=b;
cout<<"\nDepartment :"<<dept<<"\tBonus : "<<bonus;
}
};
class ProdManager: public Manager
{
int noOfSupervisors;
public:
manageProduction(int n)
{
cout<<"\n\nIn the Manage Production";
noOfSupervisors=n;
cout<<"\tNo.Of Supervisors :"<<noOfSupervisors;
}
display()
{
cout<<"\n\n Name of the manager : "<<name;
cout<<"\n Department : "<<dept;
cout<<"\n Number of supervisors : "<<noOfSupervisors;
cout<<"\n Bonus for the department: " << bonus;
}
};
class SalesManager: public Manager
{
int noOfSalesman ;
public:
manageSales(int n)
{
cout<<"\n\n In the Manage sales";
noOfSalesman=n;
cout<<"\tNo.of Salesman :"<<noOfSalesman;
}
display()
{
cout<<"\n\n Name of the manager : "<<name;
cout<<"\n Department : "<<dept;
cout<<"\n Number of salesman : "<<noOfSalesman;
cout<<"\n Bonus for the department : " << bonus;
}
};
int main()
{
SalesManager s;
ProdManager p;
s.getData();
p.getData();
s.manageSales(10);
p.manageProduction(100);
s.setBonus(5000);
p.setBonus(8000);
s.display();
p.display();
return 0;
}
