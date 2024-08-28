
//WARNING: File contains extremely advanced math
#include <iostream>

using namespace std;

int main()
{
    float A;
    float B;
    float X;

    cout << "Good day, it's time for basic algebra, idiot. We will solve:" << endl << "Ax + B = 0" << endl << "For x" << endl;

    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "Please enter a value for B: ";
    cin >> B;

    cout << "Solving" << " " << A << "x + " << B << " = 0 ..." << endl;
    
    X = (A / -B);

    cout << "X=" << X << endl;
}

