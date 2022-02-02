//
// Created by Akshat on 03-02-2022.
//

#include <cstdlib>
#include "PQueue.h"
#include <iostream>

PQueue::PQueue() :
        LowFront(nullptr),
        LowRear(nullptr),
        MediumFront(nullptr),
        MediumRear(nullptr),
        HighFront(nullptr),
        HighRear(nullptr) {}

void PQueue::enqueue(int element, Priority priority) {
    switch (priority) {
        case Priority::High: {
            Node1 *temp = new Node1();
            temp->data = element;
            temp->priority = priority;
            temp->next = nullptr;
            // In starting when front = rear
            if (this->HighFront == nullptr) {
                this->HighFront = this->HighRear;
            } else {
                // whatever rear is pointing to is the last Node1 so connect last Node1s next to the temp Node1
                this->HighRear->next = temp;
                // Now the temp Node1 is the rear Node1
                this->HighRear = temp;
            }
        }
            break;
        case Priority::Medium: {
            Node1 *temp = new Node1();
            temp->data = element;
            temp->priority = priority;
            temp->next = nullptr;
            // In starting when front = rear
            if (this->MediumFront == nullptr) {
                this->MediumFront = this->MediumRear;
            } else {
                // whatever rear is pointing to is the last Node1 so connect last Node1s next to the temp Node1
                this->MediumRear->next = temp;
                // Now the temp Node1 is the rear Node1
                this->MediumRear = temp;
            }
        }
            break;
        case Priority::Low: {
            Node1 *temp = new Node1();
            temp->data = element;
            temp->priority = priority;
            temp->next = nullptr;
            // In starting when front = rear
            if (this->LowFront == nullptr) {
                this->LowFront = this->LowRear;
            } else {
                // whatever rear is pointing to is the last Node1 so connect last Node1s next to the temp Node1
                this->LowRear->next = temp;
                // Now the temp Node1 is the rear Node1
                this->LowRear = temp;
            }
        }
            break;
    }
}

int PQueue::dequeue() {
    if (this->HighFront == nullptr) {
        if (this->MediumFront == nullptr) {
            if (this->LowFront == nullptr) {
                return -1;
            }
            Node1 *temp = this->LowFront;
            this->LowFront = this->LowFront->next;
            int element = temp->data;
            free(temp);
            return element;
        }
        Node1 *temp = this->MediumFront;
        this->MediumFront = this->MediumFront->next;
        int element = temp->data;
        free(temp);
        return element;
    }
    Node1 *temp = this->HighFront;
    this->HighFront = this->HighFront->next;
    int element = temp->data;
    free(temp);
    return element;
    return 0;
}

void PQueue::watch() {
    if (this->HighFront != nullptr) {
        auto temp = this->HighFront;
        while (temp != this->HighRear) {
            std::cout << "\n Data: " << temp->data << ", Priority: " << temp->priority << std::endl;
            temp = temp->next;
        }
        free(temp);
    }
    if (this->MediumFront != nullptr) {
        auto temp = this->MediumFront;
        while (temp != this->MediumFront) {
            std::cout << "\n Data: " << temp->data << ", Priority: " << temp->priority << std::endl;
            temp = temp->next;
        }

        free(temp);
    }
    if (this->LowFront != nullptr) {
        auto temp = this->LowFront;
        while (temp != this->LowFront) {
            std::cout << "\n Data: " << temp->data << ", Priority: " << temp->priority << std::endl;
            temp = temp->next;
        }

        free(temp);
    }
}

