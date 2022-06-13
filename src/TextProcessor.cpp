//
// Created by Maikol Guzman Alan on 6/13/22.
//

#include "TextProcessor.h"

TextProcessor::TextProcessor() = default;

void TextProcessor::clear() {
    ossData.str("");
    ossData.clear();
}

void TextProcessor::appendList(vector<string> &items) {
    for (auto &item: items) {
        listStrategy->addListItem(ossData, item);
    }
}

void TextProcessor::processOutputFormat(Format format) {
    switch (format) {
        case Format::Markdown:
            listStrategy = new MarkdownListStrategy();
            break;
        case Format::Html:
            listStrategy = new HtmlListStrategy();
            break;
    }
}

string TextProcessor::str() {
    return ossData.str();
}

TextProcessor::~TextProcessor() = default;

