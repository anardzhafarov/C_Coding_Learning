#include <stdio.h>

struct node {
    int value;
    struct node* next;
};

struct node a = {10, NULL};
struct node b = {20, NULL};
struct node c = {30, NULL};

int listavg(const struct node* list) {
    int sum =0;
    int counter = 0;
    while(list != NULL){
        sum += list->value;
        list = list->next;
        counter++;
    };
    return sum/counter;
};


int main() {
    a.next = &b;
    b.next = &c;
    struct node* link = &a;
    /* while(link != NULL) {
        printf("The value is %d\n", link->value);
        link = link->next;
    }; */
    /* printf("%d", listavg(link)); */
    int a[5] = {1, 2, 3, 4, 5};
    return 0;
};
