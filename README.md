## libft

## const란?
해당 식별자를 상수로 선언한다는 키워드

## 매개변수에 const를 붙이는 이유?
특정 함수에 전달하는 포인터의 내용이 훼손되는 것을 방지하기 위해서이다. 다른 함수에 포인터가 전달될 경우, call-by-reference 형태로 전달되므로 다른 함수 내에서 포인터의 값을 임의 조작할 수 있기 때문이다.

## size_t란?
플랫폼마다 다른 bit의 부호없는 정수형을 사용하기 위해서 사용하는 typedef, 이론상으로 가장 큰 사이즈를 담을 수 있는 unsigned 데이터 타입

## ft_isalpha
알파벳인지 알아내는 함수

## ft_isdigit
숫자인지 알아내는 함수

## ft_isalnum
알파벳이나 숫자인지 알아내는 함수

## ft_isascii
아스키코드인지 알아내는 함수

## ft_isprint
출력가능한지 알아내는 함수

## ft_strlen
문자열의 길이를 알아내는 함수

## ft_memset
dest에 c를 n만큼 초기화한다.

#unsigned char를 사용하는 이유
unsigned는 내부 비트의 일부를 부호를 표현하기 위한 비트로 사용하지않고 모든 bit를 값을 표현하기 위한 용도로 사용을 함. 따라서 임의의 메모리에 바이트 단위로 접근해 값을 다룰 때에는 반드시 unsigned 키워드를 사용해야 제대로된 값을 얻을 수 있다.

## ft_bzero
d 위치부터, n개만큼 0으로 초기화 하는 함수
이 함수는 더 이상 사용하지 않는 함수라고 한다.

## ft_memcpy
src의 n만큼 dest에 복사한다.
만일 두 메모리 블록이 겹쳐져 있다면 undefined behavior가 나타난다.

## ft_memmove
src 메모리 영역에서 dest 메모리 영역으로 n 바이트만큼 복사한다. 이 때, src 배열은 src와 dest의 메모리 영역과 겹치지 않는 메모리 영역부터 먼저 복사한다. 메모리 영역이 겹치는 경우는 한 배열 안에서 복사를 수행할 때이다.

## ft_strlcpy
dest에 src를 n-1만큼 복사한다.
src의 '\0'값을 만나기 전 혹은 size - 1만큼 복사가 이루어 졌을때 복사를 중지한다. -1이 붙은 이유는 복사를 진행한 후 '\0'값을 넣어주기 위해서 그런 것이다. 이러한 이유로 strlcpy는 strcpy나 strncpy보다 안정성이 있는 함수이다.

## ft_strlcat
dest 맨 뒤에 src를 n-1만큼 붙인다. 두 문자열을 합치는 함수다.
strlcpy와 같은 원리이다.

## ft_toupper
알파벳 소문자일경우, 대문자로 변환한다.

## ft_tolower
알파벳 대문자일경우, 소문자로 변환한다.

## ft_strchr
str에서 i를 찾을 때 사용하는 함수. str에서 i를 찾는다면 해당 주소를 반환하고 찾지 못하면 NULL을 리턴한다.
str가 const로 선언되어서 char *로 형변환해서 반환한다.
find부분이 \0일경우 str[idx] == \0도 비교해야한다.

## ft_strrchr
strchr과 마찬가지이나, 다른점은 뒤에서부터 찾는 함수
str이 빈 문자열일때나 s의 첫 문자만 c일 때, NULL이 아니라 s의 첫글자를 반환하도록 예외처리함.

## ft_strncmp
s1, s2 두개의 문자열의 아스키코드값을 n만큼 비교한다.
s1이 더 크다면 양수 반환, s2가 더 크다면 음수 반환, 두 문자열을 다 비교해도 같다면 0 반환
ft_memset과 같은 이유로 unsigned char를 사용했다.

## ft_memchr
src에서 c를 n만큼 찾는다. src의 값과 c의 값이 일치하면 src의 주소를 반환하고 아니라면 NULL을 반환한다.
return값에서 const 키워드때문에 컴파일 오류가 났어서, void *로 형변환을 함.

## ft_memcmp
strncmp와 비슷하다. 하지만 몇가지 다른점이 있다.
매개변수를 char *가 아닌 void *로 받아온다.
두 문자열 중 하나가 끝나더라도(널 값이 나오더라도) 상관없이 서로 다른 값이 나오거나, n개가 될 때 까지 비교를 수행한다.
오버플로우는 처리를 못해주는 것 같다. 같은 문자열인데도 n값을 크게 주면 0이 아니라 쓰레기값끼리 비교한 값을 리턴한다.
항상 n은 버퍼 사이즈보다 같거나 작게.
strncmp는 s1과 s2가 모두 NULL값이 나오면 남은 카운트에 관계없이 0을 반환했던 것과 차이가 있다.

## ft_strnstr
len 이하의 big 에서 little 를 검색하여 가장 먼저 나타나는 곳의 위치를 리턴한다.
이 때 일치하는 문자열이 없다면 널 포인터를 리턴하게 된다.
검색에서 마지막 널 문자는 포함하지 않는다
남은 size의 길이가 l_len 길이 보다 작다면, 비교할 의미가 없으므로 NULL을 리턴

## ft_atoi
문자열을 숫자로 바꿔주는 함수다.
맨 앞부분의 공백을 처리해주고, 부호는 하나만 처리한다.
오버플로우 예외처리를 함.

# long으로 선언한 이유
참고) https://smallpants.tistory.com/10

## ft_calloc
size 크기의 변수를 nmemb개 만큼 저장할 수 있는 메모리 공간을 할당한다.
그리고 동적으로 할당한 메모리의 모든 비트를 0으로 설정한다.

# malloc과의 차이점
참고) https://bunhere.tistory.com/255

## ft_strdup
str 길이 + 1 크기를 malloc으로 할당 후 문자열 str을 복사한 후 반환하는 함수.
반환받은 메모리는 반드시 free를 통하여 메모리를 해제해야 한다.
malloc + strcpy

## ft_substr
# 매개변수
#1. 부분 문자열 (substring) 을 생성할 원본 문자열
#2. 부분 문자열의 맨 처음 인덱스
#3. 부분 문자열의 최대 길이

# 반환값
부분 문자열. 할당 실패 시, NULL

# 설명
malloc을 이용하여 메모리를 할당받은 후, 원본 문자열 's' 로부터 부분 문자열을 생성하여 반환합니다.
부분 문자열은 인덱스 'start' 부터 시작하며, 최대 길이 'len'을 갖습니다.

## ft_strjoin
# 매개변수
1. 접두 문자열 (prefix string)
2. 접미 문자열 (suffix string)

# 반환값
새로운 문자열. 할당 실패 시, NULL

#설명
malloc을 이용하여 메모리를 할당받은 후, 문자열 's1' 과 's2' 를 이어붙인 새로운 문자열을 생성하여 반환합니다.

## ft_strtrim
# 매개변수
1. 양 쪽을 잘라낼 원본 문자열
2. 제거될 문자들의 집합

# 반환값
문자가 제거된 문자열. 할당 실패 시, NULL

# 설명
malloc을 이용하여 메모리를 할당받은 후, 's1'의 양 쪽 끝에서 'set'에 지정된 문자들이 제거된 문자열 사본을 반환합니다.

## ft_split
# 매개변수
1. 분할할 문자열
2. 구분자 (delimiter)

# 반환값
split을 통해 분할된 문자열의 배열. 할당 실패 시, NULL

# 설명
malloc을 이용하여 메모리를 할당받은 후, 구분자 'c' 를 기준으로 문자열 's'를 분할하여 그 결과를 담은 새로운 문자열 배열을 반환합니다. 문자열 배열의 끝은 NULL 포인터로 끝나야 합니다.

## ft_itoa
# 매개변수
1. 변환할 정수

# 반환값
정수를 표현하는 문자열. 할당 실패 시, NULL

# 설명
malloc을 이용하여 메모리를 할당받은 후, 인자로 받은 정수를 나타내는 문자열을 반환합니다. 음수 또한 무조건 처리되어야 합니다.

## ft_strmapi
# 매개변수
1. 함수를 적용할 문자열
2. 문자열의 각 문자에 적용할 함수

# 반환값
원본 문자열에서 함수 'f'를 성공적으로 적용하여 생성된 결과 문자열. 할당 실패 시, NULL

# 설명
문자열 's' 의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용합니다. 각 문자에 함수가 적용된 새로운 문자열을 생성합니다 (malloc을 이용하여 메모리를 할당)

## ft_striteri
# 매개변수
1. 함수를 적용할 문자열
2. 문자열의 각 문자에 적용할 함수

# 반환값
없음

# 설명
문자열 's' 의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용합니다. 또한 각 문자의 주소값이 'f' 함수의 두 번째 인자로 사용되며, 경우에 따라 수정될 수 있습니다.

## ft_putchar_fd
# 매개변수
1. 출력할 문자
2. 값이 쓰여질 파일 식별자 (file descriptor)

# 반환값
없음

# 설명
제공받은 파일 식별자에 문자 'c'를 출력합니다.

## ft_putstr_fd
# 매개변수
1. 출력할 문자열
2. 값이 쓰여질 파일 식별자 (file descriptor)

# 반환값
없음

# 설명
제공받은 파일 식별자에 문자열 's'를 출력합니다.

## ft_putendl_fd
# 매개변수
1. 출력할 문자열
2. 값이 쓰여질 파일 식별자 (file descriptor)

# 반환값
없음

# 설명
제공받은 파일 식별자에 문자열 's'를 출력하고, 개행을 출력합니다.

## ft_putnbr_fd
# 매개변수
1. 출력할 정수
2. 값이 쓰여질 파일 식별자 (file descriptor)

# 반환값
없음

# 설명
제공받은 파일 식별자에 정수 'n'를 출력합니다.

## ft_lstnew
# 매개변수
1. 새로운 요소에 들어갈 content

# 반환값
새로운 요소 (element)

# 설명
malloc을 통해 메모리를 할당하고 새로운 요소를 반환합니다. 요소 내의 변수 'content' 는 인자로 받아온 'content' 로 초기화되어야 합니다. 요소 내의 변수 'next'는 NULL로 초기화되어야 합니다.

## ft_lstadd_front
# 매개변수
1. 리스트의 맨 앞에 위치한 요소
2. 리스트에 추가할 요소

# 반환값
없음

# 설명
요소 'new'를 리스트의 맨 앞에 추가합니다.

## ft_lstsize
# 매개변수
1. 리스트의 맨 앞에 위치한 요소

# 반환값
리스트의 길이

# 설명
리스트에 포함된 요소의 개수를 셉니다.

## ft_lstlast
# 매개변수
1. 리스트의 맨 앞에 위치한 요소

# 반환값
리스트의 맨 마지막 요소

# 설명
리스트의 맨 마지막에 위치한 요소를 반환합니다.

## ft_lstadd_back
# 매개변수
1. 리스트의 맨 앞에 위치한 요소의 포인터
2. 리스트의 맨 끝에 추가할 요소

# 반환값
없음

# 설명
요소 'new'를 리스트의 맨 뒤에 추가합니다.

## ft_lstdelone
# 매개변수
1. 삭제할 요소
2. 요소의 content 삭제에 사용되는 함수 포인터

# 반환값
없음

# 설명
첫 번째 인자값으로 받은 요소의 content를 두 번째 인자로 받은 함수 포인터를 이용해 해제하고, 요소 자체의 메모리를 해제합니다. next 포인터는 해제하면 안 됩니다.

## ft_lstclear
# 매개변수
1. 삭제할 요소의 포인터
2. 요소의 content 삭제에 사용되는 함수 포인터

# 반환값
없음

# 설명
함수 'del' 과 free를 이용하여 인자값으로 받은 요소와 그 뒤에 따라오는 리스트의 모든 요소들을 삭제하고 해제합니다. 마지막으로, 리스트의 포인터는 NULL로 설정되어야 합니다.

## ft_lstiter
# 매개변수
1. 리스트상의 요소
2. 리스트 내에서 반복 적용될 함수 포인터

# 반환값
없음

# 설명
리스트 'lst' 를 순회하며, 리스트에 포함된 모든 요소들의 content에 함수 'f'를 반복적으로 적용시킵니다.

## ft_lstmap
# 매개변수
1. 리스트상의 요소
2. 리스트 내에서 반복 적용될 함수 포인터
3. 필요할 경우, 요소의 content를 삭제하는 데에 사용되는 함수

# 반환값
새로운 리스트. 할당 실패 시, NULL

# 설명
리스트 'lst'의 요소들을 순회하며 각 요소의 content에 함수 'f'를 연속적으로 적용시킵니다. 또한 함수 'f'를 적용시킨 결과물들을 content로 담은 새로운 리스트를 생성합니다. 'del' 함수들은 필요 시 각 요소의 content를 삭제하는 데 사용됩니다.
