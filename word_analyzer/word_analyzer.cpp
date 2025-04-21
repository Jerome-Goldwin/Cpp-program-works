#include <gtkmm.h>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

class WordAnalyzer : public Gtk::Window {
public:
    WordAnalyzer() {
        set_title("Word Frequency Analyzer");
        set_default_size(500, 400);

        // Layout
        vbox.set_spacing(10);
        add(vbox);

        // Input field
        input_buffer = Gtk::TextBuffer::create();
        input.set_buffer(input_buffer);
        input.set_wrap_mode(Gtk::WrapMode::WRAP_WORD);
        vbox.pack_start(input);

        // Analyze button
        analyze_button.set_label("Analyze");
        analyze_button.signal_clicked().connect(sigc::mem_fun(*this, &WordAnalyzer::on_analyze_clicked));
        vbox.pack_start(analyze_button, Gtk::PACK_SHRINK);

        // Output field
        output_buffer = Gtk::TextBuffer::create();
        output.set_buffer(output_buffer);
        output.set_wrap_mode(Gtk::WrapMode::WRAP_WORD);
        vbox.pack_start(output);

        show_all_children();
    }

protected:
    Gtk::Box vbox{Gtk::Orientation::ORIENTATION_VERTICAL};
    Gtk::TextView input, output;
    Gtk::Button analyze_button;
    Glib::RefPtr<Gtk::TextBuffer> input_buffer, output_buffer;

    void on_analyze_clicked() {
        std::string text = input_buffer->get_text();
        std::map<std::string, int> word_counts;
        std::vector<std::string> word_order;

        // Process text: lowercase and remove punctuation
        std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c) {
            return std::ispunct(c) ? ' ' : std::tolower(c);
        });

        std::istringstream iss(text);
        std::string word;
        while (iss >> word) {
            if (word_counts[word] == 0) {
                word_order.push_back(word); // Record the first occurrence order
            }
            word_counts[word]++;
        }

        // Output result (words in the order they appeared)
        std::ostringstream oss;
        int i = 1;
        for (const auto& word : word_order) {
            oss << i++ << ". " << word << " <-- " << word_counts[word] << " times\n";
        }
        output_buffer->set_text(oss.str());
    }
};

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.example.wordanalyzer");
    WordAnalyzer window;
    return app->run(window);
}