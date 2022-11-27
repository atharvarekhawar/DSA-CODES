#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template<typename t>
class stack;

template <typename t>
class node
{
    t data;
    node<t> *next;

    node(t d)
    {
        data=d;
    }
};
