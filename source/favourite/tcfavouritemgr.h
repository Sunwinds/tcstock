#ifndef tcfavouritemgr_h

#define tcfavouritemgr_h

#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtCore/QDir>

#include "tcfavouritegrp.h"

/*! \brief tcFavouriteManager
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.24

 	��ѡ��Ʊ�����ࡣϵͳȫ���и����һ���������ж����²����ݵķ��ʶ��Ը���Ϊ��ڡ�
*/
class tcFavouriteManager : public QObject
{
	Q_OBJECT

public:
	tcFavouriteManager(const QDir &pPath);

	~tcFavouriteManager();

	bool LoadFromFile();

	bool SaveToFile();

	bool CreateDefaultFile();

	tcFavouriteGroup* GetFavouriteGroup(int pIndex);

	int GetFavouriteGroupCount();

	bool EditFavouriteStock(QWidget *pParent, int pGroupIndex);

	tcFavouriteGroup* AppendFavouriteGroup(const QString &pGroupName);

	tcFavouriteGroup* AppendFavouriteGroup(QWidget *pParent);

	tcFavouriteGroup* ModifyFavouriteGroup(QWidget *pParent, int pGroupIndex);

	bool RemoveFavouriteGroup(QWidget *pParent, int pGroupIndex);

	bool GetStockInfoList(int pGroupIndex, tcStockInfoList *pStockInfoList);

	bool GetStockInfoListFilter(int pGroupIndex, tcStockInfoList *pStockInfoList, const QString &pStockCodeFilter, const QString &pStockNameFilter);

protected:
	void ClearAllFavouriteGroups();

protected slots:
	/*!
		notified by tcFavouriteGroup
	*/
	void DoFavouriteStockModified();

private:
	QDir mPath;

	QList<tcFavouriteGroup *> mFavouriteGroupList;

signals:
	void OnFavouriteGroupModified();

	void OnFavouriteStockModified(tcFavouriteGroup *pFavouriteGroup);

};

#endif //tcfavouritemgr_h
