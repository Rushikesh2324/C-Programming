#include<iostream>
using namespace std;



class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo(): C(11),D(21)
        {
            A=0;
            B=0;
            


        }
};


int main()
{
    Demo.obj;
    cout<<obj.A<<"\n"
    cout<<obj.B<<"\n"
    cout<<obj.C<<"\n"
    cout<<obj.D<<"\n"
    
    
    return 0;

}