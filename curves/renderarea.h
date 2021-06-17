#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    enum ShapesType {Astroid, Cycloid, HuygensCycloid, HypoCycloid, Line,FutureCurve};
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    void setBackgroundColor(QColor color) { mBackgroundColor = color; repaint(); }
    QColor BackgroundColor() const { return mBackgroundColor; }

    void setShapeColor(QColor color) { mShapeColor = color; repaint(); }
    QColor shapeColor() const { return mBackgroundColor; }

    void setShape(ShapesType shape) { mShape = shape; on_shape_changed(); }
    ShapesType shape() const { return mShape; }

    void setScale(float scale) { mScale = scale; repaint(); }
    float scale() const { return mScale; }

    void setInterval(float interval) { mIntervalLength = interval; repaint(); }
    float intervalLength() const{ return mIntervalLength; }

    void setStepCount(int count) { mStepCount = count; repaint(); }
    int stepCount() const { return mStepCount; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    void on_shape_changed();
    QPointF compute(float t);
    QPointF compute_astroid(float t);
    QPointF compute_cycloid(float t);
    QPointF compute_huygens(float t);
    QPointF compute_hypo(float t);
    QPointF compute_line(float t);
    QPointF compute_futurecurve(float t);

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapesType mShape;
    float mIntervalLength;
    float mScale;
    int mStepCount;

};

#endif // RENDERAREA_H
