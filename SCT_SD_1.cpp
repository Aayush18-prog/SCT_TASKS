#include<iostream>
using namespace std; 

int main(){
   
   float temp1,ans;
   int a;

   cout<<"Enter temperature"<<endl;
   cin>>temp1;

   cout<<"Which type of conversion you want to do?"<<endl;
   cout<<"Enter 1 for C to F"<<endl;
   cout<<"Enter 2 for F to C"<<endl;
   cout<<"Enter 3 for C to K"<<endl;
   cout<<"Enter 4 for F to K"<<endl;
   cout<<"Enter 5 for K to C"<<endl;
   cout<<"Enter 6 for K to F"<<endl;


   cin>>a;

  switch(a)
  {
 case 1:

    ans=9/5*temp1+32;
    cout<<"Conversion from "<<temp1<<" degree celsius to farenheit is "<<ans<<" degree "<<endl;
    break;

    case 2:
    ans=5/9*(temp1-32);
    cout<<"Conversion from "<<temp1<<" farenheit degree to celsius  is "<<ans<<" degree "<<endl;
    break;

    case 3:
    ans=temp1+273.15;
    cout<<"Conversion from "<<temp1<<" degree celsius to kelvin is "<<ans<<" kelvin "<<endl;
    break;

    case 4:
    ans=5/9*(temp1-32)+273;
    cout<<"Conversion from "<<temp1<<" farenheit to kelvin is "<<ans<<" kelvin "<<endl;
    break;

   case 5:
    ans=temp1-273.15;
    cout<<"Conversion from "<<temp1<<" kelvin to celsius is "<<ans<<"degree"<<endl;
    break;

    case 6:
    ans=(temp1-273.15) * 9/5+32;
    cout<<"Conversion from "<<temp1<<" kelvin to farenheit is "<<ans<<" degree "<<endl;
    break;

    default:
    cout<<"Invalid conversion"<<endl; 
  }
    return 0;
}
