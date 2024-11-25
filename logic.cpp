
#include <iostream>

#include <cmath>

using namespace std;

int main()

{
    int AB, BC, weight, fuelAB, fuelBC, fuel;
    cout << "Enter distance between A and B: ";
    cin >> AB;
    cout << "Enter distance between B and C: ";
    cin >> BC;
    cout << "Enter weight of cargo: ";
    cin >> weight;

    if (weight <= 500)
    {
        fuelAB = AB;
        fuelBC = BC;
    }
    else if (weight <= 1000)
    {
        fuelAB = AB * 4;
        fuelBC = BC * 4;
    }
    else if (weight <= 1500)
    {
        fuelAB = AB * 7;
        fuelBC = BC * 7;
    }
    else if (weight <= 2000)
    {
        fuelAB = AB * 9;
        fuelBC = BC * 9;
    }
    else
    {
        cout << "The plane does not lift more than 2000 kg." << endl;
        return 0;
    }
    fuel = fuelAB + fuelBC;
    if (fuelAB >= 300 || fuelBC >= 300)
    {
        cout << "Impossible to cover any of the distances." << endl;
    }
    else
    {
        cout << "Minimum fuel needed: " << fuel << endl;
        cout << "Fuel needed for AB: " << fuelAB << endl;
        cout << "Fuel needed for BC: " << fuelBC << endl;

    }

    return 0;

}