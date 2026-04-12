#include "formatter_ex.h"
#include <sstream>
#include "formatter.h"

std::ostream& format_ex(std::ostream& out, const std::string& message)
{
    out<<message;
    return out;
}
