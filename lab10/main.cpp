#include <iostream>
#include <list>

using namespace std;

class Bird{
    public:
        Bird(){};
        virtual void sound(){};
        virtual void fly(){};
};

class Parrot:public Bird{
    private:
        list<string> knownWords; 
        string name;

    public:
        Parrot(){}

        void learnToSay(string word){

            knownWords.push_back(word);
        }
        void printKnownWords(){
            cout << "These are the words I know: \n" ;
            list <string>::iterator it;
            for(it = knownWords.begin(); it != knownWords.end(); ++it){
                cout << *it << "\n";
            }
        }
        void fly(){
            cout  << "Parrots can fly for 100 m in one go \n"; 
        }

        void sound(){
            cout << "I don't know what sound a parrot makes\n";
        }
};



class Ostrich:public Bird{

    private:
        Ostrich(){

        }
    
    public:

        static Ostrich *instance;
        static Ostrich* getInstance(){
            if(!Ostrich::instance){
                Ostrich::instance = new Ostrich;
                return instance;
            }
        }

        void fly(){
            cout << "An ostrich can't fly\n";
        }
        void sound(){
            cout <<"asldkfhadsjlk;fh\n";
        }

};

class Chicken:public Bird{
    private:
        
        Chicken(){
            
        }
    public:
        static int chickenCount; 
        static Chicken getNewChicken(){
            if(Chicken::chickenCount < 30){
                Chicken temp;
                Chicken::chickenCount++;
                return temp;
            }else{
                cout << "Can't create more than 30 chickens\n";

            }
        }

        void fly(){
            cout << "Flies for 9m\n";
        }
        void sound(){
            cout << "Bok bok\n"; 
        }
        Bird* sell(string otherBird){
            Chicken::chickenCount--;
            if(otherBird == "parrot"){
                Bird *temp = new Parrot();
                return temp;
            }else if(otherBird == "ostrich"){
                Bird *temp = Ostrich::getInstance();
                return temp;

            }
        }

};

int Chicken::chickenCount = 0;
Ostrich *Ostrich::instance = 0;

int main(void){

    Parrot *paulie = new Parrot();

    cout << "Parrot: \n";
    paulie->learnToSay("vodka");
    paulie->learnToSay("alcoholic");
    paulie->learnToSay("help me");
    paulie->printKnownWords();
    paulie->sound();
    paulie->fly();

    Chicken chicken1 = Chicken::getNewChicken();
    Chicken chicken2 = Chicken::getNewChicken();


    cout << "\nChicken 1: \n";
    chicken1.fly();
    chicken1.sound();

    cout << "\nChicken 2: \n";
    chicken2.fly();
    chicken2.sound();


    cout << "Ostrich: \n";
    Ostrich *ostrich1 = Ostrich::getInstance();
    ostrich1->fly();
    ostrich1->sound();


    return 0;
}

