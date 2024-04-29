#include<iostream>
#include<iomanip>
using namespace std;
class date
{
   private : int day;
                     int month;
                     int year;
                     int day1,month1,year1;
                     
    public: 
    date() : day(0),month(0),year(0)
    {
    }
    
   void setdate()
      {
           cout<<"enter current date: \n";
           cout<<"enter date: ";
           cin>>day;
             cout<<"enter month:  ";
           cin>>month;
             cout<<"enter year:  ";
           cin>>year;
      }     
    void setdate1()
      {
           cout<<"enter birth date: \n";
           cout<<"enter date: ";
           cin>>day1;
             cout<<"enter month: ";
           cin>>month1;
             cout<<"enter year: ";
           cin>>year1;
      }    
  void display()
       {
         cout<<"cirrent date is : ";
         cout<<day<<"/"<<month<<"/"<<year<<endl;
          cout<<"birth date is : ";
         cout<<day1<<"/"<<month1<<"/"<<year1<<endl;
       }
  void calculate_d()
       {
             if(day<day1)
                {
                     day=day+30;
                     day=day-day1;
                     month--;
                }
               else
               {
                     day=day-day1;
               } 
           }    
     void calculate_m()
            { 
                  if(month<month1)
                {
                     month=month+12;
                     month=month-month1;
                     month--;
                }
               else
               {
                     month=month-month1;
                     
               }     
             }         
       void calculate_y()
       {
            
               
                     year=year-year1;
                     
                                  
       }     
      void diff()
         {
               cout<<"Difference is :\n";
               cout<<"day: "<<day<<endl;
               cout<<"month: "<<month<<endl;
               cout<<"year: "<<year<<endl;
         
         }   
 };
   int main()
      {
          date d;
          d.setdate();
          d.setdate1();
          d.display();
          d.calculate_d();
          d.calculate_m();
          d.calculate_y();
          d.diff();
    }

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
                                       
