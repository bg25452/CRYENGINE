// Copyright 2001-2016 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include "SystemControlsModel.h"

namespace ACE
{
class CSystemLibrary;
class CSystemAssetsManager;

class CResourceControlModel final : public CSystemControlsModel
{
public:

	CResourceControlModel(CSystemAssetsManager* pAssetsManager)
		: CSystemControlsModel(pAssetsManager)
	{}

private:

	// CAudioAssetsExplorerModel
	virtual QVariant        data(QModelIndex const& index, int role) const override;
	virtual bool            setData(QModelIndex const& index, QVariant const& value, int role) override;
	virtual Qt::ItemFlags   flags(QModelIndex const& index) const override;
	virtual Qt::DropActions supportedDropActions() const override;
	// ~CAudioAssetsExplorerModel
};

class CResourceLibraryModel final : public CAudioLibraryModel
{
public:

	CResourceLibraryModel(CSystemAssetsManager* pAssetsManager, CSystemLibrary* pLibrary)
		:CAudioLibraryModel(pAssetsManager, pLibrary)
	{}

private:

	// CAudioLibraryModel
	virtual QVariant        data(QModelIndex const& index, int role) const override;
	virtual bool            setData(QModelIndex const& index, QVariant const& value, int role) override;
	virtual Qt::ItemFlags   flags(QModelIndex const& index) const override;
	virtual Qt::DropActions supportedDropActions() const override;
	// ~CAudioLibraryModel
};
} // namespace ACE
