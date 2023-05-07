package main

import (
	"time"

	"fyne.io/fyne/v2"
	"fyne.io/fyne/v2/app"
	"fyne.io/fyne/v2/widget"
)

func main() {
	myApp := app.New()
	myWindow := myApp.NewWindow("Hola fyne")

	clock := (widget.NewLabel(""))
	updateTime(clock)

	myWindow.SetContent(clock)

	go func() {
		for range time.Tick(time.Second) {
			updateTime(clock)
		}
	}()

	myWindow.Resize(fyne.NewSize(1600, 900))
	myWindow.Show()

	w2 := myApp.NewWindow("Larger")
	w2.SetContent(widget.NewButton("open new", func() {
		w3 := myApp.NewWindow("Third")
		w3.SetContent(widget.NewLabel("Third"))
		w3.Resize(fyne.NewSize(800, 600))
		w3.Show()
	}))
	w2.Resize(fyne.NewSize(1024, 768))
	w2.Show()

	myApp.Run()

}

func updateTime(clock *widget.Label) {
	formatted := time.Now().Format("Time: 03:04:05")
	clock.SetText(formatted)
}
