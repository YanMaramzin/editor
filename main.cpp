#include <editorcontroller.h>
#include <circle.h>
#include <document.h>
#include <rectangle.h>
#include <consoleview.h>

void onNew(EditorController &controller) {
    controller.newDocument();
}

void onAddCircle(EditorController &controller) {
    controller.createObject(std::make_shared<Circle>());
}

void onAddRectangle(EditorController &controller) {
    controller.createObject(std::make_shared<Rectangle>());
}

int main() {
    auto document = std::make_shared<Document>();
    EditorController controller(document);
    ConsoleView view;

    onNew(controller);
    onAddCircle(controller);
    onAddRectangle(controller);

    view.render(*document);

    controller.exportDocument("example.vec");
}

