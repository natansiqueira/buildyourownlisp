#include <stdio.h>
#include <string.h>

void print_empty_line() {
  puts("");
}


void puts_hello_world_n_times(int n) {
  for(int i = 0; i < n; i++) {
    puts("Hello World!");
  }
}

int main(int argc, char** args) {
  puts("for loop");
  for(int i = 0; i < 5; i++) {
    puts("Hello World!");
  }

  print_empty_line();
  
  puts("while loop");
  int n = 0;
  while(n < 5) {
    puts("Hello World!"); 
    n += 1;
  }

  print_empty_line();
 
  puts("invoking functions puts_hello_world_n_times(3)");
  puts_hello_world_n_times(3);

  print_empty_line();  

  puts("defining a type potato based on int");
  // typedef allows us to give a type a new name
  typedef int potato;
  potato omg = 10;
  printf("printing my potato value %d\n", omg);

  print_empty_line();

  typedef struct Cars {
    char name[10];
    char brand[10];
    int year;
  } Car;

  Car c;
  strcpy( c.name, "HB20" );
  strcpy( c.brand, "Hyundai" );
  c.year = 2021;

  printf("Car(name=%s, brand=%s, year=%d)\n", c.name, c.brand, c.year);

  return 0;
}
