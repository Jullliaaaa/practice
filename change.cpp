#include<iostream>
using namespace std;

int main()
{
    int numA = 60;
    int numB = 80;

    numA = numB;
    numB = numA;

    cout << numA << " " << numB << endl;

    return 0;
}