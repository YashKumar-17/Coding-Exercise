#include<iostream>

using namespace std;

// defining a class to represent a complex number

class complex

{

   // member data to store the complex number parts

private:

       // real part

       float r;

        // imaginary part

       float i;



public:

       // set the values

               void set(float real, float img)

               {

                               r = real;

                               i = img;

               }



       // member function to sum the self and one another complex number

               complex sum(complex c)

       {

               complex t;

               t.r = r + c.r;

               t.i = i + c.i;

               return t;

       }



       // function to print the complex number

               void disp()

                  {

                      // since the imaginary number multiplicant of some real number

                      // and thus when 1 is multiplied with any number will remain same

               if (i == -1) {

               cout<< r << " + -i" <<endl;

                      }

               else if (i == 1) {

               cout<< r << " + i" <<endl;

                      }

               else if (i == 0) {

                          // since imaginary part is zero so only real part will be available

               cout<< r <<endl;

                      }

               else {

               cout<< r << " + " <<i<< "i" <<endl;

                      }

       }

};

int main()

{

               complex c1, c2, c3;
              float a,b,c,d;
              cout<<"Enter 1st real part"<<endl;
              cin>>a;
              cout<<"Enter 1st imaginary part"<<endl;
              cin>>b;
              cout<<"Enter 2nd real part"<<endl;
              cin>>c;
              cout<<"Enter 2nd imaginary part"<<endl;
              cin>>d;
              
            
              
               c1.set(a, b);

               c2.set(c, d);

              c3 = c1.sum(c2);

               cout<<"Complex Number 1 = ";

               c1.disp();

               cout<<"Complex Number 2 = ";

               c2.disp();

               cout<<"Complex Number 3 = ";

               c3.disp();

               return 0;

}