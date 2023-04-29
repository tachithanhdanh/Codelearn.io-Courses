class ArrayCalculator {
public:
    template <typename T>
    static T sumOfArray(T arr[], int n) {
        T sum{};
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};