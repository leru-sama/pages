#include "page.h"
#include "stdlib.h"
PAGE*   Create_Page(char* ID,GRAPH* gra,ICON* icon,u16* point){
    PAGE* page = (PAGE*)malloc(sizeof(PAGE));
    page -> ID    = ID;
    page -> graph = gra;
    page -> icon  = icon;
    page -> point = point;
    return page;
};


void Show_Page(PAGE* p){
    for(int i=0;i<HIGHT;i++){
        for(int j=0;j<WIDTH;j++)
            printf("%c",p->graph->data[i*WIDTH+j]);
        printf("\n");
    }
}