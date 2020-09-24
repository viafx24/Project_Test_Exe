#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 103;
   write_extern();
}
