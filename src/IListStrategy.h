//
// Created by Maikol Guzman Alan on 6/13/22.
//

#ifndef DP_BEHAVIORAL_STRATEGY_ILISTSTRATEGY_H
#define DP_BEHAVIORAL_STRATEGY_ILISTSTRATEGY_H

#include <sstream>
#include <iostream>

using namespace std;

class IListStrategy {
public:
    virtual void addListItem(ostringstream &oss, string &item) = 0;

    virtual ~IListStrategy() = default;
};

#endif //DP_BEHAVIORAL_STRATEGY_ILISTSTRATEGY_H
