#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <cmath>

using namespace std;

// C++ sucks



class Point{
    private:
        int x,y;
    public:
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        Point(int x_, int y_):x(x_),y(y_)
        {}

};

float euclidianDistance(Point a, Point b){
    int x_a = a.getX();
    int x_b = b.getX();

    int y_a = a.getY();
    int y_b = b.getY();

    return sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2));

}


class Figure{
    protected:
        vector<Point> points;

    public:
        float getPerimeter(){
            float dist = 0;
            for(int i=0; i<3; i++){
                Point temp1 = points[i];
                Point temp2 = points[i+1];

                dist += euclidianDistance(temp1, temp2);
            }
            return dist;
        }
        vector<Point> getPoints(){
            return points;
        }

        void modifyPoint(int index, Point newPoint){
            points[index] = newPoint;
        }

        void addPoint(Point p){
            points.push_back(p);
        }

        virtual string classname(){

        }
};

class Circle:public Figure{
    static Circle *instance;
    protected:
        int radius;
        Point origin;

    private:
        Circle(Point origin_, int radius_):origin(origin_), radius(radius_){}
    public:
        int getRadius(){
            return radius;
        }

        float getPerimeter(){
            return 2*3.14*radius;
        }

        static Circle *getCircle(Point origin, int radius){
            if(!instance){
                instance = new Circle(origin, radius);
                instance->radius = radius;
                instance->origin = origin;

                return instance;
            }
            else{
                throw -1;
            }
        }

        static Circle *getInstance(){
            return instance;
        }

        void modifyOrigin(Point newPoint){
            origin = newPoint;
        }

        void addPoint(Point p){
            cout << "For circle, use the modifyPoint method\n";
        }

        string classname(){
            return "circle";
        }

        Point getOrigin(){
            return instance->origin;
        }


        
        
};


class Rectangle:public Figure{
    public:
        Rectangle(){
            cout << "Created new rectangle \n";
        }

        string classname(){
            return "rectangle";
        }

        
};

class Triangle:public Figure{
    public:
        Triangle(){
            cout << "Created new triangle \n";
        }
        string classname(){
            return "triangle";
        }
};

class Pentagon:public Figure{
    public:
        Pentagon(){
           cout << "Ceated new pentagon \n";
        }
        string classname(){
            return "pentagon";
        }
};

template <class Figure>
float getSlopeOf2Points(Figure f){
    vector<Point> points = f->getPoints();
    Point point_a = points[0];
    Point point_b = points[1];

    int x_a = point_a.getX();
    int x_b = point_b.getX();

    int y_a = point_a.getY();
    int y_b = point_b.getY();

    return (y_b - y_a) / (x_b - x_a);
}

template <class Figure>
bool figureOverlapsCircle(Figure *f){
    vector<Point> figPoint = f->getPoints();
    
    Circle *circ = Circle::getInstance(); 
    Point center = circ->getOrigin();
    int radius = circ->getRadius();
    for(int i = 0; i < figPoint.size(); i++){
        int x = figPoint[i].getX();
        int y = figPoint[i].getY();

        int a = center.getX();
        int b = center.getY();

        if(pow(x-a, 2) + pow(y-b,2) == pow(radius,2))
            return true;
    }
    return false;
}

Circle *Circle::instance = 0;


int main(void){
    int choice;
    vector<Figure*> shapes; 
    cout << "Enter a choice: \n";
    cout << "1 - New rectangle \n";
    cout << "2 - New triangle \n";
    cout << "3 - New cicle \n"; 
    cout << "4 - New pentagon \n";
    cout << "5 - Slope of side of shape: \n";
    cout << "6 - Check for overlap with circle: \n";
    cout << "7 - Exit\n";
    while(true){
    cin >> choice; cout << "\n";            
    switch(choice){
        case 1:{
            Rectangle *r = new Rectangle();
            for(int i = 0; i<4;i++){
                cout << "Enter coordonates for point " << i << " :\n";
                int x, y;
                cout << "x = "; cin >> x; cout << " \n";
                cout << "y = "; cin >> y; cout << " \n";
                Point p(x, y);
                r->addPoint(p);
            }
                shapes.push_back(r);
                break;
            }
        case 2:
            {
                Triangle *t = new Triangle();
                for(int i = 0; i<3;i++){
                    cout << "Enter coordonates for point " << i << " :\n";
                    int x, y;
                    cout << "x = "; cin >> x; cout << " \n";
                    cout << "y = "; cin >> y; cout << " \n";
                    Point p(x, y);
                    t->addPoint(p);
                }
                shapes.push_back(t);
                break;
            }
        case 3:
            
           { 
                cout << "Enter origin coords: \n";
                int x,y,rad;
                cout << "x = "; cin >> x; cout << "\n";
                cout << "y = "; cin >> y; cout << "\n";
                cout << "Enter radius: "; cin >> rad; cout << "\n";
                Point origin(x,y);
                Circle *c = Circle::getCircle(origin, rad);
                break;
            }
        case 4:
            {
                Pentagon *pent = new Pentagon();
                for(int i = 0; i<5;i++){
                    cout << "Enter coordonates for point " << i << " :\n";
                    int x, y;
                    cout << "x = "; cin >> x; cout << " \n";
                    cout << "y = "; cin >> y; cout << " \n";
                    Point p(x, y);
                    pent->addPoint(p);
                }
                shapes.push_back(pent);
                break;
            }
        
        case 5:
            {
                int index;
                cout << "Choose between 1 and " << shapes.size() << "\n";
                cin >> index;
                Figure *f = shapes[index];
               
                float m = getSlopeOf2Points(f);
                cout << "Slope: " << m << "\n";

                break;
            }

        case 6:
            {
                int index;
                cout << "Choose between 0 and " << shapes.size()-1 << "\n";
                cin >> index;
                Figure *f = shapes[index];
                Circle *c = Circle::getInstance();
                if(!c){
                    cout << "Circle instance has not been initialized\n";
                }else{
                    cout << "Chosen shape overlaps with circle: " << figureOverlapsCircle(f) << "\n";
                }
            break;

            }

        case 7:{
            cout << "Bye\n";
            return 0;
            }

        default:
            cout << "Bad choice, try again \n";
        }
    }
    return 0;
}