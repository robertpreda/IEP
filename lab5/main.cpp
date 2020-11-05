#include <iostream>

using namespace std;

class Vehicle{
    protected:
        int wheelCount;
    public:
        Vehicle() {};
        virtual ~Vehicle() = 0;
        virtual void makeSound() = 0;
};

Vehicle::~Vehicle(){}

class Bike: public Vehicle {
    public:
        string color;
    public:
        Bike(string _color):color(_color){
            wheelCount = 2;
        }

        void makeSound(){
            cout << "Squeak\n";
        }

        Bike &operator= (const Bike &b){
            if(color==b.color){
                return *this;
            }
            color = b.color;
            return *this;
        }

        string getColor(){
            return color;
        }


};

class Car : public Vehicle{
    public:
        string brand, model;
    public:
        Car(string _brand, string _model):brand(_brand), model(_model){
            wheelCount = 4;
        }
        void makeSound(){
            cout << "Big vroom\n";
        }

        Car &operator=(const Car &c){
            if(brand == c.brand && model == c.model){
                return *this;
            }
            brand = c.brand;
            model = c.model;

            return *this; // I know that there can be multiple cars with the same model and brand, but this is a POC
        }
};



int main(){
    Vehicle *bike1 = new Bike("red");
    Vehicle *car1 = new Car("Trabant", "601");
    Vehicle *bike2 = new Bike("blue");

    car1 = car1; // doesn't crack
    
    // cout << bike1->color << "\n"; // how do I get the value, please C++, be more like Java

    bike1 = bike2;

    // cout << bike1->color << "\n"; 


    return 0;
}