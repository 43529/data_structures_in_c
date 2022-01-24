#include<stdio.h>
#include<stdlib.h>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;
typedef struct {
    ElemType *elem;
    int length;
    int listsize;
}SqList;
int InitList(SqList* L) {
    (*L).elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if(!(*L).elem) exit(1);
    (*L).length = 0;
    (*L).listsize = LIST_INIT_SIZE;
    return 0;
}
int DestroyList(SqList* L) {
}
int ClearList(SqList* L) {
    printf("*L.length:%d\n\n\n", (*L).length);
    for(int i=0;i<3;i++) {
        *((*L).elem+i) = 0;
    }
    return 0;
}
int ListEmpty(SqList* L) {
    if((*L).length = 0){
        return 0;
    }
    return 1;
}
int ListLength(SqList* L) {
    return (*L).length;
}
//int GetElem(L, i, &e) {
//}
//int LocateElem(L, e, compare()) {
//}
//int PriorElem(L, cur e, &pre e) {
//}
//int NextElem(L, cur e, &next e) {
//}
int ListInsert(SqList* L, int i, int e) {
    if((*L).length == LIST_INIT_SIZE ){
        printf("容量不足！\n");
        exit(1); 
    }
    int length = (*L).length;
    for(int index=length-1;index>i;index--){
        *((*L).elem+index-1) = *((*L).elem+index);
    }
    *((*L).elem+i) = e;
    (*L).length++;
}
int ListDelete(SqList* L, int i) {
    int length = (*L).length;
    for(int index=length-1;index>i;index--){
        *((*L).elem+index-1) = *((*L).elem+index);
    }
    (*L).length;
}
//int ListTraverse(L, visit()) {
//}
//void union(List &La, List Lb) {
//}
//void MergeList(List La, List Lb, List &Lc) {
//}
int main(){
    printf("勇敢牛牛，不怕困难\n");
    SqList list;
    InitList(&list);
    printf("%d\n",list.length);
    list.elem[0] = 55;
    list.elem[1] = 66;
    list.elem[2] = 77;
    list.length = 3;
    int list_length = 0;
    list_length = ListLength(&list);
    printf("list_length:%d\n", list_length);
    ClearList(&list);
    for(int i=0;i<3;i++) {
        printf("%d\n", list.elem[i]);
    }
    return 0;
}
