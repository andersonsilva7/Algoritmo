#include <stdio.h>
#include <stdlib.h>


main(){
       double n1,n2,n3,media;
       scanf ("%lf %lf %lf", &n1, &n2, &n3);
       media=(n1+n2+n3)/3;
       
       if (media>1){
          printf("maior");
       }
       else{
             printf("menor");
       }
       system("pause");
}
