// more pointers
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

int main (int argc, char** argv)
{
    int b = 888;
    int* p1 = &b;
    printf("%d\n", p1[0]);
    return 0;
}