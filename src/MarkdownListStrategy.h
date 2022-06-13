//
// Created by Maikol Guzman Alan on 6/13/22.
//

#ifndef DP_BEHAVIORAL_STRATEGY_MARKDOWNLISTSTRATEGY_H
#define DP_BEHAVIORAL_STRATEGY_MARKDOWNLISTSTRATEGY_H

#include "IListStrategy.h"

class MarkdownListStrategy : public IListStrategy {
public:
    MarkdownListStrategy();

    void addListItem(ostringstream &oss, string &item) override;

    ~MarkdownListStrategy() override;
};


#endif //DP_BEHAVIORAL_STRATEGY_MARKDOWNLISTSTRATEGY_H
