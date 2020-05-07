#include <cstdio>

#include <foo/foo.hpp>

int main(int argc, char *argv[])
{
    int n = foo::foo();
    printf("Hello world %d\n", n);
}
