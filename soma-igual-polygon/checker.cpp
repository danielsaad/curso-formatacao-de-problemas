#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

const int MIN_N = 1;
const int MAX_N = 1e5;

const int MIN_V = 1;
const int MAX_V = 1e9;

vector<int> v_input;
int N, C;

bool check_ans(InStream &stream)
{
    int first = stream.readInt();
    if (first == -1)
    {
        return false;
    }
    stream.readSpace();
    stream.quitif(first < 1 && first > N, _wa, "%d is out of range", first);
    int second = stream.readInt(1, N, "second");
    stream.quitif(first == second, _wa, "indices %d and %d must be different", first, second);
    stream.quitif(v_input[first - 1] + v_input[second - 1] != C, _wa, "v[%d]=%d + v[%d]=%d != %d", first - 1, second - 1, v_input[first - 1], v_input[second - 1], C);
    return true;
}

int main(int argc, char *argv[])
{
    setName("Check if reported indices sum C");
    registerTestlibCmd(argc, argv);
    N = inf.readInt(MIN_N, MAX_N, "N");
    inf.readSpace();
    C = inf.readInt(MIN_V, MAX_V, "C");
    inf.readEoln();
    v_input = inf.readInts(N, MIN_V, MAX_V, "v");
    inf.readEoln();
    inf.readEof();

    auto jans = check_ans(ans);
    auto pans = check_ans(ouf);

    if (!jans && pans)
    {
        quitf(_fail, "participant has better answer");
    }
    else if (jans && !pans)
    {
        quitf(_wa, "Wrong answer");
    }
    quitf(_ok, "Accepted");
    return 0;
}