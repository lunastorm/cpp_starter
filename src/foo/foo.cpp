#include <doctest/doctest.h>

#include <foo/foo.hpp>
#include <foo/bar.hpp>

namespace foo
{

int foo()
{
    int v = bar();
    return v + 14;
}

TEST_CASE("test foo1") { CHECK(foo() == 42); }
TEST_CASE("test foo2") { CHECK(foo() == 56); }

} // namespace foo