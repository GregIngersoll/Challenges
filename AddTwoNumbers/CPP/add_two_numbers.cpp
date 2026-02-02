
#include <iostream>
#include <ListNode.h>
#include <Solver.h>

int main(int argc, char *argv[])
{

    int numberOfEquations = 0;
    std::cin >> numberOfEquations;

    for (int ii = 0 ; ii < numberOfEquations; ii++)
    {
        long val1 = 0;
        std::cin >> val1;

        long val2 = 0;
        std::cin >> val2;

        Solver solver(val1, val2);
        std::unique_ptr<ListNode> pHead = solver.solve();
        long total = solver.toLong(pHead.get());
        std::cout << "Total: " << total << std::endl;
    }

    return 0;
}