# NBC-UE5-Plugin

### Blueprint Library
#### 1. Edit -> Plugin -> +Add -> 플러그인 종류 선택(Blueprint Library) -> 생성
- <img src="https://velog.velcdn.com/images/sotakqmf01/post/2d583396-0ad0-465d-81e4-778ef2f3b8d9/image.png" width="20%" height="20%">
- <img src="https://velog.velcdn.com/images/sotakqmf01/post/b1aeeb40-a2cd-4d18-a433-3c86230808e9/image.png" width="50%" height="50%">

#### 2. visual studio에 project/plugins/source/{플러그인 이름}/public(private)에 \[ {플러그인 이름}.h / {플러그인 이름}.cpp ], \[ {플러그인 이름}BPLibrary.h / {플러그인 이름}BPLibrary.cpp ], 이렇게 총 4개의 파일이 생성
- ![](https://velog.velcdn.com/images/sotakqmf01/post/89460fc1-0c06-4c24-9580-3e7116682943/image.png)

#### 3. {플러그인 이름}BPLibrary.h / {플러그인 이름}BPLibrary.cpp 파일에 함수 구현
- ※ 주의 : .cpp 파일을 보면 생성자가 있어서, .h 파일에 생성자를 선언하니까 빌드 에러 발생함

#### 4. 에디터로 돌아가서 Plugins 탭 -> PROJECT -> Other -> 플러그인의 Package 클릭 -> 경로 설정
- <img src="https://velog.velcdn.com/images/sotakqmf01/post/cd56c979-a955-488b-9b79-9c4263d10bea/image.png" width="60%" height="60%">

#### 5. 완성
- <img src="https://velog.velcdn.com/images/sotakqmf01/post/71e89f52-db0b-4bc6-bc1b-9b1d23931af7/image.png" width="40%" height="40%">

[Plugin 만들기](https://velog.io/@sotakqmf01/%EC%96%B8%EB%A6%AC%EC%96%BC-%EC%97%94%EC%A7%84-%EB%B3%B8%EC%BA%A0%ED%94%84-15%EC%A3%BC%EC%B0%A8-4-%EC%96%B8%EB%A6%AC%EC%96%BC-%EC%97%94%EC%A7%84-C-Plugin-%EB%A7%8C%EB%93%A4%EA%B8%B0)
