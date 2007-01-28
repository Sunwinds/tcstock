#ifndef tcfavouritestockmdl_h

#define tcfavouritestockmdl_h

#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtGui/QStandardItemModel>

/*! \brief tcFavouriteStockModel
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.26
 	
	��ѡ����Ϣ�б���ʾ��Model���� tcFavouriteInfoDialog ��ʹ�á�
*/
class tcFavouriteStockModel : public QStandardItemModel
{
	Q_OBJECT

public:
	tcFavouriteStockModel(QObject *pParent);

	void LoadFavouriteStockList(int pFavouriteGroupIndex);

	bool AppendFavouriteStock(QWidget *pParent, int pFavouriteGroupIndex);

	bool RemoveFavouriteStock(QWidget *pParent, int pFavouriteGroupIndex, int pIndex);

};

#endif //tcfavouritestockmdl_h

