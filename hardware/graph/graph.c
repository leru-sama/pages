#include "graph.h"
#include "stdlib.h"

GRAPH* Graph_find(GRAPH*head,u16 number){
    GRAPH* now = head;
    for(int i=0;i<number;i++){
        if(now ->next != NULL)
            now = (GRAPH*)(now ->next);
        else return NULL;
    }
    return now;
}

GRAPH* Graph_create(u16 size,u16* position,u8* words){
    GRAPH* gra = malloc(sizeof(GRAPH));
    gra -> size = size;
    gra -> position = position;
    gra -> words = words;
    gra -> next = NULL;
    return gra;
}

u8   Graph_add(GRAPH* head,GRAPH* nod){
    GRAPH* now = head;
    while(now ->next != NULL)
        now = (GRAPH*)(now -> next);
    now ->next = nod;
    return 1;
}

u8  Graph_delete(GRAPH* head,u16 number){
    if(number == 0) return 0;
    GRAPH* now = head;
    for(int i=0;i<number - 1 ;i++){
        if(now ->next ! = NULL)
            now = (GRAPH*)(now -> next);
        else return 0;
    }
    GRAPH* deleted = (GRAPH*)(now -> next);
    now -> next = (GRAPH*)(now ->next -> next);
    free(deleted);
    return 1;
}

u8  Graph_change(GRAPH* nod,u8* newdata){
    free(nod -> words);
    nod ->words = newdata;
    return 1;
}
