#include    "sys.h"


#define    WIDTH    10
#define    HIGHT    5
//#define    DEEPTH   1
typedef struct{
    u16 left[2];            //left-top point
    u16 right[2];           //right-botton point
    void* next;             //next icon
}APP;                       //apps on the screen , use list to store

typedef struct{
    u8*  data;            //graph data,please shap this as WIDTH*hight(*DEEPTH)
    u16  hight;           //hight = pixel/8 (for use a u8 data to discreb 8 pixel)
}GRAPH;

typedef struct{
    char* ID;
    GRAPH*  graph;
    APP* app;
    u16  window_top;        //if the graph is shaped like waterfall,window_top is used to location the position of window
                            //or it should set as 0
    u16* point;             //x,y,enter
}PAGE;

//initailise the page
PAGE*   Create_Page(char*ID,GRAPH*gra,APP*icon,u16*point);

//show
void Show_Page(PAGE*);

void Page_Up(PAGE*p,u8 pace);
void Page_Down(PAGE*p,u8 pace);














