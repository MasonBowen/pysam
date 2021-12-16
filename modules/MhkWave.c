#include <Python.h>

#include <SAM_MhkWave.h>
#include <SAM_api.h>

#include "PySAM_utils.h"


/*
 * MHKWave Group
 */ 

static PyTypeObject MHKWave_Type;

static PyObject *
MHKWave_new(SAM_MhkWave data_ptr)
{
	PyObject* new_obj = MHKWave_Type.tp_alloc(&MHKWave_Type,0);

	VarGroupObject* MHKWave_obj = (VarGroupObject*)new_obj;

	MHKWave_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* MHKWave methods */

static PyObject *
MHKWave_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "MhkWave", "MHKWave")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
MHKWave_replace(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}
	PyTypeObject* tp = &MHKWave_Type;

	if (!PySAM_replace_from_dict(tp, self->data_ptr, dict, "MhkWave", "MHKWave")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
MHKWave_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &MHKWave_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef MHKWave_methods[] = {
		{"assign",            (PyCFunction)MHKWave_assign,  METH_VARARGS,
			PyDoc_STR("assign(dict) -> None\n Assign attributes from dictionary, overwriting but not removing values\n\n``MHKWave_vals = { var: val, ...}``")},
		{"replace",            (PyCFunction)MHKWave_replace,  METH_VARARGS,
			PyDoc_STR("replace(dict) -> None\n Replace attributes from dictionary, unassigning values not present in input dict\n\n``MHKWave_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)MHKWave_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
MHKWave_get_balance_of_system_cost_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_balance_of_system_cost_total_nget, self->data_ptr);
}

static int
MHKWave_set_balance_of_system_cost_total(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_balance_of_system_cost_total_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_day(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_day_aget, self->data_ptr);
}

static int
MHKWave_set_day(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_day_aset, self->data_ptr);
}

static PyObject *
MHKWave_get_device_costs_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_device_costs_total_nget, self->data_ptr);
}

static int
MHKWave_set_device_costs_total(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_device_costs_total_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_device_rated_power(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_device_rated_power_nget, self->data_ptr);
}

static int
MHKWave_set_device_rated_power(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_device_rated_power_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_energy_period(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_energy_period_aget, self->data_ptr);
}

static int
MHKWave_set_energy_period(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_energy_period_aset, self->data_ptr);
}

static PyObject *
MHKWave_get_financial_cost_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_financial_cost_total_nget, self->data_ptr);
}

static int
MHKWave_set_financial_cost_total(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_financial_cost_total_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_fixed_charge_rate(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_fixed_charge_rate_nget, self->data_ptr);
}

static int
MHKWave_set_fixed_charge_rate(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_fixed_charge_rate_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_hour(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_hour_aget, self->data_ptr);
}

static int
MHKWave_set_hour(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_hour_aset, self->data_ptr);
}

static PyObject *
MHKWave_get_loss_additional(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_loss_additional_nget, self->data_ptr);
}

static int
MHKWave_set_loss_additional(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_loss_additional_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_loss_array_spacing(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_loss_array_spacing_nget, self->data_ptr);
}

static int
MHKWave_set_loss_array_spacing(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_loss_array_spacing_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_loss_downtime(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_loss_downtime_nget, self->data_ptr);
}

static int
MHKWave_set_loss_downtime(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_loss_downtime_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_loss_resource_overprediction(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_loss_resource_overprediction_nget, self->data_ptr);
}

static int
MHKWave_set_loss_resource_overprediction(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_loss_resource_overprediction_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_loss_transmission(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_loss_transmission_nget, self->data_ptr);
}

static int
MHKWave_set_loss_transmission(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_loss_transmission_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_minute(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_minute_aget, self->data_ptr);
}

static int
MHKWave_set_minute(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_minute_aset, self->data_ptr);
}

static PyObject *
MHKWave_get_month(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_month_aget, self->data_ptr);
}

static int
MHKWave_set_month(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_month_aset, self->data_ptr);
}

static PyObject *
MHKWave_get_number_devices(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_number_devices_nget, self->data_ptr);
}

static int
MHKWave_set_number_devices(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_number_devices_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_number_hours(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_number_hours_nget, self->data_ptr);
}

static int
MHKWave_set_number_hours(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_number_hours_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_number_records(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_number_records_nget, self->data_ptr);
}

static int
MHKWave_set_number_records(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_number_records_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_significant_wave_height(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_significant_wave_height_aget, self->data_ptr);
}

static int
MHKWave_set_significant_wave_height(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_significant_wave_height_aset, self->data_ptr);
}

static PyObject *
MHKWave_get_system_capacity(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_system_capacity_nget, self->data_ptr);
}

static int
MHKWave_set_system_capacity(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_system_capacity_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_total_operating_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_total_operating_cost_nget, self->data_ptr);
}

static int
MHKWave_set_total_operating_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_total_operating_cost_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_wave_power_matrix(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_MhkWave_MHKWave_wave_power_matrix_mget, self->data_ptr);
}

static int
MHKWave_set_wave_power_matrix(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_MhkWave_MHKWave_wave_power_matrix_mset, self->data_ptr);
}

static PyObject *
MHKWave_get_wave_resource_data(VarGroupObject *self, void *closure)
{
	return PySAM_table_getter(SAM_MhkWave_MHKWave_wave_resource_data_tget, self->data_ptr);
}

static int
MHKWave_set_wave_resource_data(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_table_setter(value, SAM_MhkWave_MHKWave_wave_resource_data_tset, self->data_ptr);
}

static PyObject *
MHKWave_get_wave_resource_matrix(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_MhkWave_MHKWave_wave_resource_matrix_mget, self->data_ptr);
}

static int
MHKWave_set_wave_resource_matrix(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_MhkWave_MHKWave_wave_resource_matrix_mset, self->data_ptr);
}

static PyObject *
MHKWave_get_wave_resource_model_choice(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_MHKWave_wave_resource_model_choice_nget, self->data_ptr);
}

static int
MHKWave_set_wave_resource_model_choice(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_MhkWave_MHKWave_wave_resource_model_choice_nset, self->data_ptr);
}

static PyObject *
MHKWave_get_year(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_MHKWave_year_aget, self->data_ptr);
}

static int
MHKWave_set_year(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_MhkWave_MHKWave_year_aset, self->data_ptr);
}

static PyGetSetDef MHKWave_getset[] = {
{"balance_of_system_cost_total", (getter)MHKWave_get_balance_of_system_cost_total,(setter)MHKWave_set_balance_of_system_cost_total,
	PyDoc_STR("*float*: BOS costs [$]\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"day", (getter)MHKWave_get_day,(setter)MHKWave_set_day,
	PyDoc_STR("*sequence*: Day [dy]\n\n*Info*: 1-365"),
 	NULL},
{"device_costs_total", (getter)MHKWave_get_device_costs_total,(setter)MHKWave_set_device_costs_total,
	PyDoc_STR("*float*: Device costs [$]\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"device_rated_power", (getter)MHKWave_get_device_rated_power,(setter)MHKWave_set_device_rated_power,
	PyDoc_STR("*float*: Rated capacity of device [kW]\n\n*Required*: True\n\n*Changes to this variable may require updating the values of the following*: \n\t - number_devices\n\t - system_capacity\n\n\n*This variable may need to be updated if the values of the following have changed*: \n\t - wave_power_matrix\n"),
 	NULL},
{"energy_period", (getter)MHKWave_get_energy_period,(setter)MHKWave_set_energy_period,
	PyDoc_STR("*sequence*: Wave period time series data [s]\n\n*Required*: False"),
 	NULL},
{"financial_cost_total", (getter)MHKWave_get_financial_cost_total,(setter)MHKWave_set_financial_cost_total,
	PyDoc_STR("*float*: Financial costs [$]\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"fixed_charge_rate", (getter)MHKWave_get_fixed_charge_rate,(setter)MHKWave_set_fixed_charge_rate,
	PyDoc_STR("*float*: FCR from LCOE Cost page\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"hour", (getter)MHKWave_get_hour,(setter)MHKWave_set_hour,
	PyDoc_STR("*sequence*: Hour [hr]\n\n*Info*: 0-23"),
 	NULL},
{"loss_additional", (getter)MHKWave_get_loss_additional,(setter)MHKWave_set_loss_additional,
	PyDoc_STR("*float*: Additional losses [%]\n\n*Required*: True"),
 	NULL},
{"loss_array_spacing", (getter)MHKWave_get_loss_array_spacing,(setter)MHKWave_set_loss_array_spacing,
	PyDoc_STR("*float*: Array spacing loss [%]\n\n*Required*: True"),
 	NULL},
{"loss_downtime", (getter)MHKWave_get_loss_downtime,(setter)MHKWave_set_loss_downtime,
	PyDoc_STR("*float*: Array/WEC downtime loss [%]\n\n*Required*: True"),
 	NULL},
{"loss_resource_overprediction", (getter)MHKWave_get_loss_resource_overprediction,(setter)MHKWave_set_loss_resource_overprediction,
	PyDoc_STR("*float*: Resource overprediction loss [%]\n\n*Required*: True"),
 	NULL},
{"loss_transmission", (getter)MHKWave_get_loss_transmission,(setter)MHKWave_set_loss_transmission,
	PyDoc_STR("*float*: Transmission losses [%]\n\n*Required*: True"),
 	NULL},
{"minute", (getter)MHKWave_get_minute,(setter)MHKWave_set_minute,
	PyDoc_STR("*sequence*: Minute [min]\n\n*Info*: 0-59"),
 	NULL},
{"month", (getter)MHKWave_get_month,(setter)MHKWave_set_month,
	PyDoc_STR("*sequence*: Month [mn]\n\n*Info*: 1-12"),
 	NULL},
{"number_devices", (getter)MHKWave_get_number_devices,(setter)MHKWave_set_number_devices,
	PyDoc_STR("*float*: Number of wave devices in the system\n\n*Constraints*: INTEGER\n\n*Required*: If not provided, assumed to be 1\n\n*Changes to this variable may require updating the values of the following*: \n\t - system_capacity\n\n\n*This variable may need to be updated if the values of the following have changed*: \n\t - device_rated_power\n\t - wave_power_matrix\n"),
 	NULL},
{"number_hours", (getter)MHKWave_get_number_hours,(setter)MHKWave_set_number_hours,
	PyDoc_STR("*float*: Number of hours in wave time series\n\n*Required*: False"),
 	NULL},
{"number_records", (getter)MHKWave_get_number_records,(setter)MHKWave_set_number_records,
	PyDoc_STR("*float*: Number of records in wave time series\n\n*Required*: False"),
 	NULL},
{"significant_wave_height", (getter)MHKWave_get_significant_wave_height,(setter)MHKWave_set_significant_wave_height,
	PyDoc_STR("*sequence*: Significant wave height time series data [m]\n\n*Required*: False"),
 	NULL},
{"system_capacity", (getter)MHKWave_get_system_capacity,(setter)MHKWave_set_system_capacity,
	PyDoc_STR("*float*: System Nameplate Capacity [kW]\n\n*Required*: If not provided, assumed to be 0\n\n*This variable may need to be updated if the values of the following have changed*: \n\t - device_rated_power\n\t - number_devices\n\t - wave_power_matrix\n"),
 	NULL},
{"total_operating_cost", (getter)MHKWave_get_total_operating_cost,(setter)MHKWave_set_total_operating_cost,
	PyDoc_STR("*float*: O&M costs [$]\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"wave_power_matrix", (getter)MHKWave_get_wave_power_matrix,(setter)MHKWave_set_wave_power_matrix,
	PyDoc_STR("*sequence[sequence]*: Wave Power Matrix\n\n*Required*: True\n\n*Changes to this variable may require updating the values of the following*: \n\t - device_rated_power\n\t - number_devices\n\t - system_capacity\n"),
 	NULL},
{"wave_resource_data", (getter)MHKWave_get_wave_resource_data,(setter)MHKWave_set_wave_resource_data,
	PyDoc_STR("*dict*: Array input of wave_resource_matrix (JPD) or time series (significant_wave_height and energy_period) data\n\n*Required*: False"),
 	NULL},
{"wave_resource_matrix", (getter)MHKWave_get_wave_resource_matrix,(setter)MHKWave_set_wave_resource_matrix,
	PyDoc_STR("*sequence[sequence]*: Frequency distribution of wave resource as a function of Hs and Te\n\n*Required*: False"),
 	NULL},
{"wave_resource_model_choice", (getter)MHKWave_get_wave_resource_model_choice,(setter)MHKWave_set_wave_resource_model_choice,
	PyDoc_STR("*float*: Hourly or JPD wave resource data [0/1]\n\n*Constraints*: INTEGER\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"year", (getter)MHKWave_get_year,(setter)MHKWave_set_year,
	PyDoc_STR("*sequence*: Year [yr]"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject MHKWave_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"MhkWave.MHKWave",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		MHKWave_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		MHKWave_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * Outputs Group
 */ 

static PyTypeObject Outputs_Type;

static PyObject *
Outputs_new(SAM_MhkWave data_ptr)
{
	PyObject* new_obj = Outputs_Type.tp_alloc(&Outputs_Type,0);

	VarGroupObject* Outputs_obj = (VarGroupObject*)new_obj;

	Outputs_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* Outputs methods */

static PyObject *
Outputs_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "MhkWave", "Outputs")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
Outputs_replace(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}
	PyTypeObject* tp = &Outputs_Type;

	if (!PySAM_replace_from_dict(tp, self->data_ptr, dict, "MhkWave", "Outputs")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
Outputs_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &Outputs_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef Outputs_methods[] = {
		{"assign",            (PyCFunction)Outputs_assign,  METH_VARARGS,
			PyDoc_STR("assign(dict) -> None\n Assign attributes from dictionary, overwriting but not removing values\n\n``Outputs_vals = { var: val, ...}``")},
		{"replace",            (PyCFunction)Outputs_replace,  METH_VARARGS,
			PyDoc_STR("replace(dict) -> None\n Replace attributes from dictionary, unassigning values not present in input dict\n\n``Outputs_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)Outputs_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
Outputs_get_annual_energy(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_annual_energy_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_energy_distribution(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_MhkWave_Outputs_annual_energy_distribution_mget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_energy_distribution_time(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_MhkWave_Outputs_annual_energy_distribution_time_mget, self->data_ptr);
}

static PyObject *
Outputs_get_capacity_factor(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_capacity_factor_nget, self->data_ptr);
}

static PyObject *
Outputs_get_device_average_power(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_device_average_power_nget, self->data_ptr);
}

static PyObject *
Outputs_get_energy_hourly_kWh(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_energy_hourly_kWh_aget, self->data_ptr);
}

static PyObject *
Outputs_get_energy_period_data(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_energy_period_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_energy_period_index_mat(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_energy_period_index_mat_aget, self->data_ptr);
}

static PyObject *
Outputs_get_gen(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_gen_aget, self->data_ptr);
}

static PyObject *
Outputs_get_numberHours(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_numberHours_nget, self->data_ptr);
}

static PyObject *
Outputs_get_numberRecords(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_numberRecords_nget, self->data_ptr);
}

static PyObject *
Outputs_get_sig_wave_height_data(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_sig_wave_height_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_sig_wave_height_index_mat(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_sig_wave_height_index_mat_aget, self->data_ptr);
}

static PyObject *
Outputs_get_total_bos_cost_kwh(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_bos_cost_kwh_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_bos_cost_lcoe(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_bos_cost_lcoe_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_capital_cost_kwh(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_capital_cost_kwh_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_capital_cost_lcoe(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_capital_cost_lcoe_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_device_cost_kwh(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_device_cost_kwh_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_device_cost_lcoe(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_device_cost_lcoe_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_financial_cost_kwh(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_financial_cost_kwh_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_financial_cost_lcoe(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_financial_cost_lcoe_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_om_cost_kwh(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_om_cost_kwh_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_om_cost_lcoe(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_total_om_cost_lcoe_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_power_end_height(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_power_end_height_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_power_end_period(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_power_end_period_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_power_index_mat(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_MhkWave_Outputs_wave_power_index_mat_aget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_power_start_height(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_power_start_height_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_power_start_period(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_power_start_period_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_resource_end_height(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_resource_end_height_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_resource_end_period(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_resource_end_period_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_resource_start_height(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_resource_start_height_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wave_resource_start_period(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_MhkWave_Outputs_wave_resource_start_period_nget, self->data_ptr);
}

static PyGetSetDef Outputs_getset[] = {
{"annual_energy", (getter)Outputs_get_annual_energy,(setter)0,
	PyDoc_STR("*float*: Annual energy production of array [kWh]"),
 	NULL},
{"annual_energy_distribution", (getter)Outputs_get_annual_energy_distribution,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Annual energy production as function of Hs and Te [kWh]"),
 	NULL},
{"annual_energy_distribution_time", (getter)Outputs_get_annual_energy_distribution_time,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Annual energy production as function of Time [kWh]"),
 	NULL},
{"capacity_factor", (getter)Outputs_get_capacity_factor,(setter)0,
	PyDoc_STR("*float*: Capacity Factor [%]"),
 	NULL},
{"device_average_power", (getter)Outputs_get_device_average_power,(setter)0,
	PyDoc_STR("*float*: Average power production of a single device [kW]"),
 	NULL},
{"energy_hourly_kWh", (getter)Outputs_get_energy_hourly_kWh,(setter)0,
	PyDoc_STR("*sequence*: Energy production of array [kWh]"),
 	NULL},
{"energy_period_data", (getter)Outputs_get_energy_period_data,(setter)0,
	PyDoc_STR("*sequence*: Energy period time series data [s]"),
 	NULL},
{"energy_period_index_mat", (getter)Outputs_get_energy_period_index_mat,(setter)0,
	PyDoc_STR("*sequence*: Wave period index locations for time series [s]"),
 	NULL},
{"gen", (getter)Outputs_get_gen,(setter)0,
	PyDoc_STR("*sequence*: System power generated [kW]"),
 	NULL},
{"numberHours", (getter)Outputs_get_numberHours,(setter)0,
	PyDoc_STR("*float*: Number of Hours"),
 	NULL},
{"numberRecords", (getter)Outputs_get_numberRecords,(setter)0,
	PyDoc_STR("*float*: Number of Records"),
 	NULL},
{"sig_wave_height_data", (getter)Outputs_get_sig_wave_height_data,(setter)0,
	PyDoc_STR("*sequence*: Significant wave height time series data [m]"),
 	NULL},
{"sig_wave_height_index_mat", (getter)Outputs_get_sig_wave_height_index_mat,(setter)0,
	PyDoc_STR("*sequence*: Wave height index locations for time series [m]"),
 	NULL},
{"total_bos_cost_kwh", (getter)Outputs_get_total_bos_cost_kwh,(setter)0,
	PyDoc_STR("*float*: Balance of system costs per unit annual energy [$/kWh]"),
 	NULL},
{"total_bos_cost_lcoe", (getter)Outputs_get_total_bos_cost_lcoe,(setter)0,
	PyDoc_STR("*float*: BOS cost [%]"),
 	NULL},
{"total_capital_cost_kwh", (getter)Outputs_get_total_capital_cost_kwh,(setter)0,
	PyDoc_STR("*float*: Capital costs per unit annual energy [$/kWh]"),
 	NULL},
{"total_capital_cost_lcoe", (getter)Outputs_get_total_capital_cost_lcoe,(setter)0,
	PyDoc_STR("*float*: Capital cost as percentage of overall LCOE [%]"),
 	NULL},
{"total_device_cost_kwh", (getter)Outputs_get_total_device_cost_kwh,(setter)0,
	PyDoc_STR("*float*: Device costs per unit annual energy [$/kWh]"),
 	NULL},
{"total_device_cost_lcoe", (getter)Outputs_get_total_device_cost_lcoe,(setter)0,
	PyDoc_STR("*float*: Device cost [%]"),
 	NULL},
{"total_financial_cost_kwh", (getter)Outputs_get_total_financial_cost_kwh,(setter)0,
	PyDoc_STR("*float*: Financial costs per unit annual energy [$/kWh]"),
 	NULL},
{"total_financial_cost_lcoe", (getter)Outputs_get_total_financial_cost_lcoe,(setter)0,
	PyDoc_STR("*float*: Financial cost [%]"),
 	NULL},
{"total_om_cost_kwh", (getter)Outputs_get_total_om_cost_kwh,(setter)0,
	PyDoc_STR("*float*: O&M costs per unit annual energy [$/kWh]"),
 	NULL},
{"total_om_cost_lcoe", (getter)Outputs_get_total_om_cost_lcoe,(setter)0,
	PyDoc_STR("*float*: O&M cost (annual) [%]"),
 	NULL},
{"wave_power_end_height", (getter)Outputs_get_wave_power_end_height,(setter)0,
	PyDoc_STR("*float*: Wave height at which last non-zero WEC power output occurs (m)"),
 	NULL},
{"wave_power_end_period", (getter)Outputs_get_wave_power_end_period,(setter)0,
	PyDoc_STR("*float*: Wave period at which last non-zero WEC power output occurs (s)"),
 	NULL},
{"wave_power_index_mat", (getter)Outputs_get_wave_power_index_mat,(setter)0,
	PyDoc_STR("*sequence*: Wave power for time series [kW]"),
 	NULL},
{"wave_power_start_height", (getter)Outputs_get_wave_power_start_height,(setter)0,
	PyDoc_STR("*float*: Wave height at which first non-zero WEC power output occurs (m)"),
 	NULL},
{"wave_power_start_period", (getter)Outputs_get_wave_power_start_period,(setter)0,
	PyDoc_STR("*float*: Wave period at which first non-zero WEC power output occurs (s)"),
 	NULL},
{"wave_resource_end_height", (getter)Outputs_get_wave_resource_end_height,(setter)0,
	PyDoc_STR("*float*: Wave height at which last non-zero wave resource value occurs (m)"),
 	NULL},
{"wave_resource_end_period", (getter)Outputs_get_wave_resource_end_period,(setter)0,
	PyDoc_STR("*float*: Wave period at which last non-zero wave resource value occurs (s)"),
 	NULL},
{"wave_resource_start_height", (getter)Outputs_get_wave_resource_start_height,(setter)0,
	PyDoc_STR("*float*: Wave height at which first non-zero wave resource value occurs (m)"),
 	NULL},
{"wave_resource_start_period", (getter)Outputs_get_wave_resource_start_period,(setter)0,
	PyDoc_STR("*float*: Wave period at which first non-zero wave resource value occurs (s)"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject Outputs_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"MhkWave.Outputs",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		Outputs_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		Outputs_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};

/*
 * MhkWave
 */

static PyTypeObject MhkWave_Type;

static CmodObject *
newMhkWaveObject(void* data_ptr)
{
	CmodObject *self;
	self = PyObject_New(CmodObject, &MhkWave_Type);

	PySAM_TECH_ATTR()

	PyObject* MHKWave_obj = MHKWave_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "MHKWave", MHKWave_obj);
	Py_DECREF(MHKWave_obj);

	PyObject* Outputs_obj = Outputs_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "Outputs", Outputs_obj);
	Py_DECREF(Outputs_obj);

	return self;
}

/* MhkWave methods */

static void
MhkWave_dealloc(CmodObject *self)
{
	Py_XDECREF(self->x_attr);

	if (!self->data_owner_ptr) {
		SAM_error error = new_error();
		SAM_table_destruct(self->data_ptr, &error);
		PySAM_has_error(error);
	}
	PyObject_Del(self);
}


static PyObject *
MhkWave_execute(CmodObject *self, PyObject *args)
{
	int verbosity = 0;

	if (!PyArg_ParseTuple(args, "|i", &verbosity))
		return NULL;

	SAM_error error = new_error();
	SAM_MhkWave_execute(self->data_ptr, verbosity, &error);
	if (PySAM_has_error(error )) return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject *
MhkWave_assign(CmodObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_nested_dict((PyObject*)self, self->x_attr, self->data_ptr, dict, "MhkWave"))
		return NULL;

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
MhkWave_replace(CmodObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_replace_from_nested_dict((PyObject*)self, self->x_attr, self->data_ptr, dict, "MhkWave"))
		return NULL;

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
MhkWave_export(CmodObject *self, PyObject *args)
{
	return PySAM_export_to_nested_dict((PyObject *) self, self->x_attr);
}

static PyObject *
MhkWave_value(CmodObject *self, PyObject *args)
{
	return Cmod_value(self, args);
}

static PyObject *
MhkWave_unassign(CmodObject *self, PyObject *args)
{
	return Cmod_unassign(self, args);
}

static PyMethodDef MhkWave_methods[] = {
		{"execute",           (PyCFunction)MhkWave_execute,  METH_VARARGS,
				PyDoc_STR("execute(int verbosity) -> None\n Execute simulation with verbosity level 0 (default) or 1")},
		{"assign",            (PyCFunction)MhkWave_assign,  METH_VARARGS,
				PyDoc_STR("assign(dict) -> None\n Assign attributes from nested dictionary, except for Outputs\n\n``nested_dict = { 'MHKWave': { var: val, ...}, ...}``")},
		{"replace",            (PyCFunction)MhkWave_replace,  METH_VARARGS,
				PyDoc_STR("replace(dict) -> None\n Replace attributes from nested dictionary, except for Outputs. Unassigns all values in each Group then assigns from the input dict.\n\n``nested_dict = { 'MHKWave': { var: val, ...}, ...}``")},
		{"export",            (PyCFunction)MhkWave_export,  METH_VARARGS,
				PyDoc_STR("export() -> dict\n Export attributes into nested dictionary")},
		{"value",             (PyCFunction)MhkWave_value, METH_VARARGS,
				PyDoc_STR("value(name, optional value) -> Union[None, float, dict, sequence, str]\n Get or set by name a value in any of the variable groups.")},
		{"unassign",          (PyCFunction)MhkWave_unassign, METH_VARARGS,
				PyDoc_STR("unassign(name) -> None\n Unassign a value in any of the variable groups.")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
MhkWave_getattro(CmodObject *self, PyObject *name)
{
	return PySAM_get_attr((PyObject*) self, (PyObject*) self->x_attr, name);
}

static int
MhkWave_setattr(CmodObject *self, const char *name, PyObject *v)
{
	return PySAM_set_attr((PyObject*)self, (PyObject*)self->x_attr, name, v);
}

static PyTypeObject MhkWave_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"MhkWave",            /*tp_name*/
		sizeof(CmodObject),/*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		(destructor)MhkWave_dealloc,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		(setattrfunc)MhkWave_setattr,   /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		(getattrofunc)MhkWave_getattro, /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		"This class contains all the variable information for running a simulation. Variables are grouped together in the subclasses as properties. If property assignments are the wrong type, an error is thrown.",        /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		MhkWave_methods,      /*tp_methods*/
		0,                          /*tp_members*/
		0,       /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,                          /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};

/* --------------------------------------------------------------------- */


/* Function of no arguments returning new MhkWave object */

static PyObject *
MhkWave_new(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	rv = newMhkWaveObject(0);
	if (rv == NULL)
		return NULL;

	rv->data_owner_ptr = NULL;
	return (PyObject *)rv;
}

static PyObject *
MhkWave_wrap(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	long long int ptr = 0;  // 64 bit arch
	if (!PyArg_ParseTuple(args, "L:wrap", &ptr)){
		PyErr_BadArgument();
		return NULL;
	}
	rv = newMhkWaveObject((void*)ptr);
	if (rv == NULL)
		return NULL;

	rv->data_owner_ptr = NULL;
	return (PyObject *)rv;
}

static PyObject *
MhkWave_default(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	char* def = 0;
	if (!PyArg_ParseTuple(args, "s:default", &def)){
		PyErr_BadArgument();
		return NULL;
	}
	rv = newMhkWaveObject(0);
	if (rv == NULL)
		return NULL;

	rv->data_owner_ptr = NULL;
	if (PySAM_load_defaults((PyObject*)rv, rv->x_attr, rv->data_ptr, "MhkWave", def) < 0) {
		MhkWave_dealloc(rv);
		return NULL;
	}
	return (PyObject *)rv;
}

static PyObject *
MhkWave_from_existing(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	PyObject * module = 0;
	char* def = 0;
	if (!PyArg_ParseTuple(args, "O|s:from_existing", &module, &def)){
		PyErr_BadArgument();
		return NULL;
	}
	CmodObject *module_obj = (CmodObject *)module;
	SAM_table ptr = module_obj->data_ptr;

	// do a rough validity check on the data by checking its size
	SAM_error error = new_error();
	int data_size = SAM_table_size(ptr, &error);
	if (PySAM_has_error(error))
		goto fail;
	if (data_size < 0)
		goto fail;

	rv = newMhkWaveObject((void*)ptr);
	if (rv == NULL)
		goto fail;
	rv->data_owner_ptr = module;
	if (!def)
		return (PyObject *)rv;
	PySAM_load_defaults((PyObject*)rv, rv->x_attr, rv->data_ptr, "MhkWave", def);
	return (PyObject *)rv;

	fail:
	Py_DECREF(module);
	return NULL;
}/* ---------- */


/* List of functions defined in the module */

static PyMethodDef MhkWaveModule_methods[] = {
		{"new",             MhkWave_new,         METH_VARARGS,
				PyDoc_STR("new() -> MhkWave")},
		{"default",             MhkWave_default,         METH_VARARGS,
				PyDoc_STR("default(config) -> MhkWave\n\nUse default attributes\n"
				"`config` options:\n\n- \"MEwaveLCOECalculator\"\n- \"MEwaveNone\"")},
		{"wrap",             MhkWave_wrap,         METH_VARARGS,
				PyDoc_STR("wrap(ssc_data_t) -> MhkWave\n\nUse existing PySSC data\n\n.. warning::\n\n	Do not call PySSC.data_free on the ssc_data_t provided to ``wrap``")},
		{"from_existing",   MhkWave_from_existing,        METH_VARARGS,
				PyDoc_STR("from_existing(data, optional config) -> MhkWave\n\nShare underlying data with an existing PySAM class. If config provided, default attributes are loaded otherwise.")},
		{NULL,              NULL}           /* sentinel */
};

PyDoc_STRVAR(module_doc,
			 "Wave marine hydrokinetic system");


static int
MhkWaveModule_exec(PyObject *m)
{
	/* Finalize the type object including setting type of the new type
	 * object; doing it here is required for portability, too. */

	if (PySAM_load_lib(m) < 0) goto fail;

	MhkWave_Type.tp_dict = PyDict_New();
	if (!MhkWave_Type.tp_dict) { goto fail; }

	/// Add the MHKWave type object to MhkWave_Type
	if (PyType_Ready(&MHKWave_Type) < 0) { goto fail; }
	PyDict_SetItemString(MhkWave_Type.tp_dict,
				"MHKWave",
				(PyObject*)&MHKWave_Type);
	Py_DECREF(&MHKWave_Type);

	/// Add the Outputs type object to MhkWave_Type
	if (PyType_Ready(&Outputs_Type) < 0) { goto fail; }
	PyDict_SetItemString(MhkWave_Type.tp_dict,
				"Outputs",
				(PyObject*)&Outputs_Type);
	Py_DECREF(&Outputs_Type);

	/// Add the MhkWave type object to the module
	if (PyType_Ready(&MhkWave_Type) < 0) { goto fail; }
	PyModule_AddObject(m,
				"MhkWave",
				(PyObject*)&MhkWave_Type);

	return 0;
	fail:
	Py_XDECREF(m);
	return -1;
}

static struct PyModuleDef_Slot MhkWaveModule_slots[] = {
		{Py_mod_exec, MhkWaveModule_exec},
		{0, NULL},
};

static struct PyModuleDef MhkWaveModule = {
		PyModuleDef_HEAD_INIT,
		"MhkWave",
		module_doc,
		0,
		MhkWaveModule_methods,
		MhkWaveModule_slots,
		NULL,
		NULL,
		NULL
};

/* Export function for the module */

PyMODINIT_FUNC
PyInit_MhkWave(void)
{
	return PyModuleDef_Init(&MhkWaveModule);
}