#include <iostream>
#include "DataStr_LinkedList.h"

using namespace DS_LinkedList;
using namespace std;

int main() {
    cout << "Hello, World!" << std::endl;
    cout << "Creating Nodes" << endl;

    node *HEAD_PTR;
    node *TAIL_PTR;
    size_t count;
    size_t sum;
    size_t entry = 10;

    list_head_insert(HEAD_PTR,30);
    HEAD_PTR->set_link(TAIL_PTR);

    while(entry < 50)
    {
     list_insert(HEAD_PTR,entry);
     entry =entry +10;
    }

    count = list_length(HEAD_PTR);
    print_list(HEAD_PTR);
    sum=TotalSum(HEAD_PTR);

    cout<<"List Length: "<< count <<endl;

    cout<< "Total Sum: "<< sum << endl;
    return 0;
}