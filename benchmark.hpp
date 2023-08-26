#include<iostream>
#include<chrono>
#include<map>
using namespace std;

class TimeUtility{
private:
    chrono::high_resolution_clock::time_point::duration start_ = {};
    chrono::high_resolution_clock::time_point::duration stop_  = {};
    chrono::high_resolution_clock::time_point::duration time_measured_  = {};

public:
    void startBenchmark();
    void endBenchmark();
    uint64_t timeDiff();
    void dispBenchmark(string arg);
};


