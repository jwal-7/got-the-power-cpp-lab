#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/power_calc.hpp"

TEST_CASE( "it computes the power of a number" ) {
    REQUIRE(unoptimizedDCPower(1, 1) == 1);
    REQUIRE(unoptimizedDCPower(2, 2) == 4);
    REQUIRE(unoptimizedDCPower(4, 3) == 64);
}

TEST_CASE("benchmarking each power calculation function") {
    
    // 1 ---------------------------------------------------------

    BENCHMARK("unoptimizedDCPower(1,1)") {
        return unoptimizedDCPower(1,1);
    };

    BENCHMARK("unoptimizedDCPower(1,10)") {
        return unoptimizedDCPower(1,10);
    };

    BENCHMARK("unoptimizedDCPower(1,100)") {
        return unoptimizedDCPower(1,100);
    };

    BENCHMARK("unoptimizedDCPower(1,1000)") {
        return unoptimizedDCPower(1,1000);
    };

    BENCHMARK("unoptimizedDCPower(1,10000)") {
        return unoptimizedDCPower(1,10000);
    };

    BENCHMARK("unoptimizedDCPower(1,100000)") {
        return unoptimizedDCPower(1,100000);
    };

    BENCHMARK("unoptimizedDCPower(1,1000000)") {
        return unoptimizedDCPower(1,1000000);
    };

    BENCHMARK("unoptimizedDCPower(1,10000000)") {
        return unoptimizedDCPower(1,10000000);
    };

    BENCHMARK("unoptimizedDCPower(1,100000000)") {
        return unoptimizedDCPower(1,100000000);
    };

    BENCHMARK("unoptimizedDCPower(1,1000000000)") {
        return unoptimizedDCPower(1,1000000000);
    };

    // 10 ------------------------------------------------------

    BENCHMARK("unoptimizedDCPower(10,1)") {
        return unoptimizedDCPower(10,1);
    };

   BENCHMARK("unoptimizedDCPower(10,10)") {
        return unoptimizedDCPower(10,10);
    };

    BENCHMARK("unoptimizedDCPower(10,100)") {
        return unoptimizedDCPower(10,100);
    };

    BENCHMARK("unoptimizedDCPower(10,1000)") {
        return unoptimizedDCPower(10,1000);
    };

    BENCHMARK("unoptimizedDCPower(10,10000)") {
        return unoptimizedDCPower(10,10000);
    };

    BENCHMARK("unoptimizedDCPower(10,100000)") {
        return unoptimizedDCPower(10,100000);
    };

    BENCHMARK("unoptimizedDCPower(10,1000000)") {
        return unoptimizedDCPower(10,1000000);
    };

    BENCHMARK("unoptimizedDCPower(10,10000000)") {
        return unoptimizedDCPower(10,10000000);
    };

    BENCHMARK("unoptimizedDCPower(10,100000000)") {
        return unoptimizedDCPower(10,100000000);
    };

    BENCHMARK("unoptimizedDCPower(10,1000000000)") {
        return unoptimizedDCPower(10,1000000000);
    };

    // 100 --------------------------------------------------------

    BENCHMARK("unoptimizedDCPower(100,1)") {
        return unoptimizedDCPower(100,1);
    };

    BENCHMARK("unoptimizedDCPower(100,10)") {
        return unoptimizedDCPower(100,10);
    };

    BENCHMARK("unoptimizedDCPower(100,100)") {
        return unoptimizedDCPower(100,100);
    };

    BENCHMARK("unoptimizedDCPower(100,1000)") {
        return unoptimizedDCPower(100,1000);
    };

    BENCHMARK("unoptimizedDCPower(100,10000)") {
        return unoptimizedDCPower(100,10000);
    };

    BENCHMARK("unoptimizedDCPower(100,100000)") {
        return unoptimizedDCPower(100,100000);
    };

    BENCHMARK("unoptimizedDCPower(100,1000000)") {
        return unoptimizedDCPower(100,1000000);
    };

    BENCHMARK("unoptimizedDCPower(100,10000000)") {
        return unoptimizedDCPower(100,10000000);
    };

    BENCHMARK("unoptimizedDCPower(100,100000000)") {
        return unoptimizedDCPower(100,100000000);
    };

    BENCHMARK("unoptimizedDCPower(100,1000000000)") {
        return unoptimizedDCPower(100,1000000000);
    };

    // 1000 ------------------------------------------------------

    BENCHMARK("unoptimizedDCPower(1000,1)") {
        return unoptimizedDCPower(1000,1);
    };

    BENCHMARK("unoptimizedDCPower(1000,10)") {
        return unoptimizedDCPower(1000,10);
    };

    BENCHMARK("unoptimizedDCPower(1000,100)") {
        return unoptimizedDCPower(1000,100);
    };

    BENCHMARK("unoptimizedDCPower(1000,1000)") {
        return unoptimizedDCPower(1000,1000);
    };

    BENCHMARK("unoptimizedDCPower(1000,10000)") {
        return unoptimizedDCPower(1000,10000);
    };

    BENCHMARK("unoptimizedDCPower(1000,100000)") {
        return unoptimizedDCPower(1000,100000);
    };

    BENCHMARK("unoptimizedDCPower(1000,1000000)") {
        return unoptimizedDCPower(1000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(1000,10000000)") {
        return unoptimizedDCPower(1000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(1000,100000000)") {
        return unoptimizedDCPower(1000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(1000,1000000000)") {
        return unoptimizedDCPower(1000,1000000000);
    };
    
    // 10000 -----------------------------------------------------

    BENCHMARK("unoptimizedDCPower(10000,1)") {
        return unoptimizedDCPower(10000,1);
    };

    BENCHMARK("unoptimizedDCPower(10000,10)") {
        return unoptimizedDCPower(10000,10);
    };

    BENCHMARK("unoptimizedDCPower(10000,100)") {
        return unoptimizedDCPower(10000,100);
    };

    BENCHMARK("unoptimizedDCPower(10000,1000)") {
        return unoptimizedDCPower(10000,1000);
    };

   BENCHMARK("unoptimizedDCPower(10000,10000)") {
        return unoptimizedDCPower(10000,10000);
    };

    BENCHMARK("unoptimizedDCPower(10000,100000)") {
        return unoptimizedDCPower(10000,100000);
    };

    BENCHMARK("unoptimizedDCPower(10000,1000000)") {
        return unoptimizedDCPower(10000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(10000,10000000)") {
        return unoptimizedDCPower(10000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(10000,100000000)") {
        return unoptimizedDCPower(10000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(10000,1000000000)") {
        return unoptimizedDCPower(10000,1000000000);
    };

    // 100000 ----------------------------------------------------

    BENCHMARK("unoptimizedDCPower(100000,1)") {
        return unoptimizedDCPower(100000,1);
    };

    BENCHMARK("unoptimizedDCPower(100000,10)") {
        return unoptimizedDCPower(100000,10);
    };

    BENCHMARK("unoptimizedDCPower(100000,100)") {
        return unoptimizedDCPower(100000,100);
    };

    BENCHMARK("unoptimizedDCPower(100000,1000)") {
        return unoptimizedDCPower(100000,1000);
    };

   BENCHMARK("unoptimizedDCPower(100000,10000)") {
        return unoptimizedDCPower(100000,10000);
    };

    BENCHMARK("unoptimizedDCPower(100000,100000)") {
        return unoptimizedDCPower(100000,100000);
    };

    BENCHMARK("unoptimizedDCPower(100000,1000000)") {
        return unoptimizedDCPower(100000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(100000,10000000)") {
        return unoptimizedDCPower(100000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(100000,100000000)") {
        return unoptimizedDCPower(100000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(100000,1000000000)") {
        return unoptimizedDCPower(100000,1000000000);
    };

    // 1000000 ---------------------------------------------------

    BENCHMARK("unoptimizedDCPower(1000000,1)") {
        return unoptimizedDCPower(1000000,1);
    };

    BENCHMARK("unoptimizedDCPower(1000000,10)") {
        return unoptimizedDCPower(1000000,10);
    };

    BENCHMARK("unoptimizedDCPower(1000000,100)") {
        return unoptimizedDCPower(1000000,100);
    };

    BENCHMARK("unoptimizedDCPower(1000000,1000)") {
        return unoptimizedDCPower(1000000,1000);
    };

   BENCHMARK("unoptimizedDCPower(1000000,10000)") {
        return unoptimizedDCPower(1000000,10000);
    };

    BENCHMARK("unoptimizedDCPower(1000000,100000)") {
        return unoptimizedDCPower(1000000,100000);
    };

    BENCHMARK("unoptimizedDCPower(1000000,1000000)") {
        return unoptimizedDCPower(1000000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(1000000,10000000)") {
        return unoptimizedDCPower(1000000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(1000000,100000000)") {
        return unoptimizedDCPower(1000000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(1000000,1000000000)") {
        return unoptimizedDCPower(1000000,1000000000);
    };

    // 10000000 --------------------------------------------------

    BENCHMARK("unoptimizedDCPower(10000000,1)") {
        return unoptimizedDCPower(10000000,1);
    };

    BENCHMARK("unoptimizedDCPower(10000000,10)") {
        return unoptimizedDCPower(10000000,10);
    };

    BENCHMARK("unoptimizedDCPower(10000000,100)") {
        return unoptimizedDCPower(10000000,100);
    };

    BENCHMARK("unoptimizedDCPower(10000000,1000)") {
        return unoptimizedDCPower(10000000,1000);
    };

   BENCHMARK("unoptimizedDCPower(10000000,10000)") {
        return unoptimizedDCPower(10000000,10000);
    };

    BENCHMARK("unoptimizedDCPower(10000000,100000)") {
        return unoptimizedDCPower(10000000,100000);
    };

    BENCHMARK("unoptimizedDCPower(10000000,1000000)") {
        return unoptimizedDCPower(10000000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(10000000,10000000)") {
        return unoptimizedDCPower(10000000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(10000000,100000000)") {
        return unoptimizedDCPower(10000000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(10000000,1000000000)") {
        return unoptimizedDCPower(10000000,1000000000);
    };

    // 100000000 -------------------------------------------------

    BENCHMARK("unoptimizedDCPower(100000000,1)") {
        return unoptimizedDCPower(100000000,1);
    };

    BENCHMARK("unoptimizedDCPower(100000000,10)") {
        return unoptimizedDCPower(100000000,10);
    };

    BENCHMARK("unoptimizedDCPower(100000000,100)") {
        return unoptimizedDCPower(100000000,100);
    };

    BENCHMARK("unoptimizedDCPower(100000000,1000)") {
        return unoptimizedDCPower(100000000,1000);
    };

   BENCHMARK("unoptimizedDCPower(100000000,10000)") {
        return unoptimizedDCPower(100000000,10000);
    };

    BENCHMARK("unoptimizedDCPower(100000000,100000)") {
        return unoptimizedDCPower(100000000,100000);
    };

    BENCHMARK("unoptimizedDCPower(100000000,1000000)") {
        return unoptimizedDCPower(100000000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(100000000,10000000)") {
        return unoptimizedDCPower(100000000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(100000000,100000000)") {
        return unoptimizedDCPower(100000000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(100000000,1000000000)") {
        return unoptimizedDCPower(100000000,1000000000);
    };

    // 1000000000 ------------------------------------------------
    
    BENCHMARK("unoptimizedDCPower(1000000000,1)") {
        return unoptimizedDCPower(1000000000,1);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,10)") {
        return unoptimizedDCPower(1000000000,10);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,100)") {
        return unoptimizedDCPower(1000000000,100);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,1000)") {
        return unoptimizedDCPower(1000000000,1000);
    };

   BENCHMARK("unoptimizedDCPower(1000000000,10000)") {
        return unoptimizedDCPower(1000000000,10000);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,100000)") {
        return unoptimizedDCPower(1000000000,100000);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,1000000)") {
        return unoptimizedDCPower(1000000000,1000000);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,10000000)") {
        return unoptimizedDCPower(1000000000,10000000);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,100000000)") {
        return unoptimizedDCPower(1000000000,100000000);
    };

    BENCHMARK("unoptimizedDCPower(1000000000,1000000000)") {
        return unoptimizedDCPower(1000000000,1000000000);
    };
}
