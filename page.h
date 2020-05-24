#include    "sys.h"


#define    WIDTH    10
#define    HIGHT    5
//#define    DEEPTH   1
typedef struct{
    u16 left[2];
    u16 right[2];
    void* next;
}ICON;

typedef struct{
    char*  data;
    void* next;
}GRAPH;
typedef struct{
    char* ID;
    GRAPH*  graph;
    ICON* icon;
    u16* point;           //x,y,enter
}PAGE;

PAGE*   Create_Page(char*ID,GRAPH*gra,ICON*icon,u16*point);
void Show_Page(PAGE*);















