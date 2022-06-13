//
// Created by Maikol Guzman Alan on 6/13/22.
//

#include "MarkdownListStrategy.h"

void MarkdownListStrategy::addListItem(ostringstream &oss, string &item) {
    oss << " - " << item << endl;
}

MarkdownListStrategy::~MarkdownListStrategy() = default;

MarkdownListStrategy::MarkdownListStrategy() = default;
