/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int act(int type);




int main()

{

   act(1);

   cout<< act(-1) <<endl;



   act(1);

   act(1);

   cout<< act(-1) <<endl;



   act(-1);

   act(-1);

   act(1);

   cout<< act(-1) <<endl;



   return 0;

}

int act(int type)
{
    static int NumCustomers=32;
if (type==1)
{
cout<<"New customer coming"<<endl;
NumCustomers++;
cout<<NumCustomers<<endl;
}

else if(type==-1 && NumCustomers==0){
cout<<"No customer";
cout<<NumCustomers<<endl;
}
else{
cout<<"One customer leaves";
NumCustomers--;
cout<<NumCustomers<<endl;
}
 
return NumCustomers;
}

