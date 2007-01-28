#ifndef tcdailyviewmodel_h

#define tcdailyviewmodel_h

#include <QtCore/QVariant>
#include <QtCore/QObject>

#include "tcviewmodel.h"

/*! \brief tcDailyViewModel
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.09

 	��K����ʾģ�͡�
*/
class tcDailyViewModel : public tcViewModel
{
	Q_OBJECT

public:
	tcDailyViewModel(QObject *pParent, tcViewMode pViewMode);

	~tcDailyViewModel();

	virtual QString GetViewItemText(int pIndex);

	virtual tcViewModelStockData* GetViewItemData(int pIndex, tcStock *pStock);

	virtual bool IsCurrentItem(int pIndex);

protected:
	QDate GetViewItemDate(int pIndex);

};

#endif //tcdailyviewmodel_h

