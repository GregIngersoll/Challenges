# AddTwoNumbers

Linked problem:  https://leetcode.com/problems/add-two-numbers/description/

### Problem:
Add two decimal numbers stored as linked list.  Each node contains one decimal number in the range 0-9.
The Nth node is the digit for the 10^n th position.

In other words, 2->3->4 would be 432.

### Solutions

#### Solve-as-you-go
This approach creates a sum for the two lists s two pointers traverse the list.  
Basically, this is:  
1. pointer1 = head1
2. hpointer2 = head2
3. sum = carry = 0
4. while pointer1 or pointer2 are non-null:
    1. tempSum = pointer1value + pointer2value, checking for nullptr
    2. tempSum = tempSum + carry
    3. carry = 0
    4. if tempSump > 9, add 1 to carry and let tempSum = tempSum %10
    5.  sum += tempSum
    6.  advance pointer1 and pointer2, checking for nullptr
10. return sum

#### Convert-longs-solve-convert-back
1. Convert first operand to long.
2. Convert second operand to long.
3. Perform operation.
4. Convert result to linked list.

#### Analysis
The first approach solves the problem in O(n), but it is less flexible, and is more complex.

The second approach will also take O(n).  
It is, however, a little simpler.  
Additionally, it can be reused for other operations, and for other bases.
