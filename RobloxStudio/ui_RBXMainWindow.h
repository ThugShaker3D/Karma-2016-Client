/********************************************************************************
** Form generated from reading UI file 'RBXMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RBXMAINWINDOW_H
#define UI_RBXMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RBXMainWindow
{
public:
    QAction *fileOpenAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *deleteSelectedAction;
    QAction *selectAllAction;
    QAction *lockAction;
    QAction *anchorAction;
    QAction *advTranslateAction;
    QAction *advRotateAction;
    QAction *zoomInAction;
    QAction *zoomOutAction;
    QAction *tiltUpAction;
    QAction *tiltDownAction;
    QAction *panRightAction;
    QAction *panLeftAction;
    QAction *glueSurfaceAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *smoothSurfaceAction;
    QAction *weldSurfaceAction;
    QAction *studsAction;
    QAction *inletAction;
    QAction *universalsAction;
    QAction *hingeAction;
    QAction *smoothNoOutlinesAction;
    QAction *groupSelectionAction;
    QAction *ungroupSelectionAction;
    QAction *moveUpBrickAction;
    QAction *moveDownBrickAction;
    QAction *rotateSelectionAction;
    QAction *tiltSelectionAction;
    QAction *simulationPlayAction;
    QAction *simulationRunAction;
    QAction *simulationStopAction;
    QAction *testStatsAction;
    QAction *testRenderStatsAction;
    QAction *testNetworkStatsAction;
    QAction *testPhysicsStatsAction;
    QAction *testSummaryStatsAction;
    QAction *testCustomStatsAction;
    QAction *simulationResetAction;
    QAction *advanceJointCreationManualAction;
    QAction *gridToOneAction;
    QAction *gridToOneFifthAction;
    QAction *gridToOffAction;
    QAction *resizeAction;
    QAction *motorRightAction;
    QAction *actionFillColor;
    QAction *actionMaterial;
    QAction *dropperAction;
    QAction *fileSaveAction;
    QAction *executeScriptAction;
    QAction *fileCloseAction;
    QAction *fileSaveAsAction;
    QAction *fileNewAction;
    QAction *fileExitAction;
    QAction *findAction;
    QAction *zoomExtentsAction;
    QAction *viewBasicObjectsAction;
    QAction *insertModelAction;
    QAction *pasteIntoAction;
    QAction *selectionSaveToFileAction;
    QAction *insertIntoFileAction;
    QAction *publishToRobloxAction;
    QAction *publishGameAction;
    QAction *aboutRobloxAction;
    QAction *onlineHelpAction;
    QAction *objectBrowserAction;
    QAction *playSoloAction;
    QAction *startServerAction;
    QAction *startPlayerAction;
    QAction *instanceDumpAction;
    QAction *settingsAction;
    QAction *publishSelectionToRobloxAction;
    QAction *findNextAction;
    QAction *replaceAction;
    QAction *advArrowToolAction;
    QAction *saveToRobloxAction;
    QAction *insertServiceAction;
    QAction *fastLogDumpAction;
    QAction *viewToolboxAction;
    QAction *toggleAxisWidgetAction;
    QAction *toggle3DGridAction;
    QAction *toggleVideoRecordAction;
    QAction *filePublishedProjectsAction;
    QAction *viewDiagnosticsAction;
    QAction *viewTaskSchedulerAction;
    QAction *viewScriptPerformanceAction;
    QAction *viewObjectExplorerAction;
    QAction *viewPropertiesAction;
    QAction *viewOutputWindowAction;
    QAction *actionStartPage;
    QAction *actionFullScreen;
    QAction *commentSelectionAction;
    QAction *uncommentSelectionAction;
    QAction *toggleCommentAction;
    QAction *toggleCollisionCheckAction;
    QAction *toggleBuildModeAction;
    QAction *openPluginsFolderAction;
    QAction *unlockAllAction;
    QAction *shortcutHelpAction;
    QAction *findPreviousAction;
    QAction *goToScriptErrorAction;
    QAction *expandAllFoldsAction;
    QAction *collapseAllFoldsAction;
    QAction *renameObjectAction;
    QAction *screenShotAction;
    QAction *publishToRobloxAsAction;
    QAction *selectChildrenAction;
    QAction *testClearStatsAction;
    QAction *stepIntoAction;
    QAction *stepOverAction;
    QAction *stepOutAction;
    QAction *insertBreakpointAction;
    QAction *deleteBreakpointAction;
    QAction *toggleBreakpointStateAction;
    QAction *addWatchAction;
    QAction *resetScriptZoomAction;
    QAction *viewContextualHelpAction;
    QAction *toggleLocalSpaceAction;
    QAction *resetViewAction;
    QAction *gridSizeToTwoAction;
    QAction *gridSizeToFourAction;
    QAction *gridSizeToSixteenAction;
    QAction *publishAsPluginAction;
    QAction *createNewLinkedSourceAction;
    QAction *managePluginsAction;
    QAction *quickInsertAction;
    QAction *reloadScriptAction;
    QAction *neverBreakOnScriptErrorsAction;
    QAction *breakOnAllScriptErrorsAction;
    QAction *breakOnUnhandledScriptErrorsAction;
    QAction *viewFindResultsWindowAction;
    QAction *findInScriptsAction;
    QAction *explorerFilterAction;
    QAction *exportSelectionAction;
    QAction *exportPlaceAction;
    QAction *toggleAllBreakpointsStateAction;
    QAction *duplicateSelectionAction;
    QAction *gameExplorerAction;
    QAction *customizeQuickAccessAction;
    QAction *unionSelectionAction;
    QAction *negateSelectionAction;
    QAction *separateSelectionAction;
    QAction *cleanupServersAndPlayersAction;
    QAction *playRbxDeviceAction;
    QAction *pairRbxDeviceAction;
    QAction *audioToggleAction;
    QAction *viewTutorialsAction;
    QAction *viewScriptAnalysisAction;
    QAction *viewTeamCreateAction;
    QAction *emulateDeviceAction;
    QAction *manageEmulationDeviceAction;
    QAction *launchHelpForSelectionAction;
    QAction *viewCommandBarAction;
    QAction *fileOpenRecentSavesAction;
    QAction *goToLineAction;
    QAction *downloadPlaceCopyAction;
    QWidget *defaultCentralWidget;
    QStatusBar *statusbar;
    QToolBar *standardToolBar;
    QToolBar *runToolBar;
    QToolBar *advToolsToolBar;
    QToolBar *oldToolsToolBar;
    QToolBar *editCameraToolBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFind_and_Replace;
    QMenu *menuTools;
    QMenu *menuTest;
    QMenu *menuStats;
    QMenu *menuView;
    QMenu *menuToolBars;
    QMenu *menuFormat;
    QMenu *menuInsert;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QMenu *scriptMenu;
    QMenu *breakErrorsIntoDebuggerMenu;
    QDockWidget *outputWindow;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout;
    QToolBar *commandToolBar;
    QDockWidget *objectExplorer;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QDockWidget *propertyBrowser;
    QWidget *dockWidgetContents_3;
    QDockWidget *diagnosticsDockWidget;
    QWidget *dockWidgetContents_4;
    QDockWidget *taskSchedulerDockWidget;
    QWidget *dockWidgetContents_6;
    QDockWidget *toolBoxDockWidget;
    QWidget *dockWidgetContents_5;
    QDockWidget *scriptReviewDockWidget;
    QWidget *dockWidgetContents_7;
    QDockWidget *gameExplorerDockWidget;
    QWidget *dockWidgetContents_11;
    QToolBar *viewToolsToolBar;
    QDockWidget *basicObjectsDockWidget;
    QWidget *dockWidgetContents_8;
    QDockWidget *contextualHelp;
    QWidget *dockWidgetContents_9;
    QDockWidget *findResultsWindow;
    QWidget *dockWidgetContents_10;
    QGridLayout *gridLayout_2;
    QDockWidget *tutorialsDockWidget;
    QWidget *dockWidgetContents_12;
    QDockWidget *teamCreateDockWidget;
    QWidget *dockWidgetContents_13;
    QDockWidget *scriptAnalysisDockWidget;

    void setupUi(QMainWindow *RBXMainWindow)
    {
        if (RBXMainWindow->objectName().isEmpty())
            RBXMainWindow->setObjectName(QString::fromUtf8("RBXMainWindow"));
        RBXMainWindow->resize(1280, 765);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/RobloxStudio.png"), QSize(), QIcon::Normal, QIcon::Off);
        RBXMainWindow->setWindowIcon(icon);
        RBXMainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        RBXMainWindow->setUnifiedTitleAndToolBarOnMac(false);
        fileOpenAction = new QAction(RBXMainWindow);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/open_document_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon1);
        undoAction = new QAction(RBXMainWindow);
        undoAction->setObjectName(QString::fromUtf8("undoAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/undo_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoAction->setIcon(icon2);
        redoAction = new QAction(RBXMainWindow);
        redoAction->setObjectName(QString::fromUtf8("redoAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/redo_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        redoAction->setIcon(icon3);
        deleteSelectedAction = new QAction(RBXMainWindow);
        deleteSelectedAction->setObjectName(QString::fromUtf8("deleteSelectedAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/delete_x_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteSelectedAction->setIcon(icon4);
        selectAllAction = new QAction(RBXMainWindow);
        selectAllAction->setObjectName(QString::fromUtf8("selectAllAction"));
        lockAction = new QAction(RBXMainWindow);
        lockAction->setObjectName(QString::fromUtf8("lockAction"));
        lockAction->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        lockAction->setIcon(icon5);
        anchorAction = new QAction(RBXMainWindow);
        anchorAction->setObjectName(QString::fromUtf8("anchorAction"));
        anchorAction->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/t_anchor_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        anchorAction->setIcon(icon6);
        advTranslateAction = new QAction(RBXMainWindow);
        advTranslateAction->setObjectName(QString::fromUtf8("advTranslateAction"));
        advTranslateAction->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/move-parts.png"), QSize(), QIcon::Normal, QIcon::Off);
        advTranslateAction->setIcon(icon7);
        advTranslateAction->setShortcutContext(Qt::ApplicationShortcut);
        advRotateAction = new QAction(RBXMainWindow);
        advRotateAction->setObjectName(QString::fromUtf8("advRotateAction"));
        advRotateAction->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/advT_rotateGrid_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        advRotateAction->setIcon(icon8);
        advRotateAction->setShortcutContext(Qt::ApplicationShortcut);
        zoomInAction = new QAction(RBXMainWindow);
        zoomInAction->setObjectName(QString::fromUtf8("zoomInAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/c_zoomIn_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomInAction->setIcon(icon9);
        zoomOutAction = new QAction(RBXMainWindow);
        zoomOutAction->setObjectName(QString::fromUtf8("zoomOutAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/c_zoomOut_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomOutAction->setIcon(icon10);
        tiltUpAction = new QAction(RBXMainWindow);
        tiltUpAction->setObjectName(QString::fromUtf8("tiltUpAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/c_tiltUpCamera_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        tiltUpAction->setIcon(icon11);
        tiltDownAction = new QAction(RBXMainWindow);
        tiltDownAction->setObjectName(QString::fromUtf8("tiltDownAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/c_tiltDownCamera_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        tiltDownAction->setIcon(icon12);
        panRightAction = new QAction(RBXMainWindow);
        panRightAction->setObjectName(QString::fromUtf8("panRightAction"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/c_panRight_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        panRightAction->setIcon(icon13);
        panLeftAction = new QAction(RBXMainWindow);
        panLeftAction->setObjectName(QString::fromUtf8("panLeftAction"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/c_panLeft_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        panLeftAction->setIcon(icon14);
        glueSurfaceAction = new QAction(RBXMainWindow);
        glueSurfaceAction->setObjectName(QString::fromUtf8("glueSurfaceAction"));
        glueSurfaceAction->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/glue-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        glueSurfaceAction->setIcon(icon15);
        cutAction = new QAction(RBXMainWindow);
        cutAction->setObjectName(QString::fromUtf8("cutAction"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/cut_clipboard_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutAction->setIcon(icon16);
        copyAction = new QAction(RBXMainWindow);
        copyAction->setObjectName(QString::fromUtf8("copyAction"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/copy_clipboard_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyAction->setIcon(icon17);
        pasteAction = new QAction(RBXMainWindow);
        pasteAction->setObjectName(QString::fromUtf8("pasteAction"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/paste_clipboard_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAction->setIcon(icon18);
        smoothSurfaceAction = new QAction(RBXMainWindow);
        smoothSurfaceAction->setObjectName(QString::fromUtf8("smoothSurfaceAction"));
        smoothSurfaceAction->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/smooth-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        smoothSurfaceAction->setIcon(icon19);
        weldSurfaceAction = new QAction(RBXMainWindow);
        weldSurfaceAction->setObjectName(QString::fromUtf8("weldSurfaceAction"));
        weldSurfaceAction->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/weld-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        weldSurfaceAction->setIcon(icon20);
        studsAction = new QAction(RBXMainWindow);
        studsAction->setObjectName(QString::fromUtf8("studsAction"));
        studsAction->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/connector-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        studsAction->setIcon(icon21);
        inletAction = new QAction(RBXMainWindow);
        inletAction->setObjectName(QString::fromUtf8("inletAction"));
        inletAction->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/indents-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        inletAction->setIcon(icon22);
        universalsAction = new QAction(RBXMainWindow);
        universalsAction->setObjectName(QString::fromUtf8("universalsAction"));
        universalsAction->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/universals-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        universalsAction->setIcon(icon23);
        hingeAction = new QAction(RBXMainWindow);
        hingeAction->setObjectName(QString::fromUtf8("hingeAction"));
        hingeAction->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/hinge-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        hingeAction->setIcon(icon24);
        smoothNoOutlinesAction = new QAction(RBXMainWindow);
        smoothNoOutlinesAction->setObjectName(QString::fromUtf8("smoothNoOutlinesAction"));
        smoothNoOutlinesAction->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/smooth-no-outlines-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        smoothNoOutlinesAction->setIcon(icon25);
        groupSelectionAction = new QAction(RBXMainWindow);
        groupSelectionAction->setObjectName(QString::fromUtf8("groupSelectionAction"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/group_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        groupSelectionAction->setIcon(icon26);
        ungroupSelectionAction = new QAction(RBXMainWindow);
        ungroupSelectionAction->setObjectName(QString::fromUtf8("ungroupSelectionAction"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/ungroup_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ungroupSelectionAction->setIcon(icon27);
        moveUpBrickAction = new QAction(RBXMainWindow);
        moveUpBrickAction->setObjectName(QString::fromUtf8("moveUpBrickAction"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/s_moveUp_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpBrickAction->setIcon(icon28);
        moveDownBrickAction = new QAction(RBXMainWindow);
        moveDownBrickAction->setObjectName(QString::fromUtf8("moveDownBrickAction"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/s_moveDown_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownBrickAction->setIcon(icon29);
        rotateSelectionAction = new QAction(RBXMainWindow);
        rotateSelectionAction->setObjectName(QString::fromUtf8("rotateSelectionAction"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/s_rotate_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotateSelectionAction->setIcon(icon30);
        tiltSelectionAction = new QAction(RBXMainWindow);
        tiltSelectionAction->setObjectName(QString::fromUtf8("tiltSelectionAction"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/s_tilt_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        tiltSelectionAction->setIcon(icon31);
        simulationPlayAction = new QAction(RBXMainWindow);
        simulationPlayAction->setObjectName(QString::fromUtf8("simulationPlayAction"));
        simulationPlayAction->setCheckable(false);
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/playsolo.png"), QSize(), QIcon::Normal, QIcon::Off);
        simulationPlayAction->setIcon(icon32);
        simulationPlayAction->setAutoRepeat(true);
        simulationRunAction = new QAction(RBXMainWindow);
        simulationRunAction->setObjectName(QString::fromUtf8("simulationRunAction"));
        simulationRunAction->setCheckable(false);
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        simulationRunAction->setIcon(icon33);
        simulationRunAction->setAutoRepeat(true);
        simulationStopAction = new QAction(RBXMainWindow);
        simulationStopAction->setObjectName(QString::fromUtf8("simulationStopAction"));
        simulationStopAction->setCheckable(false);
        simulationStopAction->setEnabled(true);
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        simulationStopAction->setIcon(icon34);
        simulationStopAction->setAutoRepeat(true);
        testStatsAction = new QAction(RBXMainWindow);
        testStatsAction->setObjectName(QString::fromUtf8("testStatsAction"));
        testStatsAction->setCheckable(true);
        testRenderStatsAction = new QAction(RBXMainWindow);
        testRenderStatsAction->setObjectName(QString::fromUtf8("testRenderStatsAction"));
        testRenderStatsAction->setCheckable(true);
        testNetworkStatsAction = new QAction(RBXMainWindow);
        testNetworkStatsAction->setObjectName(QString::fromUtf8("testNetworkStatsAction"));
        testNetworkStatsAction->setCheckable(true);
        testPhysicsStatsAction = new QAction(RBXMainWindow);
        testPhysicsStatsAction->setObjectName(QString::fromUtf8("testPhysicsStatsAction"));
        testPhysicsStatsAction->setCheckable(true);
        testSummaryStatsAction = new QAction(RBXMainWindow);
        testSummaryStatsAction->setObjectName(QString::fromUtf8("testSummaryStatsAction"));
        testSummaryStatsAction->setCheckable(true);
        testCustomStatsAction = new QAction(RBXMainWindow);
        testCustomStatsAction->setObjectName(QString::fromUtf8("testCustomStatsAction"));
        testCustomStatsAction->setCheckable(true);
        simulationResetAction = new QAction(RBXMainWindow);
        simulationResetAction->setObjectName(QString::fromUtf8("simulationResetAction"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        simulationResetAction->setIcon(icon35);
        advanceJointCreationManualAction = new QAction(RBXMainWindow);
        advanceJointCreationManualAction->setObjectName(QString::fromUtf8("advanceJointCreationManualAction"));
        advanceJointCreationManualAction->setCheckable(true);
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/advT_jointManual_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        advanceJointCreationManualAction->setIcon(icon36);
        advanceJointCreationManualAction->setProperty("disableForQuickAccess", QVariant(true));
        gridToOneAction = new QAction(RBXMainWindow);
        gridToOneAction->setObjectName(QString::fromUtf8("gridToOneAction"));
        gridToOneAction->setCheckable(true);
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/advT_gridToOne_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridToOneAction->setIcon(icon37);
        gridToOneFifthAction = new QAction(RBXMainWindow);
        gridToOneFifthAction->setObjectName(QString::fromUtf8("gridToOneFifthAction"));
        gridToOneFifthAction->setCheckable(true);
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/images/advT_gridToOneFifth_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridToOneFifthAction->setIcon(icon38);
        gridToOffAction = new QAction(RBXMainWindow);
        gridToOffAction->setObjectName(QString::fromUtf8("gridToOffAction"));
        gridToOffAction->setCheckable(true);
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/images/advT_gridOff_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridToOffAction->setIcon(icon39);
        resizeAction = new QAction(RBXMainWindow);
        resizeAction->setObjectName(QString::fromUtf8("resizeAction"));
        resizeAction->setCheckable(true);
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/resize.png"), QSize(), QIcon::Normal, QIcon::Off);
        resizeAction->setIcon(icon40);
        resizeAction->setShortcutContext(Qt::ApplicationShortcut);
        motorRightAction = new QAction(RBXMainWindow);
        motorRightAction->setObjectName(QString::fromUtf8("motorRightAction"));
        motorRightAction->setCheckable(true);
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/motor-surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        motorRightAction->setIcon(icon41);
        actionFillColor = new QAction(RBXMainWindow);
        actionFillColor->setObjectName(QString::fromUtf8("actionFillColor"));
        actionFillColor->setCheckable(true);
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/paintcan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFillColor->setIcon(icon42);
        actionFillColor->setProperty("disableForQuickAccess", QVariant(true));
        actionMaterial = new QAction(RBXMainWindow);
        actionMaterial->setObjectName(QString::fromUtf8("actionMaterial"));
        actionMaterial->setCheckable(true);
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/material_picker_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMaterial->setIcon(icon43);
        actionMaterial->setAutoRepeat(false);
        dropperAction = new QAction(RBXMainWindow);
        dropperAction->setObjectName(QString::fromUtf8("dropperAction"));
        dropperAction->setCheckable(true);
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/color-picker.png"), QSize(), QIcon::Normal, QIcon::Off);
        dropperAction->setIcon(icon44);
        fileSaveAction = new QAction(RBXMainWindow);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/save_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon45);
        fileSaveAction->setAutoRepeat(true);
        executeScriptAction = new QAction(RBXMainWindow);
        executeScriptAction->setObjectName(QString::fromUtf8("executeScriptAction"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/script_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        executeScriptAction->setIcon(icon46);
        fileCloseAction = new QAction(RBXMainWindow);
        fileCloseAction->setObjectName(QString::fromUtf8("fileCloseAction"));
        fileCloseAction->setProperty("disableForQuickAccess", QVariant(true));
        fileSaveAsAction = new QAction(RBXMainWindow);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/save_green_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAsAction->setIcon(icon47);
        fileSaveAsAction->setAutoRepeat(false);
        fileNewAction = new QAction(RBXMainWindow);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/new_document_16_h.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewAction->setIcon(icon48);
        fileNewAction->setAutoRepeat(false);
        fileExitAction = new QAction(RBXMainWindow);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        fileExitAction->setProperty("disableForQuickAccess", QVariant(true));
        findAction = new QAction(RBXMainWindow);
        findAction->setObjectName(QString::fromUtf8("findAction"));
        findAction->setPriority(QAction::HighPriority);
        zoomExtentsAction = new QAction(RBXMainWindow);
        zoomExtentsAction->setObjectName(QString::fromUtf8("zoomExtentsAction"));
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/images/c_zoomExtent_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomExtentsAction->setIcon(icon49);
        zoomExtentsAction->setShortcutContext(Qt::ApplicationShortcut);
        viewBasicObjectsAction = new QAction(RBXMainWindow);
        viewBasicObjectsAction->setObjectName(QString::fromUtf8("viewBasicObjectsAction"));
        viewBasicObjectsAction->setCheckable(true);
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/images/TA_BasicObjects.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewBasicObjectsAction->setIcon(icon50);
        insertModelAction = new QAction(RBXMainWindow);
        insertModelAction->setObjectName(QString::fromUtf8("insertModelAction"));
        pasteIntoAction = new QAction(RBXMainWindow);
        pasteIntoAction->setObjectName(QString::fromUtf8("pasteIntoAction"));
        pasteIntoAction->setProperty("disableForQuickAccess", QVariant(true));
        selectionSaveToFileAction = new QAction(RBXMainWindow);
        selectionSaveToFileAction->setObjectName(QString::fromUtf8("selectionSaveToFileAction"));
        insertIntoFileAction = new QAction(RBXMainWindow);
        insertIntoFileAction->setObjectName(QString::fromUtf8("insertIntoFileAction"));
        publishToRobloxAction = new QAction(RBXMainWindow);
        publishToRobloxAction->setObjectName(QString::fromUtf8("publishToRobloxAction"));
        publishGameAction = new QAction(RBXMainWindow);
        publishGameAction->setObjectName(QString::fromUtf8("publishGameAction"));
        aboutRobloxAction = new QAction(RBXMainWindow);
        aboutRobloxAction->setObjectName(QString::fromUtf8("aboutRobloxAction"));
        onlineHelpAction = new QAction(RBXMainWindow);
        onlineHelpAction->setObjectName(QString::fromUtf8("onlineHelpAction"));
        objectBrowserAction = new QAction(RBXMainWindow);
        objectBrowserAction->setObjectName(QString::fromUtf8("objectBrowserAction"));
        objectBrowserAction->setCheckable(true);
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/images/TA_ObjectBrowser.png"), QSize(), QIcon::Normal, QIcon::Off);
        objectBrowserAction->setIcon(icon51);
        playSoloAction = new QAction(RBXMainWindow);
        playSoloAction->setObjectName(QString::fromUtf8("playSoloAction"));
        startServerAction = new QAction(RBXMainWindow);
        startServerAction->setObjectName(QString::fromUtf8("startServerAction"));
        startServerAction->setProperty("disableForQuickAccess", QVariant(true));
        startPlayerAction = new QAction(RBXMainWindow);
        startPlayerAction->setObjectName(QString::fromUtf8("startPlayerAction"));
        startPlayerAction->setProperty("disableForQuickAccess", QVariant(true));
        instanceDumpAction = new QAction(RBXMainWindow);
        instanceDumpAction->setObjectName(QString::fromUtf8("instanceDumpAction"));
        settingsAction = new QAction(RBXMainWindow);
        settingsAction->setObjectName(QString::fromUtf8("settingsAction"));
        publishSelectionToRobloxAction = new QAction(RBXMainWindow);
        publishSelectionToRobloxAction->setObjectName(QString::fromUtf8("publishSelectionToRobloxAction"));
        findNextAction = new QAction(RBXMainWindow);
        findNextAction->setObjectName(QString::fromUtf8("findNextAction"));
        findNextAction->setPriority(QAction::HighPriority);
        replaceAction = new QAction(RBXMainWindow);
        replaceAction->setObjectName(QString::fromUtf8("replaceAction"));
        replaceAction->setPriority(QAction::HighPriority);
        advArrowToolAction = new QAction(RBXMainWindow);
        advArrowToolAction->setObjectName(QString::fromUtf8("advArrowToolAction"));
        advArrowToolAction->setCheckable(true);
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/images/t_drag_old.png"), QSize(), QIcon::Normal, QIcon::Off);
        advArrowToolAction->setIcon(icon52);
        advArrowToolAction->setShortcutContext(Qt::ApplicationShortcut);
        saveToRobloxAction = new QAction(RBXMainWindow);
        saveToRobloxAction->setObjectName(QString::fromUtf8("saveToRobloxAction"));
        insertServiceAction = new QAction(RBXMainWindow);
        insertServiceAction->setObjectName(QString::fromUtf8("insertServiceAction"));
        fastLogDumpAction = new QAction(RBXMainWindow);
        fastLogDumpAction->setObjectName(QString::fromUtf8("fastLogDumpAction"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/bug_error.png"), QSize(), QIcon::Normal, QIcon::Off);
        fastLogDumpAction->setIcon(icon53);
        viewToolboxAction = new QAction(RBXMainWindow);
        viewToolboxAction->setObjectName(QString::fromUtf8("viewToolboxAction"));
        viewToolboxAction->setCheckable(true);
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/toolbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewToolboxAction->setIcon(icon54);
        toggleAxisWidgetAction = new QAction(RBXMainWindow);
        toggleAxisWidgetAction->setObjectName(QString::fromUtf8("toggleAxisWidgetAction"));
        toggleAxisWidgetAction->setCheckable(true);
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/axis_widget.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleAxisWidgetAction->setIcon(icon55);
        toggle3DGridAction = new QAction(RBXMainWindow);
        toggle3DGridAction->setObjectName(QString::fromUtf8("toggle3DGridAction"));
        toggle3DGridAction->setCheckable(true);
        toggleVideoRecordAction = new QAction(RBXMainWindow);
        toggleVideoRecordAction->setObjectName(QString::fromUtf8("toggleVideoRecordAction"));
        toggleVideoRecordAction->setCheckable(true);
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/Record-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleVideoRecordAction->setIcon(icon56);
        toggleVideoRecordAction->setAutoRepeat(false);
        filePublishedProjectsAction = new QAction(RBXMainWindow);
        filePublishedProjectsAction->setObjectName(QString::fromUtf8("filePublishedProjectsAction"));
        filePublishedProjectsAction->setIcon(icon1);
        viewDiagnosticsAction = new QAction(RBXMainWindow);
        viewDiagnosticsAction->setObjectName(QString::fromUtf8("viewDiagnosticsAction"));
        viewDiagnosticsAction->setCheckable(true);
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewDiagnosticsAction->setIcon(icon57);
        viewTaskSchedulerAction = new QAction(RBXMainWindow);
        viewTaskSchedulerAction->setObjectName(QString::fromUtf8("viewTaskSchedulerAction"));
        viewTaskSchedulerAction->setCheckable(true);
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/Task-Scheduler-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewTaskSchedulerAction->setIcon(icon58);
        viewScriptPerformanceAction = new QAction(RBXMainWindow);
        viewScriptPerformanceAction->setObjectName(QString::fromUtf8("viewScriptPerformanceAction"));
        viewScriptPerformanceAction->setCheckable(true);
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/jobs.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewScriptPerformanceAction->setIcon(icon59);
        viewObjectExplorerAction = new QAction(RBXMainWindow);
        viewObjectExplorerAction->setObjectName(QString::fromUtf8("viewObjectExplorerAction"));
        viewObjectExplorerAction->setCheckable(true);
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/explorer.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewObjectExplorerAction->setIcon(icon60);
        viewPropertiesAction = new QAction(RBXMainWindow);
        viewPropertiesAction->setObjectName(QString::fromUtf8("viewPropertiesAction"));
        viewPropertiesAction->setCheckable(true);
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/table.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewPropertiesAction->setIcon(icon61);
        viewOutputWindowAction = new QAction(RBXMainWindow);
        viewOutputWindowAction->setObjectName(QString::fromUtf8("viewOutputWindowAction"));
        viewOutputWindowAction->setCheckable(true);
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/output.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewOutputWindowAction->setIcon(icon62);
        actionStartPage = new QAction(RBXMainWindow);
        actionStartPage->setObjectName(QString::fromUtf8("actionStartPage"));
        actionStartPage->setCheckable(true);
        actionStartPage->setChecked(false);
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/world.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartPage->setIcon(icon63);
        actionStartPage->setIconVisibleInMenu(true);
        actionFullScreen = new QAction(RBXMainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon64);
        commentSelectionAction = new QAction(RBXMainWindow);
        commentSelectionAction->setObjectName(QString::fromUtf8("commentSelectionAction"));
        commentSelectionAction->setVisible(true);
        commentSelectionAction->setPriority(QAction::HighPriority);
        uncommentSelectionAction = new QAction(RBXMainWindow);
        uncommentSelectionAction->setObjectName(QString::fromUtf8("uncommentSelectionAction"));
        uncommentSelectionAction->setVisible(true);
        uncommentSelectionAction->setPriority(QAction::HighPriority);
        toggleCommentAction = new QAction(RBXMainWindow);
        toggleCommentAction->setObjectName(QString::fromUtf8("toggleCommentAction"));
        toggleCollisionCheckAction = new QAction(RBXMainWindow);
        toggleCollisionCheckAction->setObjectName(QString::fromUtf8("toggleCollisionCheckAction"));
        toggleCollisionCheckAction->setCheckable(true);
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/no-collision-dragger.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleCollisionCheckAction->setIcon(icon65);
        toggleBuildModeAction = new QAction(RBXMainWindow);
        toggleBuildModeAction->setObjectName(QString::fromUtf8("toggleBuildModeAction"));
        openPluginsFolderAction = new QAction(RBXMainWindow);
        openPluginsFolderAction->setObjectName(QString::fromUtf8("openPluginsFolderAction"));
        openPluginsFolderAction->setIcon(icon1);
        unlockAllAction = new QAction(RBXMainWindow);
        unlockAllAction->setObjectName(QString::fromUtf8("unlockAllAction"));
        QIcon icon66;
        icon66.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/lock_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        unlockAllAction->setIcon(icon66);
        shortcutHelpAction = new QAction(RBXMainWindow);
        shortcutHelpAction->setObjectName(QString::fromUtf8("shortcutHelpAction"));
        shortcutHelpAction->setProperty("disableForQuickAccess", QVariant(true));
        findPreviousAction = new QAction(RBXMainWindow);
        findPreviousAction->setObjectName(QString::fromUtf8("findPreviousAction"));
        findPreviousAction->setPriority(QAction::HighPriority);
        goToScriptErrorAction = new QAction(RBXMainWindow);
        goToScriptErrorAction->setObjectName(QString::fromUtf8("goToScriptErrorAction"));
        expandAllFoldsAction = new QAction(RBXMainWindow);
        expandAllFoldsAction->setObjectName(QString::fromUtf8("expandAllFoldsAction"));
        expandAllFoldsAction->setProperty("disableForQuickAccess", QVariant(true));
        collapseAllFoldsAction = new QAction(RBXMainWindow);
        collapseAllFoldsAction->setObjectName(QString::fromUtf8("collapseAllFoldsAction"));
        collapseAllFoldsAction->setProperty("disableForQuickAccess", QVariant(true));
        renameObjectAction = new QAction(RBXMainWindow);
        renameObjectAction->setObjectName(QString::fromUtf8("renameObjectAction"));
        screenShotAction = new QAction(RBXMainWindow);
        screenShotAction->setObjectName(QString::fromUtf8("screenShotAction"));
        QIcon icon67;
        icon67.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/picture-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        screenShotAction->setIcon(icon67);
        screenShotAction->setAutoRepeat(false);
        publishToRobloxAsAction = new QAction(RBXMainWindow);
        publishToRobloxAsAction->setObjectName(QString::fromUtf8("publishToRobloxAsAction"));
        selectChildrenAction = new QAction(RBXMainWindow);
        selectChildrenAction->setObjectName(QString::fromUtf8("selectChildrenAction"));
        testClearStatsAction = new QAction(RBXMainWindow);
        testClearStatsAction->setObjectName(QString::fromUtf8("testClearStatsAction"));
        stepIntoAction = new QAction(RBXMainWindow);
        stepIntoAction->setObjectName(QString::fromUtf8("stepIntoAction"));
        QIcon icon68;
        icon68.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/stepInto.png"), QSize(), QIcon::Normal, QIcon::Off);
        stepIntoAction->setIcon(icon68);
        stepOverAction = new QAction(RBXMainWindow);
        stepOverAction->setObjectName(QString::fromUtf8("stepOverAction"));
        QIcon icon69;
        icon69.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/stepOver.png"), QSize(), QIcon::Normal, QIcon::Off);
        stepOverAction->setIcon(icon69);
        stepOutAction = new QAction(RBXMainWindow);
        stepOutAction->setObjectName(QString::fromUtf8("stepOutAction"));
        QIcon icon70;
        icon70.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/stepOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        stepOutAction->setIcon(icon70);
        insertBreakpointAction = new QAction(RBXMainWindow);
        insertBreakpointAction->setObjectName(QString::fromUtf8("insertBreakpointAction"));
        deleteBreakpointAction = new QAction(RBXMainWindow);
        deleteBreakpointAction->setObjectName(QString::fromUtf8("deleteBreakpointAction"));
        toggleBreakpointStateAction = new QAction(RBXMainWindow);
        toggleBreakpointStateAction->setObjectName(QString::fromUtf8("toggleBreakpointStateAction"));
        addWatchAction = new QAction(RBXMainWindow);
        addWatchAction->setObjectName(QString::fromUtf8("addWatchAction"));
        resetScriptZoomAction = new QAction(RBXMainWindow);
        resetScriptZoomAction->setObjectName(QString::fromUtf8("resetScriptZoomAction"));
        viewContextualHelpAction = new QAction(RBXMainWindow);
        viewContextualHelpAction->setObjectName(QString::fromUtf8("viewContextualHelpAction"));
        viewContextualHelpAction->setCheckable(true);
        QIcon icon71;
        icon71.addFile(QString::fromUtf8(":/RibbonBar/images/Studio Ribbon Icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewContextualHelpAction->setIcon(icon71);
        toggleLocalSpaceAction = new QAction(RBXMainWindow);
        toggleLocalSpaceAction->setObjectName(QString::fromUtf8("toggleLocalSpaceAction"));
        toggleLocalSpaceAction->setCheckable(true);
        toggleLocalSpaceAction->setShortcutContext(Qt::ApplicationShortcut);
        toggleLocalSpaceAction->setAutoRepeat(true);
        toggleLocalSpaceAction->setVisible(true);
        toggleLocalSpaceAction->setIconVisibleInMenu(false);
        resetViewAction = new QAction(RBXMainWindow);
        resetViewAction->setObjectName(QString::fromUtf8("resetViewAction"));
        QIcon icon72;
        icon72.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/reset_layout.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetViewAction->setIcon(icon72);
        gridSizeToTwoAction = new QAction(RBXMainWindow);
        gridSizeToTwoAction->setObjectName(QString::fromUtf8("gridSizeToTwoAction"));
        QIcon icon73;
        icon73.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/grid_one.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridSizeToTwoAction->setIcon(icon73);
        gridSizeToFourAction = new QAction(RBXMainWindow);
        gridSizeToFourAction->setObjectName(QString::fromUtf8("gridSizeToFourAction"));
        QIcon icon74;
        icon74.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridSizeToFourAction->setIcon(icon74);
        gridSizeToSixteenAction = new QAction(RBXMainWindow);
        gridSizeToSixteenAction->setObjectName(QString::fromUtf8("gridSizeToSixteenAction"));
        QIcon icon75;
        icon75.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/grid_sixteen.png"), QSize(), QIcon::Normal, QIcon::Off);
        gridSizeToSixteenAction->setIcon(icon75);
        publishAsPluginAction = new QAction(RBXMainWindow);
        publishAsPluginAction->setObjectName(QString::fromUtf8("publishAsPluginAction"));
        createNewLinkedSourceAction = new QAction(RBXMainWindow);
        createNewLinkedSourceAction->setObjectName(QString::fromUtf8("createNewLinkedSourceAction"));
        managePluginsAction = new QAction(RBXMainWindow);
        managePluginsAction->setObjectName(QString::fromUtf8("managePluginsAction"));
        quickInsertAction = new QAction(RBXMainWindow);
        quickInsertAction->setObjectName(QString::fromUtf8("quickInsertAction"));
        quickInsertAction->setProperty("disableForQuickAccess", QVariant(true));
        reloadScriptAction = new QAction(RBXMainWindow);
        reloadScriptAction->setObjectName(QString::fromUtf8("reloadScriptAction"));
        reloadScriptAction->setEnabled(false);
        reloadScriptAction->setAutoRepeat(false);
        neverBreakOnScriptErrorsAction = new QAction(RBXMainWindow);
        neverBreakOnScriptErrorsAction->setObjectName(QString::fromUtf8("neverBreakOnScriptErrorsAction"));
        neverBreakOnScriptErrorsAction->setCheckable(true);
        neverBreakOnScriptErrorsAction->setProperty("disableForQuickAccess", QVariant(true));
        breakOnAllScriptErrorsAction = new QAction(RBXMainWindow);
        breakOnAllScriptErrorsAction->setObjectName(QString::fromUtf8("breakOnAllScriptErrorsAction"));
        breakOnAllScriptErrorsAction->setCheckable(true);
        breakOnAllScriptErrorsAction->setProperty("disableForQuickAccess", QVariant(true));
        breakOnUnhandledScriptErrorsAction = new QAction(RBXMainWindow);
        breakOnUnhandledScriptErrorsAction->setObjectName(QString::fromUtf8("breakOnUnhandledScriptErrorsAction"));
        breakOnUnhandledScriptErrorsAction->setCheckable(true);
        breakOnUnhandledScriptErrorsAction->setProperty("disableForQuickAccess", QVariant(true));
        viewFindResultsWindowAction = new QAction(RBXMainWindow);
        viewFindResultsWindowAction->setObjectName(QString::fromUtf8("viewFindResultsWindowAction"));
        viewFindResultsWindowAction->setCheckable(true);
        QIcon icon76;
        icon76.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFindResultsWindowAction->setIcon(icon76);
        findInScriptsAction = new QAction(RBXMainWindow);
        findInScriptsAction->setObjectName(QString::fromUtf8("findInScriptsAction"));
        findInScriptsAction->setShortcutContext(Qt::ApplicationShortcut);
        findInScriptsAction->setProperty("disableForQuickAccess", QVariant(true));
        explorerFilterAction = new QAction(RBXMainWindow);
        explorerFilterAction->setObjectName(QString::fromUtf8("explorerFilterAction"));
        explorerFilterAction->setProperty("disableForQuickAccess", QVariant(true));
        exportSelectionAction = new QAction(RBXMainWindow);
        exportSelectionAction->setObjectName(QString::fromUtf8("exportSelectionAction"));
        exportPlaceAction = new QAction(RBXMainWindow);
        exportPlaceAction->setObjectName(QString::fromUtf8("exportPlaceAction"));
        toggleAllBreakpointsStateAction = new QAction(RBXMainWindow);
        toggleAllBreakpointsStateAction->setObjectName(QString::fromUtf8("toggleAllBreakpointsStateAction"));
        duplicateSelectionAction = new QAction(RBXMainWindow);
        duplicateSelectionAction->setObjectName(QString::fromUtf8("duplicateSelectionAction"));
        duplicateSelectionAction->setIcon(icon17);
        gameExplorerAction = new QAction(RBXMainWindow);
        gameExplorerAction->setObjectName(QString::fromUtf8("gameExplorerAction"));
        gameExplorerAction->setCheckable(true);
        gameExplorerAction->setIcon(icon62);
        customizeQuickAccessAction = new QAction(RBXMainWindow);
        customizeQuickAccessAction->setObjectName(QString::fromUtf8("customizeQuickAccessAction"));
        customizeQuickAccessAction->setProperty("disableForQuickAccess", QVariant(true));
        unionSelectionAction = new QAction(RBXMainWindow);
        unionSelectionAction->setObjectName(QString::fromUtf8("unionSelectionAction"));
        QIcon icon77;
        icon77.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/union_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        unionSelectionAction->setIcon(icon77);
        negateSelectionAction = new QAction(RBXMainWindow);
        negateSelectionAction->setObjectName(QString::fromUtf8("negateSelectionAction"));
        QIcon icon78;
        icon78.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/negate_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        negateSelectionAction->setIcon(icon78);
        separateSelectionAction = new QAction(RBXMainWindow);
        separateSelectionAction->setObjectName(QString::fromUtf8("separateSelectionAction"));
        QIcon icon79;
        icon79.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/separate_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        separateSelectionAction->setIcon(icon79);
        cleanupServersAndPlayersAction = new QAction(RBXMainWindow);
        cleanupServersAndPlayersAction->setObjectName(QString::fromUtf8("cleanupServersAndPlayersAction"));
        cleanupServersAndPlayersAction->setEnabled(false);
        QIcon icon80;
        icon80.addFile(QString::fromUtf8(":/RibbonBar/images/Studio 2.0 icons/32x32/delete_x_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        cleanupServersAndPlayersAction->setIcon(icon80);
        playRbxDeviceAction = new QAction(RBXMainWindow);
        playRbxDeviceAction->setObjectName(QString::fromUtf8("playRbxDeviceAction"));
        pairRbxDeviceAction = new QAction(RBXMainWindow);
        pairRbxDeviceAction->setObjectName(QString::fromUtf8("pairRbxDeviceAction"));
        QIcon icon81;
        icon81.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/pair_device_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pairRbxDeviceAction->setIcon(icon81);
        audioToggleAction = new QAction(RBXMainWindow);
        audioToggleAction->setObjectName(QString::fromUtf8("audioToggleAction"));
        QIcon icon82;
        icon82.addFile(QString::fromUtf8(":/16x16/images/RibbonIcons/Test/Audio-Disabled.png"), QSize(), QIcon::Normal, QIcon::Off);
        audioToggleAction->setIcon(icon82);
        viewTutorialsAction = new QAction(RBXMainWindow);
        viewTutorialsAction->setObjectName(QString::fromUtf8("viewTutorialsAction"));
        viewTutorialsAction->setCheckable(true);
        QIcon icon83;
        icon83.addFile(QString::fromUtf8(":/RibbonBar/images/RibbonIcons/View/Tutorials.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewTutorialsAction->setIcon(icon83);
        viewScriptAnalysisAction = new QAction(RBXMainWindow);
        viewScriptAnalysisAction->setObjectName(QString::fromUtf8("viewScriptAnalysisAction"));
        viewScriptAnalysisAction->setCheckable(true);
        viewScriptAnalysisAction->setIcon(icon62);
        viewTeamCreateAction = new QAction(RBXMainWindow);
        viewTeamCreateAction->setObjectName(QString::fromUtf8("viewTeamCreateAction"));
        viewTeamCreateAction->setCheckable(true);
        QIcon icon84;
        icon84.addFile(QString::fromUtf8(":/RibbonBar/images/RibbonIcons/View/TeamCreate.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewTeamCreateAction->setIcon(icon84);
        emulateDeviceAction = new QAction(RBXMainWindow);
        emulateDeviceAction->setObjectName(QString::fromUtf8("emulateDeviceAction"));
        manageEmulationDeviceAction = new QAction(RBXMainWindow);
        manageEmulationDeviceAction->setObjectName(QString::fromUtf8("manageEmulationDeviceAction"));
        QIcon icon85;
        icon85.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/emulate_device_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        manageEmulationDeviceAction->setIcon(icon85);
        launchHelpForSelectionAction = new QAction(RBXMainWindow);
        launchHelpForSelectionAction->setObjectName(QString::fromUtf8("launchHelpForSelectionAction"));
        launchHelpForSelectionAction->setIcon(icon71);
        viewCommandBarAction = new QAction(RBXMainWindow);
        viewCommandBarAction->setObjectName(QString::fromUtf8("viewCommandBarAction"));
        viewCommandBarAction->setCheckable(true);
        QIcon icon86;
        icon86.addFile(QString::fromUtf8(":/RibbonBar/images/RibbonIcons/View/Output.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewCommandBarAction->setIcon(icon86);
        fileOpenRecentSavesAction = new QAction(RBXMainWindow);
        fileOpenRecentSavesAction->setObjectName(QString::fromUtf8("fileOpenRecentSavesAction"));
        fileOpenRecentSavesAction->setIcon(icon1);
        goToLineAction = new QAction(RBXMainWindow);
        goToLineAction->setObjectName(QString::fromUtf8("goToLineAction"));
        QIcon icon87;
        icon87.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/goToLine.png"), QSize(), QIcon::Normal, QIcon::Off);
        goToLineAction->setIcon(icon87);
        downloadPlaceCopyAction = new QAction(RBXMainWindow);
        downloadPlaceCopyAction->setObjectName(QString::fromUtf8("downloadPlaceCopyAction"));
        QIcon icon88;
        icon88.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/download_copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        downloadPlaceCopyAction->setIcon(icon88);
        defaultCentralWidget = new QWidget(RBXMainWindow);
        defaultCentralWidget->setObjectName(QString::fromUtf8("defaultCentralWidget"));
        RBXMainWindow->setCentralWidget(defaultCentralWidget);
        statusbar = new QStatusBar(RBXMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RBXMainWindow->setStatusBar(statusbar);
        standardToolBar = new QToolBar(RBXMainWindow);
        standardToolBar->setObjectName(QString::fromUtf8("standardToolBar"));
        standardToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::TopToolBarArea, standardToolBar);
        runToolBar = new QToolBar(RBXMainWindow);
        runToolBar->setObjectName(QString::fromUtf8("runToolBar"));
        runToolBar->setEnabled(true);
        runToolBar->setMouseTracking(false);
        runToolBar->setAcceptDrops(false);
        runToolBar->setAutoFillBackground(false);
        runToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::TopToolBarArea, runToolBar);
        advToolsToolBar = new QToolBar(RBXMainWindow);
        advToolsToolBar->setObjectName(QString::fromUtf8("advToolsToolBar"));
        advToolsToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::TopToolBarArea, advToolsToolBar);
        oldToolsToolBar = new QToolBar(RBXMainWindow);
        oldToolsToolBar->setObjectName(QString::fromUtf8("oldToolsToolBar"));
        oldToolsToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::TopToolBarArea, oldToolsToolBar);
        editCameraToolBar = new QToolBar(RBXMainWindow);
        editCameraToolBar->setObjectName(QString::fromUtf8("editCameraToolBar"));
        editCameraToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::TopToolBarArea, editCameraToolBar);
        RBXMainWindow->insertToolBarBreak(editCameraToolBar);
        menubar = new QMenuBar(RBXMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFind_and_Replace = new QMenu(menuEdit);
        menuFind_and_Replace->setObjectName(QString::fromUtf8("menuFind_and_Replace"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuTest = new QMenu(menuTools);
        menuTest->setObjectName(QString::fromUtf8("menuTest"));
        menuStats = new QMenu(menuTools);
        menuStats->setObjectName(QString::fromUtf8("menuStats"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuToolBars = new QMenu(menuView);
        menuToolBars->setObjectName(QString::fromUtf8("menuToolBars"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName(QString::fromUtf8("menuInsert"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        scriptMenu = new QMenu(menubar);
        scriptMenu->setObjectName(QString::fromUtf8("scriptMenu"));
        breakErrorsIntoDebuggerMenu = new QMenu(scriptMenu);
        breakErrorsIntoDebuggerMenu->setObjectName(QString::fromUtf8("breakErrorsIntoDebuggerMenu"));
        RBXMainWindow->setMenuBar(menubar);
        outputWindow = new QDockWidget(RBXMainWindow);
        outputWindow->setObjectName(QString::fromUtf8("outputWindow"));
        outputWindow->setMinimumSize(QSize(300, 104));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidgetContents_2->setMinimumSize(QSize(300, 0));
        dockWidgetContents_2->setSizeIncrement(QSize(0, 0));
        gridLayout = new QGridLayout(dockWidgetContents_2);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        outputWindow->setWidget(dockWidgetContents_2);
        RBXMainWindow->addDockWidget(Qt::BottomDockWidgetArea, outputWindow);
        commandToolBar = new QToolBar(RBXMainWindow);
        commandToolBar->setObjectName(QString::fromUtf8("commandToolBar"));
        commandToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::BottomToolBarArea, commandToolBar);
        objectExplorer = new QDockWidget(RBXMainWindow);
        objectExplorer->setObjectName(QString::fromUtf8("objectExplorer"));
        objectExplorer->setMinimumSize(QSize(230, 300));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_3 = new QGridLayout(dockWidgetContents);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget = new QStackedWidget(dockWidgetContents);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        objectExplorer->setWidget(dockWidgetContents);
        RBXMainWindow->addDockWidget(Qt::RightDockWidgetArea, objectExplorer);
        propertyBrowser = new QDockWidget(RBXMainWindow);
        propertyBrowser->setObjectName(QString::fromUtf8("propertyBrowser"));
        propertyBrowser->setMinimumSize(QSize(266, 250));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        propertyBrowser->setWidget(dockWidgetContents_3);
        RBXMainWindow->addDockWidget(Qt::RightDockWidgetArea, propertyBrowser);
        diagnosticsDockWidget = new QDockWidget(RBXMainWindow);
        diagnosticsDockWidget->setObjectName(QString::fromUtf8("diagnosticsDockWidget"));
        diagnosticsDockWidget->setMinimumSize(QSize(100, 42));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        diagnosticsDockWidget->setWidget(dockWidgetContents_4);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, diagnosticsDockWidget);
        taskSchedulerDockWidget = new QDockWidget(RBXMainWindow);
        taskSchedulerDockWidget->setObjectName(QString::fromUtf8("taskSchedulerDockWidget"));
        taskSchedulerDockWidget->setMinimumSize(QSize(100, 42));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        taskSchedulerDockWidget->setWidget(dockWidgetContents_6);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, taskSchedulerDockWidget);
        toolBoxDockWidget = new QDockWidget(RBXMainWindow);
        toolBoxDockWidget->setObjectName(QString::fromUtf8("toolBoxDockWidget"));
        toolBoxDockWidget->setMinimumSize(QSize(200, 100));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        toolBoxDockWidget->setWidget(dockWidgetContents_5);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, toolBoxDockWidget);
        scriptReviewDockWidget = new QDockWidget(RBXMainWindow);
        scriptReviewDockWidget->setObjectName(QString::fromUtf8("scriptReviewDockWidget"));
        scriptReviewDockWidget->setMinimumSize(QSize(100, 42));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        scriptReviewDockWidget->setWidget(dockWidgetContents_7);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, scriptReviewDockWidget);
        gameExplorerDockWidget = new QDockWidget(RBXMainWindow);
        gameExplorerDockWidget->setObjectName(QString::fromUtf8("gameExplorerDockWidget"));
        gameExplorerDockWidget->setMinimumSize(QSize(100, 42));
        dockWidgetContents_11 = new QWidget();
        dockWidgetContents_11->setObjectName(QString::fromUtf8("dockWidgetContents_11"));
        gameExplorerDockWidget->setWidget(dockWidgetContents_11);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, gameExplorerDockWidget);
        viewToolsToolBar = new QToolBar(RBXMainWindow);
        viewToolsToolBar->setObjectName(QString::fromUtf8("viewToolsToolBar"));
        viewToolsToolBar->setIconSize(QSize(16, 16));
        RBXMainWindow->addToolBar(Qt::TopToolBarArea, viewToolsToolBar);
        basicObjectsDockWidget = new QDockWidget(RBXMainWindow);
        basicObjectsDockWidget->setObjectName(QString::fromUtf8("basicObjectsDockWidget"));
        basicObjectsDockWidget->setMinimumSize(QSize(100, 42));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        basicObjectsDockWidget->setWidget(dockWidgetContents_8);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, basicObjectsDockWidget);
        contextualHelp = new QDockWidget(RBXMainWindow);
        contextualHelp->setObjectName(QString::fromUtf8("contextualHelp"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QString::fromUtf8("dockWidgetContents_9"));
        contextualHelp->setWidget(dockWidgetContents_9);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, contextualHelp);
        findResultsWindow = new QDockWidget(RBXMainWindow);
        findResultsWindow->setObjectName(QString::fromUtf8("findResultsWindow"));
        findResultsWindow->setMinimumSize(QSize(300, 104));
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QString::fromUtf8("dockWidgetContents_10"));
        dockWidgetContents_10->setMinimumSize(QSize(300, 0));
        dockWidgetContents_10->setSizeIncrement(QSize(0, 0));
        gridLayout_2 = new QGridLayout(dockWidgetContents_10);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        findResultsWindow->setWidget(dockWidgetContents_10);
        RBXMainWindow->addDockWidget(Qt::BottomDockWidgetArea, findResultsWindow);
        tutorialsDockWidget = new QDockWidget(RBXMainWindow);
        tutorialsDockWidget->setObjectName(QString::fromUtf8("tutorialsDockWidget"));
        tutorialsDockWidget->setMinimumSize(QSize(350, 150));
        dockWidgetContents_12 = new QWidget();
        dockWidgetContents_12->setObjectName(QString::fromUtf8("dockWidgetContents_12"));
        tutorialsDockWidget->setWidget(dockWidgetContents_12);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, tutorialsDockWidget);
        teamCreateDockWidget = new QDockWidget(RBXMainWindow);
        teamCreateDockWidget->setObjectName(QString::fromUtf8("teamCreateDockWidget"));
        teamCreateDockWidget->setMinimumSize(QSize(250, 150));
        dockWidgetContents_13 = new QWidget();
        dockWidgetContents_13->setObjectName(QString::fromUtf8("dockWidgetContents_13"));
        teamCreateDockWidget->setWidget(dockWidgetContents_13);
        RBXMainWindow->addDockWidget(Qt::LeftDockWidgetArea, teamCreateDockWidget);
        scriptAnalysisDockWidget = new QDockWidget(RBXMainWindow);
        scriptAnalysisDockWidget->setObjectName(QString::fromUtf8("scriptAnalysisDockWidget"));
        scriptAnalysisDockWidget->setMinimumSize(QSize(300, 104));
        RBXMainWindow->addDockWidget(Qt::BottomDockWidgetArea, scriptAnalysisDockWidget);

        standardToolBar->addAction(fileNewAction);
        standardToolBar->addAction(fileOpenAction);
        standardToolBar->addAction(fileOpenRecentSavesAction);
        standardToolBar->addAction(fileSaveAction);
        standardToolBar->addSeparator();
        standardToolBar->addAction(cutAction);
        standardToolBar->addAction(copyAction);
        standardToolBar->addAction(pasteAction);
        standardToolBar->addSeparator();
        standardToolBar->addAction(undoAction);
        standardToolBar->addAction(redoAction);
        standardToolBar->addSeparator();
        standardToolBar->addAction(groupSelectionAction);
        standardToolBar->addAction(ungroupSelectionAction);
        standardToolBar->addAction(unionSelectionAction);
        standardToolBar->addAction(negateSelectionAction);
        standardToolBar->addAction(separateSelectionAction);
        standardToolBar->addSeparator();
        standardToolBar->addAction(rotateSelectionAction);
        standardToolBar->addAction(tiltSelectionAction);
        standardToolBar->addAction(moveUpBrickAction);
        standardToolBar->addAction(moveDownBrickAction);
        runToolBar->addAction(simulationPlayAction);
        runToolBar->addAction(simulationRunAction);
        runToolBar->addAction(simulationStopAction);
        runToolBar->addAction(simulationResetAction);
        advToolsToolBar->addAction(advArrowToolAction);
        advToolsToolBar->addAction(advTranslateAction);
        advToolsToolBar->addAction(resizeAction);
        advToolsToolBar->addAction(advRotateAction);
        advToolsToolBar->addSeparator();
        advToolsToolBar->addAction(gridToOneAction);
        advToolsToolBar->addAction(gridToOneFifthAction);
        advToolsToolBar->addAction(gridToOffAction);
        advToolsToolBar->addSeparator();
        advToolsToolBar->addAction(advanceJointCreationManualAction);
        advToolsToolBar->addSeparator();
        advToolsToolBar->addAction(lockAction);
        advToolsToolBar->addAction(anchorAction);
        advToolsToolBar->addSeparator();
        advToolsToolBar->addAction(dropperAction);
        advToolsToolBar->addAction(smoothSurfaceAction);
        advToolsToolBar->addAction(glueSurfaceAction);
        advToolsToolBar->addAction(weldSurfaceAction);
        advToolsToolBar->addAction(studsAction);
        advToolsToolBar->addAction(inletAction);
        advToolsToolBar->addAction(universalsAction);
        advToolsToolBar->addAction(hingeAction);
        advToolsToolBar->addAction(motorRightAction);
        editCameraToolBar->addAction(panLeftAction);
        editCameraToolBar->addAction(panRightAction);
        editCameraToolBar->addAction(tiltUpAction);
        editCameraToolBar->addAction(tiltDownAction);
        editCameraToolBar->addAction(zoomInAction);
        editCameraToolBar->addAction(zoomOutAction);
        editCameraToolBar->addAction(zoomExtentsAction);
        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(scriptMenu->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuInsert->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(fileNewAction);
        menuFile->addAction(fileOpenAction);
        menuFile->addAction(filePublishedProjectsAction);
        menuFile->addAction(fileCloseAction);
        menuFile->addSeparator();
        menuFile->addAction(fileSaveAction);
        menuFile->addAction(fileSaveAsAction);
        menuFile->addAction(publishToRobloxAction);
        menuFile->addAction(publishToRobloxAsAction);
        menuFile->addAction(publishGameAction);
        menuFile->addAction(downloadPlaceCopyAction);
        menuFile->addSeparator();
        menuFile->addAction(publishSelectionToRobloxAction);
        menuFile->addSeparator();
        menuFile->addAction(exportPlaceAction);
        menuFile->addSeparator();
        menuFile->addAction(fileExitAction);
        menuEdit->addAction(undoAction);
        menuEdit->addAction(redoAction);
        menuEdit->addSeparator();
        menuEdit->addAction(cutAction);
        menuEdit->addAction(copyAction);
        menuEdit->addAction(pasteAction);
        menuEdit->addAction(duplicateSelectionAction);
        menuEdit->addSeparator();
        menuEdit->addAction(pasteIntoAction);
        menuEdit->addAction(deleteSelectedAction);
        menuEdit->addAction(selectAllAction);
        menuEdit->addAction(explorerFilterAction);
        menuEdit->addSeparator();
        menuEdit->addAction(menuFind_and_Replace->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(lockAction);
        menuEdit->addAction(unlockAllAction);
        menuFind_and_Replace->addAction(findAction);
        menuFind_and_Replace->addAction(findNextAction);
        menuFind_and_Replace->addAction(findPreviousAction);
        menuFind_and_Replace->addAction(replaceAction);
        menuFind_and_Replace->addSeparator();
        menuFind_and_Replace->addAction(findInScriptsAction);
        menuTools->addAction(executeScriptAction);
        menuTools->addSeparator();
        menuTools->addAction(menuTest->menuAction());
        menuTools->addAction(menuStats->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(openPluginsFolderAction);
        menuTools->addAction(managePluginsAction);
        menuTools->addAction(settingsAction);
        menuTest->addAction(playSoloAction);
        menuTest->addAction(startServerAction);
        menuTest->addAction(startPlayerAction);
        menuTest->addSeparator();
        menuTest->addAction(pairRbxDeviceAction);
        menuStats->addAction(testStatsAction);
        menuStats->addAction(testRenderStatsAction);
        menuStats->addAction(testNetworkStatsAction);
        menuStats->addAction(testPhysicsStatsAction);
        menuStats->addAction(testSummaryStatsAction);
        menuStats->addAction(testCustomStatsAction);
        menuStats->addSeparator();
        menuStats->addAction(testClearStatsAction);
        menuView->addAction(actionStartPage);
        menuView->addSeparator();
        menuView->addAction(actionFullScreen);
        menuView->addAction(toggleAxisWidgetAction);
        menuView->addAction(toggle3DGridAction);
        menuView->addSeparator();
        menuView->addAction(menuToolBars->menuAction());
        menuView->addSeparator();
        menuFormat->addAction(rotateSelectionAction);
        menuFormat->addAction(tiltSelectionAction);
        menuFormat->addSeparator();
        menuFormat->addAction(groupSelectionAction);
        menuFormat->addAction(ungroupSelectionAction);
        menuFormat->addAction(unionSelectionAction);
        menuFormat->addAction(negateSelectionAction);
        menuFormat->addAction(separateSelectionAction);
        menuFormat->addAction(selectChildrenAction);
        menuInsert->addAction(insertModelAction);
        menuInsert->addAction(insertServiceAction);
        menuInsert->addSeparator();
        menuHelp->addAction(aboutRobloxAction);
        menuHelp->addAction(onlineHelpAction);
        menuHelp->addAction(shortcutHelpAction);
        menuHelp->addAction(objectBrowserAction);
        menuHelp->addAction(fastLogDumpAction);
        scriptMenu->addAction(goToScriptErrorAction);
        scriptMenu->addAction(breakErrorsIntoDebuggerMenu->menuAction());
        scriptMenu->addSeparator();
        scriptMenu->addAction(commentSelectionAction);
        scriptMenu->addAction(uncommentSelectionAction);
        scriptMenu->addAction(toggleCommentAction);
        scriptMenu->addSeparator();
        scriptMenu->addAction(expandAllFoldsAction);
        scriptMenu->addAction(collapseAllFoldsAction);
        scriptMenu->addSeparator();
        scriptMenu->addAction(zoomInAction);
        scriptMenu->addAction(zoomOutAction);
        scriptMenu->addAction(resetScriptZoomAction);
        scriptMenu->addAction(reloadScriptAction);
        scriptMenu->addSeparator();
        scriptMenu->addAction(goToLineAction);
        breakErrorsIntoDebuggerMenu->addAction(neverBreakOnScriptErrorsAction);
        breakErrorsIntoDebuggerMenu->addAction(breakOnAllScriptErrorsAction);
        breakErrorsIntoDebuggerMenu->addAction(breakOnUnhandledScriptErrorsAction);

        retranslateUi(RBXMainWindow);

        QMetaObject::connectSlotsByName(RBXMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RBXMainWindow)
    {
        RBXMainWindow->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "ROBLOX Studio", nullptr));
        fileOpenAction->setText(QCoreApplication::translate("RBXMainWindow", "Open...", nullptr));
#if QT_CONFIG(tooltip)
        fileOpenAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Open", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileOpenAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Open an existing document", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileOpenAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        undoAction->setText(QCoreApplication::translate("RBXMainWindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        undoAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        undoAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Undo the last action", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        undoAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        redoAction->setText(QCoreApplication::translate("RBXMainWindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        redoAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        redoAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Redo the previously undone action", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        redoAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        deleteSelectedAction->setText(QCoreApplication::translate("RBXMainWindow", "Delete", nullptr));
        deleteSelectedAction->setIconText(QCoreApplication::translate("RBXMainWindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        deleteSelectedAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        deleteSelectedAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Erase the selection", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        deleteSelectedAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        selectAllAction->setText(QCoreApplication::translate("RBXMainWindow", "Select All", nullptr));
#if QT_CONFIG(tooltip)
        selectAllAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Select All", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        selectAllAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Select the entire document", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        selectAllAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        lockAction->setText(QCoreApplication::translate("RBXMainWindow", "Lock", nullptr));
#if QT_CONFIG(tooltip)
        lockAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Lock - prevent selection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lockAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Lock objects", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        lockAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        anchorAction->setText(QCoreApplication::translate("RBXMainWindow", "Anchor", nullptr));
#if QT_CONFIG(tooltip)
        anchorAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Anchor - prevent moving", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        anchorAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Anchor objects", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        anchorAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        advTranslateAction->setText(QCoreApplication::translate("RBXMainWindow", "Move Tool", nullptr));
#if QT_CONFIG(tooltip)
        advTranslateAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Move Parts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        advTranslateAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        advRotateAction->setText(QCoreApplication::translate("RBXMainWindow", "Rotate Tool", nullptr));
#if QT_CONFIG(tooltip)
        advRotateAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Rotate Parts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        advRotateAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomInAction->setText(QCoreApplication::translate("RBXMainWindow", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        zoomInAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        zoomInAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Zoom In", nullptr));
#endif // QT_CONFIG(statustip)
        zoomOutAction->setText(QCoreApplication::translate("RBXMainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        zoomOutAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        zoomOutAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Zoom Out", nullptr));
#endif // QT_CONFIG(statustip)
        tiltUpAction->setText(QCoreApplication::translate("RBXMainWindow", "Tilt Up", nullptr));
#if QT_CONFIG(tooltip)
        tiltUpAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Tilt Up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tiltUpAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Tilt Up", nullptr));
#endif // QT_CONFIG(statustip)
        tiltDownAction->setText(QCoreApplication::translate("RBXMainWindow", "Tilt Down", nullptr));
#if QT_CONFIG(statustip)
        tiltDownAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Tilt Down", nullptr));
#endif // QT_CONFIG(statustip)
        panRightAction->setText(QCoreApplication::translate("RBXMainWindow", "Pan Right", nullptr));
#if QT_CONFIG(statustip)
        panRightAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Pan Right", nullptr));
#endif // QT_CONFIG(statustip)
        panLeftAction->setText(QCoreApplication::translate("RBXMainWindow", "Pan Left", nullptr));
#if QT_CONFIG(statustip)
        panLeftAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Pan Left", nullptr));
#endif // QT_CONFIG(statustip)
        glueSurfaceAction->setText(QCoreApplication::translate("RBXMainWindow", "Glue Surface", nullptr));
#if QT_CONFIG(tooltip)
        glueSurfaceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Glue Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        cutAction->setText(QCoreApplication::translate("RBXMainWindow", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        cutAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cutAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Cut the selection and put it on the Clipboard", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        cutAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        copyAction->setText(QCoreApplication::translate("RBXMainWindow", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        copyAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        copyAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Copy the selection and put it on the Clipboard", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        copyAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        pasteAction->setText(QCoreApplication::translate("RBXMainWindow", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        pasteAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pasteAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Insert Clipboard contents", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        pasteAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        smoothSurfaceAction->setText(QCoreApplication::translate("RBXMainWindow", "Smooth Surface", nullptr));
#if QT_CONFIG(tooltip)
        smoothSurfaceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Smooth Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        weldSurfaceAction->setText(QCoreApplication::translate("RBXMainWindow", "Weld Surface", nullptr));
#if QT_CONFIG(tooltip)
        weldSurfaceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Weld Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        studsAction->setText(QCoreApplication::translate("RBXMainWindow", "Connectors On Surface", nullptr));
#if QT_CONFIG(tooltip)
        studsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Connectors on Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        inletAction->setText(QCoreApplication::translate("RBXMainWindow", "Indents on Surface", nullptr));
#if QT_CONFIG(tooltip)
        inletAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Indents on Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        universalsAction->setText(QCoreApplication::translate("RBXMainWindow", "Universals for surface", nullptr));
#if QT_CONFIG(tooltip)
        universalsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Universals for Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        hingeAction->setText(QCoreApplication::translate("RBXMainWindow", "Hinge on Surface", nullptr));
#if QT_CONFIG(tooltip)
        hingeAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Hinge on Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        smoothNoOutlinesAction->setText(QCoreApplication::translate("RBXMainWindow", "Smooth Surface without Outlines", nullptr));
#if QT_CONFIG(tooltip)
        smoothNoOutlinesAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Smooth Surface without Outlines", nullptr));
#endif // QT_CONFIG(tooltip)
        groupSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Group", nullptr));
#if QT_CONFIG(tooltip)
        groupSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Group", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupSelectionAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Group parts or models", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        groupSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        ungroupSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Ungroup", nullptr));
#if QT_CONFIG(tooltip)
        ungroupSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Ungroup", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ungroupSelectionAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Ungroup models or parts", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        ungroupSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        moveUpBrickAction->setText(QCoreApplication::translate("RBXMainWindow", "Move Up Brick", nullptr));
#if QT_CONFIG(tooltip)
        moveUpBrickAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Move Up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        moveUpBrickAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Move objects up", nullptr));
#endif // QT_CONFIG(statustip)
        moveDownBrickAction->setText(QCoreApplication::translate("RBXMainWindow", "Move Down", nullptr));
#if QT_CONFIG(tooltip)
        moveDownBrickAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Move Down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        moveDownBrickAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Move objects down", nullptr));
#endif // QT_CONFIG(statustip)
        rotateSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Rotate", nullptr));
#if QT_CONFIG(tooltip)
        rotateSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Rotate objects", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        rotateSelectionAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Rotate objects", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        rotateSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        tiltSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Tilt", nullptr));
#if QT_CONFIG(tooltip)
        tiltSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Tilt objects", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tiltSelectionAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Tilt objects", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        tiltSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        simulationPlayAction->setText(QCoreApplication::translate("RBXMainWindow", "Play", nullptr));
#if QT_CONFIG(tooltip)
        simulationPlayAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Play", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        simulationPlayAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Test - play", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        simulationPlayAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        simulationRunAction->setText(QCoreApplication::translate("RBXMainWindow", "Run", nullptr));
#if QT_CONFIG(tooltip)
        simulationRunAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Run", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        simulationRunAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Test - run", nullptr));
#endif // QT_CONFIG(statustip)
        simulationStopAction->setText(QCoreApplication::translate("RBXMainWindow", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        simulationStopAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Pause", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        simulationStopAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Pauses the run", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        simulationStopAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        testStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Stats", nullptr));
#if QT_CONFIG(tooltip)
        testStatsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Render Stats", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        testStatsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        testRenderStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Render Stats", nullptr));
#if QT_CONFIG(shortcut)
        testRenderStatsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        testNetworkStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Network Stats", nullptr));
#if QT_CONFIG(shortcut)
        testNetworkStatsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        testPhysicsStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Physics Stats", nullptr));
#if QT_CONFIG(shortcut)
        testPhysicsStatsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        testSummaryStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Summary Stats", nullptr));
#if QT_CONFIG(shortcut)
        testSummaryStatsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        testCustomStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Custom Stats", nullptr));
#if QT_CONFIG(shortcut)
        testCustomStatsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F6", nullptr));
#endif // QT_CONFIG(shortcut)
        simulationResetAction->setText(QCoreApplication::translate("RBXMainWindow", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        simulationResetAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Stop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        simulationResetAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Stops and reloads the document", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        simulationResetAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        advanceJointCreationManualAction->setText(QCoreApplication::translate("RBXMainWindow", "Automatically Create Joints", nullptr));
#if QT_CONFIG(tooltip)
        advanceJointCreationManualAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Automatically create joints between parts...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        advanceJointCreationManualAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Automatically create joints between parts...", nullptr));
#endif // QT_CONFIG(statustip)
        gridToOneAction->setText(QCoreApplication::translate("RBXMainWindow", "One Stud Grid", nullptr));
#if QT_CONFIG(tooltip)
        gridToOneAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "One Stud Grid", nullptr));
#endif // QT_CONFIG(tooltip)
        gridToOneFifthAction->setText(QCoreApplication::translate("RBXMainWindow", "1/5 Stud Grid", nullptr));
#if QT_CONFIG(tooltip)
        gridToOneFifthAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "1/5 Stud Grid", nullptr));
#endif // QT_CONFIG(tooltip)
        gridToOffAction->setText(QCoreApplication::translate("RBXMainWindow", "Grid Off", nullptr));
#if QT_CONFIG(tooltip)
        gridToOffAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Grid Off", nullptr));
#endif // QT_CONFIG(tooltip)
        resizeAction->setText(QCoreApplication::translate("RBXMainWindow", "Resize Tool", nullptr));
#if QT_CONFIG(tooltip)
        resizeAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Resize", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        resizeAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Resize Object", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        resizeAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        motorRightAction->setText(QCoreApplication::translate("RBXMainWindow", "Right Motor", nullptr));
#if QT_CONFIG(tooltip)
        motorRightAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Motor on Surface", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFillColor->setText(QCoreApplication::translate("RBXMainWindow", "Fill", nullptr));
#if QT_CONFIG(tooltip)
        actionFillColor->setToolTip(QCoreApplication::translate("RBXMainWindow", "Fill With Color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionFillColor->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Fills a part with a color", nullptr));
#endif // QT_CONFIG(statustip)
        actionMaterial->setText(QCoreApplication::translate("RBXMainWindow", "Material", nullptr));
#if QT_CONFIG(tooltip)
        actionMaterial->setToolTip(QCoreApplication::translate("RBXMainWindow", "Change Material", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionMaterial->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Changes the material of a part", nullptr));
#endif // QT_CONFIG(statustip)
        dropperAction->setText(QCoreApplication::translate("RBXMainWindow", "Dropper", nullptr));
#if QT_CONFIG(tooltip)
        dropperAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Pick Color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        dropperAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Picks up a color from a part", nullptr));
#endif // QT_CONFIG(statustip)
        fileSaveAction->setText(QCoreApplication::translate("RBXMainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileSaveAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Save the active document", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileSaveAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        executeScriptAction->setText(QCoreApplication::translate("RBXMainWindow", "Execute Script...", nullptr));
#if QT_CONFIG(tooltip)
        executeScriptAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Execute Script", nullptr));
#endif // QT_CONFIG(tooltip)
        fileCloseAction->setText(QCoreApplication::translate("RBXMainWindow", "Close", nullptr));
#if QT_CONFIG(statustip)
        fileCloseAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Close the active document", nullptr));
#endif // QT_CONFIG(statustip)
        fileSaveAsAction->setText(QCoreApplication::translate("RBXMainWindow", "Save As...", nullptr));
#if QT_CONFIG(statustip)
        fileSaveAsAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Save the active document with a new name", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileSaveAsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        fileNewAction->setText(QCoreApplication::translate("RBXMainWindow", "New", nullptr));
#if QT_CONFIG(statustip)
        fileNewAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Create a new document", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileNewAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        fileExitAction->setText(QCoreApplication::translate("RBXMainWindow", "Exit", nullptr));
#if QT_CONFIG(statustip)
        fileExitAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Quit the application; prompts to save documents", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileExitAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        findAction->setText(QCoreApplication::translate("RBXMainWindow", "Find...", nullptr));
#if QT_CONFIG(tooltip)
        findAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Find", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        findAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomExtentsAction->setText(QCoreApplication::translate("RBXMainWindow", "Zoom to", nullptr));
#if QT_CONFIG(tooltip)
        zoomExtentsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Zoom to", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        zoomExtentsAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Zoom to", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        zoomExtentsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F", nullptr));
#endif // QT_CONFIG(shortcut)
        viewBasicObjectsAction->setText(QCoreApplication::translate("RBXMainWindow", "Basic Objects", nullptr));
#if QT_CONFIG(tooltip)
        viewBasicObjectsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Insert Basic Objects", nullptr));
#endif // QT_CONFIG(tooltip)
        insertModelAction->setText(QCoreApplication::translate("RBXMainWindow", "Model...", nullptr));
#if QT_CONFIG(tooltip)
        insertModelAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Insert Models", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteIntoAction->setText(QCoreApplication::translate("RBXMainWindow", "Paste Into", nullptr));
#if QT_CONFIG(tooltip)
        pasteIntoAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Paste Into", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        pasteIntoAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        selectionSaveToFileAction->setText(QCoreApplication::translate("RBXMainWindow", "Save to File...", nullptr));
#if QT_CONFIG(tooltip)
        selectionSaveToFileAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Save selection to file...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        selectionSaveToFileAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Save the selection as a Model to a file", nullptr));
#endif // QT_CONFIG(statustip)
        insertIntoFileAction->setText(QCoreApplication::translate("RBXMainWindow", "Insert from File...", nullptr));
#if QT_CONFIG(tooltip)
        insertIntoFileAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Insert from File...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        insertIntoFileAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Insert from File...", nullptr));
#endif // QT_CONFIG(statustip)
        publishToRobloxAction->setText(QCoreApplication::translate("RBXMainWindow", "Publish to ROBLOX", nullptr));
#if QT_CONFIG(tooltip)
        publishToRobloxAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Publish Active Document to Roblox", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        publishToRobloxAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Save the Active Document to Roblox Website", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        publishToRobloxAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        publishGameAction->setText(QCoreApplication::translate("RBXMainWindow", "Publish Whole Game...", nullptr));
#if QT_CONFIG(tooltip)
        publishGameAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Publish all places, developer products, and other parts of your game to Roblox", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        publishGameAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Publish all places, developer products, and other parts of your game to Roblox", nullptr));
#endif // QT_CONFIG(statustip)
        aboutRobloxAction->setText(QCoreApplication::translate("RBXMainWindow", "About Roblox...", nullptr));
        onlineHelpAction->setText(QCoreApplication::translate("RBXMainWindow", "Online Help...", nullptr));
#if QT_CONFIG(shortcut)
        onlineHelpAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        objectBrowserAction->setText(QCoreApplication::translate("RBXMainWindow", "Object Browser", nullptr));
        playSoloAction->setText(QCoreApplication::translate("RBXMainWindow", "Play Solo", nullptr));
#if QT_CONFIG(tooltip)
        playSoloAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Play in Solo Mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        playSoloAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Launch Studio in Solo Player Mode", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        playSoloAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        startServerAction->setText(QCoreApplication::translate("RBXMainWindow", "Start Server", nullptr));
#if QT_CONFIG(tooltip)
        startServerAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Start Server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        startServerAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Launch Studio in Server Mode", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        startServerAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        startPlayerAction->setText(QCoreApplication::translate("RBXMainWindow", "Start Player", nullptr));
#if QT_CONFIG(tooltip)
        startPlayerAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Start Player", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        startPlayerAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Launch Studio in Player Mode", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        startPlayerAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+F7", nullptr));
#endif // QT_CONFIG(shortcut)
        instanceDumpAction->setText(QCoreApplication::translate("RBXMainWindow", "Instance Dump", nullptr));
#if QT_CONFIG(statustip)
        instanceDumpAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Displays Roblox Studio Active Instances in Output Window", nullptr));
#endif // QT_CONFIG(statustip)
        settingsAction->setText(QCoreApplication::translate("RBXMainWindow", "Settings...", nullptr));
#if QT_CONFIG(shortcut)
        settingsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        publishSelectionToRobloxAction->setText(QCoreApplication::translate("RBXMainWindow", "Publish Selection to ROBLOX...", nullptr));
#if QT_CONFIG(statustip)
        publishSelectionToRobloxAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Publish Selection to ROBLOX", nullptr));
#endif // QT_CONFIG(statustip)
        findNextAction->setText(QCoreApplication::translate("RBXMainWindow", "Find Next", nullptr));
#if QT_CONFIG(tooltip)
        findNextAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Find Next", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        findNextAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        replaceAction->setText(QCoreApplication::translate("RBXMainWindow", "Replace...", nullptr));
#if QT_CONFIG(tooltip)
        replaceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Replace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        replaceAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        advArrowToolAction->setText(QCoreApplication::translate("RBXMainWindow", "Arrow Tool", nullptr));
#if QT_CONFIG(tooltip)
        advArrowToolAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Drag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        advArrowToolAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        saveToRobloxAction->setText(QCoreApplication::translate("RBXMainWindow", "Save to Roblox...", nullptr));
#if QT_CONFIG(tooltip)
        saveToRobloxAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Publish the Selection to Roblox", nullptr));
#endif // QT_CONFIG(tooltip)
        insertServiceAction->setText(QCoreApplication::translate("RBXMainWindow", "Service...", nullptr));
#if QT_CONFIG(tooltip)
        insertServiceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Insert Services.", nullptr));
#endif // QT_CONFIG(tooltip)
        fastLogDumpAction->setText(QCoreApplication::translate("RBXMainWindow", "Upload Log Files", nullptr));
#if QT_CONFIG(tooltip)
        fastLogDumpAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Upload Log Files", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        fastLogDumpAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Shift+F8", nullptr));
#endif // QT_CONFIG(shortcut)
        viewToolboxAction->setText(QCoreApplication::translate("RBXMainWindow", "Toolbox Objects", nullptr));
#if QT_CONFIG(tooltip)
        viewToolboxAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Insert Objects from Web", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleAxisWidgetAction->setText(QCoreApplication::translate("RBXMainWindow", "Axis Widget", nullptr));
#if QT_CONFIG(tooltip)
        toggleAxisWidgetAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Shows/Hides Axis Widget", nullptr));
#endif // QT_CONFIG(tooltip)
        toggle3DGridAction->setText(QCoreApplication::translate("RBXMainWindow", "3D Grid", nullptr));
#if QT_CONFIG(tooltip)
        toggle3DGridAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Shows/Hides 3D Grid", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        toggle3DGridAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+G", nullptr));
#endif // QT_CONFIG(shortcut)
        toggleVideoRecordAction->setText(QCoreApplication::translate("RBXMainWindow", "Video Record", nullptr));
#if QT_CONFIG(tooltip)
        toggleVideoRecordAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Toggles video record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        toggleVideoRecordAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F12", nullptr));
#endif // QT_CONFIG(shortcut)
        filePublishedProjectsAction->setText(QCoreApplication::translate("RBXMainWindow", "Published Projects...", nullptr));
#if QT_CONFIG(tooltip)
        filePublishedProjectsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Open and Configure Published Projects", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        filePublishedProjectsAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Open and Configure Published Projects", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        filePublishedProjectsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        viewDiagnosticsAction->setText(QCoreApplication::translate("RBXMainWindow", "Diagnostics", nullptr));
#if QT_CONFIG(tooltip)
        viewDiagnosticsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Diagnostics...", nullptr));
#endif // QT_CONFIG(tooltip)
        viewTaskSchedulerAction->setText(QCoreApplication::translate("RBXMainWindow", "Task Scheduler", nullptr));
#if QT_CONFIG(tooltip)
        viewTaskSchedulerAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Task Scheduler...", nullptr));
#endif // QT_CONFIG(tooltip)
        viewScriptPerformanceAction->setText(QCoreApplication::translate("RBXMainWindow", "Script Performance", nullptr));
#if QT_CONFIG(tooltip)
        viewScriptPerformanceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Script Performance...", nullptr));
#endif // QT_CONFIG(tooltip)
        viewObjectExplorerAction->setText(QCoreApplication::translate("RBXMainWindow", "Explorer", nullptr));
#if QT_CONFIG(tooltip)
        viewObjectExplorerAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Object Explorer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        viewObjectExplorerAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+X", nullptr));
#endif // QT_CONFIG(shortcut)
        viewPropertiesAction->setText(QCoreApplication::translate("RBXMainWindow", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        viewPropertiesAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Properties...", nullptr));
#endif // QT_CONFIG(tooltip)
        viewOutputWindowAction->setText(QCoreApplication::translate("RBXMainWindow", "Output Window", nullptr));
#if QT_CONFIG(tooltip)
        viewOutputWindowAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Output Window...", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStartPage->setText(QCoreApplication::translate("RBXMainWindow", "Start Page", nullptr));
        actionFullScreen->setText(QCoreApplication::translate("RBXMainWindow", "Full Screen", nullptr));
#if QT_CONFIG(statustip)
        actionFullScreen->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Toggles between full screen and windowed views", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("RBXMainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        commentSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Comment Selection", nullptr));
#if QT_CONFIG(tooltip)
        commentSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Comment out selected text", nullptr));
#endif // QT_CONFIG(tooltip)
        uncommentSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Uncomment Selection", nullptr));
#if QT_CONFIG(tooltip)
        uncommentSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Uncomment selected text", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleCommentAction->setText(QCoreApplication::translate("RBXMainWindow", "Toggle Comment Selection", nullptr));
#if QT_CONFIG(tooltip)
        toggleCommentAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Toggle selection commenting", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        toggleCommentAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        toggleCollisionCheckAction->setText(QCoreApplication::translate("RBXMainWindow", "Collision Check", nullptr));
#if QT_CONFIG(tooltip)
        toggleCollisionCheckAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Collision Check", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toggleCollisionCheckAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Enables or Disables Collision Check", nullptr));
#endif // QT_CONFIG(statustip)
        toggleBuildModeAction->setText(QCoreApplication::translate("RBXMainWindow", "Toggle Build Mode", nullptr));
#if QT_CONFIG(tooltip)
        toggleBuildModeAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Toggle current build mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        toggleBuildModeAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Alt+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        openPluginsFolderAction->setText(QCoreApplication::translate("RBXMainWindow", "Open Plugins Folder", nullptr));
#if QT_CONFIG(tooltip)
        openPluginsFolderAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Open Plugins Folder", nullptr));
#endif // QT_CONFIG(tooltip)
        unlockAllAction->setText(QCoreApplication::translate("RBXMainWindow", "Unlock All", nullptr));
#if QT_CONFIG(tooltip)
        unlockAllAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Unlock All", nullptr));
#endif // QT_CONFIG(tooltip)
        shortcutHelpAction->setText(QCoreApplication::translate("RBXMainWindow", "Customize Shortcuts...", nullptr));
#if QT_CONFIG(tooltip)
        shortcutHelpAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Show list of shortcut commands", nullptr));
#endif // QT_CONFIG(tooltip)
        findPreviousAction->setText(QCoreApplication::translate("RBXMainWindow", "Find Previous", nullptr));
#if QT_CONFIG(tooltip)
        findPreviousAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Find previous item", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        findPreviousAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        goToScriptErrorAction->setText(QCoreApplication::translate("RBXMainWindow", "Go to Script Error", nullptr));
        expandAllFoldsAction->setText(QCoreApplication::translate("RBXMainWindow", "Expand All Folds", nullptr));
#if QT_CONFIG(tooltip)
        expandAllFoldsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Expands all folds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        expandAllFoldsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        collapseAllFoldsAction->setText(QCoreApplication::translate("RBXMainWindow", "Collapse All Folds", nullptr));
#if QT_CONFIG(tooltip)
        collapseAllFoldsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Collapses all folds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        collapseAllFoldsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        renameObjectAction->setText(QCoreApplication::translate("RBXMainWindow", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        renameObjectAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Renames selected object", nullptr));
#endif // QT_CONFIG(tooltip)
        screenShotAction->setText(QCoreApplication::translate("RBXMainWindow", "Take Screenshot", nullptr));
#if QT_CONFIG(tooltip)
        screenShotAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Take Screenshot", nullptr));
#endif // QT_CONFIG(tooltip)
        publishToRobloxAsAction->setText(QCoreApplication::translate("RBXMainWindow", "Publish to ROBLOX As...", nullptr));
#if QT_CONFIG(tooltip)
        publishToRobloxAsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Publish Active Document to Roblox As", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        publishToRobloxAsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Alt+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        selectChildrenAction->setText(QCoreApplication::translate("RBXMainWindow", "Select Children", nullptr));
#if QT_CONFIG(tooltip)
        selectChildrenAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Select Children", nullptr));
#endif // QT_CONFIG(tooltip)
        testClearStatsAction->setText(QCoreApplication::translate("RBXMainWindow", "Clear Stats", nullptr));
        stepIntoAction->setText(QCoreApplication::translate("RBXMainWindow", "Step Into", nullptr));
#if QT_CONFIG(tooltip)
        stepIntoAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Step Into", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        stepIntoAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        stepOverAction->setText(QCoreApplication::translate("RBXMainWindow", "Step Over", nullptr));
#if QT_CONFIG(tooltip)
        stepOverAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Step Over", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        stepOverAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        stepOutAction->setText(QCoreApplication::translate("RBXMainWindow", "Step Out", nullptr));
#if QT_CONFIG(tooltip)
        stepOutAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Step Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        stepOutAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Shift+F11", nullptr));
#endif // QT_CONFIG(shortcut)
        insertBreakpointAction->setText(QCoreApplication::translate("RBXMainWindow", "Insert Breakpoint", nullptr));
#if QT_CONFIG(tooltip)
        insertBreakpointAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Insert Breakpoint", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteBreakpointAction->setText(QCoreApplication::translate("RBXMainWindow", "Delete Breakpoint", nullptr));
#if QT_CONFIG(tooltip)
        deleteBreakpointAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Delete Breakpoint", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleBreakpointStateAction->setText(QCoreApplication::translate("RBXMainWindow", "Disable Breakpoint", nullptr));
#if QT_CONFIG(tooltip)
        toggleBreakpointStateAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Disable Breakpoint", nullptr));
#endif // QT_CONFIG(tooltip)
        addWatchAction->setText(QCoreApplication::translate("RBXMainWindow", "Add Watch", nullptr));
#if QT_CONFIG(tooltip)
        addWatchAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Add Watch", nullptr));
#endif // QT_CONFIG(tooltip)
        resetScriptZoomAction->setText(QCoreApplication::translate("RBXMainWindow", "Reset Script Zoom", nullptr));
#if QT_CONFIG(tooltip)
        resetScriptZoomAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Resets font size", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        resetScriptZoomAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        viewContextualHelpAction->setText(QCoreApplication::translate("RBXMainWindow", "Context Help", nullptr));
#if QT_CONFIG(tooltip)
        viewContextualHelpAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Context-sensitive Help", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleLocalSpaceAction->setText(QCoreApplication::translate("RBXMainWindow", "Toggle Local Space", nullptr));
#if QT_CONFIG(tooltip)
        toggleLocalSpaceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Toggles between local or world space dragging.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toggleLocalSpaceAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Toggles between local or world space dragging.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        toggleLocalSpaceAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        resetViewAction->setText(QCoreApplication::translate("RBXMainWindow", "Reset View", nullptr));
#if QT_CONFIG(tooltip)
        resetViewAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Resets Widget and Toolbar position", nullptr));
#endif // QT_CONFIG(tooltip)
        gridSizeToTwoAction->setText(QCoreApplication::translate("RBXMainWindow", "Grid Size - 2 studs", nullptr));
#if QT_CONFIG(tooltip)
        gridSizeToTwoAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Set Grid Size to 2 Studs", nullptr));
#endif // QT_CONFIG(tooltip)
        gridSizeToFourAction->setText(QCoreApplication::translate("RBXMainWindow", "Grid Size - 4 Studs", nullptr));
#if QT_CONFIG(tooltip)
        gridSizeToFourAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Set Grid Size to 4 Studs", nullptr));
#endif // QT_CONFIG(tooltip)
        gridSizeToSixteenAction->setText(QCoreApplication::translate("RBXMainWindow", "Grid Size - 16 Studs", nullptr));
#if QT_CONFIG(tooltip)
        gridSizeToSixteenAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Set Grid Size to 16 Studs", nullptr));
#endif // QT_CONFIG(tooltip)
        publishAsPluginAction->setText(QCoreApplication::translate("RBXMainWindow", "Publish as Plugin...", nullptr));
#if QT_CONFIG(tooltip)
        publishAsPluginAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Publish the Selection to Roblox as a Plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        createNewLinkedSourceAction->setText(QCoreApplication::translate("RBXMainWindow", "Create new LinkedSource...", nullptr));
#if QT_CONFIG(tooltip)
        createNewLinkedSourceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Store this script in the cloud so that you can easily re-use it", nullptr));
#endif // QT_CONFIG(tooltip)
        managePluginsAction->setText(QCoreApplication::translate("RBXMainWindow", "Manage Plugins", nullptr));
#if QT_CONFIG(tooltip)
        managePluginsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Enable, Disable, and Uninstall Plugins", nullptr));
#endif // QT_CONFIG(tooltip)
        quickInsertAction->setText(QCoreApplication::translate("RBXMainWindow", "Quick Insert", nullptr));
#if QT_CONFIG(tooltip)
        quickInsertAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Temporarily set focus to the basic objects widget", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        quickInsertAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        reloadScriptAction->setText(QCoreApplication::translate("RBXMainWindow", "Reload Script", nullptr));
#if QT_CONFIG(shortcut)
        reloadScriptAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        neverBreakOnScriptErrorsAction->setText(QCoreApplication::translate("RBXMainWindow", "Never", nullptr));
#if QT_CONFIG(tooltip)
        neverBreakOnScriptErrorsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Never break errors into debugger", nullptr));
#endif // QT_CONFIG(tooltip)
        breakOnAllScriptErrorsAction->setText(QCoreApplication::translate("RBXMainWindow", "On All Exceptions", nullptr));
#if QT_CONFIG(tooltip)
        breakOnAllScriptErrorsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Break all exceptions into debugger", nullptr));
#endif // QT_CONFIG(tooltip)
        breakOnUnhandledScriptErrorsAction->setText(QCoreApplication::translate("RBXMainWindow", "On Unhandled Exceptions", nullptr));
#if QT_CONFIG(tooltip)
        breakOnUnhandledScriptErrorsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Break unhandled exceptions into debugger", nullptr));
#endif // QT_CONFIG(tooltip)
        viewFindResultsWindowAction->setText(QCoreApplication::translate("RBXMainWindow", "Find Results", nullptr));
#if QT_CONFIG(tooltip)
        viewFindResultsWindowAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Find Results", nullptr));
#endif // QT_CONFIG(tooltip)
        findInScriptsAction->setText(QCoreApplication::translate("RBXMainWindow", "Find All", nullptr));
#if QT_CONFIG(shortcut)
        findInScriptsAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        explorerFilterAction->setText(QCoreApplication::translate("RBXMainWindow", "Explorer Filter", nullptr));
#if QT_CONFIG(shortcut)
        explorerFilterAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        exportSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Export Selection...", nullptr));
#if QT_CONFIG(tooltip)
        exportSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Export Selection", nullptr));
#endif // QT_CONFIG(tooltip)
        exportPlaceAction->setText(QCoreApplication::translate("RBXMainWindow", "Export as Obj", nullptr));
#if QT_CONFIG(tooltip)
        exportPlaceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Export as Obj", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleAllBreakpointsStateAction->setText(QCoreApplication::translate("RBXMainWindow", "Toggle All Breakpoints", nullptr));
#if QT_CONFIG(tooltip)
        toggleAllBreakpointsStateAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Enable/Disable All Breakpoints", nullptr));
#endif // QT_CONFIG(tooltip)
        duplicateSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Duplicate", nullptr));
#if QT_CONFIG(tooltip)
        duplicateSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Duplicates current selection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        duplicateSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        gameExplorerAction->setText(QCoreApplication::translate("RBXMainWindow", "Game Explorer", nullptr));
#if QT_CONFIG(tooltip)
        gameExplorerAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Game Explorer...", nullptr));
#endif // QT_CONFIG(tooltip)
        customizeQuickAccessAction->setText(QCoreApplication::translate("RBXMainWindow", "Customize...", nullptr));
#if QT_CONFIG(tooltip)
        customizeQuickAccessAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Customize Quick Access", nullptr));
#endif // QT_CONFIG(tooltip)
        unionSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Union", nullptr));
#if QT_CONFIG(tooltip)
        unionSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Union Selection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        unionSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+G", nullptr));
#endif // QT_CONFIG(shortcut)
        negateSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Negate", nullptr));
#if QT_CONFIG(tooltip)
        negateSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Negate Selection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        negateSelectionAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        separateSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Separate", nullptr));
#if QT_CONFIG(tooltip)
        separateSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Separate parts from a fused selection", nullptr));
#endif // QT_CONFIG(tooltip)
        cleanupServersAndPlayersAction->setText(QCoreApplication::translate("RBXMainWindow", "Cleans up all clients and servers", nullptr));
#if QT_CONFIG(tooltip)
        cleanupServersAndPlayersAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Cleans up all clients and servers", nullptr));
#endif // QT_CONFIG(tooltip)
        playRbxDeviceAction->setText(QCoreApplication::translate("RBXMainWindow", "Play on RBX Dev Device", nullptr));
#if QT_CONFIG(tooltip)
        playRbxDeviceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Starts a server and your connected Roblox Developer iOS Device", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        playRbxDeviceAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Starts a server and your connected Roblox Developer iOS Device", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        playRbxDeviceAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+F7", nullptr));
#endif // QT_CONFIG(shortcut)
        pairRbxDeviceAction->setText(QCoreApplication::translate("RBXMainWindow", "Pair Developer Device", nullptr));
#if QT_CONFIG(tooltip)
        pairRbxDeviceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Pair a device for testing", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pairRbxDeviceAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Pair a device for testing", nullptr));
#endif // QT_CONFIG(statustip)
        audioToggleAction->setText(QCoreApplication::translate("RBXMainWindow", "Toggle Game Audio", nullptr));
#if QT_CONFIG(tooltip)
        audioToggleAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Toggle Game Audio", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioToggleAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Toggle Game Audio", nullptr));
#endif // QT_CONFIG(statustip)
        viewTutorialsAction->setText(QCoreApplication::translate("RBXMainWindow", "Tutorials", nullptr));
#if QT_CONFIG(tooltip)
        viewTutorialsAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View tutorials", nullptr));
#endif // QT_CONFIG(tooltip)
        viewScriptAnalysisAction->setText(QCoreApplication::translate("RBXMainWindow", "Script Analysis", nullptr));
#if QT_CONFIG(tooltip)
        viewScriptAnalysisAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Script Analysis...", nullptr));
#endif // QT_CONFIG(tooltip)
        viewTeamCreateAction->setText(QCoreApplication::translate("RBXMainWindow", "Team Create", nullptr));
#if QT_CONFIG(tooltip)
        viewTeamCreateAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "View Team Create Window", nullptr));
#endif // QT_CONFIG(tooltip)
        emulateDeviceAction->setText(QCoreApplication::translate("RBXMainWindow", "Emulate Device", nullptr));
#if QT_CONFIG(tooltip)
        emulateDeviceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Emulate a mobile device ", nullptr));
#endif // QT_CONFIG(tooltip)
        manageEmulationDeviceAction->setText(QCoreApplication::translate("RBXMainWindow", "Manage Devices...", nullptr));
#if QT_CONFIG(tooltip)
        manageEmulationDeviceAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Manage emulated devices", nullptr));
#endif // QT_CONFIG(tooltip)
        launchHelpForSelectionAction->setText(QCoreApplication::translate("RBXMainWindow", "Help", nullptr));
#if QT_CONFIG(tooltip)
        launchHelpForSelectionAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Show help for selected object", nullptr));
#endif // QT_CONFIG(tooltip)
        viewCommandBarAction->setText(QCoreApplication::translate("RBXMainWindow", "Command Bar", nullptr));
#if QT_CONFIG(tooltip)
        viewCommandBarAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Command Bar", nullptr));
#endif // QT_CONFIG(tooltip)
        fileOpenRecentSavesAction->setText(QCoreApplication::translate("RBXMainWindow", "Open Recent Saves", nullptr));
#if QT_CONFIG(tooltip)
        fileOpenRecentSavesAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Open Recent Saves Folder", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileOpenRecentSavesAction->setStatusTip(QCoreApplication::translate("RBXMainWindow", "Open Recent Saves Folder", nullptr));
#endif // QT_CONFIG(statustip)
        goToLineAction->setText(QCoreApplication::translate("RBXMainWindow", "Go to line...", nullptr));
#if QT_CONFIG(tooltip)
        goToLineAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Go to line", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        goToLineAction->setShortcut(QCoreApplication::translate("RBXMainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        downloadPlaceCopyAction->setText(QCoreApplication::translate("RBXMainWindow", "Download a Copy...", nullptr));
#if QT_CONFIG(tooltip)
        downloadPlaceCopyAction->setToolTip(QCoreApplication::translate("RBXMainWindow", "Download a copy of the active document", nullptr));
#endif // QT_CONFIG(tooltip)
        standardToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Standard", nullptr));
        runToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Test", nullptr));
        advToolsToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Tools", nullptr));
        oldToolsToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Tools-Classic", nullptr));
        editCameraToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Camera", nullptr));
        menuFile->setTitle(QCoreApplication::translate("RBXMainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("RBXMainWindow", "&Edit", nullptr));
        menuFind_and_Replace->setTitle(QCoreApplication::translate("RBXMainWindow", "Find and Replace", nullptr));
        menuTools->setTitle(QCoreApplication::translate("RBXMainWindow", "&Tools", nullptr));
        menuTest->setTitle(QCoreApplication::translate("RBXMainWindow", "Test", nullptr));
        menuStats->setTitle(QCoreApplication::translate("RBXMainWindow", "Stats", nullptr));
        menuView->setTitle(QCoreApplication::translate("RBXMainWindow", "&View", nullptr));
        menuToolBars->setTitle(QCoreApplication::translate("RBXMainWindow", "ToolBars", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("RBXMainWindow", "For&mat", nullptr));
        menuInsert->setTitle(QCoreApplication::translate("RBXMainWindow", "&Insert", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("RBXMainWindow", "Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("RBXMainWindow", "Help", nullptr));
        scriptMenu->setTitle(QCoreApplication::translate("RBXMainWindow", "Script", nullptr));
        breakErrorsIntoDebuggerMenu->setTitle(QCoreApplication::translate("RBXMainWindow", "Debug Errors", nullptr));
        outputWindow->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Output", nullptr));
        commandToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Command", nullptr));
        objectExplorer->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Explorer", nullptr));
        propertyBrowser->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Properties", nullptr));
        diagnosticsDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Diagnostics", nullptr));
        taskSchedulerDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Task Scheduler", nullptr));
        toolBoxDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Toolbox", nullptr));
        scriptReviewDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Script Performance", nullptr));
        gameExplorerDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Game", nullptr));
        viewToolsToolBar->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "View Tools", nullptr));
        basicObjectsDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Basic Objects", nullptr));
        contextualHelp->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Context Help", nullptr));
        findResultsWindow->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Find Results", nullptr));
        tutorialsDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Tutorials", nullptr));
        teamCreateDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Team Create - Beta", nullptr));
        scriptAnalysisDockWidget->setWindowTitle(QCoreApplication::translate("RBXMainWindow", "Script Analysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RBXMainWindow: public Ui_RBXMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RBXMAINWINDOW_H
