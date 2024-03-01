#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item, c=0; // variable to hold random values
   BST b;

   
	b.root= NULL;  b.size=0;// tree initially empty
for ( i = 1; i < argc; ++i ) { 
      insertNode( &b, atoi(argv[i]));
   //  insertNode_R(&b.root,atoi(argv[i]) );
  } // end for
   // traverse the tree preOrder
   printf("\npreOrder\n" );
   preOrder( b.root );

   // traverse the tree inOrder
   printf("\ninOrder\n" );
   inOrder( b.root );

   // traverse the tree postOrder
   printf("\npostOrder\n" );   
   postOrder( b.root );

   printf("\ntreeOrder\n" );   
   BtoT( b.root, c );

    printf("\n");
} // end main

