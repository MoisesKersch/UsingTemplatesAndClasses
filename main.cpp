#include <iostream>
#include <math.h>
#include <vector>

// by Moises Kerschner
// Learning how to use templates and custom classes together

using namespace std;

// get area, pi times radius
// get diameter(if you know the radius), radius time 2
// get diameter(if you know the area), area divided by pi, the result get the square root, then
// multiply it by 2.
// example: (area = 706.5 ^ 2)
// 706.5 / 3.14 (pi) = 225 << get the square root
// squareRoot(225) = 15 << multiply it by 2
// the diameter is equal to 30.

class Ball
{
private:
    float area;
    const float pi = 3.14;
    float radius;
public:
    Ball(){}

    Ball(float area)
    {
        this->area = area;
    }

    void setArea(float area)
    {
        this->area = area;
    }

    float getDiameter()
    {
        return sqrt(area/pi)*2;
    }

    float getRadius()
    {
        return getDiameter()/2;
    }
};

int main()
{
    vector <Ball> ball;
    ball.push_back(Ball()); // initializing the class using the default constructor.
    // how can I set a value? well, get the index using the vector + the function
    ball.at(0).setArea(706.5);
    // you can also get values...
    cout << ball.at(0).getDiameter();

    // and this is how you initialize a vector of a custom class using the overload constructor.
    ball.push_back(Ball(150));
}

