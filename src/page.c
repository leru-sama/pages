#include "../inc/page.h"
#include "stdlib.h"
#include "stdio.h"

//initailise page
PAGE*   Create_Page(char* ID,GRAPH* gra,APP* app,u16* point){
    PAGE* page = (PAGE*)malloc(sizeof(PAGE));
    page -> window_top = 0;
    page -> ID    = ID;
    page -> graph = gra;
    page -> app  = app;
    page -> point = point;
    return page;
};

//show , it should be exchange by other drive code
void Show_Page(PAGE* p){
    for(int i=p->window_top;i<HIGHT+p->window_top;i++){
        for(int j=0;j<WIDTH;j++)
            if(i <= p->graph->hight)
                printf("%c",p->graph->data[i*WIDTH+j]);
            else printf(" ");
        printf("\n");
    }
}

void Page_Up(PAGE* p,u8 pace){
    if(p->window_top > pace)
        p->window_top -= pace;
    else 
        p->window_top = 0;
}

void Page_Down(PAGE*p,u8 pace){
    if(p->window_top < p->graph->hight)
        p->window_top += pace;
    else
        p->window_top = p->graph->hight;
}