#include <stdio.h>

int main() {
   FILE *file;

   file = fopen("numbers.txt", "w");
   if(file == NULL) {
       return 0;
   }

   for(int i = 1; i <= 50; i++) {
       if(i % 3 == 0 && i % 5 == 0) {
           fprintf(file, "%d\n", i);
       }
   }

   fclose(file);

   return 0;
}