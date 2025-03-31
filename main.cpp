#include "hash_tables.h"

int test(int a)
{
   return a % 5;
}

int main()
{
   Hash_table_internal A(test, 15, 5);
   A.insert(623);
   A.remove(3);
   A.insert(3);
   A.insert(13);
   A.insert(23);
   A.remove(13);
   A.Print();
   return 0;
}