#include "hash_tables.h"

int test(int a)
{
   return a % 5;
}

int main()
{
   Hash_table_internal A(test, 15, 5);
   A.insert(0);
   A.insert(1);
   A.insert(2);
   A.insert(3);
   A.insert(4);
   A.insert(5);
   A.insert(10);
   A.insert(15);
   A.insert(16);
   A.insert(17);
   A.insert(20);
   //A.Print();
   A.remove(0);
   A.Print();
   return 0;
}