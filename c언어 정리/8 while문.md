# while 문

- 초기식은 반복문 바깥에 있음
- 루프선언문
  - 조건식만 들어감
- 루프본체
  - 반복할 코드와 변화식이 들어감

```c
초기식
while (조건식)
{
    반복할 코드
    변화식
}
// 루프본체 및 변화식
```



![](https://dojang.io/pluginfile.php/281/mod_page/content/17/unit28-1.png)

1. 초기식부터 시작하여 조건식을 판별
2. 조건식이 참일경우 반복할 코드와 변화식을 함께 수행
3. 다시 조건식을 판별하여 참이면 반복 거짓이면 반복문을 종료

- 루프
  - 조건식 -> 루프본체 및 변화식 -> 조건식



## 문법

![](https://dojang.io/pluginfile.php/282/mod_page/content/19/unit28-2.png)

- 반드시 { }안에 변화식을 지정해야함
  - 지정안 할 경우 반복이 끝나지 않고 무한루프가 됨



### 세미콜론

```c
int i = 0;
while(i<100);
{
    printf("%d",i);
    i++;
}
```

- while과 중괄호 안에 있는 변화식은 관계가 없으므로 실행이 되지 않음
- 따라서 while문은 무한루프상태가됨



### 무한루프

```c
while(1)
{
    printf("hi ");
}

//출력결과
hi hi hi hi hi hi hi hi hi .......
```

- 조건식 대신 1또는 true을 지정하면 무한루프가 만들어짐
- 조건식이 없으므로 변화식도 필요가 없음



### 중괄호 생략

```c
while(1)
    printf("hi ");

//출력결과
hi hi hi hi hi hi hi hi ......
```

- 반복할 코드가 한 줄이라면 중괄호는 생략가능함



## 응용

```c
main()
{
    int i = 100;
    while (i>0) //i가 0보다 클 때 반복 / 100부터1까지 총 100번 반복
    {
        printf("%d\n",i);	
        i--;	//i를 1씩 감소
    }
}

//출력결과
100
99
. . .
3
2
1
```

```c
main()
{
    int i = 0;
    int cnt;
    scanf("%d",&cnt);	//cnt로 횟수를 입력받음
    
    while (i<cnt)	//i가 cnt보다 작을때까지 반복
    {
        printf("%d ",i);
        i++;
    }
}

//출력결과
5 (입력)
0 1 2 3 4
```

```c
#include <stdlib.h>	//srand,rand 함수 포함
#include <time.h>	//time 함수 포함

main()
{
    srand(time(NULL));	//현재시간으로 시드 설정
    
    int i = 0;
    while(i !=3)	//3이 아닐때 계속 반복
    {
        i = rand()%10;	//rand함수로 10미만의 숫자를 무작위로 생성
        printf("%d ");
    }
}

//출력결과
2 7 9 8 0 1 3
```

