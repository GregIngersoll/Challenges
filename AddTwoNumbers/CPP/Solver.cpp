
#include <memory>
#include <stdexcept>

#include <ListNode.h>
#include <Solver.h>

std::unique_ptr<ListNode> Solver::solve()
{
    std::unique_ptr<ListNode> pList1 = toListNode(m_op1);
    std::unique_ptr<ListNode> pList2 = toListNode(m_op2);
    return addTwoNumbers (pList1.get(), pList2.get());
}

std::unique_ptr<ListNode> Solver::toListNode(long value)
{
    if (value == 0)
    {
        return nullptr;
    }

    long lowestValue = value % 10;
    value -= lowestValue;
    std::unique_ptr<ListNode> pCurNode = std::make_unique<ListNode>(lowestValue, toListNode(value/10));
    // ListNode * pCurNode = new ListNode(lowestValue, toListNode(value/10));
    
    return pCurNode;
}

long Solver::toLong (const ListNode * pNode)
{
    if (pNode == nullptr)
    {
        return 0;
    }

    return pNode->getValue() + (10 * toLong(pNode->getNext_ptr()));
}

std::unique_ptr<ListNode> Solver::addTwoNumbers(const ListNode * pList1, const ListNode * pList2)
{
    if ((pList1 == nullptr) || (pList2 == nullptr))
    {
        throw std::invalid_argument("List arguments cannot be null");
    }

    m_result = toLong(pList1) + toLong(pList2);
    return std::make_unique<ListNode>(m_result); 
}

