#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ITEM 22: make class members private

class Camera{
    private:
        string lens, name, model;
        int megapixels;

    public:
        Camera(string name, string model, string lens, int megapixels):lens(lens), name(name), model(model), megapixels(megapixels){

        }

        string getLens(){
            return lens;
        }
        string getName(){
            return name;
        }
        string getModel(){
            return model;
        }
        int getMegapixels(){
            return megapixels;
        }
};

// ITEM 23: use non-member functions

void printDetails(Camera *c){
    cout << "Camera name: " << c->getName() << "\n";
    cout << "Camera model: " << c-> getModel() << "\n";
    cout << "Camera lens: " << c->getLens() << "\n";
    cout << "Megapixel coumt: " << c->getMegapixels() << "\n";
}

int main(void){

    Camera *c1 = new Camera("Nikon", "D750", "50 mm f/1.4", 24);
    printDetails(c1);

    cout << "Camera name: " << c1->getName() << "\n";
    cout << "Camera lens: " << c1->getLens() << "\n";


    return 0;

}