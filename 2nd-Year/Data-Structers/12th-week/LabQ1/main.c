#include <stdio.h>
#define QUEUE_SIZE 10 

struct priority_queue{
    int data[QUEUE_SIZE+1];
    int cnt;
};

typedef struct priority_queue pqueue;

void initialize(pqueue *p) {
    p->cnt;
}

void swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

void insert(pqueue *p, int x) {
    if(p->cnt == QUEUE_SIZE) printf("Queue is full");
    else {
        p->data[++p->cnt] = x;
        int index = p->cnt;
        while(index!=1 && p->data[index] < p->data[index+1]) {
            swap(&p->data[index], &p->data[index/2]);
            index = index/2;
        }
    }
}

int delete(pqueue *p) {
    if (p->cnt == 0) printf("Queue is empty");
    else {
        int min = p->data[1];
        p->data[1] = p->data[p->cnt--];
        int index = 1;
        while (2 * index <= p->cnt && (p->data[index] > p->data[2 * index] || p->data[index] > p->data[2 * index + 1])) {
            if (2 * index + 1 <= p->cnt) {
                if (p->data[2 * index] < p->data[2 * index + 1]) {
                    swap(&p->data[index], &p->data[2 * index]);
                    index = 2 * index;
                } else {
                    swap(&p->data[index], &p->data[2 * index + 1]);
                    index = 2 * index + 1;
                }
            } else break;
        }
        return min;
    }
}

void printPqueue (pqueue *p) {
    int index = 0;
    for (index; index <= p->cnt; index++) {
        printf("[%d: %d]", index, p->data[index]);
    }
}