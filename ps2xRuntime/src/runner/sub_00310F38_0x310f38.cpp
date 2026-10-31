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

// Function: sub_00310F38
// Address: 0x310f38 - 0x3111a8
void sub_00310F38_0x310f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310F38_0x310f38");
#endif

    switch (ctx->pc) {
        case 0x310f38u: goto label_310f38;
        case 0x310f3cu: goto label_310f3c;
        case 0x310f40u: goto label_310f40;
        case 0x310f44u: goto label_310f44;
        case 0x310f48u: goto label_310f48;
        case 0x310f4cu: goto label_310f4c;
        case 0x310f50u: goto label_310f50;
        case 0x310f54u: goto label_310f54;
        case 0x310f58u: goto label_310f58;
        case 0x310f5cu: goto label_310f5c;
        case 0x310f60u: goto label_310f60;
        case 0x310f64u: goto label_310f64;
        case 0x310f68u: goto label_310f68;
        case 0x310f6cu: goto label_310f6c;
        case 0x310f70u: goto label_310f70;
        case 0x310f74u: goto label_310f74;
        case 0x310f78u: goto label_310f78;
        case 0x310f7cu: goto label_310f7c;
        case 0x310f80u: goto label_310f80;
        case 0x310f84u: goto label_310f84;
        case 0x310f88u: goto label_310f88;
        case 0x310f8cu: goto label_310f8c;
        case 0x310f90u: goto label_310f90;
        case 0x310f94u: goto label_310f94;
        case 0x310f98u: goto label_310f98;
        case 0x310f9cu: goto label_310f9c;
        case 0x310fa0u: goto label_310fa0;
        case 0x310fa4u: goto label_310fa4;
        case 0x310fa8u: goto label_310fa8;
        case 0x310facu: goto label_310fac;
        case 0x310fb0u: goto label_310fb0;
        case 0x310fb4u: goto label_310fb4;
        case 0x310fb8u: goto label_310fb8;
        case 0x310fbcu: goto label_310fbc;
        case 0x310fc0u: goto label_310fc0;
        case 0x310fc4u: goto label_310fc4;
        case 0x310fc8u: goto label_310fc8;
        case 0x310fccu: goto label_310fcc;
        case 0x310fd0u: goto label_310fd0;
        case 0x310fd4u: goto label_310fd4;
        case 0x310fd8u: goto label_310fd8;
        case 0x310fdcu: goto label_310fdc;
        case 0x310fe0u: goto label_310fe0;
        case 0x310fe4u: goto label_310fe4;
        case 0x310fe8u: goto label_310fe8;
        case 0x310fecu: goto label_310fec;
        case 0x310ff0u: goto label_310ff0;
        case 0x310ff4u: goto label_310ff4;
        case 0x310ff8u: goto label_310ff8;
        case 0x310ffcu: goto label_310ffc;
        case 0x311000u: goto label_311000;
        case 0x311004u: goto label_311004;
        case 0x311008u: goto label_311008;
        case 0x31100cu: goto label_31100c;
        case 0x311010u: goto label_311010;
        case 0x311014u: goto label_311014;
        case 0x311018u: goto label_311018;
        case 0x31101cu: goto label_31101c;
        case 0x311020u: goto label_311020;
        case 0x311024u: goto label_311024;
        case 0x311028u: goto label_311028;
        case 0x31102cu: goto label_31102c;
        case 0x311030u: goto label_311030;
        case 0x311034u: goto label_311034;
        case 0x311038u: goto label_311038;
        case 0x31103cu: goto label_31103c;
        case 0x311040u: goto label_311040;
        case 0x311044u: goto label_311044;
        case 0x311048u: goto label_311048;
        case 0x31104cu: goto label_31104c;
        case 0x311050u: goto label_311050;
        case 0x311054u: goto label_311054;
        case 0x311058u: goto label_311058;
        case 0x31105cu: goto label_31105c;
        case 0x311060u: goto label_311060;
        case 0x311064u: goto label_311064;
        case 0x311068u: goto label_311068;
        case 0x31106cu: goto label_31106c;
        case 0x311070u: goto label_311070;
        case 0x311074u: goto label_311074;
        case 0x311078u: goto label_311078;
        case 0x31107cu: goto label_31107c;
        case 0x311080u: goto label_311080;
        case 0x311084u: goto label_311084;
        case 0x311088u: goto label_311088;
        case 0x31108cu: goto label_31108c;
        case 0x311090u: goto label_311090;
        case 0x311094u: goto label_311094;
        case 0x311098u: goto label_311098;
        case 0x31109cu: goto label_31109c;
        case 0x3110a0u: goto label_3110a0;
        case 0x3110a4u: goto label_3110a4;
        case 0x3110a8u: goto label_3110a8;
        case 0x3110acu: goto label_3110ac;
        case 0x3110b0u: goto label_3110b0;
        case 0x3110b4u: goto label_3110b4;
        case 0x3110b8u: goto label_3110b8;
        case 0x3110bcu: goto label_3110bc;
        case 0x3110c0u: goto label_3110c0;
        case 0x3110c4u: goto label_3110c4;
        case 0x3110c8u: goto label_3110c8;
        case 0x3110ccu: goto label_3110cc;
        case 0x3110d0u: goto label_3110d0;
        case 0x3110d4u: goto label_3110d4;
        case 0x3110d8u: goto label_3110d8;
        case 0x3110dcu: goto label_3110dc;
        case 0x3110e0u: goto label_3110e0;
        case 0x3110e4u: goto label_3110e4;
        case 0x3110e8u: goto label_3110e8;
        case 0x3110ecu: goto label_3110ec;
        case 0x3110f0u: goto label_3110f0;
        case 0x3110f4u: goto label_3110f4;
        case 0x3110f8u: goto label_3110f8;
        case 0x3110fcu: goto label_3110fc;
        case 0x311100u: goto label_311100;
        case 0x311104u: goto label_311104;
        case 0x311108u: goto label_311108;
        case 0x31110cu: goto label_31110c;
        case 0x311110u: goto label_311110;
        case 0x311114u: goto label_311114;
        case 0x311118u: goto label_311118;
        case 0x31111cu: goto label_31111c;
        case 0x311120u: goto label_311120;
        case 0x311124u: goto label_311124;
        case 0x311128u: goto label_311128;
        case 0x31112cu: goto label_31112c;
        case 0x311130u: goto label_311130;
        case 0x311134u: goto label_311134;
        case 0x311138u: goto label_311138;
        case 0x31113cu: goto label_31113c;
        case 0x311140u: goto label_311140;
        case 0x311144u: goto label_311144;
        case 0x311148u: goto label_311148;
        case 0x31114cu: goto label_31114c;
        case 0x311150u: goto label_311150;
        case 0x311154u: goto label_311154;
        case 0x311158u: goto label_311158;
        case 0x31115cu: goto label_31115c;
        case 0x311160u: goto label_311160;
        case 0x311164u: goto label_311164;
        case 0x311168u: goto label_311168;
        case 0x31116cu: goto label_31116c;
        case 0x311170u: goto label_311170;
        case 0x311174u: goto label_311174;
        case 0x311178u: goto label_311178;
        case 0x31117cu: goto label_31117c;
        case 0x311180u: goto label_311180;
        case 0x311184u: goto label_311184;
        case 0x311188u: goto label_311188;
        case 0x31118cu: goto label_31118c;
        case 0x311190u: goto label_311190;
        case 0x311194u: goto label_311194;
        case 0x311198u: goto label_311198;
        case 0x31119cu: goto label_31119c;
        case 0x3111a0u: goto label_3111a0;
        case 0x3111a4u: goto label_3111a4;
        default: break;
    }

    ctx->pc = 0x310f38u;

label_310f38:
    // 0x310f38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x310f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_310f3c:
    // 0x310f3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x310f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_310f40:
    // 0x310f40: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x310f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_310f44:
    // 0x310f44: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x310f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_310f48:
    // 0x310f48: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x310f48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310f4c:
    // 0x310f4c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x310f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_310f50:
    // 0x310f50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x310f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_310f54:
    // 0x310f54: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x310f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_310f58:
    // 0x310f58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x310f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_310f5c:
    // 0x310f5c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x310f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_310f60:
    // 0x310f60: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x310f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_310f64:
    // 0x310f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_310f68:
    // 0x310f68: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x310f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_310f6c:
    // 0x310f6c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x310f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_310f70:
    // 0x310f70: 0xc05959e  jal         func_165678
label_310f74:
    if (ctx->pc == 0x310F74u) {
        ctx->pc = 0x310F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F70u;
        // 0x310f74: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310F78u;
        goto label_310f78;
    }
    ctx->pc = 0x310F70u;
    SET_GPR_U32(ctx, 31, 0x310F78u);
    ctx->pc = 0x310F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F70u;
    // 0x310f74: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x310F70u, 0x310F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F78u;
label_310f78:
    // 0x310f78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x310f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310f7c:
    // 0x310f7c: 0x12a0007d  beqz        $s5, . + 4 + (0x7D << 2)
label_310f80:
    if (ctx->pc == 0x310F80u) {
        ctx->pc = 0x310F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F7Cu;
        // 0x310f80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310F84u;
        goto label_310f84;
    }
    ctx->pc = 0x310F7Cu;
    {
        const bool branch_taken_0x310f7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F7Cu;
        // 0x310f80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f7c) {
            ctx->pc = 0x311174u;
            goto label_311174;
        }
    }
    ctx->pc = 0x310F84u;
label_310f84:
    // 0x310f84: 0xc08750a  jal         func_21D428
label_310f88:
    if (ctx->pc == 0x310F88u) {
        ctx->pc = 0x310F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F84u;
        // 0x310f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310F8Cu;
        goto label_310f8c;
    }
    ctx->pc = 0x310F84u;
    SET_GPR_U32(ctx, 31, 0x310F8Cu);
    ctx->pc = 0x310F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F84u;
    // 0x310f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x310F84u, 0x310F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F8Cu;
label_310f8c:
    // 0x310f8c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x310f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_310f90:
    // 0x310f90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x310f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_310f94:
    // 0x310f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310f98:
    // 0x310f98: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x310f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_310f9c:
    // 0x310f9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x310f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_310fa0:
    // 0x310fa0: 0xc0a5776  jal         func_295DD8
label_310fa4:
    if (ctx->pc == 0x310FA4u) {
        ctx->pc = 0x310FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FA0u;
        // 0x310fa4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FA8u;
        goto label_310fa8;
    }
    ctx->pc = 0x310FA0u;
    SET_GPR_U32(ctx, 31, 0x310FA8u);
    ctx->pc = 0x310FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FA0u;
    // 0x310fa4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x310FA0u, 0x310FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FA8u;
label_310fa8:
    // 0x310fa8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x310fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_310fac:
    // 0x310fac: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x310facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_310fb0:
    // 0x310fb0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x310fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_310fb4:
    // 0x310fb4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x310fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_310fb8:
    // 0x310fb8: 0xc137826  jal         func_4DE098
label_310fbc:
    if (ctx->pc == 0x310FBCu) {
        ctx->pc = 0x310FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FB8u;
        // 0x310fbc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FC0u;
        goto label_310fc0;
    }
    ctx->pc = 0x310FB8u;
    SET_GPR_U32(ctx, 31, 0x310FC0u);
    ctx->pc = 0x310FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FB8u;
    // 0x310fbc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310FB8u, 0x310FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FC0u;
label_310fc0:
    // 0x310fc0: 0xc0e409a  jal         func_390268
label_310fc4:
    if (ctx->pc == 0x310FC4u) {
        ctx->pc = 0x310FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FC0u;
        // 0x310fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FC8u;
        goto label_310fc8;
    }
    ctx->pc = 0x310FC0u;
    SET_GPR_U32(ctx, 31, 0x310FC8u);
    ctx->pc = 0x310FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FC0u;
    // 0x310fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310FC0u, 0x310FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FC8u;
label_310fc8:
    // 0x310fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310fcc:
    // 0x310fcc: 0x52000066  beql        $s0, $zero, . + 4 + (0x66 << 2)
label_310fd0:
    if (ctx->pc == 0x310FD0u) {
        ctx->pc = 0x310FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FCCu;
        // 0x310fd0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FD4u;
        goto label_310fd4;
    }
    ctx->pc = 0x310FCCu;
    {
        const bool branch_taken_0x310fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x310fcc) {
            ctx->pc = 0x310FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310FCCu;
            // 0x310fd0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311168u;
            goto label_311168;
        }
    }
    ctx->pc = 0x310FD4u;
label_310fd4:
    // 0x310fd4: 0x52150064  beql        $s0, $s5, . + 4 + (0x64 << 2)
label_310fd8:
    if (ctx->pc == 0x310FD8u) {
        ctx->pc = 0x310FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FD4u;
        // 0x310fd8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FDCu;
        goto label_310fdc;
    }
    ctx->pc = 0x310FD4u;
    {
        const bool branch_taken_0x310fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x310fd4) {
            ctx->pc = 0x310FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310FD4u;
            // 0x310fd8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311168u;
            goto label_311168;
        }
    }
    ctx->pc = 0x310FDCu;
label_310fdc:
    // 0x310fdc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x310fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_310fe0:
    // 0x310fe0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x310fe0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_310fe4:
    // 0x310fe4: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_310fe8:
    if (ctx->pc == 0x310FE8u) {
        ctx->pc = 0x310FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FE4u;
        // 0x310fe8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FECu;
        goto label_310fec;
    }
    ctx->pc = 0x310FE4u;
    {
        const bool branch_taken_0x310fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FE4u;
        // 0x310fe8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fe4) {
            ctx->pc = 0x311164u;
            goto label_311164;
        }
    }
    ctx->pc = 0x310FECu;
label_310fec:
    // 0x310fec: 0xc089f98  jal         func_227E60
label_310ff0:
    if (ctx->pc == 0x310FF0u) {
        ctx->pc = 0x310FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FECu;
        // 0x310ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FF4u;
        goto label_310ff4;
    }
    ctx->pc = 0x310FECu;
    SET_GPR_U32(ctx, 31, 0x310FF4u);
    ctx->pc = 0x310FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FECu;
    // 0x310ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x310FECu, 0x310FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FF4u;
label_310ff4:
    // 0x310ff4: 0x5056005c  beql        $v0, $s6, . + 4 + (0x5C << 2)
label_310ff8:
    if (ctx->pc == 0x310FF8u) {
        ctx->pc = 0x310FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FF4u;
        // 0x310ff8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310FFCu;
        goto label_310ffc;
    }
    ctx->pc = 0x310FF4u;
    {
        const bool branch_taken_0x310ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x310ff4) {
            ctx->pc = 0x310FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310FF4u;
            // 0x310ff8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311168u;
            goto label_311168;
        }
    }
    ctx->pc = 0x310FFCu;
label_310ffc:
    // 0x310ffc: 0xc087502  jal         func_21D408
label_311000:
    if (ctx->pc == 0x311000u) {
        ctx->pc = 0x311000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FFCu;
        // 0x311000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311004u;
        goto label_311004;
    }
    ctx->pc = 0x310FFCu;
    SET_GPR_U32(ctx, 31, 0x311004u);
    ctx->pc = 0x311000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FFCu;
    // 0x311000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310FFCu, 0x311004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311004u;
label_311004:
    // 0x311004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x311004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311008:
    // 0x311008: 0xc0a3630  jal         func_28D8C0
label_31100c:
    if (ctx->pc == 0x31100Cu) {
        ctx->pc = 0x31100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311008u;
        // 0x31100c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311010u;
        goto label_311010;
    }
    ctx->pc = 0x311008u;
    SET_GPR_U32(ctx, 31, 0x311010u);
    ctx->pc = 0x31100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311008u;
    // 0x31100c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x311008u, 0x311010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311010u;
label_311010:
    // 0x311010: 0xc0a3628  jal         func_28D8A0
label_311014:
    if (ctx->pc == 0x311014u) {
        ctx->pc = 0x311014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311010u;
        // 0x311014: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311018u;
        goto label_311018;
    }
    ctx->pc = 0x311010u;
    SET_GPR_U32(ctx, 31, 0x311018u);
    ctx->pc = 0x311014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311010u;
    // 0x311014: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x311010u, 0x311018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311018u;
label_311018:
    // 0x311018: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x311018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31101c:
    // 0x31101c: 0x1602003e  bne         $s0, $v0, . + 4 + (0x3E << 2)
label_311020:
    if (ctx->pc == 0x311020u) {
        ctx->pc = 0x311020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31101Cu;
        // 0x311020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311024u;
        goto label_311024;
    }
    ctx->pc = 0x31101Cu;
    {
        const bool branch_taken_0x31101c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x311020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31101Cu;
        // 0x311020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31101c) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x311024u;
label_311024:
    // 0x311024: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x311024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_311028:
    // 0x311028: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
label_31102c:
    if (ctx->pc == 0x31102Cu) {
        ctx->pc = 0x31102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311028u;
        // 0x31102c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311030u;
        goto label_311030;
    }
    ctx->pc = 0x311028u;
    {
        const bool branch_taken_0x311028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311028u;
        // 0x31102c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311028) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x311030u;
label_311030:
    // 0x311030: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x311030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_311034:
    // 0x311034: 0xc0e409a  jal         func_390268
label_311038:
    if (ctx->pc == 0x311038u) {
        ctx->pc = 0x311038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311034u;
        // 0x311038: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31103Cu;
        goto label_31103c;
    }
    ctx->pc = 0x311034u;
    SET_GPR_U32(ctx, 31, 0x31103Cu);
    ctx->pc = 0x311038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311034u;
    // 0x311038: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x311034u, 0x31103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31103Cu;
label_31103c:
    // 0x31103c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311040:
    // 0x311040: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_311044:
    if (ctx->pc == 0x311044u) {
        ctx->pc = 0x311048u;
        goto label_311048;
    }
    ctx->pc = 0x311040u;
    {
        const bool branch_taken_0x311040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x311040) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x311048u;
label_311048:
    // 0x311048: 0xc087502  jal         func_21D408
label_31104c:
    if (ctx->pc == 0x31104Cu) {
        ctx->pc = 0x31104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311048u;
        // 0x31104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311050u;
        goto label_311050;
    }
    ctx->pc = 0x311048u;
    SET_GPR_U32(ctx, 31, 0x311050u);
    ctx->pc = 0x31104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311048u;
    // 0x31104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311048u, 0x311050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311050u;
label_311050:
    // 0x311050: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x311050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_311054:
    // 0x311054: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x311054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_311058:
    // 0x311058: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_31105c:
    if (ctx->pc == 0x31105Cu) {
        ctx->pc = 0x31105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311058u;
        // 0x31105c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311060u;
        goto label_311060;
    }
    ctx->pc = 0x311058u;
    {
        const bool branch_taken_0x311058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311058u;
        // 0x31105c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311058) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x311060u;
label_311060:
    // 0x311060: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x311060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_311064:
    // 0x311064: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x311064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_311068:
    // 0x311068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31106c:
    // 0x31106c: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x31106cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_311070:
    // 0x311070: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x311070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_311074:
    // 0x311074: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x311074u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_311078:
    // 0x311078: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x311078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_31107c:
    // 0x31107c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31107cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_311080:
    // 0x311080: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x311080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_311084:
    // 0x311084: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x311084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_311088:
    // 0x311088: 0xc1067b8  jal         func_419EE0
label_31108c:
    if (ctx->pc == 0x31108Cu) {
        ctx->pc = 0x31108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311088u;
        // 0x31108c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311090u;
        goto label_311090;
    }
    ctx->pc = 0x311088u;
    SET_GPR_U32(ctx, 31, 0x311090u);
    ctx->pc = 0x31108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311088u;
    // 0x31108c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x311088u, 0x311090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311090u;
label_311090:
    // 0x311090: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x311090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311094:
    // 0x311094: 0x12510020  beq         $s2, $s1, . + 4 + (0x20 << 2)
label_311098:
    if (ctx->pc == 0x311098u) {
        ctx->pc = 0x31109Cu;
        goto label_31109c;
    }
    ctx->pc = 0x311094u;
    {
        const bool branch_taken_0x311094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x311094) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x31109Cu;
label_31109c:
    // 0x31109c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x31109cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3110a0:
    // 0x3110a0: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x3110a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_3110a4:
    // 0x3110a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3110a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3110a8:
    // 0x3110a8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3110a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3110ac:
    // 0x3110ac: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x3110acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_3110b0:
    // 0x3110b0: 0xc0cdb38  jal         func_336CE0
label_3110b4:
    if (ctx->pc == 0x3110B4u) {
        ctx->pc = 0x3110B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110B0u;
        // 0x3110b4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3110B8u;
        goto label_3110b8;
    }
    ctx->pc = 0x3110B0u;
    SET_GPR_U32(ctx, 31, 0x3110B8u);
    ctx->pc = 0x3110B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110B0u;
    // 0x3110b4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3110B0u, 0x3110B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3110B8u;
label_3110b8:
    // 0x3110b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3110b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3110bc:
    // 0x3110bc: 0x0  nop
    ctx->pc = 0x3110bcu;
    // NOP
label_3110c0:
    // 0x3110c0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_3110c4:
    if (ctx->pc == 0x3110C4u) {
        ctx->pc = 0x3110C8u;
        goto label_3110c8;
    }
    ctx->pc = 0x3110C0u;
    {
        const bool branch_taken_0x3110c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3110c0) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x3110C8u;
label_3110c8:
    // 0x3110c8: 0xc0a4e54  jal         func_293950
label_3110cc:
    if (ctx->pc == 0x3110CCu) {
        ctx->pc = 0x3110D0u;
        goto label_3110d0;
    }
    ctx->pc = 0x3110C8u;
    SET_GPR_U32(ctx, 31, 0x3110D0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3110C8u, 0x3110D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3110D0u;
label_3110d0:
    // 0x3110d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3110d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3110d4:
    // 0x3110d4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3110d8:
    if (ctx->pc == 0x3110D8u) {
        ctx->pc = 0x3110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110D4u;
        // 0x3110d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3110DCu;
        goto label_3110dc;
    }
    ctx->pc = 0x3110D4u;
    {
        const bool branch_taken_0x3110d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110D4u;
        // 0x3110d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110d4) {
            ctx->pc = 0x311108u;
            goto label_311108;
        }
    }
    ctx->pc = 0x3110DCu;
label_3110dc:
    // 0x3110dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3110dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3110e0:
    // 0x3110e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3110e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3110e4:
    // 0x3110e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3110e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3110e8:
    // 0x3110e8: 0x40f809  jalr        $v0
label_3110ec:
    if (ctx->pc == 0x3110ECu) {
        ctx->pc = 0x3110ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110E8u;
        // 0x3110ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3110F0u;
        goto label_3110f0;
    }
    ctx->pc = 0x3110E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3110F0u);
        ctx->pc = 0x3110ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110E8u;
        // 0x3110ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3110E8u, 0x3110F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3110F0u;
label_3110f0:
    // 0x3110f0: 0xc66c013c  lwc1        $f12, 0x13C($s3)
    ctx->pc = 0x3110f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3110f4:
    // 0x3110f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3110f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3110f8:
    // 0x3110f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3110f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3110fc:
    // 0x3110fc: 0xc0af288  jal         func_2BCA20
label_311100:
    if (ctx->pc == 0x311100u) {
        ctx->pc = 0x311100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110FCu;
        // 0x311100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311104u;
        goto label_311104;
    }
    ctx->pc = 0x3110FCu;
    SET_GPR_U32(ctx, 31, 0x311104u);
    ctx->pc = 0x311100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110FCu;
    // 0x311100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x3110FCu, 0x311104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311104u;
label_311104:
    // 0x311104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311108:
    // 0x311108: 0xc0a35d6  jal         func_28D758
label_31110c:
    if (ctx->pc == 0x31110Cu) {
        ctx->pc = 0x31110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311108u;
        // 0x31110c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311110u;
        goto label_311110;
    }
    ctx->pc = 0x311108u;
    SET_GPR_U32(ctx, 31, 0x311110u);
    ctx->pc = 0x31110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311108u;
    // 0x31110c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x311108u, 0x311110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311110u;
label_311110:
    // 0x311110: 0x10000014  b           . + 4 + (0x14 << 2)
label_311114:
    if (ctx->pc == 0x311114u) {
        ctx->pc = 0x311114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311110u;
        // 0x311114: 0xa3d60018  sb          $s6, 0x18($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311118u;
        goto label_311118;
    }
    ctx->pc = 0x311110u;
    {
        const bool branch_taken_0x311110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311110u;
        // 0x311114: 0xa3d60018  sb          $s6, 0x18($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311110) {
            ctx->pc = 0x311164u;
            goto label_311164;
        }
    }
    ctx->pc = 0x311118u;
label_311118:
    // 0x311118: 0xc0a4e54  jal         func_293950
label_31111c:
    if (ctx->pc == 0x31111Cu) {
        ctx->pc = 0x311120u;
        goto label_311120;
    }
    ctx->pc = 0x311118u;
    SET_GPR_U32(ctx, 31, 0x311120u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x311118u, 0x311120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311120u;
label_311120:
    // 0x311120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311124:
    // 0x311124: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_311128:
    if (ctx->pc == 0x311128u) {
        ctx->pc = 0x311128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311124u;
        // 0x311128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31112Cu;
        goto label_31112c;
    }
    ctx->pc = 0x311124u;
    {
        const bool branch_taken_0x311124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x311124) {
            ctx->pc = 0x311128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311124u;
            // 0x311128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31115Cu;
            goto label_31115c;
        }
    }
    ctx->pc = 0x31112Cu;
label_31112c:
    // 0x31112c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x31112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_311130:
    // 0x311130: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x311130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_311134:
    // 0x311134: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x311134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_311138:
    // 0x311138: 0x40f809  jalr        $v0
label_31113c:
    if (ctx->pc == 0x31113Cu) {
        ctx->pc = 0x31113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311138u;
        // 0x31113c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311140u;
        goto label_311140;
    }
    ctx->pc = 0x311138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311140u);
        ctx->pc = 0x31113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311138u;
        // 0x31113c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311138u, 0x311140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311140u;
label_311140:
    // 0x311140: 0xc7cc0020  lwc1        $f12, 0x20($fp)
    ctx->pc = 0x311140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_311144:
    // 0x311144: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x311144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311148:
    // 0x311148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31114c:
    // 0x31114c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31114cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311150:
    // 0x311150: 0xc0b78e0  jal         func_2DE380
label_311154:
    if (ctx->pc == 0x311154u) {
        ctx->pc = 0x311154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311150u;
        // 0x311154: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311158u;
        goto label_311158;
    }
    ctx->pc = 0x311150u;
    SET_GPR_U32(ctx, 31, 0x311158u);
    ctx->pc = 0x311154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311150u;
    // 0x311154: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x311150u, 0x311158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311158u;
label_311158:
    // 0x311158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31115c:
    // 0x31115c: 0xc0a35d6  jal         func_28D758
label_311160:
    if (ctx->pc == 0x311160u) {
        ctx->pc = 0x311160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31115Cu;
        // 0x311160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311164u;
        goto label_311164;
    }
    ctx->pc = 0x31115Cu;
    SET_GPR_U32(ctx, 31, 0x311164u);
    ctx->pc = 0x311160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31115Cu;
    // 0x311160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31115Cu, 0x311164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311164u;
label_311164:
    // 0x311164: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x311164u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_311168:
    // 0x311168: 0x2ee20010  sltiu       $v0, $s7, 0x10
    ctx->pc = 0x311168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31116c:
    // 0x31116c: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_311170:
    if (ctx->pc == 0x311170u) {
        ctx->pc = 0x311170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31116Cu;
        // 0x311170: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311174u;
        goto label_311174;
    }
    ctx->pc = 0x31116Cu;
    {
        const bool branch_taken_0x31116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31116Cu;
        // 0x311170: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31116c) {
            ctx->pc = 0x310FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310fb8;
        }
    }
    ctx->pc = 0x311174u;
label_311174:
    // 0x311174: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x311174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_311178:
    // 0x311178: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x311178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31117c:
    // 0x31117c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31117cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_311180:
    // 0x311180: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x311180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_311184:
    // 0x311184: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x311184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_311188:
    // 0x311188: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x311188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31118c:
    // 0x31118c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31118cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311190:
    // 0x311190: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x311190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311194:
    // 0x311194: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x311194u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311198:
    // 0x311198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31119c:
    // 0x31119c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x31119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3111a0:
    // 0x3111a0: 0x3e00008  jr          $ra
label_3111a4:
    if (ctx->pc == 0x3111A4u) {
        ctx->pc = 0x3111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111A0u;
        // 0x3111a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3111A8u;
        goto label_fallthrough_0x3111a0;
    }
    ctx->pc = 0x3111A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111A0u;
        // 0x3111a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3111A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3111a0:
    ctx->pc = 0x3111A8u;
}
