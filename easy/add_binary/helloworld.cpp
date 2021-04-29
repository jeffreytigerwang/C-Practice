#include <string>
#include "helloworld.h"


string Solution::addBinary(string a, string b){
    string result = "";

    if (a.empty())
    {
        return b;
    }

    if (b.empty())
    {
        return a;
    }

    if (a.empty() && b.empty())
    {
        return result;
    }

    int carry = 0;
    int sum = 0;
    int a_len = a.length() - 1;
    int b_len = b.length() - 1;

    while (a_len >= 0 || b_len >= 0)
    {
        sum = carry + ((a_len >= 0) ? a[a_len] - '0' : 0) + ((b_len >= 0) ? b[b_len] - '0' : 0);
        result.insert(result.begin(), sum % 2 + '0');
        carry = (sum > 1) ? 1 : 0;
        a_len--;
        b_len--;
    }

    if (carry)
    {
        result.insert(result.begin(), '1');
    }

    return result;
}