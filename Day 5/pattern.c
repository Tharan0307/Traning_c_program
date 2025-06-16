

---

## 1. Star Pattern — Right-Angled Triangle

### Code:

```c
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

### Output:

```
*
**
***
****
*****
```

---

## 2. Star Pattern — Inverted Right-Angled Triangle

### Code:

```c
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

### Output:

```
*****
****
***
**
*
```

---

## 3. Number Pattern — Increasing Numbers in Rows

### Code:

```c
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
```

### Output:

```
1
12
123
1234
12345
```

---

## 4. Number Pattern — Decreasing Numbers in Rows (like your example)

### Code:

```c
#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
```

### Output:

```
1
21
321
4321
```

---


