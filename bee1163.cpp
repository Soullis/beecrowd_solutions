#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Use const for values that don't change.
    // Use long double for high precision.
    const long double g = 9.80665;
    const long double pi = acos(-1.0L);

    long double h, p1, p2, a, v;
    int n;

    // Read test cases until End-of-File (EOF).
    while (std::cin >> h >> p1 >> p2) {
        std::cin >> n;

        for (int i = 0; i < n; ++i) {
            std::cin >> a >> v;

            // Step A: Decompose velocity
            // Convert angle from degrees to radians
            long double alpha_rad = (a * pi) / 180.0;
            long double vx = v * cos(alpha_rad);
            long double vy = v * sin(alpha_rad);

            // Step B: Calculate time of flight using the quadratic solution
            long double t = (vy + sqrt(vy * vy + 2 * g * h)) / g;

            // Step C: Calculate the final horizontal distance
            long double x_distance = vx * t;

            // Print the result and check if it's a DUCK or NUCK
            std::cout << std::fixed << std::setprecision(5) << x_distance << " -> ";
            if (x_distance >= p1 && x_distance <= p2) {
                std::cout << "DUCK" << std::endl;
            } else {
                std::cout << "NUCK" << std::endl;
            }
        }
    }

    return 0;
}