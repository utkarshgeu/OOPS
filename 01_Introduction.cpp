#include <bits/stdc++.h>
using namespace std;

class Car{
    
  public:
  
    int wheels;
    string name;
    

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
    
};

int main()
{
    Car c1(4,"Volvo");
    Car c2(6,"Mercedese");
    Car c3(c2);
    cout<<c1.name<<" "<<c1.wheels<<endl; 
    cout<<c2.name<<" "<<c2.wheels<<endl; 
    c3.name = "BMW";
    cout<<c3.name<<" "<<c3.wheels<<endl; 
    
    return 0;
}