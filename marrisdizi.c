/*n*n eleman içeren bir program */

/*#include<stdio.h>
int main()
{  
    int mat[10][10];
    int i,j;

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (i==j)
            {
                mat[i][j]=1;

            }
            else 
            mat[i][j]=0;
            
        }
        
    }


     for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            printf("%2d",mat[i][j]);
      
            
        }
        printf("\n");
        
    }

    return 0;
}
   
   
   
   
   
/*n*p eleman içeren 2 matrisin elemanları toplamını 3. bir matriste yazdıran*/

#include<stdio.h>
int main()
{
    int blue[3][4]={{2,3,5,6},{1,3,5,7},{2,4,6,8}};
    int purple[3][4]={{7,4,7,1},{8,6,2,4},{4,6,9,1}};
    int top[3][4];
    int i,j;
   

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
           // printf("%d",blue[i][j]);
          //printf("%d",purple[i][j]);
            top[i][j]=blue[i][j] + purple[i][j];
            printf("%3d",top[i][j]);

        }  
        printf("\n");
    }


    return 0;

    }