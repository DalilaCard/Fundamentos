
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char in[27]= {"abcdefghijklmnopqrstuvwxyz"};
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,
    p=0,q=0,r=0,s=0,t=0,u=0,
    v=0,w=0,x=0,y=0,z=0;
    
   char carr[50];
   printf ("cadena: ");
   gets(carr);

  
    for (int j=0;j<50;j++){
        if (carr[j]==in[0]){
            a++;
        }
         if (carr[j]==in[1]){
            b++;
        }
         if (carr[j]==in[2]){
            c++;
        }
        if (carr[j]==in[3]){
            d++;
        }
         if (carr[j]==in[4]){
            e++;
        }
         if (carr[j]==in[5]){
            f++;
        }
         if (carr[j]==in[6]){
            g++;
        }
         if (carr[j]==in[7]){
            h++;
        }
         if (carr[j]==in[8]){
            i++;
        }
         if (carr[j]==in[9]){
            j++;
        }
         if (carr[j]==in[10]){
            k++;
        }
         if (carr[j]==in[11]){
            l++;
        }
         if (carr[j]==in[12]){
            m++;
        }
         if (carr[j]==in[13]){
            n++;
        }
         if (carr[j]==in[14]){
            o++;
        }
         if (carr[j]==in[15]){
            p++;
        }
         if (carr[j]==in[16]){
            q++;
        }
         if (carr[j]==in[17]){
            r++;
        }
         if (carr[j]==in[18]){
            s++;
        }
         if (carr[j]==in[19]){
            t++;
        }
         if (carr[j]==in[20]){
            u++;
        }
         if (carr[j]==in[21]){
            v++;
        }
         if (carr[j]==in[22]){
            w++;
        }
         if (carr[j]==in[23]){
            x++;
        }
         if (carr[j]==in[24]){
            y++;
        } if (carr[j]==in[25]){
            z++;
        }
        
    }
    printf ("a= %d\n",a);
    printf ("b= %d\n",b);
    printf ("c= %d\n",c);
    printf ("d= %d\n",d);
    printf ("e= %d\n",e);
    printf ("f= %d\n",f);
    printf ("g= %d\n",g);
    printf ("h= %d\n",h);
    printf ("i= %d\n",i);
    printf ("j= %d\n",j);
    printf ("k= %d\n",k);
    printf ("l= %d\n",l);
    printf ("m= %d\n",m);
    printf ("n= %d\n",n);
    printf ("o= %d\n",o);
    printf ("p= %d\n",p);
    printf ("q= %d\n",q);
    printf ("r= %d\n",r);
    printf ("s= %d\n",s);
    printf ("t= %d\n",t);
    printf ("u= %d\n",u);
    printf ("v= %d\n",v);
    printf ("w= %d\n",w);
    printf ("x= %d\n",x);
    printf ("y= %d\n",y);
    printf ("z= %d\n",z);
    
    /*printf ("%c", carr[1]);
    
    printf ("%c", in[0]);*/
    return (EXIT_SUCCESS);
}

