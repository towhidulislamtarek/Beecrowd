#include <iostream>
#include <iomanip> // for std::setprecision

int main() {
    int time, speed;
    
    // Read input values
    std::cin >> time >> speed;
    
    // Calculate distance
    double distance = time * speed;
    
    // Calculate fuel needed (car does 12 km/L)
    double fuel_needed = distance / 12.0;
    
    // Print the result with 3 decimal places
    std::cout << std::fixed << std::setprecision(3) << fuel_needed << std::endl;
    
    return 0;
}
