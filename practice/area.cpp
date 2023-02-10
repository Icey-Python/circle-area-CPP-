#include <iostream>
#include <math.h>
using namespace std;

class Circle{
    public:
        int radius;
        float findArea(int s);
        float findCircumference(int s);
};

//functions
float Circle::findArea(int s){
    return (M_PI * pow(s,2));    
}

float Circle::findCircumference(int s){
    return (M_PI * (2*s));
}

int main(){
    Circle circle;
    int r = circle.radius;
    
    cout<<"Program to calculate area and circumference of a circle\n\n";
    
    cout<<"Enter the radius: ";
    cin>>r;

    cout<<"Area: "<<circle.findArea(r)<<"\n";
    cout<<"Circumference: "<<circle.findCircumference(r)<<"\n";

    return 0;
}