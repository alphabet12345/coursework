CTEST (isLess, test0) {
    char argument0[100] = "aa";
    char argument1[100] = "bb";
    const int result = isLess(argument0,argument1);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST (isLess, test1) {
    char argument0[100] = "bb";
    char argument1[100] = "aa";
    const int result = isLess(argument0,argument1);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST (isMore, test0) {
    char argument0[100] = "aa";
    char argument1[100] = "bb";
    const int result = isMore(argument0,argument1);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST (isMore, test1) {
    char argument0[100] = "bb";
    char argument1[100] = "aa";
    const int result = isMore(argument0,argument1);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST (selectSort, test0) {
    char argument0[4][100] = {"aa","bb","ab","dd"};
    const int argument1 = 4;
    const int result = selectSort(argument0,argument1);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
