#include <boost/simple/twice.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
{
  BOOST_TEST(boost::simple::twice("foo") == "foofoo");
  return ::boost::report_errors();
}
