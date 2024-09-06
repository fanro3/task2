#include "Header.h"

vector <int> inc(vector <int> v, int n) {
    for (int& i : v) {
        i += n;
    }
    return v;
}