#ifndef PERCEPTRON_PERCEPTRON_H
#define PERCEPTRON_PERCEPTRON_H


class Perceptron {
public:
    Perceptron();

    int guess(int x, int y);

    int activation(float sum);

    void train(int x, int y, int target);

    float getXWeight();

    float getYWeight();

private:
    float x_weight;
    float y_weight;
    float lr = 0.1;
};


#endif //PERCEPTRON_PERCEPTRON_H
