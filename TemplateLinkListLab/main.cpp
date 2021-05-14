#include <iostream>
#include "LinkedList.h"

using std::cout;

int main() {
    LinkedList<int> list;
//
//    for(int i = 0; i < 50; i++){
//        list += i;
//    }
//    list.insertAfter(2);
//
//    list += 3;

    list.insertBefore(4);//works
    list.insertBefore(3);
    list.insertBefore(6);
//
//
//    list.insertMiddle(5, 6);//works
//
//    list.find(5);//works
//
//    if(list.empty()){//works
//        cout << "list is empty";
//
//    }
//    else{
//        cout << "list has items";
//    }

    list.removeHead();//works
    std::cout << list;




}
