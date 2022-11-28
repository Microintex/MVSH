#pragma once

#include <iostream>
#include <string>

#include <imgui.h>

using namespace std;

class App
{
public:
    void Run()
    {
    
        float length_out_cargo = length - length_to_cargo;
        float half_mass = mass_body / 2;
        float mass_1st = half_mass + mass_cargo * length_out_cargo / length;
        float mass_2nd = half_mass + mass_cargo * length_to_cargo / length;
        Draw( mass_1st, mass_2nd);

    }

    void Draw(float mass_1st, float mass_2nd)
    {
        if (ImGui::Begin("Test"))
        {
            ImGui::Text("mass 1st: %f kg", mass_1st);
            ImGui::Text("mass 2nd: %f kg", mass_2nd);
            ImGui::InputFloat("Length", &length);
            ImGui::InputFloat("Mass body", &mass_body);
            ImGui::InputFloat("Mass cargo", &mass_cargo);
            ImGui::InputFloat("Length to_cargo", &length_to_cargo);
            DrawScheme();
            ImGui::DragFloat("Length to cargo", &length_to_cargo, length/1000, 0, length);
        }
        ImGui::End();

    }

    void DrawScheme()
    {
        float thick = 5;
        float height = 150;
        float radius = 35;
        int circle_segments = 64;
        float width_percent = 0.65;
        float size_cargo = height / 2;

        ImDrawList* draw_list = ImGui::GetWindowDrawList();
        const ImVec2 p = ImGui::GetCursorScreenPos();
        float x = p.x + 4.0f;
        float y = p.y + 4.0f;
        static ImU32 col = ImColor(ImVec4(1.0f, 1.0f, 0.4f, 1.0f));
        ImVec2 win_size = ImGui::GetWindowSize();
        draw_list->AddRect(ImVec2(x, y), ImVec2(x + win_size.x * 0.65, y + height), col, 5.0f, ImDrawFlags_None, thick);
        draw_list->AddCircle(ImVec2(x + radius, y + height + radius), radius, col, circle_segments, thick);
        draw_list->AddCircle(ImVec2(x + win_size.x * width_percent - radius, y + height + radius), radius, col, circle_segments, thick);
        draw_list->AddRect(ImVec2(x + win_size.x * 0.65*length_to_cargo/length - size_cargo/2, y + height/2), 
            ImVec2(x + win_size.x * 0.65 * length_to_cargo / length + size_cargo / 2, y + height - 5), col, 5.0f, ImDrawFlags_None, thick);
        ImGui::SetCursorScreenPos(ImVec2(x, height + y + 2.5*radius));

    }


protected:
    float length = 8;
    float mass_cargo = 3500;
    float mass_body = 1000;
    float length_to_cargo = 4;
};

//class Human
//{
//public:
//    Human(int _age, std::string _name, int _height, int _weight, int _angle)
//    {
//        age = _age;
//        name = _name;
//        height = _height;
//        weight = _weight;
//        SetAngle(_angle);
//    }
//    void Say()
//    {
//        cout << "hello, i am " << name << " " << angle << std::endl;
//    }
//    void SetAngle(int _angle)
//    {
//        angle = _angle % 360;
//    }
//
//protected:
//    int age;
//    std::string name;
//    int height;
//    int weight;
//    int angle;
//};
