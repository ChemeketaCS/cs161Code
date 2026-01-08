#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using doctest::Approx;

bool isEven(int n)
{
  return false; // placeholder implementation
}

TEST_CASE("isEven basic tests")
{
  CHECK(isEven(2) == true);
  CHECK(isEven(4) == true);
  CHECK(isEven(52) == true);

  CHECK(isEven(1) == false);
  CHECK(isEven(3) == false);
  CHECK(isEven(111) == false);
}

// TEST_CASE("isEven special cases") {
//     CHECK(isEven(0) == true);  // 0 is even
//     CHECK(isEven(-2) == true); // negative even number
//     CHECK(isEven(-3) == false); // negative odd number
// }