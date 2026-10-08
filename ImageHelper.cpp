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
    static void Save(Image image){
        std::cout << "ImageSaver: save image in FS" 
    }

    static int DeleteDuplicates() {
        std::cout << "ImageDeleter: delete from FS all dulicated images and return count of deleted images" 
    }
};


class AccountService {
    public:
    static Image SetImageAsAccountPicture(Image image, Account account) {
        std::cout << "AccountService: query DB to save a link to this image for account" 
    }   
};


class ImageEditor {
    public:
    static Image Resize(Image image, int height, int width) {
        std::cout << "ImageEditor: changing the image size" 
    }

    static Image InvertColors(Image image){
        std::cout << "ImageEditor: changing colors on image" 
    }
};


class ImageDownloader {
    public:
    static byte* Download(Url imageUrl){
        std::cout << "ImageDownloader: uploading a bitmap with an image using an HTTP request" 
    }
};


int main(int argc, char* argv[]) {
    
}