#include "page.h"
#include <stdio.h>

int main(){
    GRAPH a,b;
    a.data = "****  ****
              ****  ****
                        
              **********
                  **    ";
    (GRAPH*)a.next = &b;
    b.data = "####  ####
              ##########
                ####  ##
              #####    #
              #####    #";
    b.next = null;
    GRAPH* now = &a;
    while((GRAPH*)(now -> next) !=null){
        printf("%s",next->data);
        printf("\n==================");
    }

}

