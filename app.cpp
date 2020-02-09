#include<iostream>
using namespace std;
int main()

{
  int basicsal,netpay;
  char employeeno;




  cout<<"enter basicsal \n";
  cin>>basicsal;


  if (basicsal >=10000)
        {
          netpay=basicsal*0.02;
          cout<<"P.A.Y.E = "<<netpay;
        }
  else if(basicsal >= 25000)
        {
          netpay=basicsal*0.03;
          cout<<"P.A.Y.E = "<<netpay;
        }
  else if (basicsal >= 75000)
       {
         netpay=basicsal*0.05;
         cout<<"P.A.Y.E = "<<netpay;
       }



  return 0;
}
