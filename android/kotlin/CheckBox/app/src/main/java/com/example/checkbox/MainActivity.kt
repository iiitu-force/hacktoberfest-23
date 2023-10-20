package com.example.checkbox

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.CheckBox

import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        var btn1: Button = findViewById(R.id.btn1)
        var cb1: CheckBox = findViewById(R.id.cb1)
        var cb2: CheckBox = findViewById(R.id.cb2)
        var cb3: CheckBox = findViewById(R.id.cb3)

        btn1.setOnClickListener {
          var response = mutableListOf<String>()
            if(cb1.isChecked)
                response.add(cb1.text.toString())
            if(cb2.isChecked)
                response.add(cb2.text.toString())
            if(cb3.isChecked)
                response.add(cb3.text.toString())

            if(response.isEmpty())
                Toast.makeText(this, "Nothing was selected", Toast.LENGTH_SHORT).show()
            else{
                var anstext = ""
                for(item in response){
                    anstext += item+" "
                }
                Toast.makeText(this, anstext+"was selected", Toast.LENGTH_SHORT).show()
            }
        }
    }
}