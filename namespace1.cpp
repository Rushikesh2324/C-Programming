#include<iostream>
//using namespace std;
namespace Marvallous
{
class Demo
{
   public:
    int A;
    int B;
    Demo(int i=10,int j=20)
    {
        A=i;
        B=j;

    }

};
 
namespace Infosystems
{
class Demo
{
   public:
    int A;
    int B;
    Demo(int i=10,int j=20)
    {
        A=i;
        B=j;

    }

};
 
}
using namespace Marvallous;
int main()
{
    //Marvallous :: Demo obj1;
   Demo obj1;

   std::cout<<"Inside main"<<"\n";
   
    
    return 0;

}