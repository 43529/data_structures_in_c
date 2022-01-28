#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LNode {
    ElemType data;
    struct LNode *next;
}LNode, *LinkNode;

int init_node(LinkNode* L) {
    *L = (LinkNode)malloc(sizeof(LNode));
    (*L)->next = NULL;
    return 0;
}
void creat_list_head(LinkNode* L, int n) {
    init_node(L);
    printf("请输入%d个整型数:\n", n);
    for(int i=0;i<n;i++) {
       LinkNode li;
       LinkNode list;
       init_node(&list);
       scanf("%d", &(list->data));
       //list->data = i;
       printf("%d\n", list->data);
       list->next = (*L)->next;
       (*L)->next = list;
    }
    printf("输入结束！\n");
}
void print_list(LinkNode L) {
    LinkNode list; 
    list = L;
    printf("目前的队列数据如下:\n");
    while(list->next != NULL) {
        printf("%d\t",list->data);
        list = list->next;
    }
    printf("%d\t",list->data);
}
int main() {    
    LinkNode list;
    //LinkNode tmp;
    //LinkNode* t = &tmp; 
    //(*t) = (LinkNode)malloc(sizeof(LNode));
    creat_list_head(&list, 4);
    print_list(list);
    return 0;
}
