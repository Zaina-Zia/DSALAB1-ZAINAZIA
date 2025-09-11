#include <cassert>
#include "task7.cpp"
#include "task8.cpp"

int main() {
    // ---- Task 7 Tests ----
    int arr[] = {1, 2, 2, 3, 4};

    auto res1 = function(arr, 5, 2);
    assert(res1.size() == 2 && res1[0] == 1 && res1[1] == 2);

    auto res2 = function(arr, 5, 9);
    assert(res2.empty());

    auto res3 = function(arr, 0, 1);
    assert(res3.empty());

    // ---- Task 8 Tests ----
    assert(find("hello", "he") == 0);
    assert(find("this is a test", "test") == 10);
    assert(find("abcdef", "gh") == -1);
    assert(find("abcdef", "") == 0);

    return 0;  // if all assertions pass, program ends normally
}
