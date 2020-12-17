#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class Pizza{
    private:
        int slices;
        vector<string> ingredients;

    public:
        Pizza(int slices):slices(slices){

        }
        void addIngredient(string ingredient){
            ingredients.push_back(ingredient);
        }
        void eatSlice(){
            slices--;
        }
};

// using unique_ptr, meaning we can't copy a pointer
// avoiding using auto_ptr, so we avoid null references in case of copying stuff

int main(void){
    unique_ptr<Pizza> p1 (new Pizza(8));
    p1 -> addIngredient("pepperoni");
    p1 -> addIngredient("jalapeno");
    p1 -> addIngredient("mozarella");
    p1 -> eatSlice();

    unique_ptr<Pizza> p2(new Pizza(6));
    p2 -> addIngredient("sausage");
    p2 -> addIngredient("gorgonzola");
    p2 -> addIngredient("tomatoes");
    p2 -> eatSlice();

    // p1 = p2; error



    return 0;
}
