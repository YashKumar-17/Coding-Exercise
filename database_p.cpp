#include <iostream>

using namespace std;



class student

{
 private:
 string name;
 int  rollNo;

 int  height;

 int weight;

 public:

 student(string n,int r,int h,int w)

               {

                   name=n;

                   rollNo=r;

                   height=h;

                   weight=w;

                }

                       //member function to print student's details

                       void display(void);

                       ~student();

};



void student::display(void){

           cout << "Student details:\n";

           cout << "Name:"<< name <<endl<< "Roll Number:" << rollNo <<endl;
           cout<< "Height:" << height <<endl<< "Weight:" << weight<<endl;

}

student :: ~student()

{

           cout<<"destructor is called\n";

}

int main()

{
           string n;int a,b,c;
           cout<<"Enter the name"<<endl;
           cin>>n;
           cout<<"Enter roll no."<<endl;
           cin>>a;
           cout<<"Enter height"<<endl;
           cin>>b;
           cout<<"enter weight"<<endl; 
           cin>>c;
           student std(n,a,b,c);                    //object creation

           student std1=std;

           std1.display();

           

           return 0;

}
