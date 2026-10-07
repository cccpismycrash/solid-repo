class ImageHelper { 
    public:
    
    static void Save(Image image){
        // сохранение изображение в файловой системе 
    }

    static int DeleteDuplicates() {
    // удалить из файловой системы все дублирующиеся изображения и вернуть количество удаленных
    }

    static Image SetImageAsAccountPicture(Image image, Account account) {
        // запрос к базе данных для сохранения ссылки на это изображение для пользователя
    }

    static Image Resize(Image image, int height, int width) {
        // изменение размеров изображения
    }

    static Image InvertColors(Image image){
        // изменить цвета на изображении
    }

    static byte* Download(Url imageUrl){
        // загрузка битового массива с изображением с помощью HTTP запроса
    }
};


int main(int argc, char* argv[]) {
    
}