void insertAtBeginning(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }
   printf("\nOne node inserted!!!\n");
}
void insertAtEnd(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
        head = newNode;
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL)
        temp = temp->next;
      temp->next = newNode;
   }
   printf("\nOne node inserted!!!\n");
}
void insertBetween(int value, int loc1, int loc2)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      struct Node *temp = head;
      while(temp->data != loc1 && temp->data != loc2)
        temp = temp->next;
      newNode->next = temp->next;
      temp->next = newNode;
   }
   printf("\nOne node inserted!!!\n");
}
