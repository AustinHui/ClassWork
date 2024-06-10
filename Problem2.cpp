#include<iostream>
using namespace std;

//function to add 50 to int
int add(int x) {
    int answer;
    answer = x + 50;
    return answer;
}

int main() {
    //intializing
    int choice;
    int result;

    //user input
    cout << "Please Pick A Number: ";
    cin >> choice;

    //call to function and print
    result = add(choice);
    cout << "Here Is Your Increased Number: " << result << endl;
    
    return 0;
}