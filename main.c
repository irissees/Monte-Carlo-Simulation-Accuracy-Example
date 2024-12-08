#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double generate_random() {
    return (double)rand() / RAND_MAX;
}

void monte_carlo_simulation(int num_points) {
    int inside_circle = 0;
    double x, y;

    for (int i = 0; i < num_points; i++) {
        x = generate_random();
        y = generate_random();

        // Check if the point is inside the quarter circle
        if (x * x + y * y <= 1.0) {
            inside_circle++;
        }
    }

    double monte_carlo_area = (double)inside_circle / num_points;
    double monte_carlo_pi = monte_carlo_area * 4;

    double true_area = M_PI / 4;
    double true_pi = M_PI;

    printf("\nResults for %d points:\n", num_points);
    printf("Monte Carlo Estimate of Area (Quarter-Circle): %f\n", monte_carlo_area);
    printf("True Area (Quarter-Circle): %f\n", true_area);
    printf("Monte Carlo Estimate of Pi: %f\n", monte_carlo_pi);
    printf("True Value of Pi: %f\n", true_pi);
}

int main() {
    int num_points;

    printf("Enter the number of points for the full simulation: ");
    scanf("%d", &num_points);

    srand(time(NULL));

    int half_points = num_points / 2;

    printf("\nSimulation with half of the points:\n");
    monte_carlo_simulation(half_points);

    printf("\nSimulation with all points:\n");
    monte_carlo_simulation(num_points);

    return 0;
}
