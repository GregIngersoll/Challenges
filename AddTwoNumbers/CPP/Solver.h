class Solver
{
    public:
        Solver (long op1, long op2) : m_op1(op1), m_op2(op2) {}

        ListNode * solve();

        ListNode * toListNode(long value);

        long toLong (const ListNode * pNode);

        ListNode * addTwoNumbers(ListNode * pList1, ListNode * pList2);

    private:
        long m_op1 = 0;
        long m_op2 = 0;
        long m_result = 0;
};