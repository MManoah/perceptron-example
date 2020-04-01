#include "TrainingValues.h"
#include <chrono>

// Constructor that creates a point and stores in in the points vector
TrainingValues::TrainingValues() {
    auto clock = std::chrono::system_clock::now().time_since_epoch();
    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(clock).count();
    for (int i = 0; i < size; i++) {
        Point temp(seconds + i);
        points.push_back(temp);
    }
}

// Creates new points
void TrainingValues::new_points() {
    auto clock = std::chrono::system_clock::now().time_since_epoch();
    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(clock).count();
    for (int i = 0; i < size; i++) {
        Point temp(seconds + (i + 500));
        points[i] = temp;
    }
}

int TrainingValues::getX(int index) {
    return points[index].getX();
}

int TrainingValues::getY(int index) {
    return points[index].getY();
}

int TrainingValues::getSign(int index) {
    return points[index].getSign();
}

