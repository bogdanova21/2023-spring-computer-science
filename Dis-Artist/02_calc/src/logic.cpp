#include "logic.h"
#include <sstream>

namespace calc
{
    std::string Logic::process_math()
    {
        if (expression.empty())
        {
            return "";
        }

        std::istringstream input_ss(expression);
        std::stringstream output_ss;

        int a;
        int b;
        char op;
        input_ss >> a >> op >> b;

        if (op == '+')
        {
            output_ss << a << op << b << "=" << a + b;
        }
        else
        {
            output_ss << a << op << b << "=" << a + b;
        }
        return output_ss.str();
    }
}
#include "logic.h"
#include <sstream>

namespace calc {
    std::string Logic::process_math() {
        if (expression.empty())
            return "";
        std::string input_ss;
        input_ss.append(expression);
        std::string output_ss;
        double a = te_interp(input_ss.c_str(), 0);
        output_ss = std::to_string(a);
        output_ss.erase(output_ss.find_last_not_of('0') + 1, std::string::npos);
        if (output_ss.back() == '.')
            output_ss.replace(output_ss.find('.'), output_ss.find('.') + 1, "");

        return output_ss;
    }
}
