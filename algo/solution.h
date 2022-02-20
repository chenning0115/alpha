#pragma once

#include <iostream>

// abstract class
class BaseSolution {
public:
    BaseSolution(){};

    virtual void solve() = 0;

};