#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include <math.h>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(QColor(0,0,255)),
    mShapeColor(QColor(255,255,255)),
    mShape (Astroid)
{
    on_shape_changed();
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 400);
}
QSize RenderArea::sizeHint() const
{
    return QSize(400, 400);
}

void RenderArea::on_shape_changed()
{
    switch (mShape) {
    case Astroid:
        // load astroid specific values.
        mScale = 40;
        mIntervalLength = 2 * M_PI;
        mStepCount = 256;
        break;
    case Cycloid:
        // load cycloid specific values.
        mScale = 4;
        mIntervalLength = 6 * M_PI;
        mStepCount = 128;
        break;
    case HuygensCycloid:
        // load huygens cycloid specific values.
        mScale = 4;
        mIntervalLength = 4 * M_PI;
        mStepCount = 256;
        break;
    case HypoCycloid:
        // load hypo cycloid specific values.
        mScale = 15;
        mIntervalLength = 2 * M_PI;
        mStepCount = 256;
        break;
    case Line:
        // load line specific values.
        mScale = 100;
        mIntervalLength = 1;
        mStepCount = 128;
        break;
    case FutureCurve:
        // load future curve specific values.
        break;
    default:
        break;
    }
}

QPointF RenderArea::compute_astroid(float t)
{
    float cos_t = cos(t);
    float sin_t = sin(t);
    float x = 2 * cos_t * cos_t * cos_t; // pow(cos_t, 3)
    float y = 2 * sin_t * sin_t * sin_t; // pow(sin_t, 3)
    return QPointF(x, y);

}

QPointF RenderArea::compute_cycloid(float t)
{
    return QPointF
    (
                1.5 * (1 - cos(t)), // X coordinate
                1.5 * (t - sin(t))  // Y coordinate
    );
}

QPointF RenderArea::compute_huygens(float t)
{
    return QPointF
    (
                4 * (3 * cos(t) - cos(3 * t)),  // X coordinate
                4 * (3 * sin(t) - sin(3 * t))   // Y coordinate
    );
}

QPointF RenderArea::compute_hypo(float t)
{
    return QPointF
    (
                1.5 * (2 * cos(t) + cos(2 * t)),    // X coordinate
                1.5 * (2 * sin(t) - sin(2 * t))     // Y corrdinate
    );
}

QPointF RenderArea::compute_line(float t)
{
    return QPointF( 1 - t, 1 - t);
}

QPointF RenderArea::compute_futurecurve(float t)
{
    // TBD
    /*
     * x = fx (t)
     * y = fy (t)
     */
}

QPointF RenderArea::compute(float t)
{
    switch (mShape) {
    case Astroid:
        // load astroid specific methods.
        return compute_astroid(t);
        break;
    case Cycloid:
        // load cycloid specific methods.
        return compute_cycloid(t);
        break;
    case HuygensCycloid:
        // load huygens cycloid specific methods.
        return compute_huygens(t);
        break;
    case HypoCycloid:
        // load hypo cycloid specific methods.
        return compute_hypo(t);
        break;
    case Line:
        return compute_line(t);
        break;
    case FutureCurve:
        return compute_futurecurve(t);
        break;
    default:
        break;
    }

    return QPointF(0,0);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setBrush(mBackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(mShapeColor);
    painter.setBrush(mBackgroundColor);
    painter.setPen(mShapeColor);

    // This is the drawing area
    painter.drawRect(this->rect());
    QPointF center = this->rect().center();
    QPointF prevPoint = compute(0);
    QPointF prevPixel;

    prevPixel.setX(prevPoint.x() * mScale + center.x());
    prevPixel.setY(prevPoint.y() * mScale + center.y());
    float step = mIntervalLength / mStepCount;
    for (float t = 0; t < mIntervalLength; t+= step)
    {
        QPointF point = compute(t);
        QPointF pixel;
        pixel.setX(point.x() * mScale + center.x());
        pixel.setY(point.y() * mScale + center.y());
        //painter.drawPoint(pixel);
        painter.drawLine(pixel, prevPixel);
        prevPixel = pixel;
    }
}
