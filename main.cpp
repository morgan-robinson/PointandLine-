#define CATCH_CONFIG_MAIN
#include <iostream>
#include <string>
#include "catch.hpp"
#include "line.h"
#include "point.h"




using namespace std;


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

TEST_CASE("Test line()")
{
    SECTION("first test")
    {
        Point one(2.5, 1.3);
        Point two(5.3, 7.5);
        Line line1(one, two);

        REQUIRE(line1.toString() == "Point 1: [X: 2.5, Y: 1.3], Point 2: [X: 5.3, Y: 7.5]");
        REQUIRE((abs(line1.calculateLength() - 6.8) < 0.01)== true);
    }
}
