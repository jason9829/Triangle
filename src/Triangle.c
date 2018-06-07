#include <stdio.h>
#include "Triangle.h"

char *getTriangleName (int l1, int l2, int l3)
{
  if (l1 == l2 && l2 == l3)
  {
    return "Equilateral";

  }
  if(l1 == l2 || l1 == l3 || l2 == l3)
  {
    return "Isosceles";

  }

  else if (l1 != l2 && l2 != l3 && l1 != l3)
  {
    return  "Scalene";

  }
}

char *checkIfTriangle(int l1, int l2, int l3)
{
  if(l1<=0 || l2<=0 || l3<=0)
    return "It's not a triangle";
  else
    return  "It's a triangle";
}

char *getTriangleName_and_check_validity(int l1, int l2, int l3)
{
	if(l1<=0 || l2<=0 || l3<=0)
	{
		return	"It's not a triangle";
	   if (l1 == l2 && l2 == l3)
		{
		return "Equilateral";
		}
		if(l1 == l2 || l1 == l3 || l2 == l3)
		{
			return "Isosceles";
		}

    if(l1 == l2 || l1 == l3 || l2 == l3)
    {
      return "Isosceles";
    }
		 if (l1 != l2 && l2 != l3)
		{
		return  "Scalene";

		}
  }
}

int add (int v1, int v2)
{
  return v1+v2;
}
