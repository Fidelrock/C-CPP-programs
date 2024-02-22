//Fidelis Odhiambo
//EB3/56461/21

#include <iostream>

using namespace std;

int main() {
    double height, weight, bmi;

    // Reading height and weight from the user
    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;

    // Calculating BMI
    bmi = weight / (height * height);

    // Displaying BMI
    cout << "Your BMI is: " << bmi << endl;

    // Determining BMI category using switch statement
    int bmiCategory;
    if (bmi < 20) {
        bmiCategory = 1; // Lower than normal weight
        
    } else if (bmi >=20 && bmi<= 25) {
        bmiCategory = 2; // Normal weight
       
    } else if (bmi >=26 && bmi<= 30) {
        bmiCategory = 3; // Overweight
        
    } else if(bmi>=31 && bmi<= 40) {
        bmiCategory = 4; //Obese
        
    }

	else if(bmi> 40){
		bmiCategory = 5;//Extreme obese
	}
    // Providing corresponding message based on BMI category
    switch(bmiCategory) {
        case 1:
            cout << "You have a Lower than normal weight." << endl;
            break;
        case 2:
            cout << "You have a normal weight." << endl;
            break;
        case 3:
            cout << "You are overweight." << endl;
            break;
        case 4:
            cout << "You are obese." << endl;
            break;
        case 5:
        	cout<<"You are extremely obese"<<endl;
        default:
            cout << "Invalid BMI category." << endl;
            break;
    }

    return 0;
}
