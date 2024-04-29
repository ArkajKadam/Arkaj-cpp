#include<iostream>
using namespace std;
class complex
{
     private : 
                       double real;
                       double imag;
                       
                       public :
                                       complex (double r=0.0, double i=0.0) : real(r),imag(i)
                                            {
                                             }
                        friend ostream& operator<<(ostream& os, const complex& c)
                                            {
                                            os << c.real<<"+"<<c.imag<<"i";
                                            return os;
                                             }
                      friend istream& operator>>(istream& is, complex& c)
                                         {
                                           cout<<"Enter real part :  ";
                                           is>>c.real;
                                           cout<<"Enter imag part :  ";
                                           is>> c.imag;
                                           return is;
                                         }
                       
};

int main()
{
  complex c1,c2;
  cout<<"Enter complex number 1: \n";
  cin>>c1;
   cout<<"Enter complex number 2: \n";
  cin>>c2;
  
  cout<<"complex number 1 :  "<<c1<<endl;
  cout<<"complex number 2 :  "<<c2<<endl;
  
  return 0;
  }
                       
   




