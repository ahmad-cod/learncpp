// a program the accept two integers a and b.
// Use predefined functions sqrt(x) and pow(x, y) to
// compute the followings:
// 1. Square root of a
// 2. Square root of b
// 3. a power b
// prnt d results

#include <iostream>
#include <cmath>
using namespace std;

float r;
float vol(float r);
void display() {
    cout << "Input the radius of the sphere: \n";
    cin >> r;
    cout << "The radius of the sphere is " << r << "\nand its volume is " << vol(r);
}

int main()
{
    // int a, b;
    // cout << "Input two integers to cal its square root \n";
    // cin >> a >> b;
    // cout << "Square root of a: " << sqrt(a) << "\nSquare root of b: " << sqrt(b);
    // cout << endl;
 
    // cout << a << " power " << b << " = " << pow(a, b) << '\n';

    // cout << "The volume of a sphere of radius 7cm : " << vol(7.0);

    display();

    cout << endl;
    return 0;
}

float vol(float r)
{
    const float PI = 3.142;
    float sphereVol = (4 / 3.0) * PI * pow(r, 3);

    return sphereVol;
}