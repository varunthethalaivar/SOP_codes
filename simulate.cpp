#include <iostream>
#include "model_output1.h"
#include "model_output2.h"

int main() {
    float x[] = {
        1.2,  // sensor 1
        0.8,  // sensor 2
        3.5,  // sensor 3
        0.2,  // sensor 4
        7.1   // sensor 5
    };

    Eloquent::ML::Port::RandomForestRegressor1 model1;
    Eloquent::ML::Port::RandomForestRegressor2 model2;

    float y1 = model1.predict_output1(x);
    float y2 = model2.predict_output2(x);

    std::cout << "Output 1: " << y1 << std::endl;
    std::cout << "Output 2: " << y2 << std::endl;

    return 0;
}
