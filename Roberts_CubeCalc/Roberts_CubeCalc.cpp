
//Roberts,Rayleen
//CS_131
//Notes: I'm floored that I don't have to declare a variable for the value of pi;
//       I also find it strange that I have to declare the function, rather than just
//       the variables that go in it. 
//Behaviors Not Implemented: None that I know of. 

#include <iostream>
using namespace std;

double cubeVolume(double w, double l, double h);
double circleA(double r);
double circleC(double r);


int main()
{
    double w;
    double l;
    double h;
    double r;
    double pi = 3.14159;
    int choice;

    cout << "\tGood Afternoon, Welcome to the Geometry Calculator "<<endl;
    cout << "\tYou Can Calculate the Volume of Your Cube or the Area and Circumference of your circle.\n\n";
    cout << "\tPlease Enter 1 for Cube or 2 for Circle-- > ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "\tPlease Enter the Height of Your Cube-->";
        cin >> h;
        cout << "\tPlease Enter the Width of Your Cube-->";
        cin >> w;
        cout << "\tPlease Enter the Lenght of Your Cube-->";
        cin >> l;
        cout << endl << "\tThe Volume of Your Cube Is--> " << cubeVolume(w, l, h) << " cubic units--> Have a Nice Day." << endl;
    }
    else if (choice == 2)
    {
        cout << "\tPlease Enter the Radius of Your Circle-->";
        cin >> r;
        cout << endl << "\tThe Area of Your Circle is--> " << circleA(r) << " square units," << endl;
        cout << "\tand its Circumference is-- > " << circleC(r) << " units around.-----> Have a Nice Day. " << endl;
    }
}

double cubeVolume(double w, double l, double h)
{
    return w * l * h;
}
double circleA(double r)
{  
    return 3.14159*r*r;
}
double circleC(double r)
{
    return 2*3.14159*r;
}