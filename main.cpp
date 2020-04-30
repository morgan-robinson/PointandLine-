#include <iostream>
using namespace std;

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "line.h"
#include "point.h"

TEST_CASE("Test point()")
{
    SECTION("first test")
    {
        Point one(2.2, -1.5);
        Point two(2.5, 1.6);
        Point three(-3.5, 1.7);
        Point four(-1.6, -3.4);
        
        
        REQUIRE(one.toString() == "X: 2.2, Y: 1.5");
        REQUIRE(two.toString() == "X: 2.5, Y: 1.6");
        REQUIRE(three.toString() == "X: 3.5, Y: 1.7");
        REQUIRE(four.toString() == "X: 1.6, Y: 3.4");
    }
}
