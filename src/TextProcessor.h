//
// Created by Maikol Guzman Alan on 6/13/22.
//

#ifndef DP_BEHAVIORAL_STRATEGY_TEXTPROCESSOR_H
#define DP_BEHAVIORAL_STRATEGY_TEXTPROCESSOR_H
#include <sstream>
#include <iostream>
#include <vector>
#include "Format.h"
#include "IListStrategy.h"
#include "MarkdownListStrategy.h"
#include "HtmlListStrategy.h"

using namespace std;

/**
 * The context defines the interface of interest to clients.
 */
class TextProcessor {
    ostringstream ossData;
    IListStrategy* listStrategy{};
public:
    TextProcessor();

    void clear();

    void appendList(vector<string>& items);

    void processOutputFormat(Format format);

    string str();

    virtual ~TextProcessor();
};


#endif //DP_BEHAVIORAL_STRATEGY_TEXTPROCESSOR_H
