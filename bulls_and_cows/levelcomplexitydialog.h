#ifndef LEVELCOMPLEXITYDIALOG_H
#define LEVELCOMPLEXITYDIALOG_H

#include <QDialog>

namespace Ui {
class LevelComplexityDialog;
}

class LevelComplexityDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LevelComplexityDialog(QWidget *parent = 0);
    ~LevelComplexityDialog();
    int get_complexity_level() const;
    void set_complexity_level(const int value);
    
private:
    Ui::LevelComplexityDialog *ui_;
};

#endif // LEVELCOMPLEXITYDIALOG_H