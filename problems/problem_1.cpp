#include <iostream>

float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    if (consumed_water > 60) {
        cost += (consumed_water - 60) * 1.5; //additional
    } else if (consumed_water > 50) {
        cost += (consumed_water - 50) * 1.4; //10
    } else if (consumed_water > 30) {
        cost += (consumed_water - 30) * 0.12; //20
    } else {
        cost += consumed_water * 0.4; //30
    }

    cost += 13;

    return cost;
}
