#include <iostream>

using namespace std;

class Car{
    public:
        string brand, model;
        int year;

    public:
        Car(string _brand, string _model, int _year):brand(_brand),model(_model),year(_year) // intialisation list
        {}
    
    Car& operator = (const Car &c){return *this;}; // copy operator
    Car(const Car &Car2){ // copy constructor
	    brand = Car2.brand;
	    model = Car2.model;
	    year = Car2.year; 
    }; 

    ~Car(){}; // unimplemented destructor
};

int main(){
    Car masinaBlana("Audi", "A4", 2012);
    Car altaMasinaBlana = Car(masinaBlana);
    Car altaMasinaBlana2(masinaBlana);
    cout << masinaBlana.brand << " " << masinaBlana.model << " " << masinaBlana.year << "\n";
    cout << altaMasinaBlana.brand << " " << altaMasinaBlana.model << " " << altaMasinaBlana.year << " <------ This was copied using the copy constructor\n";
    cout << altaMasinaBlana2.brand << " " << altaMasinaBlana2.model << " " << altaMasinaBlana2.year << " <------ This was copied using the custom assignment operator\n";

    return 0;

}
