#include "../inc/page.h"
#include <stdio.h>

//test code to page.c

int main(){
    GRAPH a,b;
    u8 a_data[WIDTH*HIGHT] = "2228287319822739992200119922883377446633882298====";
    a.data = a_data;
    a.next = &b;
    PAGE* first = Create_Page("HOME",&a,NULL,NULL);
    Show_Page(first);
    
    return 0;
}

