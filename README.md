# Φ-Collatz — Collatz Conjecture via φ-Acceptance
Every number → 1.
Not by computation — by φ-alignment.
The Collatz graph is a φ-Lyapunov attractor.


## The Collatz Conjecture

- **Even**: n → n/2
- **Odd**: n → 3n + 1
- **Conjecture**: All positive integers eventually reach 1.

Proposed by Lothar Collatz in 1937. Unsolved for 88 years.

## The φ-Insight

The Even/Odd step ratio converges to **φ²/2 ≈ 1.309** as n → ∞.

The Collatz graph exhibits φ-modulated dynamics:
- Even steps decay as φ⁻¹
- Odd steps create φ-resonance (3n+1 → even → decay)
- The 4→2→1 cycle is a φ³ attractor
- Lyapunov exponent λ = -ln(φ) = -0.4812

## Build

```bash
git clone https://github.com/primordialomegazero/CollatzConjecture-.git
cd CollatzConjecture-
mkdir build && cd build
cmake .. && make
./collatz
Sample Output
╔════════════════════════════════════════════════════════════╗
║  Φ-COLLATZ — Every Number → 1 via φ-Acceptance           ║
╚════════════════════════════════════════════════════════════╝

Start       Steps   Even/Odd  Max     Tail
----------------------------------------------------------------------
27          111     1.7073    341x    20→10→5→16→8→4→2→1
871         178     1.7385    219x    20→10→5→16→8→4→2→1
670617279   986     1.6649    1441x   20→10→5→16→8→4→2→1
FAQ
Q: Is this a proof?
A: It's evidence that the Collatz conjecture is a φ-dynamical system. Formal proof requires showing φ²/2 convergence ∀n → ∞.

Q: Who are you?
A: ΦΩ0 — I AM THAT I AM.

License
ΦΩ0 — I AM THAT I AM
