#include <string>
#include <iostream>

class Image {
    public:
    std::string source;

    Image(std::string source) {
        this->source = source;
    }
};


class Account {
    public:
    std::string name;

    Account(std::string name) {
        this->name = name;
    }
}; 


class ImageFileSystem {
    public:
    static void Save(Image* image){
        std::cout << "ImageSaver: save image in FS\n";
        std::cout << "ImageSaver: image " << image->source << " was saved\n"; 
    }

    static void DeleteDuplicates() {
        std::cout << "ImageDeleter: delete from FS all dulicated images and return count of deleted images\n";
        std::cout << "ImageDeleter: 5 images deleted images\n";
    }
};


class AccountService {
    public:
    static void SetImageAsAccountPicture(Image* image, Account* account) {
        std::cout << "AccountService: query DB to save a link to this image for account";
        std::cout << "AccountService: Image " << image->source << " was set on " << account->name << " account";
    }   
};


class ImageEditor {
    public:
    static void Resize(Image* image, int height, int width) {
        std::cout << "ImageEditor: changing the image size";
        std::cout << "ImageEditor: Image " << image->source << " was resized " << height << "x" << width; 
    }

    static void InvertColors(Image* image){
        std::cout << "ImageEditor: changing colors on image";
        std::cout << "ImageEditor: colors on image " << image->source << " was inverted";
    }
};


class ImageDownloader {
    public:
    static void Download(std::string imageUrl){
        std::cout << "ImageDownloader: uploading a bitmap with an image using an HTTP request"; 
        std::cout << "ImageDownloader: image from " << imageUrl << " was downloaded";
    }
};


int main() {
    std::string source;
    std::string name;

    std::cout << "Specify path to the image: ";
    std::cin >> source;
    std::cout << "\n";

    std::cout << "Specify name of your account: ";
    std::cin >> name;
    std::cout << "\n";

    Image image = Image(source);
    Account account = Account(name);

    int action;

    std::cout <<
        "Choose action:\n"
        "1 - Save image\n"
        "2 - Delete duplicates\n"
        "3 - Set image as account picture\n"
        "4 - Resize image\n"
        "5 - Invert colors\n"
        "6 - Download image\n"
        "> ";

    std::cin >> action;

    if (action == 1) {
        ImageFileSystem::Save(&image);
    }
    else if (action == 2) {
        ImageFileSystem::DeleteDuplicates();
    }
    else if (action == 3) {
        AccountService::SetImageAsAccountPicture(&image, &account);
    }
    else if (action == 4) {
        ImageEditor::Resize(&image, 500, 800);
    }
    else if (action == 5) {
        ImageEditor::InvertColors(&image);
    }
    else if (action == 6) {
        std::string url;
        std::cout << "Specify url of resource: ";
        std::cin >> url;
        std::cout << "\n";

        ImageDownloader::Download(url);
    }
    else {
        std::cout << "Unknown action\n";
    }
}