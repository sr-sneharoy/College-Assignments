# 2.3) What are Trigraph characters? How are they useful?

In C programming, **trigraph characters** are three-character sequences that begin with two question marks (`??`) followed by a third character. They represent specific single characters that might not be available on all keyboards, particularly in environments with limited character sets. Trigraphs are replaced by their corresponding single characters during the preprocessing phase of compilation.

### List of Trigraph Characters

Here’s a list of the trigraph sequences and the characters they represent:

| Trigraph | Replacement Character |
|----------|------------------------|
| `??=`    | `#`                   |
| `??(`    | `[`                   |
| `??)`    | `]`                   |
| `??/`    | `\`                   |
| `??'`    | `^`                   |
| `??<`    | `{`                   |
| `??>`    | `}`                   |
| `??!`    | `|`                   |
| `??-`    | `~`                   |

### Usage and Purpose

Trigraphs were introduced to allow C programs to be written in environments where certain characters (like `#`, `{`, `}`, etc.) might not be directly accessible on the keyboard. For instance, on some international keyboards or systems with limited character sets, it might be challenging to type `#` or `{`, so the equivalent trigraphs `??=` and `??<` would be used instead.

### Example

Here’s how a simple C program using trigraphs might look:

```c
??=include <stdio.h>   // ??= is replaced by #
int main(void) ??<      // ??< is replaced by {
    printf("Hello, World!??/n"); // ??/ is replaced by \
    return 0;
??>                      // ??> is replaced by }
```

After preprocessing, this code will be equivalent to:

```c
#include <stdio.h>
int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

### Modern Relevance

While trigraphs are part of the C standard, they are rarely used in modern programming due to the near-universal availability of keyboards and character sets that include the necessary symbols. However, knowing about trigraphs is useful for understanding older code or writing highly portable C programs across different international environments.




# 2.4) Describe the four basic data types. how could we extend the range of values they represent?