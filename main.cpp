#include "hash_tables.h"

int test(int a)
{
   return a % 5;
}

int main()
{
   Hash_table_internal A(test, 15, 5);
   A.insert(0, 0);
   A.insert(1, 0);
   A.insert(2, 0);
   A.insert(3, 0);
   A.insert(4, 0);
   A.insert(5, 0);
   A.insert(10, 0);
   A.insert(15, 0);
   A.insert(16, 0);
   A.insert(17, 0);
   A.insert(20, 0);
   //A.Print();
   A.remove(0);
   A.Print();
   return 0;
}