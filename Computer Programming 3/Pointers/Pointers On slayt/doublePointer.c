#include <stdio.h>
int main() {
int a[10]={100,206,300,409,509,601};
int *p[]={a,a+1,a+2,a+3,a+4,a+5};//Bu dizi, a dizisinin elemanlarının adreslerini içerir.
int **pp=p;//p dizisinin başlangıç adresini işaret eder
pp++;//p dizisinin ikinci elemanının adresine geçtik
 printf("%d %d %d \n",pp-p,*pp - a,**pp); 
*pp++; //aynı elemanın değerini artırır.
printf("%d %d %d \n",pp-p,*pp - a,**pp); 
++*pp; 
printf("%d %d %d\n",pp-p,*pp - a,**pp);
//*pp=p'nin adresi
//1)p dizisinde kaç elemanın geçtiği,
//2)a dizisinde kaç elemanın geçtiğini ()
//3)pp tarafından işaret edilen adresin değerini 
 //to access a[0]=*(a)=*p[0]=**(p+0)=**(pp+0)=100


    return 0;
}
/*a[0]: Bu, bir dizinin ilk elemanına erişmenin standart yoludur. Dizinin ilk elemanında depolanan değeri doğrudan alır. Kodunuzda a[0], 100'e karşılık gelir.

*(a): Burada, işaretçi * operatörünü kullanarak a işaretçisinin işaret ettiği değeri almaktasınız. a dizisi adı olarak kullanıldığında, ilk elemanın bir işaretçi gibi davrandığını unutmayın, bu nedenle *(a) aynı zamanda a[0] ile eşdeğerdir ve 100'dür.

*p[0]: Bu ifade, işaretçilerin bir dizisi olan p'nin ilk elemanının adresini alır. Yani, *p[0], a[0] ile aynıdır ve 100'dür.

(p+0): Bu durumda, p dizisindeki ilk elemanın değerini almak için işaretçi aritmetiği kullanıyorsunuz. p+0 hala p'nin ilk elemanının adresidir, yani a'nın adresidir. Ardından, çift işaretçi () bu adresteki değeri almak için kullanılır. Yani, **(p+0), *a ile aynıdır ve 100'dür.

(pp+0): Önceki duruma benzer şekilde, pp adlı işaretçilerin bir dizisindeki ilk elemanın değerini almak için işaretçi aritmetiği kullanıyorsunuz. pp+0 hala pp'nin ilk elemanının adresidir, ki bu aynı zamanda p'nin adresidir. Ardından, çift işaretçi () bu adresteki değeri almak için kullanılır. Yani, **(pp+0), *p[0] ile aynıdır ve 100'dür.
*/