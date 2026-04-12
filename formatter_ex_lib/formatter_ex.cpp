#include "formatter_ex.h"
#include <sstream>
#include "formatter.h"

std::ostream& formatter(const std::string& text)
{
    out<<text;
    return out;
}
