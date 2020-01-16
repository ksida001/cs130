#include "sphere.h"
#include "ray.h"

// Determine if the ray intersects with the sphere
Hit Sphere::Intersection(const Ray& ray, int part) const
{
    //TODO;
    Hit result;
    vec3 oc = ray.endpoint-center;
    double a = dot(ray.direction,ray.direction);
    double b = 2.0 * dot(oc, ray.direction);
    double c = dot(oc,oc)-radius*radius;
    double disc = b*b-4*a*c;
    if(disc<0) {
		return {0,0,0};
	}
	result.dist = (-b - sqrt(disc)) / (2 * a);
	result.object = this;
	result.part = part;
	return result;
}

vec3 Sphere::Normal(const vec3& point, int part) const
{
    vec3 normal;
    //TODO; // compute the normal direction
    normal = (point - center).normalized();
    return normal;
}

Box Sphere::Bounding_Box(int part) const
{
    Box box;
    TODO; // calculate bounding box
    return box;
}
