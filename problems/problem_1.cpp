#include <iostream>

float problemSolution1(float consumed_water) {
    float cost, fixed = 13;
    // write your code here

    if (consumed_water <= 30) {
        cost = fixed + (consumed_water * 0.4);
    } else if (consumed_water > 30 && consumed_water <= 50) {
        cost = fixed + ((consumed_water - 30) * 0.12) + (30 * 0.4);
    } else if (consumed_water > 50 && consumed_water <= 60) {
        cost = fixed + ((consumed_water - 50) * 1.4) + (30 * 0.4) + (20 * 0.12);
    } else if (consumed_water > 60) {
        cost = fixed + ((consumed_water - 60) * 1.5) + (30 * 0.4) + (20 * 0.12) + (10 * 1.4);
    }

    return cost;
}
