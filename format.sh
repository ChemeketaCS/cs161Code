find -regextype egrep -regex '.*\.(cpp|h|cpp.bak)' -exec clang-format -i -style='{ BasedOnStyle: LLVM, AllowShortFunctionsOnASingleLine: None, PointerAlignment: Left, SpaceBeforeParens: Never }' {} \;