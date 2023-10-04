Program-

#include <stdio.h>
#include <stdlib.h>


Struct node Schar_data;

struct node * pre;

struct node next;tail proms twig

14 atqu in nar

Struct node head=0; struct node * tail = 0;

Struct node * Createnade shar c). { struct node *n;

n=(struct node)malloc(sizeof (struct node));

n data = c;

n→ next = 0; n✈ pre = 0;

return n;

13

void createdLL (char c) struct node * n = create node);

if (head 0 && tall ==0) og

head n tail = n;

else
tail- next en;

n→ pre tail tail tail-next: H

return;

void insert-front ().

char ci printf ("enter character in");

scanf("%c", &c); Struct node * n = Createnode (c); if (head == 0 &&tail == 0)

f

head = n;

tail = n;

else

n next = head;

head pre n; = head = n;

void insert-end()

{ char char C printf("enter character in"); scanf("%c", &c);

Struct node *n createnode (C); if (head == 0 && tail == 0)
head=n; tail = ni

else

{tail & next =n;

npre taili = tail tail-next:

return;

deid delete front ()

if (head == 0)

return;

else

{ struct node * ptr head i * = head head next bo = t

head pre= 0; free (ptr);

return

void delete-end () SIF Chead == 0 && tails =0) return;

else { tail struct node * p = tail;
p = tail;

tail = tail pre; tail next = 0;

free (pi return;

子

vold delete-pos ()

fint pos; printf ("enter position in "); Scanf ("%d", & pos);

if (pos= =1)

delete-front;

return;

IF (pos== length() delete-endO

D

return;

if (pos > Jength())

freturn;}

else

int 1 = 0; struct node * temp= head; *ptr; while (< pos-1);

temp = temp >next;}

ptr = temp next;

temp->next = ptr next; ptr next pre = ptr pre;
free (ph);

return;

void display-forward ()

f struct node * p = head if (head == 0)

;

{ printf ("empty list In ") ;

Feturn; }

else

while (P!= 0)

{ printf ("/ c", p->data);

p = p next;

子

void display - backward () f Struct node * p = tail; li if (tail ==0)

f printf("empty list In ");

return;

while (po) printf("%c", p→ data); P= p pest;

return;
int main()

char str [100]; int i=0; printf ("enter StringIn" 10");

Scanf("%s", Str)

for (i=0; str[i] | = '10'; i++) created (sh[i]);}

insert- Post (a);

insert end (b); delete front (9;

delete- end ();

display-forward (); display back ward();

return 0;