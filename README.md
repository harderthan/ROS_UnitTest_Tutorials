# ROS_UnitTest_Tutorials

이 저장소는 [ROS wiki](http://wiki.ros.org/action/show/Quality/Tutorials/UnitTesting?action=show&redirect=UnitTesting)에서 제공하는 ROS `gtest` 그리고 `rostest`에 대한 가이드를 실습해보기 위한 튜토리얼 프로젝트입니다.

---

#### 프로젝트 구성

본 프로젝트는 패키지 트리는 아래와 같습니다.

```
root --- example_pkg
     |
     --- gtest_example
```

  * `example_pkg`
    - UnitTest Code가 포함되지 않은 샘플 ROS 패키지
  * `gtest_example`
    - API 수준(Level 1)의 테스트 패키지, `gtest` 포함.

---

#### 준비

> 본 프로젝트는 ROS 빌드툴 중, `catkin` 툴을 사용합니다.

* `$ mkdir -p /User_Path/catkin_ws/src`
* `$ cd /User_Path/catkin_ws/src`
* `$ git clone https://github.com/harderthan/ROS_UnitTest_Tutorials.git`

---

#### 빌드 그리고 실행

* example_pkg
    - `$ cd /User_Path/catkin_ws/src`
    - `$ catkin_make`
    - `$ source ./devel/setup.bash`
    - `$ rosrun example_pkg example_pkg_node`

    ```console
    [ INFO] [1534585401.002568954]: CASE1: a = 1, b = 1, a + b = 2
    [ INFO] [1534585401.002613435]: CASE2: a = 5, b = 10, a + b = 15
    [ INFO] [1534585401.002621149]: CASE3: a = 100, b = 250, a + b = 350
    ```

* gtest_example
    - `$ cd /User_Path/catkin_ws/src`
    - `$ catkin_make tests`
    - `$ source ./devel/setup.bash`
    - `$ rosrun gtest_example gtest_example_lib_utest`

    ```console
    [==========] Running 2 tests from 1 test case.
    [----------] Global test environment set-up.
    [----------] 2 tests from addNum_TEST
    [ RUN      ] addNum_TEST.nomal_cases1
    [       OK ] addNum_TEST.nomal_cases1 (0 ms)
    [ RUN      ] addNum_TEST.nomal_cases2
    [       OK ] addNum_TEST.nomal_cases2 (0 ms)
    [----------] 2 tests from addNum_TEST (0 ms total)

    [----------] Global test environment tear-down
    [==========] 2 tests from 1 test case ran. (1 ms total)
    [  PASSED  ] 2 tests.
    ```

---

#### License
MIT

---

#### Reference
* [ROS Wiki: UnitTest](http://wiki.ros.org/action/show/Quality/Tutorials/UnitTesting?action=show&redirect=UnitTesting)
* [ROS Wiki: gtest](http://wiki.ros.org/gtest)
* [포스팅: Google Test 사용법 예제](https://hiseon.me/2018/06/30/google-test/)
* [SlideShare: ](https://www.slideshare.net/vgonpa/ros-testing-tutorial)
* [코드: simple_rostest](https://gitlab.com/InstitutMaupertuis/simple_rostest/blob/melodic/CMakeLists.txt)
* [포스팅: Unit testing in ROS](https://github.com/hcrlab/wiki/blob/master/software_engineering/unit_testing.md)
