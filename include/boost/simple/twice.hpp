#include <string>
namespace boost { namespace simple {
inline std::string twice(const std::string& s)
{
  return s + s;
}
}}
