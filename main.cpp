#include <iostream>

using namespace std;

int main()
{
  int n;
   cout<<"enter number";
   cin>>n;
   int evensum =0;
   for(int i=1;i<=n;i++)
        if(i%2==0)
         evensum += i;
        cout<<evensum;

    return 0;
}
