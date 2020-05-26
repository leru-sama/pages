#include    "sys.h"


typedef struct{
    u8* words;              //some words
    u16* position;          //4 numbers , top-left  and button-right
    u16  size;              //size
    void* next;            //use a list to store
}GRAPH;


GRAPH* Graph_find(GRAPH*head , u16 number);                               //find any nod of a graph list
GRAPH* Graph_create(u16 size,u16* position,u8* words);
u8     Graph_add(GRAPH* head,GRAPH* nod);                    //add a graph to exist list
u8     Graph_delete(GRAPH*head,u16 number);
u8     Graph_change(GRAPH* nod,u8* newdata);                 //change the word data and delete privious data
