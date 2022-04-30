#include <stdio.h>
#include <stdlib.h>
int f(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int  bs(int *arr,int start,int end,int data){
  if(start>end) return 0; 
  int mid=(start+end)/2; 
  if(data==arr[mid]) return 1; 
  else if(data>arr[mid]) return bs(arr,mid+1,end,data);
  else return bs(arr,start,mid-1,data);
}
int main()
{
  int n, q, a, b, c;
  scanf("%d", &n);
  int x[n];
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &x[i]);
  }
  scanf("%d", &q);
  for (int i = 0; i < q; i++)
  {
    scanf("%d%d%d", &a, &b, &c);
    int aa[n], ab[n];
    int j = 0, k = 0, flag1 = 0, flag2 = 0, flag = 1;
    while (1)
    {
      if (x[a] == a)
      {
        if (x[b] == b)
        {
          break;
        }
        else
        {
          ab[k] = x[b];
          b = x[b];
          k++;
        }
      }
      else if (a > n)

      {
        if (b > n)
        {
          break;
        }
        else
        {
          ab[k] = x[b];
          b = x[b];
          k++;
        }
      }

      else if (x[b] == b)
      {
        if (x[a] == a)
        {
          break;
        }
        else
        {
          aa[j] = x[a];
          a = x[a];
          j++;
        }
      }
      else if (b > n)

      {
        if (a > n)
        {
          break;
        }
        else
        {
          aa[j] = x[a];
          a = x[a];
          j++;
        }
      }
      else
      {
        aa[j] = x[a];
        a = x[a];
        ab[k] = x[b];
        b = x[b];
        j++;
        k++;
      }
      if (aa[j - 1] == c && ab[j - 1] == c)
      {
        printf("YES\n");
        flag = 0;
        break;
      }
    }
    if (flag != 0)
    {
      qsort(aa, j, sizeof(int), f);
      qsort(ab, k, sizeof(int), f);
      int flag1=bs(aa,0,1,c);
      int flag2=bs(ab,0,1,c);

      if (flag1 == 1 && flag2 == 1)
      {
        printf("YES\n");
      }
      else
      {
        printf("NO\n");
      }
    }
  }
  return 0;
}