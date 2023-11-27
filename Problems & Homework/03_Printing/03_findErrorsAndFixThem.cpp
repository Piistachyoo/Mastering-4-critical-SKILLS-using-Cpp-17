// Homework 1: Find all errors and fix them

#include <iostream> // missing '>' at the end, wrong library name (iostream not stream)
using namespace std; // missing ; and std must be in lower case

// cout <<"work smart not hard\n"; // We can't have a wild statement here

int main() { // main function must be written in lower case

    cout << "Children must be taught how to think, not what to think\n"; // missing
                                                                         // ;
    cout << "We worry about what a child will become tomorrow, yet we forget "
            "that he is someone today\n"; // tomorrow must be inside double
                                          // quotations
    cout << "Children are not things to be molded"
         << ", but are people to be unfolded\n"; // "<<" not '<'
    cout << "Each day of our lives we make deposits in the memory banks of our "
            "children."
         << endl; // "endl" not "end"
    cout << "It is easier to build strong children than to repair broken men"
         << "\n"; // Double quotations was outside the string
    cout << "Children need models rather than critics\n"; // << is used with
                                                          // cout (not >>)

    cout << "Children have never been very good at listening to their elders, "
            "but they have never failed to imitate them"; // cout was wrongly
                                                          // written

    cout << "Children are our most valuable resource\n"; // missing '<' in "<<"

} // missing closing braces