#include <iostream>
using namespace std;

int main() {
    int distance;  // distance in km
    cin >> distance;

    int speedX = 60; // km/h
    int speedY = 90; // km/h

    int relativeSpeed = speedY - speedX; // km/h
    double timeHours = (double)distance / relativeSpeed; // time in hours
    int timeMinutes = timeHours * 60; // convert to minutes

    cout << timeMinutes << " minutos" << endl;

    return 0;
}
