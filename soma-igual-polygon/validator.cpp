#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

const int MIN_N = 1;
const int MAX_N = 1e5;

const int MIN_V = 1;
const int MAX_V = 1e9;

int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int N = inf.readInt(MIN_N, MAX_N, "N");
    inf.readSpace();
    int C = inf.readInt(MIN_V, MAX_V, "C");
    inf.readEoln();
    vector<int> v = inf.readInts(N, MIN_V, MAX_V, "V");
    inf.readEoln();
    inf.readEof();
    return 0;
}