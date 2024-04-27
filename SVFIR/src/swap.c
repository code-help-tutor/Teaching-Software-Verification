WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
void swap(char **p, char **q){
  char* t = *p; 
       *p = *q; 
       *q = t;
}
int main(){
      char a1, b1; 
      char *a = &a1;
      char *b = &b1;
      swap(&a,&b);
}