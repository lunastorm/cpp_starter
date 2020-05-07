#include <doctest/doctest.h>

#include <foo/bar.hpp>

namespace foo
{

int bar() { return 42; }

TEST_CASE("test bar") { CHECK(bar() == 42); }

} // namespace foo