class ListNode
{
    public:
        ListNode() = default;
        ListNode(long value)  : ListNode(value, nullptr) {}
        ListNode(long value, ListNode* pNode) : m_value(value), m_pNext(pNode) {}

        long getValue() const 
        {
            return m_value;
        }

        const ListNode * getNext() const
        {
            return m_pNext;
        }

    private:
        ListNode* m_pNext = nullptr;
        long m_value = 0;
};