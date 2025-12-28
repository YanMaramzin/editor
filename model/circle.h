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
    void draw() const override;
};
