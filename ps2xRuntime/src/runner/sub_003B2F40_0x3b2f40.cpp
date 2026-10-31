#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2F40
// Address: 0x3b2f40 - 0x3b3158
void sub_003B2F40_0x3b2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2F40_0x3b2f40");
#endif

    switch (ctx->pc) {
        case 0x3b2f40u: goto label_3b2f40;
        case 0x3b2f44u: goto label_3b2f44;
        case 0x3b2f48u: goto label_3b2f48;
        case 0x3b2f4cu: goto label_3b2f4c;
        case 0x3b2f50u: goto label_3b2f50;
        case 0x3b2f54u: goto label_3b2f54;
        case 0x3b2f58u: goto label_3b2f58;
        case 0x3b2f5cu: goto label_3b2f5c;
        case 0x3b2f60u: goto label_3b2f60;
        case 0x3b2f64u: goto label_3b2f64;
        case 0x3b2f68u: goto label_3b2f68;
        case 0x3b2f6cu: goto label_3b2f6c;
        case 0x3b2f70u: goto label_3b2f70;
        case 0x3b2f74u: goto label_3b2f74;
        case 0x3b2f78u: goto label_3b2f78;
        case 0x3b2f7cu: goto label_3b2f7c;
        case 0x3b2f80u: goto label_3b2f80;
        case 0x3b2f84u: goto label_3b2f84;
        case 0x3b2f88u: goto label_3b2f88;
        case 0x3b2f8cu: goto label_3b2f8c;
        case 0x3b2f90u: goto label_3b2f90;
        case 0x3b2f94u: goto label_3b2f94;
        case 0x3b2f98u: goto label_3b2f98;
        case 0x3b2f9cu: goto label_3b2f9c;
        case 0x3b2fa0u: goto label_3b2fa0;
        case 0x3b2fa4u: goto label_3b2fa4;
        case 0x3b2fa8u: goto label_3b2fa8;
        case 0x3b2facu: goto label_3b2fac;
        case 0x3b2fb0u: goto label_3b2fb0;
        case 0x3b2fb4u: goto label_3b2fb4;
        case 0x3b2fb8u: goto label_3b2fb8;
        case 0x3b2fbcu: goto label_3b2fbc;
        case 0x3b2fc0u: goto label_3b2fc0;
        case 0x3b2fc4u: goto label_3b2fc4;
        case 0x3b2fc8u: goto label_3b2fc8;
        case 0x3b2fccu: goto label_3b2fcc;
        case 0x3b2fd0u: goto label_3b2fd0;
        case 0x3b2fd4u: goto label_3b2fd4;
        case 0x3b2fd8u: goto label_3b2fd8;
        case 0x3b2fdcu: goto label_3b2fdc;
        case 0x3b2fe0u: goto label_3b2fe0;
        case 0x3b2fe4u: goto label_3b2fe4;
        case 0x3b2fe8u: goto label_3b2fe8;
        case 0x3b2fecu: goto label_3b2fec;
        case 0x3b2ff0u: goto label_3b2ff0;
        case 0x3b2ff4u: goto label_3b2ff4;
        case 0x3b2ff8u: goto label_3b2ff8;
        case 0x3b2ffcu: goto label_3b2ffc;
        case 0x3b3000u: goto label_3b3000;
        case 0x3b3004u: goto label_3b3004;
        case 0x3b3008u: goto label_3b3008;
        case 0x3b300cu: goto label_3b300c;
        case 0x3b3010u: goto label_3b3010;
        case 0x3b3014u: goto label_3b3014;
        case 0x3b3018u: goto label_3b3018;
        case 0x3b301cu: goto label_3b301c;
        case 0x3b3020u: goto label_3b3020;
        case 0x3b3024u: goto label_3b3024;
        case 0x3b3028u: goto label_3b3028;
        case 0x3b302cu: goto label_3b302c;
        case 0x3b3030u: goto label_3b3030;
        case 0x3b3034u: goto label_3b3034;
        case 0x3b3038u: goto label_3b3038;
        case 0x3b303cu: goto label_3b303c;
        case 0x3b3040u: goto label_3b3040;
        case 0x3b3044u: goto label_3b3044;
        case 0x3b3048u: goto label_3b3048;
        case 0x3b304cu: goto label_3b304c;
        case 0x3b3050u: goto label_3b3050;
        case 0x3b3054u: goto label_3b3054;
        case 0x3b3058u: goto label_3b3058;
        case 0x3b305cu: goto label_3b305c;
        case 0x3b3060u: goto label_3b3060;
        case 0x3b3064u: goto label_3b3064;
        case 0x3b3068u: goto label_3b3068;
        case 0x3b306cu: goto label_3b306c;
        case 0x3b3070u: goto label_3b3070;
        case 0x3b3074u: goto label_3b3074;
        case 0x3b3078u: goto label_3b3078;
        case 0x3b307cu: goto label_3b307c;
        case 0x3b3080u: goto label_3b3080;
        case 0x3b3084u: goto label_3b3084;
        case 0x3b3088u: goto label_3b3088;
        case 0x3b308cu: goto label_3b308c;
        case 0x3b3090u: goto label_3b3090;
        case 0x3b3094u: goto label_3b3094;
        case 0x3b3098u: goto label_3b3098;
        case 0x3b309cu: goto label_3b309c;
        case 0x3b30a0u: goto label_3b30a0;
        case 0x3b30a4u: goto label_3b30a4;
        case 0x3b30a8u: goto label_3b30a8;
        case 0x3b30acu: goto label_3b30ac;
        case 0x3b30b0u: goto label_3b30b0;
        case 0x3b30b4u: goto label_3b30b4;
        case 0x3b30b8u: goto label_3b30b8;
        case 0x3b30bcu: goto label_3b30bc;
        case 0x3b30c0u: goto label_3b30c0;
        case 0x3b30c4u: goto label_3b30c4;
        case 0x3b30c8u: goto label_3b30c8;
        case 0x3b30ccu: goto label_3b30cc;
        case 0x3b30d0u: goto label_3b30d0;
        case 0x3b30d4u: goto label_3b30d4;
        case 0x3b30d8u: goto label_3b30d8;
        case 0x3b30dcu: goto label_3b30dc;
        case 0x3b30e0u: goto label_3b30e0;
        case 0x3b30e4u: goto label_3b30e4;
        case 0x3b30e8u: goto label_3b30e8;
        case 0x3b30ecu: goto label_3b30ec;
        case 0x3b30f0u: goto label_3b30f0;
        case 0x3b30f4u: goto label_3b30f4;
        case 0x3b30f8u: goto label_3b30f8;
        case 0x3b30fcu: goto label_3b30fc;
        case 0x3b3100u: goto label_3b3100;
        case 0x3b3104u: goto label_3b3104;
        case 0x3b3108u: goto label_3b3108;
        case 0x3b310cu: goto label_3b310c;
        case 0x3b3110u: goto label_3b3110;
        case 0x3b3114u: goto label_3b3114;
        case 0x3b3118u: goto label_3b3118;
        case 0x3b311cu: goto label_3b311c;
        case 0x3b3120u: goto label_3b3120;
        case 0x3b3124u: goto label_3b3124;
        case 0x3b3128u: goto label_3b3128;
        case 0x3b312cu: goto label_3b312c;
        case 0x3b3130u: goto label_3b3130;
        case 0x3b3134u: goto label_3b3134;
        case 0x3b3138u: goto label_3b3138;
        case 0x3b313cu: goto label_3b313c;
        case 0x3b3140u: goto label_3b3140;
        case 0x3b3144u: goto label_3b3144;
        case 0x3b3148u: goto label_3b3148;
        case 0x3b314cu: goto label_3b314c;
        case 0x3b3150u: goto label_3b3150;
        case 0x3b3154u: goto label_3b3154;
        default: break;
    }

    ctx->pc = 0x3b2f40u;

label_3b2f40:
    // 0x3b2f40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b2f44:
    // 0x3b2f44: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b2f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b2f48:
    // 0x3b2f48: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b2f4c:
    // 0x3b2f4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b2f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b2f50:
    // 0x3b2f50: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b2f54:
    // 0x3b2f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b2f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2f58:
    // 0x3b2f58: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b2f5c:
    // 0x3b2f5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b2f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b2f60:
    // 0x3b2f60: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b2f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b2f64:
    // 0x3b2f64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b2f68:
    // 0x3b2f68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2f6c:
    // 0x3b2f6c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b2f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b2f70:
    // 0x3b2f70: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b2f74:
    // 0x3b2f74: 0x40f809  jalr        $v0
label_3b2f78:
    if (ctx->pc == 0x3B2F78u) {
        ctx->pc = 0x3B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F74u;
        // 0x3b2f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F7Cu;
        goto label_3b2f7c;
    }
    ctx->pc = 0x3B2F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2F7Cu);
        ctx->pc = 0x3B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F74u;
        // 0x3b2f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2F74u, 0x3B2F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2F7Cu;
label_3b2f7c:
    // 0x3b2f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2f80:
    // 0x3b2f80: 0xc0ea146  jal         func_3A8518
label_3b2f84:
    if (ctx->pc == 0x3B2F84u) {
        ctx->pc = 0x3B2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F80u;
        // 0x3b2f84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F88u;
        goto label_3b2f88;
    }
    ctx->pc = 0x3B2F80u;
    SET_GPR_U32(ctx, 31, 0x3B2F88u);
    ctx->pc = 0x3B2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F80u;
    // 0x3b2f84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B2F80u, 0x3B2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2F88u;
label_3b2f88:
    // 0x3b2f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2f8c:
    // 0x3b2f8c: 0xc0ea146  jal         func_3A8518
label_3b2f90:
    if (ctx->pc == 0x3B2F90u) {
        ctx->pc = 0x3B2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F8Cu;
        // 0x3b2f90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F94u;
        goto label_3b2f94;
    }
    ctx->pc = 0x3B2F8Cu;
    SET_GPR_U32(ctx, 31, 0x3B2F94u);
    ctx->pc = 0x3B2F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F8Cu;
    // 0x3b2f90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B2F8Cu, 0x3B2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2F94u;
label_3b2f94:
    // 0x3b2f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2f98:
    // 0x3b2f98: 0xc0ea146  jal         func_3A8518
label_3b2f9c:
    if (ctx->pc == 0x3B2F9Cu) {
        ctx->pc = 0x3B2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F98u;
        // 0x3b2f9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2FA0u;
        goto label_3b2fa0;
    }
    ctx->pc = 0x3B2F98u;
    SET_GPR_U32(ctx, 31, 0x3B2FA0u);
    ctx->pc = 0x3B2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F98u;
    // 0x3b2f9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B2F98u, 0x3B2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FA0u;
label_3b2fa0:
    // 0x3b2fa0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b2fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2fa4:
    // 0x3b2fa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b2fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b2fa8:
    // 0x3b2fa8: 0xc0ea12a  jal         func_3A84A8
label_3b2fac:
    if (ctx->pc == 0x3B2FACu) {
        ctx->pc = 0x3B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FA8u;
        // 0x3b2fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2FB0u;
        goto label_3b2fb0;
    }
    ctx->pc = 0x3B2FA8u;
    SET_GPR_U32(ctx, 31, 0x3B2FB0u);
    ctx->pc = 0x3B2FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FA8u;
    // 0x3b2fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B2FA8u, 0x3B2FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FB0u;
label_3b2fb0:
    // 0x3b2fb0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b2fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b2fb4:
    // 0x3b2fb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b2fb8:
    // 0x3b2fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b2fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2fbc:
    // 0x3b2fbc: 0xc0ea12a  jal         func_3A84A8
label_3b2fc0:
    if (ctx->pc == 0x3B2FC0u) {
        ctx->pc = 0x3B2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FBCu;
        // 0x3b2fc0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2FC4u;
        goto label_3b2fc4;
    }
    ctx->pc = 0x3B2FBCu;
    SET_GPR_U32(ctx, 31, 0x3B2FC4u);
    ctx->pc = 0x3B2FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FBCu;
    // 0x3b2fc0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B2FBCu, 0x3B2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FC4u;
label_3b2fc4:
    // 0x3b2fc4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b2fc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b2fc8:
    // 0x3b2fc8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3b2fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b2fcc:
    // 0x3b2fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2fd0:
    // 0x3b2fd0: 0xc0e858c  jal         func_3A1630
label_3b2fd4:
    if (ctx->pc == 0x3B2FD4u) {
        ctx->pc = 0x3B2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FD0u;
        // 0x3b2fd4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2FD8u;
        goto label_3b2fd8;
    }
    ctx->pc = 0x3B2FD0u;
    SET_GPR_U32(ctx, 31, 0x3B2FD8u);
    ctx->pc = 0x3B2FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FD0u;
    // 0x3b2fd4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B2FD0u, 0x3B2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FD8u;
label_3b2fd8:
    // 0x3b2fd8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b2fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2fdc:
    // 0x3b2fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b2fe0:
    // 0x3b2fe0: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3b2fe0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2fe4:
    // 0x3b2fe4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3b2fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3b2fe8:
    // 0x3b2fe8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3b2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3b2fec:
    // 0x3b2fec: 0x24a521c0  addiu       $a1, $a1, 0x21C0
    ctx->pc = 0x3b2fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8640));
label_3b2ff0:
    // 0x3b2ff0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3b2ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3b2ff4:
    // 0x3b2ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ff8:
    // 0x3b2ff8: 0xc0e9666  jal         func_3A5998
label_3b2ffc:
    if (ctx->pc == 0x3B2FFCu) {
        ctx->pc = 0x3B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FF8u;
        // 0x3b2ffc: 0x7e260020  sq          $a2, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3000u;
        goto label_3b3000;
    }
    ctx->pc = 0x3B2FF8u;
    SET_GPR_U32(ctx, 31, 0x3B3000u);
    ctx->pc = 0x3B2FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FF8u;
    // 0x3b2ffc: 0x7e260020  sq          $a2, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B2FF8u, 0x3B3000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3000u;
label_3b3000:
    // 0x3b3000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b3004:
    if (ctx->pc == 0x3B3004u) {
        ctx->pc = 0x3B3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3000u;
        // 0x3b3004: 0x3c054e6e  lui         $a1, 0x4E6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20078 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3008u;
        goto label_3b3008;
    }
    ctx->pc = 0x3B3000u;
    {
        const bool branch_taken_0x3b3000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3000u;
        // 0x3b3004: 0x3c054e6e  lui         $a1, 0x4E6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20078 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3000) {
            ctx->pc = 0x3B3018u;
            goto label_3b3018;
        }
    }
    ctx->pc = 0x3B3008u;
label_3b3008:
    // 0x3b3008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b300c:
    // 0x3b300c: 0x34a55c2e  ori         $a1, $a1, 0x5C2E
    ctx->pc = 0x3b300cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23598);
label_3b3010:
    // 0x3b3010: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3b3014:
    if (ctx->pc == 0x3B3014u) {
        ctx->pc = 0x3B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3010u;
        // 0x3b3014: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3018u;
        goto label_3b3018;
    }
    ctx->pc = 0x3B3010u;
    {
        const bool branch_taken_0x3b3010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3010u;
        // 0x3b3014: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3010) {
            ctx->pc = 0x3B3088u;
            goto label_3b3088;
        }
    }
    ctx->pc = 0x3B3018u;
label_3b3018:
    // 0x3b3018: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3b3018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3b301c:
    // 0x3b301c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3020:
    // 0x3b3020: 0x244521d0  addiu       $a1, $v0, 0x21D0
    ctx->pc = 0x3b3020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8656));
label_3b3024:
    // 0x3b3024: 0xc0e9666  jal         func_3A5998
label_3b3028:
    if (ctx->pc == 0x3B3028u) {
        ctx->pc = 0x3B3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3024u;
        // 0x3b3028: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B302Cu;
        goto label_3b302c;
    }
    ctx->pc = 0x3B3024u;
    SET_GPR_U32(ctx, 31, 0x3B302Cu);
    ctx->pc = 0x3B3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3024u;
    // 0x3b3028: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B3024u, 0x3B302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B302Cu;
label_3b302c:
    // 0x3b302c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b3030:
    if (ctx->pc == 0x3B3030u) {
        ctx->pc = 0x3B3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B302Cu;
        // 0x3b3030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3034u;
        goto label_3b3034;
    }
    ctx->pc = 0x3B302Cu;
    {
        const bool branch_taken_0x3b302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B302Cu;
        // 0x3b3030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b302c) {
            ctx->pc = 0x3B3040u;
            goto label_3b3040;
        }
    }
    ctx->pc = 0x3B3034u;
label_3b3034:
    // 0x3b3034: 0x3c052ea5  lui         $a1, 0x2EA5
    ctx->pc = 0x3b3034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11941 << 16));
label_3b3038:
    // 0x3b3038: 0x10000013  b           . + 4 + (0x13 << 2)
label_3b303c:
    if (ctx->pc == 0x3B303Cu) {
        ctx->pc = 0x3B303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3038u;
        // 0x3b303c: 0x34a51567  ori         $a1, $a1, 0x1567 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5479);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3040u;
        goto label_3b3040;
    }
    ctx->pc = 0x3B3038u;
    {
        const bool branch_taken_0x3b3038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3038u;
        // 0x3b303c: 0x34a51567  ori         $a1, $a1, 0x1567 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5479);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3038) {
            ctx->pc = 0x3B3088u;
            goto label_3b3088;
        }
    }
    ctx->pc = 0x3B3040u;
label_3b3040:
    // 0x3b3040: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3b3040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3b3044:
    // 0x3b3044: 0xc0e9666  jal         func_3A5998
label_3b3048:
    if (ctx->pc == 0x3B3048u) {
        ctx->pc = 0x3B3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3044u;
        // 0x3b3048: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B304Cu;
        goto label_3b304c;
    }
    ctx->pc = 0x3B3044u;
    SET_GPR_U32(ctx, 31, 0x3B304Cu);
    ctx->pc = 0x3B3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3044u;
    // 0x3b3048: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B3044u, 0x3B304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B304Cu;
label_3b304c:
    // 0x3b304c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b3050:
    if (ctx->pc == 0x3B3050u) {
        ctx->pc = 0x3B3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B304Cu;
        // 0x3b3050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3054u;
        goto label_3b3054;
    }
    ctx->pc = 0x3B304Cu;
    {
        const bool branch_taken_0x3b304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B304Cu;
        // 0x3b3050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b304c) {
            ctx->pc = 0x3B3060u;
            goto label_3b3060;
        }
    }
    ctx->pc = 0x3B3054u;
label_3b3054:
    // 0x3b3054: 0x3c05f2a4  lui         $a1, 0xF2A4
    ctx->pc = 0x3b3054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62116 << 16));
label_3b3058:
    // 0x3b3058: 0x1000000b  b           . + 4 + (0xB << 2)
label_3b305c:
    if (ctx->pc == 0x3B305Cu) {
        ctx->pc = 0x3B305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3058u;
        // 0x3b305c: 0x34a59b0b  ori         $a1, $a1, 0x9B0B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39691);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3060u;
        goto label_3b3060;
    }
    ctx->pc = 0x3B3058u;
    {
        const bool branch_taken_0x3b3058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3058u;
        // 0x3b305c: 0x34a59b0b  ori         $a1, $a1, 0x9B0B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39691);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3058) {
            ctx->pc = 0x3B3088u;
            goto label_3b3088;
        }
    }
    ctx->pc = 0x3B3060u;
label_3b3060:
    // 0x3b3060: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3b3060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3b3064:
    // 0x3b3064: 0xc0e9666  jal         func_3A5998
label_3b3068:
    if (ctx->pc == 0x3B3068u) {
        ctx->pc = 0x3B3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3064u;
        // 0x3b3068: 0x24a52190  addiu       $a1, $a1, 0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B306Cu;
        goto label_3b306c;
    }
    ctx->pc = 0x3B3064u;
    SET_GPR_U32(ctx, 31, 0x3B306Cu);
    ctx->pc = 0x3B3068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3064u;
    // 0x3b3068: 0x24a52190  addiu       $a1, $a1, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B3064u, 0x3B306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B306Cu;
label_3b306c:
    // 0x3b306c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b3070:
    if (ctx->pc == 0x3B3070u) {
        ctx->pc = 0x3B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B306Cu;
        // 0x3b3070: 0x3c056bad  lui         $a1, 0x6BAD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27565 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3074u;
        goto label_3b3074;
    }
    ctx->pc = 0x3B306Cu;
    {
        const bool branch_taken_0x3b306c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B306Cu;
        // 0x3b3070: 0x3c056bad  lui         $a1, 0x6BAD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27565 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b306c) {
            ctx->pc = 0x3B3080u;
            goto label_3b3080;
        }
    }
    ctx->pc = 0x3B3074u;
label_3b3074:
    // 0x3b3074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3078:
    // 0x3b3078: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b307c:
    if (ctx->pc == 0x3B307Cu) {
        ctx->pc = 0x3B307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3078u;
        // 0x3b307c: 0x34a5cab1  ori         $a1, $a1, 0xCAB1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51889);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3080u;
        goto label_3b3080;
    }
    ctx->pc = 0x3B3078u;
    {
        const bool branch_taken_0x3b3078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3078u;
        // 0x3b307c: 0x34a5cab1  ori         $a1, $a1, 0xCAB1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51889);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3078) {
            ctx->pc = 0x3B3088u;
            goto label_3b3088;
        }
    }
    ctx->pc = 0x3B3080u;
label_3b3080:
    // 0x3b3080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3084:
    // 0x3b3084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b3084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3088:
    // 0x3b3088: 0xc0e9132  jal         func_3A44C8
label_3b308c:
    if (ctx->pc == 0x3B308Cu) {
        ctx->pc = 0x3B3090u;
        goto label_3b3090;
    }
    ctx->pc = 0x3B3088u;
    SET_GPR_U32(ctx, 31, 0x3B3090u);
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B3088u, 0x3B3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3090u;
label_3b3090:
    // 0x3b3090: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3b3090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3b3094:
    // 0x3b3094: 0x260521d0  addiu       $a1, $s0, 0x21D0
    ctx->pc = 0x3b3094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8656));
label_3b3098:
    // 0x3b3098: 0xc0e9666  jal         func_3A5998
label_3b309c:
    if (ctx->pc == 0x3B309Cu) {
        ctx->pc = 0x3B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3098u;
        // 0x3b309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30A0u;
        goto label_3b30a0;
    }
    ctx->pc = 0x3B3098u;
    SET_GPR_U32(ctx, 31, 0x3B30A0u);
    ctx->pc = 0x3B309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3098u;
    // 0x3b309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3B3098u, 0x3B30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30A0u;
label_3b30a0:
    // 0x3b30a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b30a4:
    if (ctx->pc == 0x3B30A4u) {
        ctx->pc = 0x3B30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30A0u;
        // 0x3b30a4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30A8u;
        goto label_3b30a8;
    }
    ctx->pc = 0x3B30A0u;
    {
        const bool branch_taken_0x3b30a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30A0u;
        // 0x3b30a4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b30a0) {
            ctx->pc = 0x3B30C4u;
            goto label_3b30c4;
        }
    }
    ctx->pc = 0x3B30A8u;
label_3b30a8:
    // 0x3b30a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3b30a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3b30ac:
    // 0x3b30ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b30acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b30b0:
    // 0x3b30b0: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x3b30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_3b30b4:
    // 0x3b30b4: 0xc0e94fc  jal         func_3A53F0
label_3b30b8:
    if (ctx->pc == 0x3B30B8u) {
        ctx->pc = 0x3B30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30B4u;
        // 0x3b30b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30BCu;
        goto label_3b30bc;
    }
    ctx->pc = 0x3B30B4u;
    SET_GPR_U32(ctx, 31, 0x3B30BCu);
    ctx->pc = 0x3B30B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30B4u;
    // 0x3b30b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B30B4u, 0x3B30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30BCu;
label_3b30bc:
    // 0x3b30bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b30c0:
    if (ctx->pc == 0x3B30C0u) {
        ctx->pc = 0x3B30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30BCu;
        // 0x3b30c0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30C4u;
        goto label_3b30c4;
    }
    ctx->pc = 0x3B30BCu;
    {
        const bool branch_taken_0x3b30bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30BCu;
        // 0x3b30c0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b30bc) {
            ctx->pc = 0x3B30C8u;
            goto label_3b30c8;
        }
    }
    ctx->pc = 0x3B30C4u;
label_3b30c4:
    // 0x3b30c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3b30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3b30c8:
    // 0x3b30c8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b30cc:
    // 0x3b30cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b30ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b30d0:
    // 0x3b30d0: 0xc0e8dee  jal         func_3A37B8
label_3b30d4:
    if (ctx->pc == 0x3B30D4u) {
        ctx->pc = 0x3B30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30D0u;
        // 0x3b30d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30D8u;
        goto label_3b30d8;
    }
    ctx->pc = 0x3B30D0u;
    SET_GPR_U32(ctx, 31, 0x3B30D8u);
    ctx->pc = 0x3B30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30D0u;
    // 0x3b30d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B30D0u, 0x3B30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30D8u;
label_3b30d8:
    // 0x3b30d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b30d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b30dc:
    // 0x3b30dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b30e0:
    // 0x3b30e0: 0xc0e9bb2  jal         func_3A6EC8
label_3b30e4:
    if (ctx->pc == 0x3B30E4u) {
        ctx->pc = 0x3B30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30E0u;
        // 0x3b30e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30E8u;
        goto label_3b30e8;
    }
    ctx->pc = 0x3B30E0u;
    SET_GPR_U32(ctx, 31, 0x3B30E8u);
    ctx->pc = 0x3B30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30E0u;
    // 0x3b30e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B30E0u, 0x3B30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30E8u;
label_3b30e8:
    // 0x3b30e8: 0xae3300d8  sw          $s3, 0xD8($s1)
    ctx->pc = 0x3b30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 19));
label_3b30ec:
    // 0x3b30ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b30ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b30f0:
    // 0x3b30f0: 0xc0e91da  jal         func_3A4768
label_3b30f4:
    if (ctx->pc == 0x3B30F4u) {
        ctx->pc = 0x3B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30F0u;
        // 0x3b30f4: 0xae3400dc  sw          $s4, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B30F8u;
        goto label_3b30f8;
    }
    ctx->pc = 0x3B30F0u;
    SET_GPR_U32(ctx, 31, 0x3B30F8u);
    ctx->pc = 0x3B30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30F0u;
    // 0x3b30f4: 0xae3400dc  sw          $s4, 0xDC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B30F0u, 0x3B30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30F8u;
label_3b30f8:
    // 0x3b30f8: 0xc0e91da  jal         func_3A4768
label_3b30fc:
    if (ctx->pc == 0x3B30FCu) {
        ctx->pc = 0x3B30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30F8u;
        // 0x3b30fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3100u;
        goto label_3b3100;
    }
    ctx->pc = 0x3B30F8u;
    SET_GPR_U32(ctx, 31, 0x3B3100u);
    ctx->pc = 0x3B30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30F8u;
    // 0x3b30fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B30F8u, 0x3B3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3100u;
label_3b3100:
    // 0x3b3100: 0xc0e927a  jal         func_3A49E8
label_3b3104:
    if (ctx->pc == 0x3B3104u) {
        ctx->pc = 0x3B3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3100u;
        // 0x3b3104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3108u;
        goto label_3b3108;
    }
    ctx->pc = 0x3B3100u;
    SET_GPR_U32(ctx, 31, 0x3B3108u);
    ctx->pc = 0x3B3104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3100u;
    // 0x3b3104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B3100u, 0x3B3108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3108u;
label_3b3108:
    // 0x3b3108: 0xc0e927a  jal         func_3A49E8
label_3b310c:
    if (ctx->pc == 0x3B310Cu) {
        ctx->pc = 0x3B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3108u;
        // 0x3b310c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3110u;
        goto label_3b3110;
    }
    ctx->pc = 0x3B3108u;
    SET_GPR_U32(ctx, 31, 0x3B3110u);
    ctx->pc = 0x3B310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3108u;
    // 0x3b310c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B3108u, 0x3B3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3110u;
label_3b3110:
    // 0x3b3110: 0xae3500e0  sw          $s5, 0xE0($s1)
    ctx->pc = 0x3b3110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 21));
label_3b3114:
    // 0x3b3114: 0xc0e92cc  jal         func_3A4B30
label_3b3118:
    if (ctx->pc == 0x3B3118u) {
        ctx->pc = 0x3B3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3114u;
        // 0x3b3118: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B311Cu;
        goto label_3b311c;
    }
    ctx->pc = 0x3B3114u;
    SET_GPR_U32(ctx, 31, 0x3B311Cu);
    ctx->pc = 0x3B3118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3114u;
    // 0x3b3118: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B30u, 0x3B3114u, 0x3B311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B311Cu;
label_3b311c:
    // 0x3b311c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x3b311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_3b3120:
    // 0x3b3120: 0xc0e9290  jal         func_3A4A40
label_3b3124:
    if (ctx->pc == 0x3B3124u) {
        ctx->pc = 0x3B3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3120u;
        // 0x3b3124: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3128u;
        goto label_3b3128;
    }
    ctx->pc = 0x3B3120u;
    SET_GPR_U32(ctx, 31, 0x3B3128u);
    ctx->pc = 0x3B3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3120u;
    // 0x3b3124: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B3120u, 0x3B3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3128u;
label_3b3128:
    // 0x3b3128: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x3b3128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_3b312c:
    // 0x3b312c: 0xc0e9290  jal         func_3A4A40
label_3b3130:
    if (ctx->pc == 0x3B3130u) {
        ctx->pc = 0x3B3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B312Cu;
        // 0x3b3130: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3134u;
        goto label_3b3134;
    }
    ctx->pc = 0x3B312Cu;
    SET_GPR_U32(ctx, 31, 0x3B3134u);
    ctx->pc = 0x3B3130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B312Cu;
    // 0x3b3130: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B312Cu, 0x3B3134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3134u;
label_3b3134:
    // 0x3b3134: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b3134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3138:
    // 0x3b3138: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b3138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b313c:
    // 0x3b313c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b313cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b3140:
    // 0x3b3140: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b3140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b3144:
    // 0x3b3144: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b3144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3148:
    // 0x3b3148: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b3148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b314c:
    // 0x3b314c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3150:
    // 0x3b3150: 0x3e00008  jr          $ra
label_3b3154:
    if (ctx->pc == 0x3B3154u) {
        ctx->pc = 0x3B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3150u;
        // 0x3b3154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3158u;
        goto label_fallthrough_0x3b3150;
    }
    ctx->pc = 0x3B3150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3150u;
        // 0x3b3154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b3150:
    ctx->pc = 0x3B3158u;
}
