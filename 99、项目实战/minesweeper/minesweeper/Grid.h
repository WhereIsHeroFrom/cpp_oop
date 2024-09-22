#pragma once
#include "const.h"

class Grid {
public:
    Grid();
    void SetShowGridType(GridType showGridType);
    void SetRealGridType(GridType realGridType);
    void ShowGrid();
    GridType GetShowGridType() const;
    bool IsEmpty() const;
    bool IsRealBomb() const;
    bool IsShowBomb() const;

private:
    GridType m_realGridType;
    GridType m_showGridType;
};