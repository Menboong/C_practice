# Switch case 문

![](https://dojang.io/pluginfile.php/259/mod_page/content/20/unit26-1.png)

- 항상 case와 함께 사용
- 변수의 값 즉 switch의 괄호에 들어가는 값과 일치하면 해당 코드를 실행
  - 단 case에는 조건식이나 변수를 지정할 수 없음
  - 만약 아무 case에도 해당하지 않으면 default코드를 실행

#### 즉 switch 분기문은 형식이 균일하며 처리해야 할 조건이 많을 때 사용



## 문법

- switch 괄호 안에는 값을 판단할 변수를 지정

  - 정수자료형만 사용 가능

  ```c
  switch (num1){}
  ```

- case 다음 값을 지정해준 뒤 :(콜론)을 붙여준 뒤 코드를 작성

  ```c
  case 2:
  	코드코드코드코드코드코드
  ```

### break

- break가 있을 때
  - 해당 case문을 다 끝내면 종료

```c
case 1:    // 1일 때는 case1만 실행
	printf("1입니다.\n");
	break;
case 2:    // 2일 때는 case2만 실행
    printf("2입니다.\n");
	break;
```

- break가 없을 때
  - 해당 case문 부터 switch문 마지막 줄까지 실행한 뒤 종료

```c
case 1:    // 1일 때는 아래 case 2까지 실행
	printf("1입니다.\n");
case 2:   
	printf("2입니다.\n");
```

- break응용

  ```c
  switch (num1)
  {
      case 1:    // 1 또는
      case 2:    // 2일 때 코드 실행
          printf("1 또는 2입니다.\n");
          break;
      case 3:    // 3 또는
      case 4:    // 4일 때 코드 실행
          printf("3 또는 4입니다.\n");
          break;
  }
  ```

#### 변수 선언

```c
case 1:
    int num2 = num1;    // 컴파일 에러 발생
    printf("%d입니다.\n", num2);
    break;
case 2:
    printf("2입니다.\n");
    break;
```

```c
 case 1:
 {   // case에서 변수를 선언하려면 중괄호로 묶어줌
    int num2 = num1;
    printf("%d입니다.\n", num2);
    break;
 }
case 2:
	printf("2입니다.\n");
    break;
```

- 중괄호로 묶어 주어야 오류가 안 생김
  - 중괄호 안에 선언된 변수는 중괄호 내애서만 사용 가능