#include "windchillindex.h"
#include <iostream>

using std::cout;
using std::endl;
using edu::vcccd::vc::csv13::computeWindChillIndex;



int main(int argc, char  *argv[])
{
    cout << "The temperature is currently " << computeWindChillIndex(9.0,2.0) << endl;
    return 0;
}