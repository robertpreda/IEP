#include <iostream>
#include <vector>
#include <iterator>
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

        
        
};


class Rectangle:public Figure{
    public:
        Rectangle(Point a, Point b, Point c, Point d){
            points.push_back(a);
            points.push_back(b);
            points.push_back(c);
            points.push_back(d);
        }

        
};

class Triangle:public Figure{
    public:
        Triangle(Point a, Point b, Point c){
            points.push_back(a);
            points.push_back(b);
            points.push_back(c);
        }
};

template <class Figure>
float getSlopeOf2Points(Figure f){
    vector<Point> points = f.getPoints();
    Point point_a = points[0];
    Point point_b = points[1];

    int x_a = point_a.getX();
    int x_b = point_b.getX();

    int y_a = point_a.getY();
    int y_b = point_b.getY();

    return (y_b - y_a) / (x_b - x_a);
}

template <class Figure>
bool figureOverlapsCircle(Figure f, Circle c){
    vector<Point> figPoint = f.getPoints();
    Point center = c.origin;
    int radius = c.radius;
    for(int i = 0; i < figPoint.size(); i++){
        int x = figPoint[i].getX();
        int y = figPoint[i].getY();

        int a = center.getX();
        int b = center.getY();

        if(pow(x-a, 2) + pow(y-b,2) = pow(radius,2))
            return true;
    }
    return false;
}


int main(void){
    return 0;
}