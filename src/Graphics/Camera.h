#ifndef CAMERA_H
#define CAMERA_H

#include <glm/vec3.hpp>
const float YAW = -90.0f;
const float PITCH = 0.0f;
const float SPEED = 2.5f;
const float SENSITIVITY = 0.1f;
const float ZOOM = 45.0f;
const glm::vec3 POSITION = glm::vec3(0.0f);
const glm::vec3 FRONT = glm::vec3(0.0f, 0.0f, -1.0f);
const glm::vec3 WORLD_UP = glm::vec3(0.0f, 1.0f, 0.0f);

enum Camera_Movement { FORWARD, BACKWARD, LEFT, RIGHT };
class Camera {
private:
  glm::vec3 world_up;
  glm::vec3 position;
  glm::vec3 front;
  glm::vec3 up;
  glm::vec3 right;

  float zoom;
  float speed;
  float yaw;
  float pitch;

public:
  Camera(glm::vec3 position = glm::vec3(0.0), glm::vec3 front = FRONT,
         glm::vec3 up = WORLD_UP, glm::vec3 world_up = WORLD_UP,
         float zoom = ZOOM, float speed = SPEED, float yaw = YAW,
         float pitch = PITCH) {
    this->position = position;
    this->front = front;
    this->up = up;
    this->world_up = world_up;
    this->zoom = zoom;
    this->speed = speed;
    this->yaw = YAW;
    this->pitch = PITCH;
  }
};
#endif
