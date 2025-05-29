int main() {

int a = 1;
while(a != 0){
printf("Insira um numero:\n");
scanf("%d&",&a);
if(a % 2 == 0){
printf("%d eh par!\n",a);
}else{
printf("%d eh impar!\n",a);
}
}
}
