#include <stdio.h>

int main() {
    int speed = 75;
    int speedLimit = 65;

    printf("Driving down the highway...\n");

    // Standalone if construct
    if (speed > speedLimit) {
        printf("WARNING: You are driving too fast! Please slow down.\n");
    }

    printf("Your current speed is %d mph.\n", speed);

    return 0;
}
