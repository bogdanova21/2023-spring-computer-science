# Информатика 2023 🔥 | Графический калькулятор

Графический калькулятор — терминальная программа калькулятора с возможностью построения графиков. Графическая часть основана на библиотеке [FTXUI](https://github.com/ArthurSonzogni/FTXUI). Ваша цель — довести прототип до рабочего состояния. В коде могут быть ошибки, их надо исправить. Программа должна выполнять арифметические операции (`+`, `-`, `*`, `/`, `%`), предоставлять возможность интерпретировать выражения, например `(1+2)*3` и строить графики функций. Вычисление выражений может быть реализовано самостоятельно или с помощью библиотек (например [tinyexpr](https://github.com/codeplea/tinyexpr)). Вы должны выбрать одну из функций из списка задач ниже и добавить её в код проетка. Вы также можете предложить свою функцию.

## Информация
- [Задачи](#задачи)
- [Библиотеки](#библиотеки)
- [Сборка](#сборка)
- [Использование](#использование)
- [Тесты](#тесты)

## Задачи<a name = "задачи"></a>

- [x] Написать заготовку приложения 🤓
- [x] Добавить тесты 🔵
- [ ] Добавить поддержку построения графиков
- [ ] Добавить поддержку построения графиков производной функции
- [x] Добавить поддержку базовых арифметических операций
- [x] Добавить поддержку переменных
- [x] Добавить поддержку математических и физических констант
- [ ] Добавить поддержку истории операций
- [ ] Добавить web-демонстрацию (через Web Assembly)
- [ ] Предложить свою функцию

## Используемые библиотеки и зависимости<a name = "библиотеки"></a>
- Компилятор - `g++-9`
- `FTXUI`
- `tinyexpr`

## Как собрать и запустить проект<a name = "сборка"></a>
Запустить виртуальную машину linux

Клонировать проект:

```console
git clone https://github.com/bogdanova21/2023-spring-computer-science.git
```
В консоли ввести следующее:
```console
cd 2023-spring-computer-science/Dis-Artist/02_calc/  
mkdir build && cd build
cmake ..\
cmake --build .
```
## Использование<a name = "использование"></a>
Запускайте черз команду:
```console
./calc
```
## Тесты <a name = "тесты"></a>
```
Проверка простейших базовых арифметических операций
```
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/1.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/2.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/3.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/7.jpg)

```
Проверка математических и физических констант

(el - обозначение заряда электрона)
```
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/8.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/10.jpg)

```
Проверка тригонометрических операций 
```
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/4.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/5.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/6.jpg)

```
Проверка функции факториала и вычисления биноминального коэффициента
```
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/11.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/12.jpg)
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/13.jpg)

```
В вычислении биноминального коэффициента n<r, следовательно функция вернет значение NAN (для обозначения ошибки)
```
![Screenshot](https://github.com/bogdanova21/2023-spring-computer-science/blob/main/Dis-Artist/02_calc/tests/14.jpg)

