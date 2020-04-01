#ifndef PERCEPTRON_POINT_H
#define PERCEPTRON_POINT_H


class Point {
public:
    Point();

    explicit Point(double seed);

    int getX();

    int getY();

    int getSign();

private:
    int x;
    int y;
    int sign;
};


#endif //PERCEPTRON_POINT_H
