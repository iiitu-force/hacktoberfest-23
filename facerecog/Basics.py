import cv2
import face_recognition

imgOriginal = face_recognition.load_image_file('pic1.jpg')
imgOriginal = cv2.cvtColor(imgOriginal, cv2.COLOR_BGR2RGB)

imgTest = face_recognition.load_image_file('pic3.jpg')
imgTest = cv2.cvtColor(imgTest, cv2.COLOR_BGR2RGB)

encodeOriginal = face_recognition.face_encodings(imgOriginal)[0]
encodeTest = face_recognition.face_encodings(imgTest)[0]

result = face_recognition.compare_faces([encodeOriginal], encodeTest)

print(result)