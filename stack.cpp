#include<iostream>
#include<iomanip>
using namespace std;
#define MAX_SIZE 100
class stack
{  
    private:
                 int top;
                 int arr[MAX_SIZE];
   public : 
                stack()
                                {
                                   top= -1;
                                }
      void push(int val)
                  {
                          if(top == MAX_SIZE -1)
                                   {  
                                        cout<< " Stack overflow "<<endl;
                                        return;
                                   }
                         arr[++top]=val;
                    cout<<val<<" pushed to stack "<<endl;               
                  }
     void pop()
             {
                  if( top== -1)
                      {
                      cout<<"stack underflow"<<endl;
                      return;
                      }
                 int poppedvalue = arr[top--];
                   cout<<poppedvalue<<" popped from stack "<<endl;
           }
     void dispaly()
     {
             cout<<"stack is "<<endl;
             cout<<arr[top--]<<endl;
     }
   };
    int main()
          {
           stack stack;
           stack.push(5);
           stack.push(20);
           stack.push(7);
           stack.pop();
          
           stack.pop();
           
           
           return 0;
           
           
         }
             
                  
             
             
             
             


