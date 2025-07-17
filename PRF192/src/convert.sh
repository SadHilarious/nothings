#!/bin/bash

# ==============================================================================
# PHIÊN BẢN CẢI TIẾN: Script để chuyển đổi tất cả các file .webp sang .png
# một cách đệ quy, xử lý an toàn các tên file có ký tự đặc biệt.
#
# Yêu cầu: ffmpeg phải được cài đặt trên hệ thống.
#
# Tính năng:
# - Sử dụng find -print0 và read -d '' để xử lý tên file an toàn.
# - Tìm tất cả các file .webp.
# - Bỏ qua nếu file .png tương ứng đã tồn tỏ tại.
# - Sử dụng ffmpeg để chuyển đổi.
# - Xóa file .webp gốc sau khi chuyển đổi thành công.
# ==============================================================================

# Ghi lại thư mục bắt đầu
START_DIR=$(pwd)
echo "Bắt đầu quá trình quét và chuyển đổi từ thư mục: $START_DIR"
echo "------------------------------------------------------------"

# Biến đếm số file đã xử lý
converted_count=0
skipped_count=0
error_count=0

# Sử dụng find để tìm tất cả các file .webp một cách an toàn
# -print0: In tên file và kết thúc bằng ký tự NULL (\0), thay vì ký tự xuống dòng.
# Điều này giúp xử lý đúng các tên file chứa khoảng trắng hoặc ký tự đặc biệt.
find . -type f -name "*.webp" -print0 | while IFS= read -r -d '' WEBP_FILE; do
    # Tạo tên file .png bằng cách thay thế đuôi .webp thành .png
    PNG_FILE="${WEBP_FILE%.webp}.png"

    # Kiểm tra xem file .png đã tồn tại hay chưa
    if [ -f "$PNG_FILE" ]; then
        echo "Bỏ qua: File PNG '$PNG_FILE' đã tồn tại."
        ((skipped_count++))
    else
        echo "Đang chuyển đổi: '$WEBP_FILE' -> '$PNG_FILE'"
        
        # Chạy lệnh ffmpeg một cách an toàn
        # Sử dụng '&&' để đảm bảo lệnh 'rm' chỉ chạy khi ffmpeg thành công.
        if ffmpeg -i "$WEBP_FILE" -v error "$PNG_FILE"; then
            echo "Thành công: Đã chuyển đổi."
            # Xóa file webp gốc sau khi chuyển đổi thành công
            rm "$WEBP_FILE"
            echo "Đã xóa file gốc: '$WEBP_FILE'"
            ((converted_count++))
        else
            echo "LỖI: Không thể chuyển đổi '$WEBP_FILE'. File gốc chưa bị xóa."
            ((error_count++))
        fi
    fi
    echo "" # Thêm một dòng trống cho dễ đọc
done

echo "------------------------------------------------------------"
echo "Hoàn tất!"
echo "- Đã chuyển đổi thành công: $converted_count file."
echo "- Bỏ qua (đã tồn tại): $skipped_count file."
echo "- Gặp lỗi: $error_count file."