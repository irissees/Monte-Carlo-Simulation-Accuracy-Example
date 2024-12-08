# Monte Carlo Simulation in C

This project implements a Monte Carlo simulation in C to estimate the value of pi and the area of a quarter circle. 
The program runs the simulation twice: first with half the number of points specified by the user, and then with the full sample size. 
This demonstrates how increasing the sample size improves the accuracy of the Monte Carlo estimation.

## How It Works

The Monte Carlo method approximates the value of pi by randomly generating points inside a unit square and determining how many fall within a quarter circle inscribed within the square. The ratio of points inside the quarter circle to the total points approximates pi/4.

### Formula:

- Area of Quarter Circle = Points Inside Circle Total Points
- Estimate of pi = Area of Quarter Circle times 4

## Features

1. Takes the number of points as input from the user.
2. Runs two simulations:
   - One with half the specified sample size.
   - One with the full sample size.
3. Compares the estimated values with the true values of pi and the quarter-circle area.

