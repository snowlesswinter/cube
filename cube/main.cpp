#include <iostream>
#include <memory>
#include <vector>

using namespace std;

extern "C" void* llallocmalloc(size_t size);
extern "C" void llallocfree(void* p);

int main(int argc, char* arcv[]) {

    cout << "so good" << endl;

    unique_ptr<char[]> p(new char[32]);
    unique_ptr<char[]> p1(new char[32]);

//     unique_ptr<char[]> cp(new char[128]);
//     for (int i = 0;;++i) {
//         char* a = new char[128];
//     }

    cin.ignore();
    return 0;
}