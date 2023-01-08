#ifndef TUBES_QUEUE_H_INCLUDED
#define TUBES_QUEUE_H_INCLUDED
#include <iostream>
#define info(p) p->info
#define next(p) p->next
#define first(Q) ((Q).first)
#define last(Q) ((Q).last)

using namespace std;

struct kegiatan{
    string idKegiatan;
    string namaKegiatan;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

typedef kegiatan infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct Queue{
    adr first;
    adr last;
};

adr createKegiatan(infotype x);
void createQueue(Queue &Q);
void enque(Queue &Q, adr P);
void deque(Queue &Q, adr P);
void printQueue(Queue Q);
void prioUp(Queue &Qx, Queue &Qy, adr P);
void updateBurstTAT(Queue &Q, int T, int &QT);





#endif // TUBES_QUEUE_H_INCLUDED
