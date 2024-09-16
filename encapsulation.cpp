#include<iostream>
using namespace std;
class KG {
   
int p; //class me by dafualt private hote hai Encapsulation me taki variable me koi change nahi kar sake nahi to condition hi fulfilled nahi hogi if change kar diya kisi ne to
int q;

 
 public: void setP(int input) //function ko public kar rakha hai taki jo vo change karna chahe kar sakte hai
{
 p= input;
 q= p/2;
}
   };
   int main ()
   {
      KG obj ;
      obj.setP(6);
    
      
      return 0;



   }