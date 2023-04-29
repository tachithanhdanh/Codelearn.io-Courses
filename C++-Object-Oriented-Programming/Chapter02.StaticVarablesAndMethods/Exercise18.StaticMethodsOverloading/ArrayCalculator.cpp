#include <limits>
#include <algorithm>

class ArrayCalculator {
public:
    template <typename T>
    static T minOfArray(T arr[], int n) {
        T minElement{std::numeric_limits<T>::max()};
        for (int i = 0; i < n; ++i) {
            minElement = std::min<T>(minElement, arr[i]);
        }
        return minElement;
    }

    template <typename T>
    static T maxOfArray(T arr[], int n) {
        T maxElement{std::numeric_limits<T>::min()};
        for (int i = 0; i < n; ++i) {
            maxElement = std::max<T>(maxElement, arr[i]);
        }
        return maxElement;
    }

};