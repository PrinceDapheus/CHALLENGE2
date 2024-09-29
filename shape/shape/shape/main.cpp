//
//  main.cpp
//  shape
//
//  Created by David Phume on 2024/09/25.
// Polymophism


#include <iostream>
#include <vector>
#include <memory>  // For smart pointers

// Base class
class Shape {
public:
    virtual void draw() const = 0;  // Pure virtual function
    virtual ~Shape() = default;     // Virtual destructor
};

// Derived classes
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle...\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle...\n";
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a triangle...\n";
    }
};

// ShapeManager class
class ShapeManager {
private:
    // Collection of shapes, using unique_ptr to manage ownership
    std::vector<std::unique_ptr<Shape>> shapes;
    
public:
    // Method to add a shape to the collection
    void addShape(std::unique_ptr<Shape> shape) {
        shapes.push_back(std::move(shape));  // Move the shape into the vector
    }

    // Method to draw all shapes
    void drawAll() const {
        for (const auto& shape : shapes) {
            shape->draw();  // Calls the appropriate draw method based on the shape type
        }
    }
};

int main() {
    ShapeManager manager;

    // Adding different shapes to the manager
    manager.addShape(std::make_unique<Circle>());
    manager.addShape(std::make_unique<Rectangle>());
    manager.addShape(std::make_unique<Triangle>());

    // Draw all shapes
    manager.drawAll();

    return 0;
}



