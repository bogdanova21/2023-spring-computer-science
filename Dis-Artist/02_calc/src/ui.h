#ifndef UI_HPP
#define UI_HPP


#include "ftxui/component/component_base.hpp"     
#include "ftxui/component/component_options.hpp"  
#include "ftxui/component/component.hpp"          
#include "ftxui/dom/elements.hpp"                 
#include "ftxui/component/screen_interactive.hpp" 
#include "logic.h"

namespace calc {
    using namespace ftxui;

    class UI {
    public:
        UI(Logic& logic) : logic_ref{ logic } {
            expression_input_box = Input(&logic.expression, "...");
            element_output = hbox(text(""));
        }
        void start();
    private:
        Element render_input();
        Element render_output();
        bool process_events(Event event);
        Logic& logic_ref;
        Component expression_input_box;
        Element element_output;
        ScreenInteractive screen = ScreenInteractive::Fullscreen();
    };
}

#endif

    double te_interp(const char* expression, int* error);
    te_expr* te_compile(const char* expression, const te_variable* variables, int var_count, int* error);
    double te_eval(const te_expr* n);
    void te_print(const te_expr* n);
    void te_free(te_expr* n);


#ifdef __cplusplus
}
#endif

#endif
