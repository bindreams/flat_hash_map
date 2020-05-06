#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <ska/flat_hash_map.hpp>
#include <doctest/doctest.h>

TEST_CASE("Unit.BasicUsage") {
	ska::flat_hash_map<int, int> {};
}