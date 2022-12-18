#include<iostream>
using namespace std;
class taxpayer
{
    int age;
    float income, tax=0;
    void calctax();
    public:
    void indata()
    {
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter salary:";
        cin>>salary;
        calctax();
    }
    void outdata()
    {
        cout<<"Tax:"<<tax;
    }
}t;
void taxpayer :: calctax()
{
    if(age<60)
    {
        if (income>1000000)
        tax+=112500+(0.3*(income-1000000));
        if (income>500000)
        tax+=12500+(0.2*(income-500000));
        if (income>250000)
        tax+=(0.05*(income-250000));
        if (income<250000)
        tax=0;
    }
    else if (age<80)
    {
        if (income>1000000)
        tax+=100000+(0.3*(income-1000000));
        if(income>500000)
        tax+=10000+(0.2*(income-500000));
        if (income>300000)
        tax+=(0.05*(income-300000));
        if (income<300000)
        tax+=0;
    }
    else if(age>80)
    {
        if (income>1000000)
        tax+=100000+(0.3*(income-1000000));
        if (income>500000)
        tax+=0.2*(income-500000);
        if (income<500000)
        tax+=0;
    }
    tax+=(0.04*tax);
}

int main()
{
    t.indata();
    t.outdata();
    return 0;
}
