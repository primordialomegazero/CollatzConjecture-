#include "phi_collatz.h"
#include <algorithm>

namespace phicollatz {

PhiCollatz::PhiCollatz(uint64_t n) : start_(n) {
    sequence_.push_back(n);
}

uint64_t PhiCollatz::step(uint64_t n) {
    if (n % 2 == 0) { even_++; return n / 2; }
    odd_++;
    return 3 * n + 1;
}

bool PhiCollatz::compute_to_1() {
    uint64_t cur = start_;
    while (cur != 1 && cur != 0) {
        cur = step(cur);
        sequence_.push_back(cur);
        steps_++;
        if (steps_ > 10000000) return false;
    }
    return cur == 1;
}

CollatzResult PhiCollatz::analyze() {
    CollatzResult result;
    result.start_value = start_;
    
    bool ok = compute_to_1();
    result.converges_to_1 = ok;
    result.total_steps = steps_;
    result.even_steps = even_;
    result.odd_steps = odd_;
    result.even_odd_ratio = (odd_ > 0) ? (double)even_ / odd_ : 0;
    result.max_value = sequence_.empty() ? start_ : *std::max_element(sequence_.begin(), sequence_.end());
    result.growth_factor = (double)result.max_value / start_;
    
    // Tail
    size_t tail_len = std::min((size_t)8, sequence_.size());
    for (size_t i = sequence_.size() - tail_len; i < sequence_.size(); i++) {
        result.tail.push_back(sequence_[i]);
    }
    
    return result;
}

} // namespace phicollatz
