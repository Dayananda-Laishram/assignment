void removeBeginning()
{
   if(head == NULL)
        printf("\n\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      if(head->next == NULL)
      {
         head = NULL;
         free(temp);
      }
      else
      {
        head = temp->next;
        free(temp);
        printf("\nOne node deleted!!!\n\n");
      }
   }
}
void removeEnd()
{
   if(head == NULL)
   {
      printf("\nList is Empty!!!\n");
   }
   else
   {
      struct Node *temp1 = head,*temp2;
      if(head->next == NULL)
        head = NULL;
      else
      {
         while(temp1->next != NULL)
         {
            temp2 = temp1;
            temp1 = temp1->next;
         }
         temp2->next = NULL;
      }
      free(temp1);
      printf("\nOne node deleted!!!\n\n");
   }
}
void removenode(int delValue)
{
   struct Node *temp1 = head, *temp2;
   while(temp1->data != delValue)
   {
     if(temp1 -> next == NULL){
        printf("\nGiven node not found in the list!!!");
     }
     temp2 = temp1;
     temp1 = temp1 -> next;
   }
   temp2 -> next = temp1 -> next;
   free(temp1);
   printf("\nOne node deleted!!!\n\n");
 }
