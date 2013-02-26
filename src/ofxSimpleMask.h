#ifndef EASYMASK_H
#define EASYMASK_H

#include "ofMain.h"

class ofxSimpleMask
{
    public:
        ofxSimpleMask();
        virtual ~ofxSimpleMask();

        void setup( string shaderPath , ofRectangle _area ) ;

        //Masking
        ofImage mask ;
        ofRectangle maskArea ;
        ofRectangle originalMaskArea ;
		ofShader maskShader;

        void setMask( string maskPath ) ;
        void setMask( ofImage newMask ) ;

		void drawMask (  ofTexture contentTex , ofTexture maskTex , float xOffset , float yOffset , float contentAlpha ) ;

         static ofxSimpleMask* Instance()
         {
             static ofxSimpleMask inst ;
             return &inst ;
         }

    protected:
    private:
};

#endif // EASYMASK_H
