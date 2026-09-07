#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/power_calc.hpp"

TEST_CASE( "it computes the power of a number" ) {
    REQUIRE(naivePower(1, 1) == 1);
    REQUIRE(naivePower(2, 2) == 4);
    REQUIRE(naivePower(4, 3) == 64);
}

TEST_CASE("benchmarking each power calculation function") {
    
    // 1 ---------------------------------------------------------

    BENCHMARK("naivePower(1,1)") {
        return naivePower(1,1);
    };

    BENCHMARK("naivePower(1,10)") {
        return naivePower(1,10);
    };

    BENCHMARK("naivePower(1,100)") {
        return naivePower(1,100);
    };

    BENCHMARK("naivePower(1,1000)") {
        return naivePower(1,1000);
    };

    BENCHMARK("naivePower(1,10000)") {
        return naivePower(1,10000);
    };

    BENCHMARK("naivePower(1,100000)") {
        return naivePower(1,100000);
    };

    BENCHMARK("naivePower(1,1000000)") {
        return naivePower(1,1000000);
    };

    BENCHMARK("naivePower(1,10000000)") {
        return naivePower(1,10000000);
    };

    BENCHMARK("naivePower(1,100000000)") {
        return naivePower(1,100000000);
    };

    BENCHMARK("naivePower(1,1000000000)") {
        return naivePower(1,1000000000);
    };

    // 10 ------------------------------------------------------

    BENCHMARK("naivePower(10,1)") {
        return naivePower(10,1);
    };

   BENCHMARK("naivePower(10,10)") {
        return naivePower(10,10);
    };

    BENCHMARK("naivePower(10,100)") {
        return naivePower(10,100);
    };

    BENCHMARK("naivePower(10,1000)") {
        return naivePower(10,1000);
    };

    BENCHMARK("naivePower(10,10000)") {
        return naivePower(10,10000);
    };

    BENCHMARK("naivePower(10,100000)") {
        return naivePower(10,100000);
    };

    BENCHMARK("naivePower(10,1000000)") {
        return naivePower(10,1000000);
    };

    BENCHMARK("naivePower(10,10000000)") {
        return naivePower(10,10000000);
    };

    BENCHMARK("naivePower(10,100000000)") {
        return naivePower(10,100000000);
    };

    BENCHMARK("naivePower(10,1000000000)") {
        return naivePower(10,1000000000);
    };

    // 100 --------------------------------------------------------

    BENCHMARK("naivePower(100,1)") {
        return naivePower(100,1);
    };

    BENCHMARK("naivePower(100,10)") {
        return naivePower(100,10);
    };

    BENCHMARK("naivePower(100,100)") {
        return naivePower(100,100);
    };

    BENCHMARK("naivePower(100,1000)") {
        return naivePower(100,1000);
    };

    BENCHMARK("naivePower(100,10000)") {
        return naivePower(100,10000);
    };

    BENCHMARK("naivePower(100,100000)") {
        return naivePower(100,100000);
    };

    BENCHMARK("naivePower(100,1000000)") {
        return naivePower(100,1000000);
    };

    BENCHMARK("naivePower(100,10000000)") {
        return naivePower(100,10000000);
    };

    BENCHMARK("naivePower(100,100000000)") {
        return naivePower(100,100000000);
    };

    BENCHMARK("naivePower(100,1000000000)") {
        return naivePower(100,1000000000);
    };

    // 1000 ------------------------------------------------------

    BENCHMARK("naivePower(1000,1)") {
        return naivePower(1000,1);
    };

    BENCHMARK("naivePower(1000,10)") {
        return naivePower(1000,10);
    };

    BENCHMARK("naivePower(1000,100)") {
        return naivePower(1000,100);
    };

    BENCHMARK("naivePower(1000,1000)") {
        return naivePower(1000,1000);
    };

    BENCHMARK("naivePower(1000,10000)") {
        return naivePower(1000,10000);
    };

    BENCHMARK("naivePower(1000,100000)") {
        return naivePower(1000,100000);
    };

    BENCHMARK("naivePower(1000,1000000)") {
        return naivePower(1000,1000000);
    };

    BENCHMARK("naivePower(1000,10000000)") {
        return naivePower(1000,10000000);
    };

    BENCHMARK("naivePower(1000,100000000)") {
        return naivePower(1000,100000000);
    };

    BENCHMARK("naivePower(1000,1000000000)") {
        return naivePower(1000,1000000000);
    };
    
    // 10000 -----------------------------------------------------

    BENCHMARK("naivePower(10000,1)") {
        return naivePower(10000,1);
    };

    BENCHMARK("naivePower(10000,10)") {
        return naivePower(10000,10);
    };

    BENCHMARK("naivePower(10000,100)") {
        return naivePower(10000,100);
    };

    BENCHMARK("naivePower(10000,1000)") {
        return naivePower(10000,1000);
    };

   BENCHMARK("naivePower(10000,10000)") {
        return naivePower(10000,10000);
    };

    BENCHMARK("naivePower(10000,100000)") {
        return naivePower(10000,100000);
    };

    BENCHMARK("naivePower(10000,1000000)") {
        return naivePower(10000,1000000);
    };

    BENCHMARK("naivePower(10000,10000000)") {
        return naivePower(10000,10000000);
    };

    BENCHMARK("naivePower(10000,100000000)") {
        return naivePower(10000,100000000);
    };

    BENCHMARK("naivePower(10000,1000000000)") {
        return naivePower(10000,1000000000);
    };

    // 100000 ----------------------------------------------------

    BENCHMARK("naivePower(100000,1)") {
        return naivePower(100000,1);
    };

    BENCHMARK("naivePower(100000,10)") {
        return naivePower(100000,10);
    };

    BENCHMARK("naivePower(100000,100)") {
        return naivePower(100000,100);
    };

    BENCHMARK("naivePower(100000,1000)") {
        return naivePower(100000,1000);
    };

   BENCHMARK("naivePower(100000,10000)") {
        return naivePower(100000,10000);
    };

    BENCHMARK("naivePower(100000,100000)") {
        return naivePower(100000,100000);
    };

    BENCHMARK("naivePower(100000,1000000)") {
        return naivePower(100000,1000000);
    };

    BENCHMARK("naivePower(100000,10000000)") {
        return naivePower(100000,10000000);
    };

    BENCHMARK("naivePower(100000,100000000)") {
        return naivePower(100000,100000000);
    };

    BENCHMARK("naivePower(100000,1000000000)") {
        return naivePower(100000,1000000000);
    };

    // 1000000 ---------------------------------------------------

    BENCHMARK("naivePower(1000000,1)") {
        return naivePower(1000000,1);
    };

    BENCHMARK("naivePower(1000000,10)") {
        return naivePower(1000000,10);
    };

    BENCHMARK("naivePower(1000000,100)") {
        return naivePower(1000000,100);
    };

    BENCHMARK("naivePower(1000000,1000)") {
        return naivePower(1000000,1000);
    };

   BENCHMARK("naivePower(1000000,10000)") {
        return naivePower(1000000,10000);
    };

    BENCHMARK("naivePower(1000000,100000)") {
        return naivePower(1000000,100000);
    };

    BENCHMARK("naivePower(1000000,1000000)") {
        return naivePower(1000000,1000000);
    };

    BENCHMARK("naivePower(1000000,10000000)") {
        return naivePower(1000000,10000000);
    };

    BENCHMARK("naivePower(1000000,100000000)") {
        return naivePower(1000000,100000000);
    };

    BENCHMARK("naivePower(1000000,1000000000)") {
        return naivePower(1000000,1000000000);
    };

    // 10000000 --------------------------------------------------

    BENCHMARK("naivePower(10000000,1)") {
        return naivePower(10000000,1);
    };

    BENCHMARK("naivePower(10000000,10)") {
        return naivePower(10000000,10);
    };

    BENCHMARK("naivePower(10000000,100)") {
        return naivePower(10000000,100);
    };

    BENCHMARK("naivePower(10000000,1000)") {
        return naivePower(10000000,1000);
    };

   BENCHMARK("naivePower(10000000,10000)") {
        return naivePower(10000000,10000);
    };

    BENCHMARK("naivePower(10000000,100000)") {
        return naivePower(10000000,100000);
    };

    BENCHMARK("naivePower(10000000,1000000)") {
        return naivePower(10000000,1000000);
    };

    BENCHMARK("naivePower(10000000,10000000)") {
        return naivePower(10000000,10000000);
    };

    BENCHMARK("naivePower(10000000,100000000)") {
        return naivePower(10000000,100000000);
    };

    BENCHMARK("naivePower(10000000,1000000000)") {
        return naivePower(10000000,1000000000);
    };

    // 100000000 -------------------------------------------------

    BENCHMARK("naivePower(100000000,1)") {
        return naivePower(100000000,1);
    };

    BENCHMARK("naivePower(100000000,10)") {
        return naivePower(100000000,10);
    };

    BENCHMARK("naivePower(100000000,100)") {
        return naivePower(100000000,100);
    };

    BENCHMARK("naivePower(100000000,1000)") {
        return naivePower(100000000,1000);
    };

   BENCHMARK("naivePower(100000000,10000)") {
        return naivePower(100000000,10000);
    };

    BENCHMARK("naivePower(100000000,100000)") {
        return naivePower(100000000,100000);
    };

    BENCHMARK("naivePower(100000000,1000000)") {
        return naivePower(100000000,1000000);
    };

    BENCHMARK("naivePower(100000000,10000000)") {
        return naivePower(100000000,10000000);
    };

    BENCHMARK("naivePower(100000000,100000000)") {
        return naivePower(100000000,100000000);
    };

    BENCHMARK("naivePower(100000000,1000000000)") {
        return naivePower(100000000,1000000000);
    };

    // 1000000000 ------------------------------------------------
    
    BENCHMARK("naivePower(1000000000,1)") {
        return naivePower(1000000000,1);
    };

    BENCHMARK("naivePower(1000000000,10)") {
        return naivePower(1000000000,10);
    };

    BENCHMARK("naivePower(1000000000,100)") {
        return naivePower(1000000000,100);
    };

    BENCHMARK("naivePower(1000000000,1000)") {
        return naivePower(1000000000,1000);
    };

   BENCHMARK("naivePower(1000000000,10000)") {
        return naivePower(1000000000,10000);
    };

    BENCHMARK("naivePower(1000000000,100000)") {
        return naivePower(1000000000,100000);
    };

    BENCHMARK("naivePower(1000000000,1000000)") {
        return naivePower(1000000000,1000000);
    };

    BENCHMARK("naivePower(1000000000,10000000)") {
        return naivePower(1000000000,10000000);
    };

    BENCHMARK("naivePower(1000000000,100000000)") {
        return naivePower(1000000000,100000000);
    };

    BENCHMARK("naivePower(1000000000,1000000000)") {
        return naivePower(1000000000,1000000000);
    };
}
