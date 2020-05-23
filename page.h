#include    "sys.h"


#define    WIDTH    10
#define    HIGHT    5
//#define    DEEPTH   1
typedef struct{
    u16 left[2];
    u16 right[2];
    ICON* next;
}ICON;

typedef struct{
    u8  data[WIDTH][HIGHT];
`   GRAPH* next;
}GRAPH;
typedef struct{
    char* ID;
    GRAPH*  graph;
    ICON* icon;
    u16 point[3];           //x,y,enter
}PAGE;

PAGE*   Create_Page(char*,u8*,u8*,u16*);

















