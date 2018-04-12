//
// Created by Adam on 4/10/2018.
//

#ifndef QT5_TEMPLATE_TRIANGLEWINDOW_H
#define QT5_TEMPLATE_TRIANGLEWINDOW_H

#include "OpenGLWindow.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QMatrix4x4>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QScreen>

#include <QtCore/qmath.h>

class TriangleWindow : public OpenGLWindow {
public:
    TriangleWindow();

    void initialize() override;

    void render() override;

private:
    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    QOpenGLShaderProgram *m_program;
    int m_frame;
};

#endif //QT5_TEMPLATE_TRIANGLEWINDOW_H
