#include <iostream>
#include <vector>
#include <string>
#include <math.h> 

using namespace std;

void quadraticRoots(int a, int b, int c)
{
    int D = (b*b)-(4*a*c);
    if(D<0)
    {
        cout << "Imaginary";
    }
    else
    {
        cout<<"SquareRoot is = "<<sqrt(D)<<endl;
        cout<<"-b+sqrt(D) = "<<(-b+sqrt(D))<<endl;
        cout<<"-b+sqrt(D)/2a = "<<(-b+sqrt(D))/(2*a)<<endl;
        int negResult = floor((-b+sqrt(D))/(2*a));
        int posResult = floor((-b-sqrt(D))/(2*a));
        cout<<"Negative result = "<<negResult<<endl;
        cout<<"Positive result = "<<posResult<<endl;

        cout<<negResult<<" "<<posResult<<endl;
    }
}

int main()
{
    quadraticRoots(752, 904, 164);
}