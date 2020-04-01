/*
 * C++ version of The Coding Train's Perceptron example
 * Link: https://www.youtube.com/watch?v=ntKn5TPHHAk
*/
#include <iostream>
#include "Perceptron.h"
#include "TrainingValues.h"

const int size = 10000; // Amount of points, the more points the higher the accuracy

int main() {
    Perceptron brain;
    TrainingValues points;
    int correct{};
    int incorrect{};
    // Loop to generate a guess based on an x and y value given to the Perceptron without any training
    for (int i = 0; i < size; i++) {
        int guess = brain.guess(points.getX(i), points.getY(i));
        if (guess == points.getSign(i)) correct++;
        else incorrect++;
    }
    std::cout << "BEFORE TRAINING\n";
    std::cout << "---------------\n";
    std::cout << "Correct: " << correct << " Incorrect: " << incorrect << " || ";
    std::cout << ((double) correct / size) * 100 << "% Correct\n";
    std::cout << "x_weight: " << brain.getXWeight() << "\ny_weight: " << brain.getYWeight();
    // Loop to train the perceptron based on the amount of points
    for (int i = 0; i < size; i++) {
        brain.train(points.getX(i), points.getY(i), points.getSign(i));
    }
    // Creates new points
    points.new_points();
    correct = 0;
    incorrect = 0;
    // Loop to generate a guess after training
    for (int i = 0; i < size; i++) {
        int guess = brain.guess(points.getX(i), points.getY(i));
        if (guess == points.getSign(i)) correct++;
        else incorrect++;
    }
    std::cout << "\n---------------\n\n";
    std::cout << "AFTER TRAINING\n";
    std::cout << "---------------\n";
    std::cout << "Correct: " << correct << " Incorrect: " << incorrect << " || ";
    std::cout << ((double) correct / size) * 100 << "% Correct\n";
    std::cout << "x_weight: " << brain.getXWeight() << "\ny_weight: " << brain.getYWeight();
    std::cout << "\n---------------";
    return 0;
}