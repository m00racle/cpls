#include <iostream>
#include <string>

using namespace std;

class MyBase {
   /* 
     I will convert the super class print() function to empty pure virtual function 
     which consist of assigning zero to the virtual function declaration.

     NOTE: since we now declare MyBase has pure virtual function NO ONE CAN 
     INSTATIATE THIS CLASS AND ONLY CAN INSTATIATE OTHER CLASS THAT INHERIT IT
     AND IMPLEMENT (DEFINED) ITS print pure virtual function. 

     I STILL CAN INSTANTIATE THE TYPE CLASS MyBase BUT THAT OBJECT MUST REFER TO
     OTHER CLASS TYPE OBJECT THAT INHERIT MyBase CLASS (In this case MyDerived)

     See example in main function below!!
   */
  public:
      virtual void print() = 0;
      // NOTE: this kind of assignment of zero only works for virtual!
};

class MyDerived : public MyBase {
   /*  
     Then I will define (override) the pure virtual function here:
   */
  public:
      virtual void print() {
         cout << "inside derived" << endl;
      }
};

int main() {
   /*  
      this is where we instantiate and test the result of overriding the virtual print function
      NOTE: now since 
   */

  // comment out MyBase since now this is merely an interface:
   // MyBase b;
   // instatiate MyDerived 
   MyDerived d;

   // now let's see how the results when each of them calls the print() function
   // but first commented out the MyBase b print function callings.
   // cout << "calling Base print:" << endl;
   // b.print();
   cout << "calling Derived print:" << endl;
   d.print();

   // BUT I CAN STILL USE THE TYPE CLASS MyBase HOWEVER I NEED TO REFERENCE IT TO A MyDerived TYPE OBJECT:
   // I will make MyBase type object but I will reference this to the d (which is a MyDerived type)
   MyBase &bRef = d;
   // let's see what comes out when we called print:
   cout << "calling print from referenced MyBase type object referenced to MyDerived type object:" << endl;
   bRef.print();
   return 0;
}

/*  RUN RESULT:
$ ./main.exe 
calling Derived print:
inside derived
calling print from referenced MyBase type object referenced to MyDerived type object:
inside derived
*/