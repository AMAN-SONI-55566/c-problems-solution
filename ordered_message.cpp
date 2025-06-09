#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream>

using namespace std;

// Your Message class
class Message {
    string text_;
    int id_;

public:
    Message() : text_(""), id_(0) {}  // empty constructor

    Message(const string& text, int id) : text_(text), id_(id) {}

    const string& get_text() const {
        return text_;
    }

    bool operator<(const Message& other) const {
        return id_ < other.id_;
    }
};

// Your MessageFactory class
class MessageFactory {
    int current_id_;

public:
    MessageFactory() : current_id_(0) {}

    Message create_message(const string& text) {
        return Message(text, current_id_++);
    }
};

// Recipient class to receive and print messages
class Recipient {
    vector<Message> messages_;

public:
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }

    void fix_order() {
        // Sort messages by their id to restore original order
        sort(messages_.begin(), messages_.end());
    }

    void print_messages() const {
        for (const auto& msg : messages_) {
            cout << msg.get_text() << "\n";
        }
    }
};

// Simulated Network class - shuffles messages before delivering
class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
        // Shuffle messages to simulate random order delivery
        random_device rd;
        mt19937 g(rd());
        shuffle(messages.begin(), messages.end(), g);

        // Deliver messages one by one to recipient
        for (const auto& msg : messages) {
            recipient.receive(msg);
        }
    }
};

// Main function - reads input, sends through network, prints output
int main() {
        ifstream input("hinput.txt");
    ofstream output("houtput.txt");

    if (!input || !output) {
        cerr << "Error opening input.txt or output.txt\n";
        return 1;
    }
    MessageFactory message_factory;
    Recipient recipient;

    string line;
    vector<Message> messages_to_send;

    // Read all messages (lines) from input
    while (getline(cin, line)) {
        messages_to_send.push_back(message_factory.create_message(line));
    }

    // Send all messages through the network (which shuffles them)
    Network::send_messages(messages_to_send, recipient);

    // Recipient fixes the order and prints them
    recipient.fix_order();
    recipient.print_messages();

    return 0;
}
