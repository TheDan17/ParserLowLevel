# ParserializeLowLevel
> **Техническое название**: ParserializeLowLevel \
> **Публичное название**: [TBD] \
> **Лицензия**: MPL 2.0

## Основная информация
Библиотека задумана в первую очередь как самостоятельная библиотека без зависимостей, реализованная на низкоуровневом языке C, со вставками ассемблера \
Приоритеты заданы в сторону производительности и пригодности для embedded систем \
Используются возможности POSIX, не привязанных к Linux

## Флаги компиляции
### **Общие**
* `BUILD_WITH_ASM` - заменяет некоторые функции на ассемблерные аналоги
* `BUILD_WITH_LOGGING` - включает в билд все логи, иначе заменяет все вызовы на `void`
* `BUILD_WITH_INI_CONFIG` - позволяет загружать runtime-конфигурацию в виде `.ini` файлов

### **Компоненты**
Также предусмотрено включение/выключение отдельных возможностей при компиляции, помимо общих
| Парсинг      | Сериализация     |
|--------------|------------------|
| `PARSE_JSON` | `SERIALIZE_JSON` |
| `PARSE_XML`  | `SERIALIZE_XML`  |
| `PARSE_HTML` | `SERIALIZE_HTML` |
| `PARSE_YAML` | `SERIALIZE_YAML` |

## Пример использования
TBD

## Текущий статус проекта
На данный момент проект находится на начальном этапе разработки и не имеет ещё базовой структуры. Однако все функции и возможности, указанные в этом README, планируется реализовать в будущем.
- [ ] Цель минимум: Парсинг JSON
- [ ] Остальной функционал для релиза (кроме yaml)
- [ ] Парсинг YAML (только базовый)
- [ ] Отдельная утилита для тестирования различных версий библиотеки (в том числе билдов с разными флагами), в этот раз с использованием функционала Linux 
- [ ] Продвинутый парсинг YAML

## Упоминания и благодарности
- Библиотека `inih` из [репозитория](https://github.com/benhoyt/inih) [ver. r60]
