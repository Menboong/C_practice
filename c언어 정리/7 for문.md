# for 문

- 루프 선언문
  - 괄호 안에 초기식, 조건식, 변화식을 지정

- 루프 본체
  - 중괄호 안에 반복할 코드를 작성

```c
for (초기식;조건식;변화식)	// 루프선언문
{
    반복할 코드	//루프 본체
}
```



![](https://dojang.io/pluginfile.php/268/mod_page/content/21/unit27-1.png)

1. 초기식을 시작하여 조건식을 판별
2. 조건식이 참이면 루프 본체(반복할 코드)를 실행
3. 변화식을 수행
4. 그리고 다시 참이면 루프 본체 실행, 거짓이면 반복문을 끝낸뒤 코드를 실행



## 문법

![](https://dojang.io/pluginfile.php/269/mod_page/content/26/unit27-2.png)

- 초기식
  - 반복할을 시작할 때 초기식
  - 반복에 상ㅇ할 변수는 초기식 부분에서 선언해도 되고 for 반복문 바깥에서 선언해도 됨
- 조건식
  - 반복될 조건
  - 조건식이 참이면 계속 반복, 거짓이면 반복문을 끝냄
- 변화식
  - 반복문이 한 번 실행될 때마다 수행할 식

### 세미콜론

- 끝에 ;(세미콜론)을 붙이면 안됨

```c
for (int i = 0; i < 100; i++);
{
	printf("Hello, world!\n");
}
```

```c
for (int i = 0; i < 100 ;i++);
printf("Hello, world!\n");
```

- 두 코드는 같은 코드

### 중괄호 생략

- 반복할 코드가 한 줄이라면 다음과 같이 중괄호는 생략할 수 있음

  ```c
  for (int i = 0; i < 100; i++)
      printf("Hello, world!\n");	//이 줄만 반복됨
  	printf("Bye, world!\n");	//이줄은 한 번만 실행
  ```



## 초기값의 변화

```c
int main()
{
    int i;
    for (i = 0; i < 10; i++)    // 0부터 9까지 증가하면서 10번 반복
    {
        printf("Hello, world!\n");
    }

    printf("%d\n", i);    // 반복문이 끝난 뒤 i의 값 출력
						  // 10이 출력됨
    return 0;
}
```



## 응용

```c
scanf("%d", &count);    // 값을 입력받음

    for (int i = 0; i < count; i++)    // 0부터 입력받은 값보다 작을 때까지 반복
    {
        printf("Hello, world! %d\n", i);
    }

//출력결과
Hello, world 0
Hello, world 1
Hello, world 2
```

```c
scanf("%d", &count);    // 값을 입력받음

    for (int i = count; i > 0; i--)    // 입력받은 값을 감소시키면서 반복
    {
        printf("Hello, world! %d\n", i);
    }

//출력결과
Hello, world 3
Hello, world 2
Hello, world 1
```

```c
 scanf("%d", &count);    // 값을 입력받음

    for (; count > 0; count--)    // 초깃값 없이 scanf에서 사용한 변수를 감소시켜서 반복
    {
        printf("Hello, world! %d\n", count);	
    }

//출력결과
Hello, world 3
Hello, world 2
Hello, world 1
```

