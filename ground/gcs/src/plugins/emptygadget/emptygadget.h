/**
 ******************************************************************************
 *
 * @file       emptygadget.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup EmptyGadgetPlugin Empty Gadget Plugin
 * @{
 * @brief A place holder gadget plugin 
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef EMPTYGADGET_H_
#define EMPTYGADGET_H_

#include <coreplugin/iuavgadget.h>

namespace Core {
class IUAVGadget;
}
//class QWidget;
//class QString;
class EmptyGadgetWidget;

using namespace Core;

class EmptyGadget : public Core::IUAVGadget
{
    Q_OBJECT
public:
    EmptyGadget(QString classId, EmptyGadgetWidget *widget, QWidget *parent = 0);
    ~EmptyGadget();

    QList<int> context() const { return m_context; }
    QWidget *widget() { return m_widget; }
    QString contextHelpId() const { return QString(); }

private:
        QWidget *m_widget;
	QList<int> m_context;
};


#endif // EMPTYGADGET_H_
