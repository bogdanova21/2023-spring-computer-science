#ifndef LOGIC_HPP
#define LOGIC_HPP

#include <string>
#include <cmath>
#include "tinyexpr.h"


namespace calc
{

    struct Logic
    {
        std::string process_math();
        std::string expression;
    };

}

#endif // LOGIC_HPP
