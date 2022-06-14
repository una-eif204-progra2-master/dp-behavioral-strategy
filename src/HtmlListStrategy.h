//
// Created by Maikol Guzman Alan on 6/13/22.
//

#ifndef DP_BEHAVIORAL_STRATEGY_HTMLLISTSTRATEGY_H
#define DP_BEHAVIORAL_STRATEGY_HTMLLISTSTRATEGY_H


#include "IListStrategy.h"

/** Concrete HTML strategies implement the algorithm while following
 * the base strategy interface. The interface makes them
 * interchangeable in the context.
 */
class HtmlListStrategy : public IListStrategy {
public:
    HtmlListStrategy();

    void addListItem(ostringstream &oss, string &item) override;

    ~HtmlListStrategy() override;
};


#endif //DP_BEHAVIORAL_STRATEGY_HTMLLISTSTRATEGY_H
