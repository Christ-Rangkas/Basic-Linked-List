#include <iostream>
class ListNode {
public:
  int content;
  ListNode* aNext;
};

void deleten(ListNode* a){
  if (a != nullptr){
    deleten((*a).aNext);
    delete a;
  }
}

int main(){

  ListNode* aHead;
  aHead = new ListNode;

  int uI;
  std::cin >> uI;
  (*aHead).content = uI;
  (*aHead).aNext = nullptr;
  ListNode* aPrev;
  aPrev = aHead;
  std::cin >> uI;

  while (uI > 0){
    ListNode* nTerm;
    nTerm = new ListNode;
    (*aPrev).aNext = nTerm;
    (*nTerm).content = uI;
    (*nTerm).aNext = nullptr;
    aPrev = nTerm;
    std::cin >> uI;
  }

  //Printing
  ListNode* printer;
  printer = aHead;
  while (printer != nullptr){
    std::cout << (*printer).content << std::endl;
    printer = (*printer).aNext;
  }
  deleten(aHead);





  return 0;
}
