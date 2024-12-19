#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
#include <string>
#include <limits>
#include <conio.h>
using namespace std;

// Ignore Above Header Files


class rectangle
{
    float length, breadth, area;
    public:
    void inputData()
    {
        cout<<"Enter Length and Breadth: ";
        cin >> length >> breadth;
    }

    void calculateArea()
    {
        area = length*breadth;
    }

    void DisplayData()
    {
        cout<<"The Length Of The Rectangle is " << length << endl;
        cout<<"The Breadth Of The Rectangle is " << breadth << endl;
        cout<<"The Area Of The Rectangle is " << area << endl;
    }

};

int main()
{
    rectangle arr[5];

    for(int i = 0; i < size(arr); i++)
    {
        cout<<"\nNow, Enter The Details For Object: "<< i+1 <<endl;
        arr[i].inputData();
        arr[i].calculateArea();
    }

    for(int i = 0; i < size(arr); i++)
    {
        cout<<"\nThe Data Of The Object: "<< i+1 << endl; 
        arr[i].DisplayData();
    }
    return 0;
}
