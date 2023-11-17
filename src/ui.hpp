#ifndef UI_H
#define UI_H

enum Autonomouses {
    AUTON_LONG = 0,
    AUTON_SHORT,
    AUTON_SKILLS,
    AUTON_MAX
};

#define AUTON_UI_BUTTONSIZE (200)

extern int autonSelected;
extern bool lteammate;

void autonUI_init();
void autonUI_cb();

#endif // !UI_H
