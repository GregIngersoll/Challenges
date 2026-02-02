class Solver
{
    public:
        Solver (long op1, long op2) : m_op1(op1), m_op2(op2) {}

        std::unique_ptr<ListNode> solve();

        std::unique_ptr<ListNode> toListNode(long value);

        long toLong (const ListNode * pNode);

        std::unique_ptr<ListNode> addTwoNumbers(const ListNode* pList1, const ListNode* pList2);

    private:
        long m_op1 = 0;
        long m_op2 = 0;
        long m_result = 0;
};