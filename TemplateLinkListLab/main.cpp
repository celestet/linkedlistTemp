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

cout << "inserting 4,3,6" << std::endl;
    list.insertBefore(4);//works
    list.insertBefore(3);
    list.insertBefore(6);

//cout << "inserting 5 before 6" << std::endl;
//    list.insertMiddle(5, 6);//works
////
//
//cout << "finding 5" << std::endl;
//
//if(list.find(5)){
//    cout << "5 is found" << std::endl;
//}
//    //works
//
//    if(list.empty()){//works
//        cout << "list is empty";
//
//    }
//    else{
//        cout << "list has items";
//    }

//    list.removeHead();//works
    std::cout << list;




}
