#include "page.h"
#include "stdlib.h"
PAGE*   Create_Page(char* ID,GRAPH* gra,ICON* icon,u16* point){
    page = (PAGE*)malloc(sizeof(PAGE));
    page -> ID    = ID;
    page -> graph = gra;
    page -> icon  = icon;
    page -> point = point;
    return page;
};