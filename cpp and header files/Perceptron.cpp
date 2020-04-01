#include "Perceptron.h"
#include <random>

// Constructor that initializes x_weight and y_weight to random float values between -1 and 1
Perceptron::Perceptron() {
    float r = -1 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (2)));
    float r2 = -1 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (2)));
    x_weight = r;
    y_weight = r2;
}

// Gets the sum of inputs multiplied by each weight
// sum = (x * x_weight) + (y * y_weight
// Passes value to activation function
int Perceptron::guess(int x, int y) {
    float x1 = x * x_weight;
    float x2 = y * y_weight;
    return activation(x1 + x2);
}

// Activation function
int Perceptron::activation(float sum) {
    if (sum > 0) return 1;
    else return -1;
}

// Trains the perceptron and changes weights accordingly
// x_weight = x_weight + (error * x * lr)
// y_weight = y_weight + (error * x * lr)
void Perceptron::train(int x, int y, int target) {
    int guessed = guess(x, y);
    int error = target - guessed;
    x_weight += error * x * lr;
    y_weight += error * y * lr;
}

float Perceptron::getYWeight() {
    return x_weight;
}

float Perceptron::getXWeight() {
    return y_weight;
}
