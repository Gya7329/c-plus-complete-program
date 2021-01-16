// Program to Demonstrate Inheritance

       #include<iostream>
    using namespace std;


       class Employee
       {      private:
              int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData();
              void PutData();

       };

       void Employee ::GetData()
       {
              cout<<"\n\tEnter Employee Id : ";
              cin>>Id;

              cout<<"\n\tEnter Employee Name : ";
              cin>>Name;

              cout<<"\n\tEnter Employee Age : ";
              cin>>Age;

              cout<<"\n\tEnter Employee Salary : ";
              cin>>Salary;
       }

       void Employee :: PutData()
       {
              cout<<"\n\nEmployee Id : "<<Id;
              cout<<"\nEmployee Name : "<<Name;
              cout<<"\nEmployee Age : "<<Age;
              cout<<"\nEmployee Salary : "<<Salary;
       }

       int main()
       {

              Employee E;

              E.GetData();
              E.PutData();

       }
