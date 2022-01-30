//
// Created by Link on 2022/1/23.
//

#ifndef NERENDER_TEXTURE_H
#define NERENDER_TEXTURE_H


class Texture {
public:
    Texture(const char* filename);
    void use() const { glBindTexture(GL_TEXTURE_2D, texture); }
    void use(unsigned int type) const {
        glActiveTexture(type);
        glBindTexture(GL_TEXTURE_2D, texture);
    }
private:
    unsigned int texture;
};


#endif //NERENDER_TEXTURE_H
