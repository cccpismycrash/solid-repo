#include <string>

class Image {
    public:
    std::string source

    Image(std::string source) {
        this->source = source
    }
};


class Account {
    public:
    std::string name

    Account(std::string name) {
        this->name = name
    }
}; 


class ImageFileSystem {
    public:
    static void Save(Image* image){
        std::cout << "ImageSaver: save image in FS"
        std::cout << "ImageSaver: image " << image->source << " was saved" 
    }

    static void DeleteDuplicates() {
        std::cout << "ImageDeleter: delete from FS all dulicated images and return count of deleted images"
        std::cout << "ImageDeleter: 5 images deleted images"
    }
};


class AccountService {
    public:
    static void SetImageAsAccountPicture(Image* image, Account* account) {
        std::cout << "AccountService: query DB to save a link to this image for account"
        std::cout << "AccountService: Image " << image->source << " was set on " << account->name << " account" 
    }   
};


class ImageEditor {
    public:
    static void Resize(Image* image, int height, int width) {
        std::cout << "ImageEditor: changing the image size" 
        std::cout << "ImageEditor: Image " << image->source << " was resized " << height << "x" << width 
    }

    static void InvertColors(Image* image){
        std::cout << "ImageEditor: changing colors on image" 
        std::cout << "ImageEditor: colors on image " << image->soucre << " was inverted" 
    }
};


class ImageDownloader {
    public:
    static void Download(std::string imageUrl){
        std::cout << "ImageDownloader: uploading a bitmap with an image using an HTTP request" 
        std::cout << "ImageDownloader: image from " << imageUrl << " was downloaded" 
    }
};


int main(int argc, char* argv[]) {
    
}