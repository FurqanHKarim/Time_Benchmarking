#include"benchmark.hpp"

void TimeUtility::dispBenchmark(string arg)
{   
    map<string, int> key;
    key["ns"] = 1;
    key["us"] = 2;
    key["ms"] = 3;
    key["s"]  = 4;

    switch (key[arg])
    {

    case 0:
        cout<<"Invalid Argument for prefix ";
        break;

    case 1:
        cout<<"Time consumed is  "<<time_measured_.count()<<"ns."<<endl;
        break;

    case 2:
        cout<<"Time consumed is  "<<(time_measured_.count()/(1000))<<"us."<<endl;
        break;

    case 3:
        cout<<"Time consumed is  "<<(time_measured_.count()/(1000000))<<"ms."<<endl;
        break;

    case 4:
        cout<<"Time consumed is  "<<(time_measured_.count()/(1000000000))<<"s."<<endl;

    default:
        break;
    }
}

void TimeUtility:: startBenchmark(){
    this->start_ = chrono::high_resolution_clock::now().time_since_epoch();

}

void TimeUtility::endBenchmark()
{
    this->stop_ = chrono::high_resolution_clock::now().time_since_epoch();
    timeDiff();
}

uint64_t TimeUtility:: timeDiff()
{
    time_measured_ = stop_ - start_;
    return time_measured_.count();
    
}
