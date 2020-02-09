#include<iostream>
using namespace std;
double calcTax(double);// protype
double averageTaxRate(double,double);//prototype



int main ()
{
    double salary;
    double totalTax;
    double taxRate;



cout<<"enter your gross salary: "<<endl;
cin>>salary;
totalTax= calcTax(double salary);//function call
taxRate= averageTaxRate(double salary,double totalTax);//function call

    cout<<"tax payable: "<<totalTax<<endl;
    cout<<"your average tax rate is :"<<taxRate<<endl;

    return 0;// end of main function

}

 //****** function definitions***

        double calcTax(double pay){ // function header
        double taxableInc;
        double totalTax;

        taxableInc=pay*80/100;

  if (taxableInc<=15000)
      {
          totalTax=taxableInc*10/100;
      }

  else (taxableInc>15000);taxableInc<=20000)
      {
          totalTax=(taxableInc-15000)*20/100 +(15000*10/100);
      }

  if (taxableInc>35000)
      {
          totalTax=(taxableInc-35000)*25/100+(15000*10/100)+(20000*20/100);
      }



return totalTax;

}
