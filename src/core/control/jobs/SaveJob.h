/*
 * Xournal++
 *
 * A job which saves a Document
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <string>
#include <vector>

#include "BlockingJob.h"


class SaveJob: public BlockingJob {
public:
    SaveJob(Control* control);

protected:
    ~SaveJob() override;

public:
    void run() override;

    bool save();

    static void updatePreview(Control* control);

protected:
    void afterRun() override;

private:
    std::string lastError;
};
