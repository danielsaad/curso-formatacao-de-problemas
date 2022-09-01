#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;

const int MIN_N = 1;
const int MAX_N = 1e5;

const int MIN_V = 1;
const int MAX_V = 1e9;

const int rnd_test_n = 100;

template <typename T>
void append(vector<T> &dest, const vector<T> &orig)
{
    dest.insert(dest.end(), orig.begin(), orig.end());
}

string output_tc(vector<int> &v, int C)
{
    ostringstream oss;
    oss << v.size() << ' ' << C << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        oss << v[i] << (i < v.size() - 1 ? ' ' : '\n');
    }
    return oss.str();
}

vector<string> generate_sample_tests()
{
    vector<string> tests;
    vector<int> v;
    int C;

    v = {1, 2, 3, 4, 5, 6};
    C = 8;
    tests.push_back(output_tc(v, C));
    v = {5, 7, 3, 9, 1};
    C = 11;
    tests.push_back(output_tc(v, C));
    v = {10, 2, 4, 8, 6};
    C = 16;
    tests.push_back(output_tc(v, C));
    return tests;
}

vector<string> generate_manual_tests()
{
    vector<string> tests;
    vector<int> v = {1};
    int C = 1;
    tests.push_back(output_tc(v, C));
    v = {2};
    C = 1;
    tests.push_back(output_tc(v, C));
    v = {1, 3, 5, 7};
    C = 3;
    tests.push_back(output_tc(v, C));
    v = {4,4};
    C = 8;
    tests.push_back(output_tc(v, C));
    return tests;
}

vector<int> generate_random_vector(int n, int min_v = MIN_V, int max_v = MAX_V)
{
    vector<int> v(n);
    for (auto &x : v)
    {
        x = rnd.next(min_v, max_v);
    }
    return v;
}

string rnd_test(int i)
{
    int min_n = MIN_N;
    int max_n = MAX_N;

    int min_v = MIN_V;
    int max_v = MAX_V;
    if (i < rnd_test_n / 3)
    {
        max_n = 5;
        max_v = 10;
    }
    else if (i < rnd_test_n / 2)
    {
        max_n = 100;
        max_v = 200;
    }

    int n = rnd.next(min_n, max_n);
    auto v = generate_random_vector(n, min_v, max_v);
    int C = rnd.next(min_v, min(max_v * 2, MAX_V));
    return output_tc(v, C);
}

vector<string> generate_random_tests()
{
    vector<string> tests;
    for (int i = 0; i < rnd_test_n; i++)
    {
        tests.push_back(rnd_test(i));
    }
    return tests;
}

string extreme_test_1()
{
    vector<int> v(MAX_N);
    for (int i = 0; i < MAX_N; i++)
    {
        v[i] = i * 2 + 1;
    }
    int C = MAX_V;
    return output_tc(v, C);
}

string extreme_test_2()
{
    auto v = generate_random_vector(MAX_N);
    int C = MAX_V;
    return output_tc(v, C);
}

string extreme_test_3()
{
    auto v = generate_random_vector(MAX_N);
    int C = rnd.next(MIN_V, MAX_V);
    return output_tc(v, C);
}

vector<string> generate_extreme_tests()
{
    vector<string> tests;
    tests.push_back(extreme_test_1());
    for (int i = 0; i < 20; i++)
    {
        tests.push_back(extreme_test_2());
    }
    for (int i = 0; i < 20; i++)
    {
        tests.push_back(extreme_test_3());
    }
    return tests;
}

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    vector<string> tests;
    size_t test = 0;
    append(tests, generate_sample_tests());
    append(tests, generate_manual_tests());
    append(tests, generate_random_tests());
    append(tests, generate_extreme_tests());
    for (const auto &t : tests)
    {
        startTest(++test);
        cout << t;
    }
    return 0;
}