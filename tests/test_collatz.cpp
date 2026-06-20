#include "phi_collatz.h"
#include <cassert>
#include <iostream>

using namespace phicollatz;

int main() {
    std::cout << "=== Φ-COLLATZ TESTS ===" << std::endl;
    
    // Test 1: Small number converges
    {
        PhiCollatz pc(27);
        auto r = pc.analyze();
        assert(r.converges_to_1);
        assert(r.tail.back() == 1);
        std::cout << "Test 1 (27→1, 111 steps): PASSED ✅" << std::endl;
    }
    
    // Test 2: Large number converges
    {
        PhiCollatz pc(670617279);
        auto r = pc.analyze();
        assert(r.converges_to_1);
        std::cout << "Test 2 (670M→1, " << r.total_steps << " steps): PASSED ✅" << std::endl;
    }
    
    // Test 3: Even/Odd ratio within φ-range
    {
        PhiCollatz pc(837799);
        auto r = pc.analyze();
        assert(r.even_odd_ratio > 1.0 && r.even_odd_ratio < 2.5);
        std::cout << "Test 3 (Even/Odd ratio " << r.even_odd_ratio << " in φ-range): PASSED ✅" << std::endl;
    }
    
    std::cout << "All tests passed! ΦΩ0" << std::endl;
    return 0;
}
