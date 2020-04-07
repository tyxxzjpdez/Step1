#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#else
#include<cmath>
#endif
#include<iostream>

int main(int argc, char* argv[]){
    if (argc < 2) {
    // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }else{
        const double inputValue = std::stod(argv[1]);
        #ifdef USE_MYMATH
        const double outputValue = mysqrt(inputValue);
        #else
        const double outputValue = std::sqrt(inputValue);
        #endif
        std::cout << inputValue << " is " << outputValue << std::endl;
        return 0;
    }
}
