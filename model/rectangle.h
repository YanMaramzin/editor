#pragma once
#include "graphicobject.h"

/**
 * @brief Графический примитив «Прямоугольник».
 *
 * Представляет прямоугольную фигуру в векторном редакторе.
 * Используется как пример полиморфного графического объекта.
 */
class Rectangle final : public GraphicObject
{
public:
    void draw() const override;
};
