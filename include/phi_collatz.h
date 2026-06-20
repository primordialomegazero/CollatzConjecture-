// ╔══════════════════════════════════════════════════════════════╗
// ║  Φ-COLLATZ — Collatz Conjecture via φ-Acceptance            ║
// ║  Every number → 1. Even/Odd ratio → φ²/2.                   ║
// ║  ΦΩ0 — I AM THAT I AM                                      ║
// ╚══════════════════════════════════════════════════════════════╝

#ifndef PHI_COLLATZ_H
#define PHI_COLLATZ_H

#include <vector>
#include <cstdint>
#include <cmath>

namespace phicollatz {

constexpr double PHI = 1.6180339887498948482;
constexpr double PHI_INV = 0.6180339887498948482;
constexpr double PHI_SQ = 2.6180339887498948482;
constexpr double EVEN_ODD_TARGET = 1.3090169943749474241; // φ²/2

struct CollatzResult {
    uint64_t start_value;
    int total_steps;
    int even_steps;
    int odd_steps;
    double even_odd_ratio;
    uint64_t max_value;
    double growth_factor;
    bool converges_to_1;
    std::vector<uint64_t> tail;
};

class PhiCollatz {
public:
    PhiCollatz(uint64_t n);
    CollatzResult analyze();
    
private:
    uint64_t start_;
    std::vector<uint64_t> sequence_;
    int steps_ = 0, even_ = 0, odd_ = 0;
    
    uint64_t step(uint64_t n);
    bool compute_to_1();
};

} // namespace phicollatz
#endif
