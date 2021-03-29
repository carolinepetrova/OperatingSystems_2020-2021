# OperatingSystems_2020-2021
Notes on basic shell commands, bash scripting and C code for the Operating Systems course 2020/2021 at @fmi

## Съдържание
1. [Запознаване с курса, set up на среда за работа. Първи стъпки с командния интерператор на Unix-базирани операционни системи.](https://github.com/carolinepetrova/OperatingSystems_2020-2021/tree/main/week1#%D0%B7%D0%B0%D0%BF%D0%BE%D0%B7%D0%BD%D0%B0%D0%B2%D0%B0%D0%BD%D0%B5-%D1%81-%D0%BA%D1%83%D1%80%D1%81%D0%B0-set-up-%D0%BD%D0%B0-%D1%81%D1%80%D0%B5%D0%B4%D0%B0-%D0%B7%D0%B0-%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%B0-%D0%BF%D1%8A%D1%80%D0%B2%D0%B8-%D1%81%D1%82%D1%8A%D0%BF%D0%BA%D0%B8-%D1%81-%D0%BA%D0%BE%D0%BC%D0%B0%D0%BD%D0%B4%D0%BD%D0%B8%D1%8F-%D0%B8%D0%BD%D1%82%D0%B5%D1%80%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80-%D0%BD%D0%B0-unix-%D0%B1%D0%B0%D0%B7%D0%B8%D1%80%D0%B0%D0%BD%D0%B8-%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%86%D0%B8%D0%BE%D0%BD%D0%BD%D0%B8-%D1%81%D0%B8%D1%81%D1%82%D0%B5%D0%BC%D0%B8)

2. [Команди за работа с файлове, търсене на файлове и работа със съдържанието на файловете.](https://github.com/carolinepetrova/OperatingSystems_2020-2021/blob/main/week2/README.md)

3. [Команди за многопотрбителския режим, комуникация, информационни команди, работа с процеси.](https://github.com/carolinepetrova/OperatingSystems_2020-2021/blob/main/week3/README.md)

4. [Пренасочване на вход/изход. Конвейер между процеси. Метасимволи и генериране на имена на файлове. Стартиране във фонов дял.(https://github.com/carolinepetrova/OperatingSystems_2020-2021/blob/main/week4/README.md)

5. [Променливи - дефиниране, инициализиране, присвояване. Системни променливи. Profiles.](https://github.com/carolinepetrova/OperatingSystems_2020-2021/blob/main/week5/README.md)

6. [Задачи върху материала команди на Bash]https://github.com/carolinepetrova/OperatingSystems_2020-2021/blob/main/week6/README.md)

7. [Редактор Vi](https://github.com/carolinepetrova/OperatingSystems_2020-2021/blob/main/week6/viEditor.md) 

## Често срещани грешки

- `/file` - с `/` означаваме главната директория, подадем ли такъв път до файл/директория на някоя команда то тя търси файла/директорията в главната директория. 

- когато копираме/местим/премахваме файл/ове, които съдържат някакви символи (например всички файлове, започващи с А) ако НЕ е указано да ги търсим от някъде, а  искаме да са само от текущата директория НЯМА нужда да ползваме `find`. `find` задълбава във всички директории, които са деца на текущата директория. Можем да си ползваме `cp/mv/rm A*` спокойно.

- `rmdir`, когато искаме да трием празна директория.

- `write [user] [tty]` е сигнатурата на write командата. Чак след като натистем "ENTER" можем да пишем. НЕ можем да пращаме съобщение до някой в следния вид `write username "hello world!"` - това е грешка! 
