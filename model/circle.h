#pragma once
#include "graphicobject.h"

/**
 * @brief Графический примитив «Окружность».
 *
 * Конкретная реализация графического объекта.
 * Наследуется от GraphicObject и реализует интерфейс отрисовки.
 */
class Circle final : public GraphicObject {
public:
    ~Circle() override = default;
    void draw() const override {};
};
