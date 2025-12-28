#pragma once
#include <memory>
#include <string>


class Document;
class GraphicObject;

/**
 * @brief Контроллер графического редактора.
 *
 * Обрабатывает пользовательские действия и управляет моделью документа.
 * Является посредником между представлением и моделью.
 *
 * Реализует Controller в архитектуре MVC.
 */

class EditorController {
public:
    explicit EditorController(std::shared_ptr<Document> document) {(void)document;};

    void newDocument() {};

    /**
 * @brief Импортировать документ из файла.
 * @param path Путь к файлу
 */
    void importDocument(const std::string &path);

    /**
 * @brief Экспортировать документ в файл.
 * @param path Путь к файлу
 */
    void exportDocument(const std::string &path) {(void)path;};

    /**
 * @brief Создать графический объект.
 * @param object Новый графический примитив
 */
    void createObject(std::shared_ptr<GraphicObject> obj) {(void)obj;};

    /**
 * @brief Удалить графический объект.
 * @param object Графический примитив
 */
    void deleteObject(std::shared_ptr<GraphicObject> obj) {(void)obj;};

private:
    std::shared_ptr<Document> m_document;
};
