#include <editorcontroller.h>
#include <circle.h>
#include <document.h>

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

    onNew(controller);
    onAddCircle(controller);
    onAddRectangle(controller);

    controller.exportDocument("example.vec");
}

