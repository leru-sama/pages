#include "../inc/page.h"
#include <stdio.h>

int main(){
    GRAPH a,b;
    char a_data[WIDTH*HIGHT] = "2228287319822739992200119922883377446633882298====";
    a.data = a_data;
    a.next = &b;
    PAGE* first = Create_Page("HOME",&a,NULL,NULL);
    Show_Page(first);
    return 0;
}

