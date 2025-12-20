FILES
======================
XGBoost:
Header : 
model_output1 and model_output2 : arduino executable C-code header files created by XGBoost_model.ipynb notebook.
model_output3 and model_output4 : arduino executable C-code header files created by XGBoost_SPS30.iipnb notebook for the Sirion sensors.
Code :
XGBoost_model.ipynb
XGBoost_SPS30.ipynb

Random Forest:
Header : 
RF_output1.h :  An arduino executable C-code header files created by RF_SPS30.ipynb notebook for the Sirion sensors.
Code :
RF_SPS30.ipynb

Support Vector Machines (Regression) :
Header :
SVM_distilled.h : An arduino executable C-code header files created by SVM_model.ipynb notebook.
SVM_output2.h : An arduino executable C-code header files created by SVM_SPS30.ipynb notebook specofically for the Sirion sensors.
Code:
SVM_model.ipynb
SVM_SPS30.ipynb

simulate.cpp is a C++ simulation of a sensor. It was used to test XGBoost Algorithm that was written.
simulate.exe contains the output of the simultion.

RESULTS
==========================

RF_SPS30:

    Mean Absolute Error: 1.1406057142857118
    Mean Squared Error: 2.337771594857097
    R-squared Score: 0.9993439933650992
    Weights: [0.31046234 0.21900734 0.28717395 0.18335637]
    Tree details: DecisionTreeRegressor(max_features=1.0, random_state=1608637542)
    Tree depth: 9

SVM_SPS30:

    Mean Absolute Error: 3.49061962732896
    Mean Squared Error: 14.927813628215388
    R-squared: 0.9953459299074268
    Support Vectors: [[-1.66225996  2.29494441  1.97777605  2.18790075]
    [-1.09348595  1.49860037  1.76758059  1.48014369]
    [-1.54037981  1.8089489   1.58028899  1.80522517]
    [-1.74351339  0.6981581   2.20626385  0.63047002]
    [-1.68257332  1.6240625   2.01437355  1.84158866]
    [-0.74815888  0.7151277   0.52280754  0.73494785]
    [ 0.9784765  -0.8525293  -0.83208466 -0.8581989 ]
    [ 1.70975737 -0.88996549 -0.85442489 -0.88687957]]
    Support Vector Indices: [ 29  30  34  37  75  77 101 129]
    Dual Coefficients: [[-1.15489906  1.72581522 -0.64563409 -1.52056578 -0.21509997 -0.05882137
    -1.16044301  3.02964806]]
    Intercept: [-0.40313368]
    SVM Parameters: {'C': 100, 'cache_size': 200, 'coef0': 0.0, 'degree': 3, 'epsilon': 0.1, 'gamma': 'scale', 'kernel': 'rbf', 'max_iter': -1, 'shrinking': True, 'tol': 0.001, 'verbose': False}
    Regularization (C): 100
    Epsilon: 0.1

XGBoost_SPS30:

    Original model:
        Mean Absolute Error: 2.0506153106689453
        Mean Squared Error: 8.159405708312988
        R-squared Score: 0.9979250431060791
        Weights: [0.88609356 0.05453994 0.01316341 0.04620313]
        Parameters: {'objective': 'reg:squarederror', 'base_score': None, 'booster': None, 'callbacks': None, 'colsample_bylevel': None, 'colsample_bynode': None, 'colsample_bytree': None, 'device': None, 'early_stopping_rounds': None, 'enable_categorical': False, 'eval_metric': None, 'feature_types': None, 'feature_weights': None, 'gamma': None, 'grow_policy': None, 'importance_type': None, 'interaction_constraints': None, 'learning_rate': None, 'max_bin': None, 'max_cat_threshold': None, 'max_cat_to_onehot': None, 'max_delta_step': None, 'max_depth': None, 'max_leaves': None, 'min_child_weight': None, 'missing': nan, 'monotone_constraints': None, 'multi_strategy': None, 'n_estimators': 100, 'n_jobs': None, 'num_parallel_tree': None, 'random_state': 42, 'reg_alpha': None, 'reg_lambda': None, 'sampling_method': None, 'scale_pos_weight': None, 'subsample': None, 'tree_method': None, 'validate_parameters': None, 'verbosity': None}
        learning rate: None

    Random Forest based distilled trees:
        Output 1 R2: 0.993720019162189
        Output 2 R2: 0.9905926450190724
        Weights: [0.35221128 0.12452092 0.28348875 0.23977905]
        Weights: [0.35366711 0.15626232 0.24784775 0.24222282]
        Tree details: DecisionTreeRegressor(max_depth=3, max_features=1.0, random_state=1608637542)
        Tree depth: 3
        Tree details: DecisionTreeRegressor(max_depth=3, max_features=1.0, random_state=1608637542)
        Tree depth: 3




