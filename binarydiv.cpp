#include <iostream>
using namespace std;
int Xor(int a,int b){
  return (a ^ b);
}
int main()
{

    int i=0,j=0,n;
    cout<<"Enter no of data\n";
    cin>>n;
    int a[n+16];
    int g[]={1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1};
    int rem[n];
    int m=n+16;
    int s=sizeof(a)/sizeof(a[0]);
    //cout<<m;
    for(i=0;i<m;i++){
        if(i>=n){
            a[i]=0;
        }
        else{
          cin>>a[i];
        }
        if(i<n){
            rem[i]=a[i];
        }
    }

    cout<<"\n"<<".........."<<"\n";

     for(int i=0;i<m;i++){
        cout<<a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]!= 1){
            continue;
            }
        for(j=0;j<17;j++){
            a[i+j]=a[i+j]^g[j];
        }
    }

    for(i=0;i<n;i++){
        a[i]=rem[i];

    }
       cout<<"\n"<<".........."<<"\n";
     for(int i=0;i<m;i++){
        cout<<a[i];

    }



        cout<<"\n"<<".........."<<"\n";

        //a[10]=1;

         for(i=0;i<n;i++){
        if(a[i]!= 1){
            continue;
            }
        for(j=0;j<17;j++){
            a[i+j]=a[i+j]^g[j];
        }
    }

    for(int i=0;i<m;i++){
        cout<<a[i];
    }


    return 0;
}
