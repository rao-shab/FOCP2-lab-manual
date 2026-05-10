#include <fstream>

using namespace std;
int main() {
    ofstream file("data.txt");
    file<< "Hello C++ file handling!";
    file.close();
    return 0;
}
