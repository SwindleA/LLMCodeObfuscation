#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ostringstream oss;

    oss << "adsf!fjelnbo./23@#45jalkd\n";
    oss << "as;lkdjfoine!,djfoekngrn\n";
    oss << "apple!a;lkdjfoie\n";
    oss << "This is the fourth line!\n";

    string output = oss.str();

    cout << output;

    return 0;
}