#include <iostream>
#include"LinearList.h"
#include "LinearListChain.h"
#include "StackOrderStore.h"

using namespace std;

int main(void)
{
    //顺序存储线性表
    LinearList *l = new LinearList();
    l->Insert(1,1);
    l->Insert(2,2);
    l->Insert(3,3);
    l->Insert(4,3);
    l->Insert(5,2);
    l->Insert(6,1);
    l->Delete(1);
    l->Delete(3);
    l->Delete(5);
    //链式存储线性表
    LinearListChain *lc = new LinearListChain();
    lc->Insert(1,1);
    lc->Insert(2,2);
    lc->Insert(3,3);
    lc->Insert(4,3);
    lc->Insert(5,2);
    lc->Insert(6,1);
    lc->Delete(1);
    lc->Delete(3);
    lc->Delete(5);
    int lcLengh = lc->Length();
    CPosition lcFind = lc->Find(1);
    int lcElem = lc->FindKth(2);

    //广义表
    StackOrderStore *sos = new StackOrderStore(10);
    bool ise = sos->IsEmpty();
    bool isf = sos->IsFull();
    sos->Push(1);
    sos->Push(2);
    sos->Pop();
    sos->Push(3);
    sos->Pop();
    sos->Pop();
    sos->Pop();


    return 0;
}
