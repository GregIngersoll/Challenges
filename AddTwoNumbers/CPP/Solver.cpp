
#include <ListNode.h>
#include <Solver.h>

ListNode * Solver::solve()
{
    ListNode * pList1 = toListNode(m_op1);
    ListNode * pList2 = toListNode(m_op2);
    return addTwoNumbers (pList1, pList2);
}

ListNode * Solver::toListNode(long value)
{
    if (value == 0)
    {
        return nullptr;
    }

    long lowestValue = value % 10;
    value -= lowestValue;
    ListNode * pCurNode = new ListNode(lowestValue, toListNode(value/10));
    
    return pCurNode;
}

long Solver::toLong (const ListNode * pNode)
{
    if (pNode == nullptr)
    {
        return 0;
    }

    return pNode->getValue() + (10 * toLong(pNode->getNext()));
}

ListNode * Solver::addTwoNumbers(ListNode * pList1, ListNode * pList2)
{
    m_result = toLong(pList1) + toLong(pList2);
    ListNode * pRetVal = toListNode(m_result);
    return pRetVal;
}
