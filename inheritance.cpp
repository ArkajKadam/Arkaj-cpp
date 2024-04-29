#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
class person
  {
      protected : 
                         string  person_name;
                         int  cellno;
                         string city_name;
      public :  
                     void  getdata()
                        {   
                    
                            
                             cout<<"Enter your name"<<endl;
                             cin>> person_name;
                             cout<<"Enter phone number"<<endl;
                             cin>>cellno;
                             cout<<"Enter your city"<<endl;
                             cin>>city_name;
                            
                        }
                    void displayperson()
                       {
                               cout<<"Name :"<<person_name<<endl;
                                cout<<"Phone number : "<<cellno<<endl;
                                 cout<<"City : "<<city_name<<endl;
                       }
                        
      };   
      
  class employee : public person
      {
          private : 
             string employee_id;
             string designation;
             string salary;
             
        
         public : 
           void getemployee()
               {  
                      cout<<"Enter Employee id : "<<endl;
                      cin>> employee_id;
                      cout<<"Enter designation : "<<endl;
                      cin>>designation;
                      cout<<"Enter salary : "<<endl;
                       cin>> salary;
               } 
          void table()
          
           {
        
              cout<<endl<<"Employee Information"<<endl;
               cout<<"Employee id"<<setw(15)<<"Employee Name"<<setw(15)<<"City Name"<<setw(15)<<"cellno."<<setw(15)<<"Designation"<<setw(15)<<"salary"<<endl;
            }
            
            void display_employee()
              
          {
                                         cout<<"_________________________________________________________________________________________________"<<endl;
               
                cout<<employee_id<<setw(15)<< person_name<<setw(15)<<city_name<<setw(15)<<cellno<<setw  (15)<<designation<<setw(15)<<salary<<endl;
               
       }   
      
      
      
      };
      
      
  int main()
    {
       employee e[3];
       for(int i=0;i<3;i++)
       {
         cout<<"\nEnter details for Employee"<<i+1<<endl;
         e[i].getemployee();
         e[i].getdata();
         
       }
       employee t;
        t.table();
        
        
        for(int i=0;i<3;i++)
        {
           e[i].display_employee();
        }
       return 0;
       
    }
      
     
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
                     
                 
  
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
