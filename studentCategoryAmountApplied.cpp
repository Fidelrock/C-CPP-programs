//Fidelis Odhiambo
// EB3/56461/21

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string studentCategory;
    
    long int amount[] = {40000, 30000, 35000, 10000};

    cout << "Enter the student category you applied for: ";
    cin >> studentCategory;

    // You can use the entered student category for further processing here

    if (studentCategory == "Needy") {
        cout << "Allocated: " << amount[0];
    } else if (studentCategory == "Special") {
        cout << "Allocated: " << amount[0];
    } else if (studentCategory == "Single") {
        cout << "Allocated: " << amount[1];
    } else if (studentCategory == "Marginalized") {
        cout << "Allocated: " << amount[2];
    } else if (studentCategory == "Other") {
        cout << "Allocated: " << amount[3];
    } else {
        cout << "Invalid category";
    }

    return 0;
}

