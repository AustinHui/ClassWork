#include<iostream>
using namespace std;

//function to calculate the area of the triangle
int area(int x, int y){
    int answer;
    answer = (x * y)/2;
    return answer;
}

int main() {
    //initializing
    int base;
    int height;
    int areaTriangle;

    //user input of base and height
    cout << "Please Enter The Base and Height Of A Triangle" << endl;
    cout << "Base:";
    cin >> base;
    cout << "Height:";
    cin >> height;

    //call to the function and print
    areaTriangle = area(base, height);
    cout << "The Area Of Your Triangle is " << areaTriangle << endl;

    return 0;
}


