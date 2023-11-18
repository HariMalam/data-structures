#include <stdlib.h>
#include <stdio.h>

void Data_Structure_Master();

int A[1000], Data, POS, LB, UB;
int S[1000], Tos, N;
int Q[1000], Front, Rear;
int i, a;

char cases;

int main()
{
    printf("\n+---------------------------------------------+");
    printf("\n|                                             |");
    printf("\n|        Data Strcture Master Program         |");
    printf("\n|                                             |");
    printf("\n|---------------------------------------------|");
    printf("\n|            Developed By Malam Hari          |");
    printf("\n|---------------------------------------------|");
    printf("\n|     210160116051     |      IT Sem - 3      |");
    printf("\n|----------------------+----------------------|");
    printf("\n| malamharid@gmail.com |      7824080686      |");
    printf("\n+---------------------------------------------+\n\n");

    Data_Structure_Master();

    printf("\nThanks For Executing My Program...");
    printf(" \nExit...");
    return 0;
}

// Data Structure Master Program

void Linear();
void Non_Linear();

void Data_Structure_Master()
{
    printf("\n----------------- Main Munu -------------------");
    printf("\n(1) Linear Data Structure\n(2) Non Linear Data Structure\n\n(*) Exit\n");
    printf("-----------------------------------------------\n");

    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    // Linear Data Structure
    case '1':
        Linear();
        break;

    // Non Linear Data Structure
    case '2':
        Non_Linear();
        break;

    // Exit
    case '*':
        break;

    // Invalid Option
    default:
        printf("\nPlease Select Valid Option !");
        Data_Structure_Master();
        break;
    }
}

// ***************************************************************************************************************************************************** //
// <----------------------------------------------------------| Start: Linear Data Structure |---------------------------------------------------------> //
// ***************************************************************************************************************************************************** //

void Array();
void Stack();
void Queue();
void Link_List();

// Linear Data Structure
void Linear()
{
    printf("\n------------ Linear Data Structure ------------\n");
    printf("(1) Array\n(2) Stack\n(3) Queue\n(4) Link_List\n");
    printf("\n(0) Previous Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");

    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {

    // Array Operations
    case '1':
        LB = UB = 0;
        printf("\nEnter Size Of Array: ");
        scanf("%d", &N);
        Array();
        break;

    // Stack Operations
    case '2':
        Tos = -1;
        printf("\nEnter Size Of Stack: ");
        scanf("%d", &N);
        Stack();
        break;

    // QUEUE Operations
    case '3':
        Front = Rear = -1;
        printf("\nEnter Size Of Queue: ");
        scanf("%d", &N);
        Queue();
        break;

    // Link List Operations
    case '4':
        Link_List();
        break;

    case '0':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Linear();
        break;
    }
}

// ****************************************************************************************************************************************************** //
// <------------------------------------------------------------------| Start: Array |------------------------------------------------------------------> //

void Traversal();
void Insersion();
void Deletion();
void Linear_Search();
void Binary_Search();
void Sort_Array();
void Print_Array();
void Only_Sort_Array();

void Array()
{
    printf("\n--------------------- Array --------------------");
    printf("\n(1) Traversal\n(2) Insersion\n(3) Deletion\n(4) Linear Search\n(5) Binary Search\n(6) Sort Array\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");

    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {

    // Traversal
    case '1':
        Traversal();
        break;

    // Insersion
    case '2':
        Insersion();
        break;

    // Deletion
    case '3':
        Deletion();
        break;

    // Linear Search
    case '4':
        Linear_Search();
        break;

    // Binary Search
    case '5':
        Binary_Search();
        break;

    // Sort Array
    case '6':
        Sort_Array();
        break;

    case '0':
        Linear();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Array();
        break;
    }
}

// <-------------------------------------------------------------| Start: Array Functions |-------------------------------------------------------------> //

// Print Array Elements
void Print_Array()
{
    if (UB == 0)
    {
        printf("---------------\n");
        printf("Array: Empty !");
        printf("\n---------------\n");
    }
    else
    {
        printf("--------");
        for (i = LB; i < UB; i++)
        {
            if (A[i] > 99)
                printf("------");
            else if (A[i] > 9)
                printf("-----");
            else
                printf("----");
        }

        printf("\nArray: |");
        for (i = LB; i < UB; i++)
        {
            printf(" %d |", A[i]);
        }
        printf("\n--------");
        for (i = LB; i < UB; i++)
        {
            if (A[i] > 99)
                printf("------");
            else if (A[i] > 9)
                printf("-----");
            else
                printf("----");
        }
        printf("\n");
    }
}

// Sorting Array
void Only_Sort_Array()
{
    for (int j = 0; j < UB; j++)
    {
        for (i = j + 1; i < UB; i++)
        {
            if (A[j] >= A[i])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

// Traversal Funciton
void Recall_Traversal();
void Traversal()
{
    // ====================================== Start ====================================== //
    printf("\nTraversing Array:\n");
    Print_Array();

    // ======================================= End ======================================= //
    Recall_Traversal();
}

// Insersion Funciton
void Recall_Insersion();
void Insersion()
{
    // ====================================== Start ====================================== //
    if (UB == N)
    {
        printf("\n--> You Can't Insert Element Because Array is Full !\n");
    }
    else
    {
        printf("\nArray Elements Before Insersion:\n");
        Print_Array();

        i = 0;
        while (i == 0)
        {
            printf("\nEnter Position Where You Want ot Insert (Condition: Position <= %d): ", UB);
            scanf("%d", &POS);
            if (POS > UB || POS<LB)
            {
                printf("\nPlease Select Valid Option !");
            }
            else
            {
                i = 1;
            }
        }

        if (POS <= UB)
        {
            printf("Enter Item You Want To Insert: ");
            scanf("%d", &Data);

            for (i = UB - 1; i >= POS; i--)
            {
                A[i + 1] = A[i];
            }

            A[POS] = Data;
            UB = UB + 1;

            printf("\nArray Elements After Insersion:\n");
            Print_Array();
        }
    }
    // ======================================= End ======================================= //
    Recall_Insersion();
}

// Deletion Funciton
void Recall_Deletion();
void Deletion()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\n--> You Can't Delet Element Because Array is Empty !\n");
    }
    else
    {
        printf("\nArray Elements Before Deletion:\n");
        Print_Array();

        i = 0;
        while (i == 0)
        {
            printf("\nEnter Position Where You Want ot Delet (Condition: Position <= %d): ", UB - 1);
            scanf("%d", &POS);
            if (POS > UB)
            {
                printf("\nPlease Select Valid Option !");
            }
            else
            {
                i = 1;
            }
        }

        for (i = POS; i < UB; i++)
        {
            A[i] = A[i + 1];
        }

        Data = A[POS];
        UB = UB - 1;

        printf("\nArray Elements After Deletion:\n");
        Print_Array();
    }
    // ======================================= End ======================================= //
    Recall_Deletion();
}

// Linear Search Function
void Recall_Linear_Search();
void Linear_Search()
{
    // ====================================== Start ====================================== //
    a = 1;
    if (UB == 0)
    {
        printf("\n--> You Can't Search Element Because Array is Empty !");
    }
    else
    {
        printf("\nArray Elements Before Search:\n");
        Print_Array();

        printf("\nEnter Item You Want To Search: ");
        scanf("%d", &Data);
        for (i = 0; i < UB; i++)
        {
            if (A[i] == Data)
            {
                a = 0;
                break;
            }
        }
        if (a == 0)
        {
            printf("\n--> %d is Found in Array At Position: [%d]", Data, i);
        }
        else
        {
            printf("\n--> %d is Not Found in Array !!", Data);
        }
    }
    // ======================================= End ======================================= //
    Recall_Linear_Search();
}

// Binary Search Funciton
void Recall_Binary_Search();
void Binary_Search()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\n--> You Can't Search Element Because Array is Empty !");
    }
    else
    {
        printf("\nArray Elements Before Search:\n");
        Print_Array();

        Only_Sort_Array();

        printf("\nEnter Item You Want To Search: ");
        scanf("%d", &Data);

        int beg = 0;
        int end = N - 1;
        int mid = 0;
        a = 0;
        while (beg <= end)
        {
            mid = (beg + end) / 2;

            if (A[mid] < Data)
            {
                beg = mid + 1;
            }
            else if (A[mid] > Data)
            {
                end = mid - 1;
            }

            else if (A[mid] == Data)
            {
                a = 1;
                break;
            }
        }
        if (a == 1)
        {
            printf("\nArray Elements After Shorting Array: \n");
            Print_Array();

            printf("\n--> %d is Found in Sorted Array At Position: [%d]", Data, mid);
        }
        else
        {
            printf("\n--> %d is Not Found in Array !!", Data);
        }
    }
    // ======================================= End ======================================= //
    Recall_Binary_Search();
}

// Sort Funciton
void Recall_Sort_Array();
void Sort_Array()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nYou Can't Sort Array Because Array is Empty !");
    }
    else
    {
        printf("\nArray Elements Before Shorting Array: \n");
        Print_Array();

        Only_Sort_Array();

        printf("\n--> Array Elements After Shorting Array: \n");
        Print_Array();
    }
    // ======================================= End ======================================= //
    Recall_Sort_Array();
}

// <--------------------------------------------------------------| End: Array Functions |--------------------------------------------------------------> //

// <---------------------------------------------------------| Start: Recall Array Functions |----------------------------------------------------------> //

// Recall Traversal Function
void Recall_Traversal()
{
    printf("\nYou Want to Traversal Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '1':
        Traversal();
        break;
    case '2':
        Array();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Traversal();
        break;
    }
}

// Recall Insersion Function
void Recall_Insersion()
{
    printf("\nYou Want to Insersion Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '1':
        Insersion();
        break;
    case '2':
        Array();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Insersion();
        break;
    }
}

// Recall Deletion Function
void Recall_Deletion()
{
    printf("\nYou Want to Deletion Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '1':
        Deletion();
        break;
    case '2':
        Array();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Deletion();
        break;
    }
}

// Recall Linear Search Funciton
void Recall_Linear_Search()
{
    printf("\n\nYou Want to Linear Search Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '1':
        Linear_Search();
        break;
    case '2':
        Array();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Linear_Search();
        break;
    }
}

// Recall Binary Search Funciton
void Recall_Binary_Search()
{
    printf("\n\nYou Want to Binary Search Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Binary_Search();
        break;
    case '2':
        Array();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Binary_Search();
        break;
    }
}

// Recall Sort Funciton
void Recall_Sort_Array()
{
    printf("\nYou Want to Sort Array Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Sort_Array();
        break;
    case '2':
        Array();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Sort_Array();
        break;
    }
}

// <----------------------------------------------------------| End: Recall Array Functions |----------------------------------------------------------> //

// <-------------------------------------------------------------------| End: Array |------------------------------------------------------------------> //
// ***************************************************************************************************************************************************** //

// ***************************************************************************************************************************************************** //
// <-----------------------------------------------------------------| Start: Stack |------------------------------------------------------------------> //

// (2) Stack Funcitons

void Push();
void Pop();
void Peep();
void Peek();
void Print_Stack();

void Stack()
{
    Print_Stack();
    printf("\n-------------------- Stack --------------------\n");
    printf("(1) Push\n(2) Pop\n(3) Peep\n(4) Peek\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    // PUSH Operation
    case '1':
        Push();
        break;

    // POP Operation
    case '2':
        Pop();
        break;

    // PEEP Operation
    case '3':
        Peep();
        break;

    // PEEK Operation
    case '4':
        Peek();
        break;

    case '0':
        Linear();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Stack();
        break;
    }
}

// <----------------------------------------------------------| Start: Print Stack Functions |----------------------------------------------------------> //

void Print_Stack()
{
    printf("\n+---------------+\n");
    printf("|    [Stack]    |\n");
    printf("+---------------+\n");
    if (Tos == -1)
    {

        printf("+---------------+\n");
        printf("|    Empty !    | <-- TOS [%d]\n", Tos);
        printf("+---------------+\n");
    }
    else
    {
        i = Tos;
        printf("+---------------+\n");
        printf("|\t%d\t| <-- TOS [%d]\n", S[i], Tos);

        for (i = Tos - 1; i >= 0; i--)
        {
            printf("|---------------|\n");
            printf("|\t%d\t|\n", S[i]);
        }
        printf("+---------------+\n");
    }
}

// <-----------------------------------------------------------| End: Print Stack Functions |-----------------------------------------------------------> //

// <-------------------------------------------------------------| Start: Stack Functions |-------------------------------------------------------------> //
// Push Function
void Recall_Push();
void Push()
{
    // ====================================== Start ====================================== //

    if (Tos >= N - 1)
    {
        printf("\n[ You Can't Push Element Because Stack Overflow ! ]\n");
    }
    else
    {
        Print_Stack();
        printf("[Stack Before Push Operation]\n");

        printf("\nEnter New Element: ");
        scanf("%d", &Data);

        Tos++;

        S[Tos] = Data;

        Print_Stack();
        printf("[Stack After Push Operation]\n");
    }
    // ======================================= End ======================================= //
    Recall_Push();
}

// Pop Function
void Recall_Pop();
void Pop()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\n[ You Can't Pop Element Because Stack is Underflow ! ]");
    }
    else
    {
        Tos--;

        Print_Stack();
        printf("[Stack After Pop Operation]\n");

        printf("[ Deleted Element is %d ]\n", S[Tos + 1]);
    }
    // ======================================= End ======================================= //
    Recall_Pop();
}

// Peep Function
void Recall_Peep();
void Peep()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\n--> You Can't Peep Element Because Stack is Underflow");
    }
    else
    {
        printf("\nStack Before Peep Operation: \n");
        Print_Stack();
        printf("\nEnter Element You Want To Find Form Above Stack: ");
        scanf("%d", &Data);
        a = 0;
        for (i = 0; i <= Tos; i++)
        {
            if (S[i] == Data)
            {
                a = 1;
                break;
            }
        }
        if (a == 1)
        {
            printf("\n--> %d is Found in Stack At Position: [%d]", Data, i);
        }
        else
        {
            printf("\n--> %d is Not Found in Stack !!", Data);
        }
    }
    // ======================================= End ======================================= //
    Recall_Peep();
}

// Peek Function
void Recall_Peek();
void Peek()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\n[ You Can't Peek Element Because Stack is Underflow ! ]\n");
    }
    else
    {
        printf("\n[ Top Most Element in Stack is %d ]\n", S[Tos]);
    }
    // ======================================= End ======================================= //
    Recall_Peek();
}

// <--------------------------------------------------------------| End: Stack Functions |--------------------------------------------------------------> //

// <----------------------------------------------------------| Start: Recall Stack Functions |---------------------------------------------------------> //

// Recall Push Function
void Recall_Push()
{
    printf("\nYour Want To Push Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Push();
        break;
    case '2':
        Stack();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Push();
        break;
    }
}

// Recall Pop Function
void Recall_Pop()
{
    printf("\nYour Want To Pop Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Pop();
        break;
    case '2':
        Stack();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Pop();
        break;
    }
}

// Recall Peep Function
void Recall_Peep()
{
    printf("\n\nYour Want To Peep Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Peep();
        break;
    case '2':
        Stack();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Peep();
        break;
    }
}

// Recall Peek Function
void Recall_Peek()
{
    printf("\nYour Want To Peek Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Peek();
        break;
    case '2':
        Stack();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Peek();
        break;
    }
}

// <-----------------------------------------------------------| End: Recall Stack Functions |----------------------------------------------------------> //

// <-------------------------------------------------------------------| End: Stack |-------------------------------------------------------------------> //
// ***************************************************************************************************************************************************** //

// ***************************************************************************************************************************************************** //
// <------------------------------------------------------------------| Start: Queue |------------------------------------------------------------------> //

// (3) Queue Funtions

void Simple_Queue();
void Circular_Queue();
void Doubly_Ended_Queue();
void Print_Queue();

void Queue()
{
    printf("\n-------------------- Queue --------------------\n");
    printf("(1) Simple Queue\n(2) Circular Queue\n(3) Doubly Ended Queue\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    // Simple Queue
    case '1':
        Simple_Queue();
        break;

    // Circular Queue
    case '2':
        Circular_Queue();
        break;

    // Doubly Ended Queue
    case '3':
        Doubly_Ended_Queue();
        break;

    case '0':
        Linear();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Queue();
        break;
    }
}

// <-----------------------------------------------------------| Start: Print Queue Functions |---------------------------------------------------------> //

// Print Queue Elements
void Print_Queue()
{
    printf("\n--> Front = %d\n", Front);
    printf("--> Rear  = %d\n", Rear);
    i = Front;
    if (Front == -1)
    {

        printf("---------------\n");
        printf("Queue: Empty !");
        printf("\n---------------\n");
    }
    else
    {
        for (i = Front; i >= -1; i++)
        {
            if (Q[i] > 99)
                printf("------");
            else if (Q[i] > 9)
                printf("-----");
            else
                printf("----");
            if (i == Rear)
            {
                break;
            }
            else if (i == N - 1)
            {
                i = -1;
            }
        }
        printf("--------\n");
        printf("Queue: |");

        int i = Front;
        for (i = Front; i >= -1; i++)
        {

            printf(" %d |", Q[i]);

            if (i == Rear)
            {
                break;
            }
            else if (i == N - 1)
            {
                i = -1;
            }
        }
        printf("\n--------");
        for (i = Front; i >= -1; i++)
        {
            if (Q[i] > 99)
                printf("------");
            else if (Q[i] > 9)
                printf("-----");
            else
                printf("----");

            if (i == Rear)
            {
                break;
            }
            else if (i == N - 1)
            {
                i = -1;
            }
        }
        printf("\n");
    }
}

// <-----------------------------------------------------------| End: Print Queue Functions |-----------------------------------------------------------> //

// ****************************************************************************************************************************************************** //

// <---------------------------------------------------------------| Start: Simple Queue |--------------------------------------------------------------> //

// Simple Queue Funcitons

void Enqueue();
void Dequeue();
void Search_Queue();

void Simple_Queue()
{
    printf("\n----------------- Simple Queue ----------------\n");
    printf("(1) Enqueue\n(2) Dequeue\n(3) Search in Queue\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    // ENQUEUE Operation
    case '1':
        Enqueue();
        break;

    // DEQUEUE Operations
    case '2':
        Dequeue();
        break;

    // Search Element in Queue
    case '3':
        Search_Queue();
        break;

    case '0':
        Queue();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Simple_Queue();
        break;
    }
}

// <----------------------------------------------------------| Start: Simple Queue Functions |---------------------------------------------------------> //

// Enqueue Function
void Recall_Enqueue();
void Enqueue()
{
    // ====================================== Start ====================================== //
    if (Rear >= N - 1)
    {
        printf("\n--> You Can't Enqueue Element Because Queue is Overflow !\n");
    }
    else
    {
        printf("\nBefore Enqueue Operation:");
        Print_Queue();

        if (Front == -1)
        {
            Front = 0;
        }

        printf("\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);

        Rear++;
        Q[Rear] = Data;

        printf("\nAfter Enqueue Operation:");
        Print_Queue();
    }
    // ======================================= End ======================================= //
    Recall_Enqueue();
}

// Dequeue Function
void Recall_Dequeue();
void Dequeue()
{
    // ====================================== Start ====================================== //
    if (Front == -1)
    {
        printf("\n--> You Can't Dequeue Element Because Queue is Underflow !\n");
    }
    else
    {
        printf("\nBefore Dequeue Operation:");
        Print_Queue();

        Data = Q[Front];
        if (Front == Rear)
        {
            Front = -1;
            Rear = -1;
        }
        else
        {
            Front++;
        }

        printf("\nAfter Dequeue Operation:");
        Print_Queue();
    }
    // ======================================= End ======================================= //
    Recall_Dequeue();
}

// Search in Queue Function
void Recall_Search_Queue();
void Search_Queue()
{
    // ====================================== Start ====================================== //
    if (Front == -1)
    {
        printf("\n--> You Can't Search Element Because Queue is Underflow !\n");
    }
    else
    {
        Print_Queue();
        printf("\nEnter Element You Want To Find From Above Queue: ");
        scanf("%d", &Data);

        for (i = Front; i <= Rear; i++)
        {
            if (Q[i] == Data)
            {
                a = 0;
                break;
            }
        }

        if (a == 0)
        {
            printf("\n--> %d is Found in Queue At Rear Pointer [%d]\n", Data, i);
        }
        else
        {
            printf("\n--> %d is Not Found in Queue !\n", Data);
        }
    }
    // ======================================= End ======================================= //
    Recall_Search_Queue();
}
// <----------------------------------------------------------| End: Simple Queue Functions |----------------------------------------------------------> //

// <------------------------------------------------------| Start: Recall Simple Queue Functions |-----------------------------------------------------> //

// Recall Enqueue Function
void Recall_Enqueue()
{
    printf("\nYour Want To Enqueue Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Enqueue();
        break;
    case '2':
        Simple_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Enqueue();
        break;
    }
}

// Recall Dequeue Function
void Recall_Dequeue()
{
    printf("\nYour Want To Dequeue Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Dequeue();
        break;
    case '2':
        Simple_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Dequeue();
        break;
    }
}

// Recall Search in Queue Function
void Recall_Search_Queue()
{
    printf("\nYour Want To Search Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Search_Queue();
        break;
    case '2':
        Simple_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Enqueue();
        break;
    }
}

// <-------------------------------------------------------| End: Recall Simple Queue Functions |------------------------------------------------------> //

// <----------------------------------------------------------------| End: Simple Queue |---------------------------------------------------------------> //

// ****************************************************************************************************************************************************** //

// <--------------------------------------------------------------| Start: Circular Queue |-------------------------------------------------------------> //

// Circular Queue Functions
void CIR_Enqueue();
void CIR_Dequeue();
void Search_CIR_Queue();

void Circular_Queue()
{
    printf("\n---------------- Circular Queue ---------------\n");
    printf("(1) Circular Enqueue\n(2) Circular Dequeue\n(3) Search in Circular Queue\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    // Circular ENQUEUE
    case '1':
        CIR_Enqueue();
        break;

    // Circular DEQUEUE
    case '2':
        CIR_Dequeue();
        break;

    case '0':
        Queue();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Circular_Queue();
        break;
    }
}

// <--------------------------------------------------------| Start: Circular Queue Functions |--------------------------------------------------------> //

// Circular Enqueue Funtion
void Recall_CIR_Enqueue();
void CIR_Enqueue()
{
    // ====================================== Start ====================================== //

    if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) // (Rear + 1) % N == Front
    {
        printf("\n--> You Can't Enqueue Because Queue is Overflow !\n");
    }
    else
    {
        printf("\nBefore Circular Enqueue Operation:");
        Print_Queue();
        printf("\nEnter Element You Want To Enqueue: ");
        scanf("%d", &Data);

        if (Front == -1)
        {
            Front = 0;
        }

        if (Rear == N - 1)
        {
            Rear = 0;
        }
        else
        {
            Rear++;
        }

        Q[Rear] = Data;

        printf("\nAfter Circular Enqueue Operation:");
        Print_Queue();
    }
    // ======================================= End ======================================= //
    Recall_CIR_Enqueue();
}

// Circular Dequeue Funtion
void Recall_CIR_Dequeue();
void CIR_Dequeue()
{
    // ====================================== Start ====================================== //

    if (Front == -1)
    {
        printf("\n--> You Cant't Dequeue Because Queue is Underflow !\n");
    }
    else
    {
        printf("\nBefore Circular Dequeue Operation:");
        Print_Queue();
        Data = Q[Front];

        if (Front == Rear)
        {
            Front = -1;
            Rear = -1;
        }
        else if (Front == N - 1)
        {
            Front = 0;
        }
        else
        {
            Front++;
        }

        printf("\nAfter Circular Dequeue Operation:");
        Print_Queue();
    }
    // ======================================= End ======================================= //
    Recall_CIR_Dequeue();
}

void Recall_Search_CIR_Queue();
void Search_CIR_Queue()
{
    // ====================================== Start ====================================== //

    // ======================================= End ======================================= //
    Recall_Search_CIR_Queue();
}

// <---------------------------------------------------------| End: Circular Queue Functions |---------------------------------------------------------> //

// <-----------------------------------------------------| Start: Recall Circular Queue Functions |----------------------------------------------------> //

// Recall Circular Enqueue Funtion
void Recall_CIR_Enqueue()
{
    printf("\nYour Want To Circular Enqueue Queue Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        CIR_Enqueue();
        break;
    case '2':
        Circular_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_CIR_Enqueue();
        break;
    }
}

// Recall Circular Dequeue Funtion
void Recall_CIR_Dequeue()
{
    printf("\nYour Want To Circular Dequeue Queue Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        CIR_Dequeue();
        break;
    case '2':
        Circular_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_CIR_Dequeue();
        break;
    }
}

void Recall_Search_CIR_Queue()
{
    printf("\nYour Want To Search in Circular Queue Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        Search_CIR_Queue();
        break;
    case '2':
        Circular_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Search_CIR_Queue();
        break;
    }
}

// <------------------------------------------------------| End: Recall Circular Queue Functions |------------------------------------------------------> //

// <---------------------------------------------------------------| End: Circular Queue |--------------------------------------------------------------> //

// ****************************************************************************************************************************************************** //

// <------------------------------------------------------------| Start: Doubly Ended Queue |-----------------------------------------------------------> //

// Doubly Ended Queue Functions
void DQ_Insert_Front();
void DQ_Delet_Rear();
void Doubly_Ended_Queue()
{
    printf("\n------------- Doubly Ended Queue --------------\n");
    printf("(1) Insert Front in Double Ended Queue\n(2) Delet Rear in Double Ended Queue\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    // Insert Front in Doubly Ended Queue
    case '1':
        DQ_Insert_Front();
        break;

    // Delet Rear in Doubly Ended Queue
    case '2':
        DQ_Delet_Rear();
        break;

    case '0':
        Queue();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Doubly_Ended_Queue();
        break;
    }
}

// <------------------------------------------------------| Start: Doubly Ended Queue Functions |------------------------------------------------------> //

void Recall_DQ_Insert_Front();
void DQ_Insert_Front()
{
    // ====================================== Start ====================================== //
    printf("\nBefore DQ Insert Front Operation:");
    Print_Queue();

    if (Front <= 0)
    {
        printf("\nQueue is Overflow !");
    }
    else
    {
        printf("\n\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);
        Front--;
        Q[Front] = Data;
    }
    printf("\nAfter DQ Insert Front Operation:");
    Print_Queue();
    // ======================================= End ======================================= //
    Recall_DQ_Insert_Front();
}

void Recall_DQ_Delet_Rear();
void DQ_Delet_Rear()
{
    // ====================================== Start ====================================== //
    printf("\nBefore DQ Delete Rear Operation:");
    Print_Queue();

    if (Rear == -1)
    {
        printf("\nQueue is Underflow !");
    }
    else
    {
        Data = Q[Rear];
        if (Front == Rear)
        {
            Front = -1;
            Rear = -1;
        }
        else
        {
            Rear--;
        }
    }
    printf("\nAfter DQ Delete Rear Operation:");
    Print_Queue();
    // ======================================= End ======================================= //
    Recall_DQ_Delet_Rear();
}

// <-------------------------------------------------------| End: Doubly Ended Queue Functions |-------------------------------------------------------> //

// <---------------------------------------------------| Start: Recall Doubly Ended Queue Functions |--------------------------------------------------> //

// Recall Doubly Ended Insert Front Queue Function
void Recall_DQ_Insert_Front()
{
    printf("\n\nYour Want To Insert In Front Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '1':
        DQ_Insert_Front();
        break;
    case '2':
        Doubly_Ended_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_DQ_Insert_Front();
        break;
    }
}

// Recall Doubly Ended Delet From Rear Queue Function
void Recall_DQ_Delet_Rear()
{
    printf("\nYour Want To Delet From Rear Again ?\n");
    printf("(1) Yes         (2) No\n");
    printf("(.) Main Menu   (*) Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {
    case '1':
        DQ_Delet_Rear();
        break;
    case '2':
        Doubly_Ended_Queue();
        break;
    case '.':
        Data_Structure_Master();
        break;
    case '*':
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_DQ_Delet_Rear();
        break;
    }
}

// <----------------------------------------------------| End: Recall Doubly Ended Queue Functions |----------------------------------------------------> //

// <-------------------------------------------------------------| End: Doubly Ended Queue |------------------------------------------------------------> //

// <-------------------------------------------------------------------| End: Queue |-------------------------------------------------------------------> //
// ****************************************************************************************************************************************************** //

// ****************************************************************************************************************************************************** //
// <----------------------------------------------------------------| Start: Link List |----------------------------------------------------------------> //

// (4) Link List Functions
void Link_List()
{
    printf("\n------------------ Link List ------------------\n");
    printf("\n(0) Previous Menu | (.) Manin Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");

    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '0':
        Linear();
        break;

    case '.':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Link_List();
        break;
    }
}

// <-----------------------------------------------------------------| Endt: Link List |----------------------------------------------------------------> //
// ****************************************************************************************************************************************************** //

// ***************************************************************************************************************************************************** //
// <-----------------------------------------------------------| End: Linear Data Structure |----------------------------------------------------------> //
// ***************************************************************************************************************************************************** //

// ***************************************************************************************************************************************************** //
// <--------------------------------------------------------| Start: Non Linear Data Structure |-------------------------------------------------------> //
// ***************************************************************************************************************************************************** //

// Non Linear Data Structure
void Non_Linear()
{
    printf("\n---------- Non Linear Data Structure ----------\n");
    printf("\n(0) Previous Menu | (*) Exit");
    printf("\n-----------------------------------------------\n");

    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);
    switch (cases)
    {
    case '0':
        Data_Structure_Master();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Linear();
        break;
    }
}

// ***************************************************************************************************************************************************** //
// <---------------------------------------------------------| End: Non Linear Data Structure |--------------------------------------------------------> //
// ***************************************************************************************************************************************************** //