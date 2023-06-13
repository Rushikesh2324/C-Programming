#include<iostream>
using namespace std;
class Base
{
    public:
        int A,B;

        void fun()
        {

            cout<<"inside Fun of Base "<<"\n";
        }
        void Gun()
        {

            cout<<"inside Gun of base "<<"\n";
        }
        void Sun()
        {

            cout<<"inside Sun of base "<<"\n";
        }

};
class Derived : public Base
{

    public:
        int X,Y;
        void fun()
        {

            cout<<"inside Fun of Derived  "<<"\n";
        }
        void Gun()
        {

            cout<<"inside Gun of Derived  "<<"\n";
        }
        void Sun()
        {

            cout<<"inside Sun of Derived "<<"\n";
        }

};


int main()
{
   /* Derived dobj;

    dobj.fun();
    dobj.Gun();
    dobj.Sun(); */

    Base *bp = new Base;        //No Casting
    Derived *dp = new Derived ;   //No Casting


    Base *bp1 = new Derived;   // up casting (Allowed )
   // Derived *dp1 = new Base ;  //down casting (Not Allowed)

    
    return 0;

}