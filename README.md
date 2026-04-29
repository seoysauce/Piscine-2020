# 42 Seoul Piscine — 2020

42서울 입학 시험인 **La Piscine**(2020년) 4주 동안 풀어낸 과제 모음.

## 과제 개요

- **회차**: 2020년 Piscine
- **언어**: C, Shell (bash/zsh)
- **평가 방식**
  - 매일 06시쯤 Module(과제 명세) 자동 배포 → 24시간 내 풀이 → 다음 날 동료 평가 + Moulinette(자동 채점) 실행
  - 주말마다 **Rush** 팀 프로젝트 (랜덤 3인 1조)
  - 마지막 주에 **Examen Final**로 종합 평가
- **공통 제약**
  - 모든 코드는 **Norminette** (42의 코드 스타일 검사기) 통과 필요
  - 함수당 25줄, 파일당 5함수, 변수 선언/대입 분리, `for`·`do-while`·`switch` 등 다수 키워드 금지
  - 표준 라이브러리는 **subject가 명시한 함수만 사용 가능** (대부분 `write`, `malloc`, `free` 등 최소 집합)
  - 헤더 주석(보일러플레이트) 의무화

## 레포 구조

| 경로 | 모듈 | 주요 주제 |
|---|---|---|
| `shell00/` | Shell 00 | 기본 Unix 명령어, 파일/디렉토리 다루기, 파이프·리다이렉션 기초 |
| `shell01/` | Shell 01 | 사용자·권한, 정규표현식, `find`·`grep`·`sed` 등 텍스트 처리 |
| `c00main/` | C 00 | 첫 C 함수 — `ft_putchar`, `ft_print_alphabet`, `ft_print_numbers` 등 `write(1, …)` 기반 출력 |
| `c01main/` | C 01 | 포인터, 배열, 단순 반복문 — `ft_ft`, `ft_ultimate_ft`, `ft_swap`, `ft_div_mod` |
| `c02main/` | C 02 | 문자열 다루기 — `ft_strlen`, `ft_strcpy`, `ft_str_is_*`, `ft_strupcase`, `ft_strcapitalize` |
| `c03/`, `c03main/` 계열 | C 03 | 문자열 비교·연결 — `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat`, `ft_strstr` |
| `c04/`, `c04main/` 계열 | C 04 | 진수 변환·출력 — `ft_putnbr`, `ft_atoi`, `ft_putnbr_base`, `ft_atoi_base` |
| `c05main/` | C 05 | 재귀·반복 — `ft_iterative_factorial`, `ft_recursive_power`, `ft_fibonacci`, `ft_sqrt`, `ft_is_prime` |
| `c06/` | C 06 | `argc`/`argv` — 명령행 인자 받아 처리 |
| `c07/`, `c07main/` | C 07 | 동적 메모리 (`malloc`) — `ft_strdup`, `ft_range`, `ft_ultimate_range`, `ft_split` |
| `c08/`, `c08main/` | C 08 | 헤더 파일, `typedef`, `struct` |
| `c09/`, `c09main/` | C 09 | 정적 라이브러리(`ar`), `Makefile`, 멀티 파일 빌드 |
| `rush01/` | Rush 01 | 주말 팀 프로젝트 |

## 풀이 노트

- **C 00–02 (기초)**: 표준 라이브러리 사용 금지 환경에서 `write(1, &c, 1)` 한 줄로 모든 출력을 직접 구현. `printf` 없이 동작을 추론하고 검증하는 감각을 만드는 단계.
- **C 03–04 (문자열·변환)**: 문자열을 바이트 배열로 다루며 NUL-terminator 경계 조건을 처리. `ft_atoi_base`는 음수 처리, 공백·부호 스킵, 진수 문자 중복 검증까지 함수 한 개에 들어가는 모듈로, 헬퍼 분리가 가독성에 결정적이다.
- **C 05 (재귀)**: 같은 문제를 반복문 버전과 재귀 버전 양쪽으로 작성. 정수 오버플로(`ft_iterative_factorial(13)` 이상)와 종료 조건 누락이 주된 함정.
- **C 07 (동적 메모리)**: `malloc` 실패 시 `NULL` 반환 규약을 모든 함수에 일관되게 적용. `ft_split`은 단어 개수 카운트 → 각 단어 길이 계산 → 할당 순으로 단계가 분리되어야 한다.
- **C 09 (라이브러리화)**: 그동안 작성한 함수들을 모아 `libft.a` 정적 라이브러리로 묶고 `Makefile`로 빌드 자동화. 이후 본 과정의 [libft](https://github.com/seoysauce/libft) 프로젝트로 직접 연결된다.
- **Rush 01**: 스카이라인(Skyscrapers) 퍼즐 풀이 — 순열 생성 → 가시성 조건 검증의 백트래킹 구조. 폴더에 `cond_check`, `next_permu`, `solve_puzzle`이 헤더 단위로 분리되어 있다.

## 빌드 / 실행

각 ex 디렉토리는 단일 `.c` 파일 + (선택) `main.c` 구조. Norminette 시점의 컴파일 옵션을 그대로 쓰면 된다.

```sh
# 단일 ex 컴파일·실행
cd c00main/ex00
cc -Wall -Wextra -Werror ft_putchar.c main.c -o ex00
./ex00

# c09main/ex01 — Makefile 모듈
cd c09main/ex01
make            # libft.a 생성
make clean      # .o 제거
make fclean     # libft.a까지 제거
make re         # fclean + all
```

> `a.out` 파일이 일부 ex에 남아 있는 것은 당시 검사 직후 컴파일 산출물이 그대로 커밋된 결과. 재컴파일 권장.

## 참고

- 본 레포는 Piscine 종료 후 만든 **백업용 레포**다. 실제 제출은 42서울 인트라넷 git에 이루어졌고, 이 레포의 커밋 날짜는 과제 수행 시점과 일치하지 않는다.
- 일부 폴더에 빌드 산출물(`a.out`)이나 인트라넷 다운로드 폴더(`rush01/intra-uuid-…`)가 그대로 남아 있는 것은 당시 제출 디렉토리를 그대로 백업한 결과.
