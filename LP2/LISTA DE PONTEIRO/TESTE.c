int main(){
int x, *p, **q;

x = 10;
p = &x; // p aponta a um int
q = &p; // q aponta a um int*

printf("%d\n", **q);

system("PAUSE");
return 0;
}