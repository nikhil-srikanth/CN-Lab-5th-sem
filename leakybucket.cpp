#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{ int cap,out,n,ch;
  int buc=0;
    cout<<"Enter the bucket capacity: ";
    cin>>cap;
    cout<<"Enter the outflow rate: ";
    cin>>out;

    while(1)
    { cout<<"1.Insert\n2.Exit";
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch)
      {
          case 1: cout<<"\nEnter the packet size: ";
      cin>>n;
      if((buc+n)<=cap)
      {
          buc=buc+n;
          cout<<buc<<"\n";
          buc=buc-out;
          if(buc<0)
          {
              buc=0;
          }
          cout<<"After outflow: "<<buc;
      }
      else if((buc+n)>cap)
      {
          cout<<"Bucket overflow";
      }
      break;
      case 2: cout<<"No more inputs. Program exited";
              break;


      }

    }
}
