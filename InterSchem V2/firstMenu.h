#include <graphics.h>
#include <App.h>

void firstMenu(){
    atribuire();
    readimagefile("firstMenu.jpg", 0, 0, 1600, 900);
    DrawButtons(ButtonsFirstMenu);


    clearmouseclick(WM_LBUTTONDOWN);

    bool ok = 1;
    while (ok)
    {
    if(ismouseclick(WM_LBUTTONUP))
        {
            int mouse_x = mousex();
            int mouse_y = mousey();
            if(overBTN(ButtonsFirstMenu[0],mouse_x,mouse_y))
        {
            App();
            clearmouseclick(WM_LBUTTONUP);
            firstMenu();
            ok = 0;

        }
       /*  else if (mouse_x >= x_Settings1 && mouse_x <= x_Settings2 && mouse_y >= y_Settings1 && mouse_y <= y_Settings2)
        {
            //setting();
            firstMenu();
            ok = 0;
        }
       else if (mouse_x >= x_semnint1 && mouse_x <= x_semnint2 && mouse_y >= y_semnint1 && mouse_y <= y_semnint2)
        {
            //info();
            firstMenu();
            ok = 0;
        }
        else
        {
            firstMenu();
            ok = 0;
        }*/
        clearmouseclick(WM_LBUTTONUP);
        }
    }
}
