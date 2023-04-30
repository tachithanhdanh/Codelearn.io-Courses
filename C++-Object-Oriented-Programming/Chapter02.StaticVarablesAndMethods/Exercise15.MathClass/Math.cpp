class Math {
public:
    // static const double PI = 3.14;
    static int abs(int x) { return x >= 0 ? x : -x; }
    static int add(int x, int y) { return x + y; }
    static int subtract(int x, int y) { return x - y; }
    static int min(int x, int y) { return x < y ? x : y; }
    static int max(int x, int y) { return x > y ? x : y; }
    static int pow(int x, int y) {
        int res = 1;
        while (y--) res *= x;
        return res;
    }
};