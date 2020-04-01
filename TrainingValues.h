#ifndef PERCEPTRON_TRAININGVALUES_H
#define PERCEPTRON_TRAININGVALUES_H

#include "Point.h"
#include <vector>

extern const int size;

class TrainingValues {
public:
    TrainingValues();

    void new_points();

    int getX(int index);

    int getY(int index);

    int getSign(int index);

private:
    std::vector<Point> points;
};


#endif //PERCEPTRON_TRAININGVALUES_H
