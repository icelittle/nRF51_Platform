
#include "juma_sdk_vectors.h"

const system_descriptor_t sys = {
	run_when_idle,
	run_at_time,
	current_time,
	timer_init,
	timer_start,
	timer_stop,
	gpio_setup,
	gpio_write,
	gpio_read,
	gpio_watch,
	gpio_unwatch,
	adc_measure,
	vcc_measure,
	get_temperature,
	ble_device_is_connected,
	ble_device_get_id,
	ble_device_select_address,
	ble_device_set_name,
	ble_device_set_advertising_interval,
	ble_device_set_tx_power,
	ble_device_start_advertising,
	ble_device_stop_advertising,
	ble_device_disconnect,
	ble_device_send,
	random_generate,
	serial_send,
	serial_setup,
	spi_setup,
	spi_transmit_receive,
	play_sound,
	light_setup,
	light_on,
	light_off,
	light_set_color,
	data_storage_write,
	data_storage_read,
	ble_infrared_config,
	ble_infrared_send,
	ble_infrared_get_statue,
	gfx_init_screen,
	gfx_clear,
	gfx_draw_pixel,
	gfx_draw_line,
	gfx_draw_rect,
	gfx_fill_rect,
	gfx_draw_circle,
	gfx_fill_circle,
	gfx_set_font,
	gfx_draw_char,
	gfx_draw_string,
	gfx_draw_image,
	watchDog_Config,
	watchDog_Start,
	watchDog_user_dog1_RR,
	watchDog_user_dog2_RR,
	watchDog_user_dog3_RR,
	watchDog_user_dog4_RR,
};
