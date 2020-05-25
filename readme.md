This project is created to give some solutions to screens driven by MCU.
Founction show_page in page.c should change by other code to show a full screen.
Whatever , it is author's strange idea.



Now here comes a question: how to show a graph
This is a not so perfect idea
use a list to save graph
every nod of graph contains 3 data: words , size and position
position also contains 2 data: top-left point and button-right point
while showing, go through graph and show it on screen.all the data of graph should use malloc and free.Then go through apps and only draw line around area of apps

                      |--- size
          |---   data |--- position
          |           |--- words
    graph |           
          |
          |---   pointer to the next   

    page  |--- etc
          |--- head pointer of graph

Those function should be released:
    Graph_find( number )                    : find any nod of a graph list
    Graph_create( size , position , words ) : create a graph
    Graph_add( head nod , new graph )       : add a graph to exist list
    Graph_delete( number )                  : delete a graph from a list
    Graph_change( graph , new data )        : change the word data and delete privious data
    Graph_number( head nod )                : add a number (should be the count of graph nod)to any graph in  a list, be uesd as test
    App_drawArea( head nod )                : draw lines around Apps



    








