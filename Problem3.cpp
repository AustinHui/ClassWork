#include<iostream>
#include<iomanip>
using namespace std;

//function to find the average
float averageinator(float x, float y, float z) {
    float result;
    result = (x + y + z)/3.;
    return result;
}

int main() {
    //intializing
    float one;
    float two;
    float three;
    float answer;

    //user input of three numbers
    cout << "Please Enter 3 Numbers Of Your Chosing," << endl;
    
    cout << "Number 1: ";
    cin >> one;

    cout << "Number 2: ";
    cin >> two;

    cout << "Number 3: ";
    cin >> three;

    //call to function
    answer = averageinator(one, two, three);
    //printing with precision in order to include decimals
    cout << "The Average Of These Numbers Is: " << fixed << setprecision(2) << answer << endl;
    
    return 0;
}