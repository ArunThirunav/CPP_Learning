#include <cassert>
 
[[maybe_unused]] void func([[maybe_unused]] bool thing1,
                        [[maybe_unused]] bool thing2)
{
    [[maybe_unused]] bool b = thing1 && thing2;
    assert(b);
}
 
int main() {
    // func(1, 1);
}