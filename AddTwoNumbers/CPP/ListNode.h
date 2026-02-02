#ifndef __LIST_NODE__
#define __LIST_NODE__

#include <memory>

class ListNode
{
    public:
        ListNode() = default;
        ListNode(long value)  : ListNode(value, nullptr) {}
        ListNode(long value, std::unique_ptr<ListNode> pNode) : m_value(value), m_pNext(std::move(pNode)) {}

        long getValue() const 
        {
            return m_value;
        }

        const ListNode* getNext_ptr() const
        {
            return m_pNext.get();
        }

        const ListNode& getNext_ref() const
        {
            return *m_pNext;
        }

    private:
        std::unique_ptr<ListNode> m_pNext;
        long m_value = 0;
};

#endif