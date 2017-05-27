CTEST (compare1, test0) {
    char argument0[20] = "aa";
    char argument1[20] = "bb";
    const int result = isLess(argument0,argument1);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST (compare1, test1) {
    char argument0[20] = "bb";
    char argument1[20] = "aa";
    const int result = isLess(argument0,argument1);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
