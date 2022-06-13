//
// Created by Maikol Guzman Alan on 6/13/22.
//

#include "HtmlListStrategy.h"

HtmlListStrategy::HtmlListStrategy() = default;

void HtmlListStrategy::addListItem(ostringstream &oss, string &item) {
    oss << "\t<li>" << item << "</li>" << endl;
}

HtmlListStrategy::~HtmlListStrategy() = default;
