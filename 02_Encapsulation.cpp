
// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this,
// you must declare class variables/attributes as private (cannot be accessed from outside the class). 
// If you want others to read or modify the value of a private member, you can provide public get and set methods.

// Why Encapsulation?
// It is considered good practice to declare your class attributes as private (as often as you can). 
//     Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts

// Increased security of data

#include <bits/stdc++.h>
using namespace std;

class Car{
    
  private:
  
    int wheels;
    string name;
    
   public:
        Car(){
            
        }
        
        Car(int wheels, string name){
            this->wheels = wheels;
            this->name = name;
        }
        
        Car(Car& ob){
            this->wheels = ob.wheels;
            this->name = ob.name;
        }

        void get(){
            cout<<this->name<<endl;
        }

        void set(int wheels,string name){
            this->wheels = wheels;
            this->name = name;
        }
    
};

int main()
{
   Car c1(4,"wheels");
   c1.get();
    return 0;
}