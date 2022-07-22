/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;



//functions prototype

int act(int type, int NumCustomers);



int main()

{

   int NumCustomers=30;

   NumCustomers = act(1, NumCustomers);

   cout<< NumCustomers <<endl;



   NumCustomers = act(1, NumCustomers);

   NumCustomers = act(1, NumCustomers);

   cout<< NumCustomers <<endl;



   NumCustomers = act(-1, NumCustomers);

   NumCustomers = act(-1, NumCustomers);

   NumCustomers = act(1, NumCustomers);

   cout<< NumCustomers <<endl;



   return 0;

}

int act(int type, int NumCustomers)
{
    if(type==1){
    cout<<"A customer enters the supermarket"<<endl;
    NumCustomers++;
return NumCustomers;
}
   else if (type==-1){
 if(NumCustomers==0){
        cout<<"No Customers."<<endl;
        return NumCustomers;
    }
    cout<<"A customer leaves the supermarket"<<endl;
    NumCustomers--;}

return NumCustomers;
}
    

