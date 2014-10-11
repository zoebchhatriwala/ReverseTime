#include <iostream>
#include <fstream>

using namespace std;

int getday(int x,int z);
string getname(int x);

int main()
{
    int year,month,date,day;
    ofstream Cal("calender.txt");

    cout<<"Enter Year [Not > 9999]"<<endl;
    cin>>year;
    cout<<"Enter Month [1 to 12]"<<endl;
    cin>>month;
    cout<<"Enter date [1 to 31]"<<endl;
    cin>>date;
    cout<<"Enter Day [Monday(1) To Sunday(7)]"<<endl;
    cin>>day;
    cout<<endl;
    if ( year>9999 || month<1 || month>12 || date<1 || date>31 || day<1 || day>7)
    {
        cout<<"Error In Data";
    }
    else
    {


     Cal << date<<"-";
     Cal << month<<"-";
     Cal << year <<" ";
     Cal <<getname(day)<<endl;
     date=date-1;
     day=day-1;

while (year >= 1)
{
while (date >= 1)
{
     if (day<1)
     {
         day=7;
     }
     Cal << date<<"-";
     Cal << month<<"-";
     Cal<< year <<" ";
     Cal<< getname(day)<<endl;
     date=date-1;
     day=day-1;

}
month = month-1;
Cal<<endl;
if (month<1)
{
    month = 12;
    year=year-1;
}
date = getday(month,year);

}
}
}


int getday(int x,int z)
{
if (x==1 || x==3 || x==5 || x==7 || x==8 || x ==10 || x==12)
{
    return 31;
}
else if (x==2)
{
    if (z%4==0)
    {
        return 29;
    }
    else
    {
        return 28;
    }
}
else
{
    return 30;
}

}

string getname(int x)
{
    if (x == 1)
    {
        return "Monday";
    }
    else if(x == 2)
    {
        return "Tuesday";
    }
    else if(x == 3)
    {
            return "Wednesday";
    }else if(x == 4)
    {
        return "Thursday";
    }else if(x == 5)
    {
        return "Friday";
    }else if(x == 6)
    {
        return "Saturday";
    }else if(x == 7)
    {
        return "Sunday";
    }

}

