print("Задание: Показать на экран таблицу умножения в диапазоне, указанном пользователем.")  # Задание

table = 0  # Переменная для таблицы
counter = 0  # Переменная для счетчика
what = 0  # Переменная для выбора действия

while True:  # Всегда повторяющейся цикл задания
    multiplicationOne = int(input(" Введите первую цифру умножения: "))  # Инпут 1
    multiplicationTwo = int(input(" Введите вторую цифру умножения: "))  # Инпут 2

    what = int(input("Выберите в каком виде отобразить задание\n"  # Выбор действия
                     "1 - Как показано в задании \n2 - Полностью 10 + 10 примеров\n Введите значение: "))

    if what == 1:  # Если выбрана операция 1, то выводится таблица умножения как в задании от 1 до 3 точки и 10
        print("")  # Пустой принт для отступа

        for multiplicationTableOne in range(1, 11):  # Цикл range
            while counter != 3:  # Цикл будет работать пока счетчик не будет равен 3
                counter += 1  # С каждым циклом счетчик будет добавлять + 1 еденицу
                print(str(multiplicationOne) + "*" + str(counter) + "=" + str(  # Вывод первой части примера до ...
                    multiplicationOne * counter), end="  ")

        print("...  "  # Принт для вывода ... и второй части примера
              + str(multiplicationOne) + "*" + str(10) + "=" + str(multiplicationOne * 10))
        counter = 0  # Обнуляем счетчик что-бы нижняя таблица не подхватывала уже полученные данные с первой таблицы

        print("•" * 35)   # Умножаем точки

        for multiplicationTableOne in range(1, 11):  # Цикл range
            while counter != 3:  # Цикл будет работать пока счетчик не будет равен 3
                counter += 1  # С каждым циклом счетчик будет добавлять + 1 еденицу
                print(str(multiplicationTwo) + "*" + str(counter) + "=" + str(  # Вывод второй части таблицы
                    multiplicationTwo * counter), end="  ")

        print("...  "  # Принт для вывода ... и второй части примера
              + str(multiplicationTwo) + "*" + str(10) + "=" + str(multiplicationTwo * 10))

        counter = 0  # Обнуляем счетчик что-бы не подхватывались данные повторного запуска

    if what == 2:  # Если выбрали операцию 2 выводится полная таблица умножения до 10ти
        print("")  # Отделяем от задания
        for multiplicationTableOne in range(1, 11):  # Вывод range
            while counter != 10:  # Цикл будет работать пока счетчик не будет равен 10
                counter += 1  # С каждым циклом счетчик будет добавлять + 1 еденицу
                print(str(multiplicationOne) + "*" + str(counter) + "=" + str(  # Вывод первой части таблицы
                    multiplicationOne * counter), end=" ")

        counter = 0  # Обнуляем счетчик что-бы не подхватывались данные повторного запуска
        print("")  # Отделение примеров
        print("•" * 90)   # Умножение точек

        for multiplicationTableTwo in range(1, 11):  # Вывод range
            while counter != 10:  # Цикл будет работать пока счетчик не будет равен 10
                counter += 1  # С каждым циклом счетчик будет добавлять + 1 еденицу
                print(str(multiplicationTwo) + "*" + str(counter) + "=" + str(  # Вывод второй части таблицы
                    multiplicationTwo * counter), end=" ")
        counter = 0  # Обнуляем счетчик что-бы не подхватывались данные повторного запуска
        print("", "\n")  # Отделение примеров
    else:
        print()
