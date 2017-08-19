#ifndef __MARKER_EDITOR_WINDOW_H__
#define __MARKER_EDITOR_WINDOW_H__

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define MARKER_TYPE_EDITOR_WINDOW (marker_editor_window_get_type ())

G_DECLARE_FINAL_TYPE(MarkerEditorWindow,
                     marker_editor_window,
                     MARKER,
                     EDITOR_WINDOW,
                     GtkWindow)

MarkerEditorWindow*
marker_editor_window_new(void);

void
marker_editor_window_refresh_web_view(MarkerEditorWindow*);

void
marker_editor_window_open_file(MarkerEditorWindow*,
                               char*);

void
marker_editor_window_save_file_as(MarkerEditorWindow*,
                                  char*);
                                  
void
marker_editor_window_set_file_name(MarkerEditorWindow*,
                                   char*);

G_END_DECLS

#endif
