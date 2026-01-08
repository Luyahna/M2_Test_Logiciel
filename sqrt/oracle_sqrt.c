void oracle_sqrt(
  int Pre_a, int a,
  int pathcrawler__retres__sqrt)
{
  int i = pathcrawler__retres__sqrt;

  if (a>0)
  {
    if (i^2<=a && a<(i+1)^2)
    {
        pathcrawler_verdict_success();

    }else
    {
        pathcrawler_verdict_failure();
    }
  }else{
    if(i==0)
    {
        pathcrawler_verdict_success();
    }else
    {
        pathcrawler_verdict_failure();
    }
  }

  return;

}
