#pragma once

#include <string>
#include <wx/listctrl.h>
#include <wx/wx.h>

#include "Configurations.hpp"
#include "ImageHandler.hpp"

class MyFrame : public wxFrame
{
  private:
    Configurations ConfigList;
    ImageHandler Image;

    std::string AboutApp;

  public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size);

  private:
    void OnExit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);
    void OnGitHub(wxCommandEvent &event);

    void OnOpenFile(wxCommandEvent &event);
    void OnSaveFile(wxCommandEvent &event);
    void OnAdvanced(wxCommandEvent &event);
    void OnGenerate(wxCommandEvent &event);
    void OnFileExplorer(wxCommandEvent &event);

    wxDECLARE_EVENT_TABLE();
};
