#include "../inc/page.h"
#include "stdlib.h"
#include "stdio.h"

//initailise page
PAGE*   Create_Page(char* ID,GRAPH* gra,APP* app,u16* point){
    PAGE* page = (PAGE*)malloc(sizeof(PAGE));
    page -> ID    = ID;
    page -> graph = gra;
    page -> app  = app;
    page -> point = point;
    return page;
};

//show , it should be exchange by other drive code
void Show_Page(PAGE* p){
    for(int i=0;i<HIGHT;i++){
        for(int j=0;j<WIDTH;j++)
            printf("%c",p->graph->data[i*WIDTH+j]);
        printf("\n");
    }
}