/***************************************************************************
    kadasvectorlayerproperties.h
    ----------------------------
    copyright            : (C) 2019 by Sandro Mani
    email                : smani at sourcepole dot ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KADASVECTORLAYERPROPERTIES_H
#define KADASVECTORLAYERPROPERTIES_H

#include <kadas/gui/kadaslayerpropertiesdialog.h>

class QgsMapCanvas;
class QgsRendererPropertiesDialog;
class QgsVectorLayer;


class KadasVectorLayerProperties : public KadasLayerPropertiesDialog
{
    Q_OBJECT
  public:
    KadasVectorLayerProperties( QgsVectorLayer *layer, QgsMapCanvas *canvas, QWidget *parent = nullptr );

  private slots:
    void apply() override;

  private:
    QgsRendererPropertiesDialog *mRendererDialog = nullptr;
};

#endif // KADASVECTORLAYERPROPERTIES_H
