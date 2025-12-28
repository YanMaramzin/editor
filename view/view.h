#pragma once

class Document;

/**
 * @brief Абстрактное представление документа.
 *
 * Отвечает за визуализацию состояния документа.
 * Не изменяет модель, а только отображает её состояние.
 *
 * Представляет View в архитектуре MVC.
 */
class View {
public:
    virtual ~View() = default;

    /**
 * @brief Отобразить документ.
 * @param document Документ для отображения
 */
    virtual void render(const Document &document) = 0;
};