#pragma once
#include "view.h"
#include <iostream>

/**
 * @brief Консольная реализация представления.
 *
 * Используется как пример конкретного View.
 * Отображает содержимое документа в консоль.
 */
class ConsoleView final : public View
{
public:
    void render(const Document &document) override
    {
        std::cout << "Render document:\n";
        for (const auto& obj : document.objects())
        {
            obj->draw();
        }
    }
};