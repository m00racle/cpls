// expre_Expressions_with_Pointer_Member_Operators2.cpp
// C2440 expected
#include <iostream>
#include <cmath>

using namespace std;

class EquilateralTriangle {
   private:
      float circumference;
      float area;
   public:
      void setData(float length) {
         circumference = length*3;
         area = (1.73 * length * length) / 4;
      }

      // now I want to make function to print the data (circumference and area)
      // but I want to define it ouiside the class member
      friend void PrintData(EquilateralTriangle et);
      //NOTE: this is declaration of a function that returns void and take EquilateralTriangle type argument.
      // the definition of this function will be made outside the class member

      friend class ModEquilateral;
};

// here is the definition of the PrintData function from the EquilateralTriangle class
// I can't help to find this as alternative to operator overloading cout... which is my more of my choice
void PrintData(EquilateralTriangle et) {
   cout << "circumference: " << et.circumference << endl;
   cout << "area: " << et.area << endl;
}
// since PrintData is the friend of the class EquilateralTriangle Then it can access :
// circumference and area data directly without using getter public functions. 

class ModEquilateral {
   public:
      float getHeight(EquilateralTriangle et) {
      return sqrt(pow(et.circumference/3, 2) - pow(et.circumference/6, 2));
   }
};

class RightTriangle : public EquilateralTriangle {
   private:
      float circumference;
      float area;
   public:
      // override setData
      void setData(float b, float h) {
         circumference = sqrt(pow(b,2) + pow(h,2)) + b + h;
         area = b*h/2;
      }

      float getCircumference() {
         return circumference;
      }

      float getArea() {
         return area;
      }
};

// let's test it:
int main() {
   // instantiate trangle 
   EquilateralTriangle triangle;
   // set the data
   triangle.setData(3);
   PrintData(triangle);

   // NOTE: when calling PrintData function I don't use triangle instantiation since this is outside the class member

   // test friend class
   // instantiate the modTriangle
   ModEquilateral mt;
   cout << "triangle height: " << mt.getHeight(triangle) << endl;

   // now let's proof that friend can't be inherited
   // instantiate derived triangle
   RightTriangle rt;
   rt.setData(3,4);
   PrintData(rt);
   /*  
   Be careful with this part. 
   There are no error detected by the linter 
   There are no error detected by the compiler

   However when I ran the code the result on this Right Triangle is wrong
   */
  // let's prove the correct results on right triangle
  cout << "Right Triangle data \n" << "circumference: " << rt.getCircumference() << endl;
  cout << "area: " << rt.getArea() << endl;

   return 0;
}

/* 
Run Result:
USER@DESKTOP-M00RACLE MINGW64 /e/Cpls/sandbox/source (main)
$ ./main.exe 
circumference: 9
area: 3.8925
triangle height: 2.59808   
circumference: -2.33855e+13
area: 1.01314e-42
Right Triangle data        
circumference: 12
area: 6
 */