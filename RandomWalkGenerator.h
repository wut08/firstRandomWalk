#ifndef _CppOptions_RandomWalkGenerator_
#define _CppOptions_RandomWalkGenerator_
#include<vector>

class RandomWalkGenerator {
public:
    //class constructors
    RandomWalkGenerator(int size, double start, double step);
    RandomWalkGenerator(const RandomWalkGenerator &p);

    //destructor
    ~RandomWalkGenerator();
    //assignment operator
    RandomWalkGenerator &operator=(const RandomWalkGenerator &p);
    //main method
    std::vector<double> generateWalk();
    //returns a single step
    double computeRandomStep(double currentPrice);
private:
    int m_numSteps;
    double m_stepSize;
    double m_initialPrice;
};

#endif
