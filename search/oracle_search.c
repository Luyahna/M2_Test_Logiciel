#include <stdbool.h>
void oracle_search(
  int *Pre_A, int *A,
  int Pre_elem, int elem,
  int pathcrawler__retres__search)
{
    int i = 0;
    int res =  pathcrawler__retres__search ;
    bool elem_found = false ;

    for (i = 0 ; i < 8 ; i++)
    {
        if (elem == A[i])
        {
            elem_found = true;
            break;

        } else if (elem != A[i])
        {
            elem_found = false ;
        }
    }

    if (elem_found == false && res == -1)
    {
        pathcrawler_verdict_success();

    }else if (elem_found == false && res != -1)
    {
        pathcrawler_verdict_failure();
    }

    if (elem_found == true && res == i)
    {
        pathcrawler_verdict_success();

    } else if (elem_found == true && res != i)
    {
        pathcrawler_verdict_failure();
    }

    return;
}
