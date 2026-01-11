#pragma once
#include <vector>
#include <memory>
#include <string>
#include "graphicobject.h"


/**
 * @brief Документ векторного редактора.
 *
 * Хранит набор графических примитивов и управляет их жизненным циклом.
 * Отвечает за загрузку и сохранение состояния документа.
 *
 * Является центральной частью Model в архитектуре MVC.
 */
class Document {
public:
    /**
 * @brief Добавить графический объект в документ.
 * @param object Графический примитив
 */
    void addObject(std::shared_ptr<GraphicObject> obj);
    /**
 * @brief Удалить графический объект из документа.
 * @param object Графический примитив
 */
    void removeObject(std::shared_ptr<GraphicObject> obj);

    void clear();

    /**
 * @brief Загрузить документ из файла.
 * @param path Путь к файлу
 * @return true при успешной загрузке
 */
    bool loadFromFile(const std::string &filename);
    /**
 * @brief Сохранить документ в файл.
 * @param path Путь к файлу
 * @return true при успешном сохранении
 */
    bool saveToFile(const std::string &filename);

    const std::vector<std::shared_ptr<GraphicObject> > &objects() const {
       return m_objects;
    }
private:
    std::vector<std::shared_ptr<GraphicObject>> m_objects;
};