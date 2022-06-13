//
// Created by Maikol Guzman on 3/18/22.
//
#include <ostream>
#include <iostream>
#include <vector>
#include "TextProcessor.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Behavioral pattern - Strategy" << endl << endl;

    vector<string> itemList;
    itemList.emplace_back("item 1");
    itemList.emplace_back("item 2");
    itemList.emplace_back("item 3");

    TextProcessor tp;

    // markdown
    tp.processOutputFormat(Format::Markdown);
    tp.appendList(itemList);
    cout << "Format - Markdown" << endl;
    cout << tp.str() << endl;

    // html
    tp.clear();
    tp.processOutputFormat(Format::Html);
    tp.appendList(itemList);
    cout << "Format - Html" << endl;
    cout << tp.str() << endl;

    return EXIT_SUCCESS;
}
