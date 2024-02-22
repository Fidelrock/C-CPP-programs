//Fidelis Odhiambo
//EB3/56461/21


#include <iostream>
#include <string>

using namespace std;

int main() {
    string agentName;
    double salesVolume, commission;

    // Prompting the user to enter the name of the sales agent
    cout << "Enter the name of the sales agent: ";
    getline(cin, agentName); // Allowing spaces in the name

    // Prompting the user to enter the sales volume made
    cout << "Enter the sales volume made: ";
    cin >> salesVolume;

    // Calculating the commission based on the criteria
    if (salesVolume >= 5000) {
        commission = salesVolume * 0.15; // 15% commission for sales volume 5000 and over
    } else if (salesVolume >= 4000) {
        commission = salesVolume * 0.12; // 12% commission for sales volume 4000-4999
    } else if (salesVolume >= 3000) {
        commission = salesVolume * 0.09; // 9% commission for sales volume 3000-3999
    } else if (salesVolume >= 2000) {
        commission = salesVolume * 0.06; // 6% commission for sales volume 2000-2999
    } else {
        commission = salesVolume * 0.03; // 3% commission for sales volume less than 2000
    }

    // Outputting the sales agent's name and commission
    cout << "Sales agent: " << agentName << endl;
    cout << "Commission: KES " << commission << endl;

    return 0;
}
