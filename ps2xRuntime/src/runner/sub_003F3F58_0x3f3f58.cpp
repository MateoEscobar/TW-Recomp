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

// Function: sub_003F3F58
// Address: 0x3f3f58 - 0x3f4188
void sub_003F3F58_0x3f3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3F58_0x3f3f58");
#endif

    switch (ctx->pc) {
        case 0x3f3f58u: goto label_3f3f58;
        case 0x3f3f5cu: goto label_3f3f5c;
        case 0x3f3f60u: goto label_3f3f60;
        case 0x3f3f64u: goto label_3f3f64;
        case 0x3f3f68u: goto label_3f3f68;
        case 0x3f3f6cu: goto label_3f3f6c;
        case 0x3f3f70u: goto label_3f3f70;
        case 0x3f3f74u: goto label_3f3f74;
        case 0x3f3f78u: goto label_3f3f78;
        case 0x3f3f7cu: goto label_3f3f7c;
        case 0x3f3f80u: goto label_3f3f80;
        case 0x3f3f84u: goto label_3f3f84;
        case 0x3f3f88u: goto label_3f3f88;
        case 0x3f3f8cu: goto label_3f3f8c;
        case 0x3f3f90u: goto label_3f3f90;
        case 0x3f3f94u: goto label_3f3f94;
        case 0x3f3f98u: goto label_3f3f98;
        case 0x3f3f9cu: goto label_3f3f9c;
        case 0x3f3fa0u: goto label_3f3fa0;
        case 0x3f3fa4u: goto label_3f3fa4;
        case 0x3f3fa8u: goto label_3f3fa8;
        case 0x3f3facu: goto label_3f3fac;
        case 0x3f3fb0u: goto label_3f3fb0;
        case 0x3f3fb4u: goto label_3f3fb4;
        case 0x3f3fb8u: goto label_3f3fb8;
        case 0x3f3fbcu: goto label_3f3fbc;
        case 0x3f3fc0u: goto label_3f3fc0;
        case 0x3f3fc4u: goto label_3f3fc4;
        case 0x3f3fc8u: goto label_3f3fc8;
        case 0x3f3fccu: goto label_3f3fcc;
        case 0x3f3fd0u: goto label_3f3fd0;
        case 0x3f3fd4u: goto label_3f3fd4;
        case 0x3f3fd8u: goto label_3f3fd8;
        case 0x3f3fdcu: goto label_3f3fdc;
        case 0x3f3fe0u: goto label_3f3fe0;
        case 0x3f3fe4u: goto label_3f3fe4;
        case 0x3f3fe8u: goto label_3f3fe8;
        case 0x3f3fecu: goto label_3f3fec;
        case 0x3f3ff0u: goto label_3f3ff0;
        case 0x3f3ff4u: goto label_3f3ff4;
        case 0x3f3ff8u: goto label_3f3ff8;
        case 0x3f3ffcu: goto label_3f3ffc;
        case 0x3f4000u: goto label_3f4000;
        case 0x3f4004u: goto label_3f4004;
        case 0x3f4008u: goto label_3f4008;
        case 0x3f400cu: goto label_3f400c;
        case 0x3f4010u: goto label_3f4010;
        case 0x3f4014u: goto label_3f4014;
        case 0x3f4018u: goto label_3f4018;
        case 0x3f401cu: goto label_3f401c;
        case 0x3f4020u: goto label_3f4020;
        case 0x3f4024u: goto label_3f4024;
        case 0x3f4028u: goto label_3f4028;
        case 0x3f402cu: goto label_3f402c;
        case 0x3f4030u: goto label_3f4030;
        case 0x3f4034u: goto label_3f4034;
        case 0x3f4038u: goto label_3f4038;
        case 0x3f403cu: goto label_3f403c;
        case 0x3f4040u: goto label_3f4040;
        case 0x3f4044u: goto label_3f4044;
        case 0x3f4048u: goto label_3f4048;
        case 0x3f404cu: goto label_3f404c;
        case 0x3f4050u: goto label_3f4050;
        case 0x3f4054u: goto label_3f4054;
        case 0x3f4058u: goto label_3f4058;
        case 0x3f405cu: goto label_3f405c;
        case 0x3f4060u: goto label_3f4060;
        case 0x3f4064u: goto label_3f4064;
        case 0x3f4068u: goto label_3f4068;
        case 0x3f406cu: goto label_3f406c;
        case 0x3f4070u: goto label_3f4070;
        case 0x3f4074u: goto label_3f4074;
        case 0x3f4078u: goto label_3f4078;
        case 0x3f407cu: goto label_3f407c;
        case 0x3f4080u: goto label_3f4080;
        case 0x3f4084u: goto label_3f4084;
        case 0x3f4088u: goto label_3f4088;
        case 0x3f408cu: goto label_3f408c;
        case 0x3f4090u: goto label_3f4090;
        case 0x3f4094u: goto label_3f4094;
        case 0x3f4098u: goto label_3f4098;
        case 0x3f409cu: goto label_3f409c;
        case 0x3f40a0u: goto label_3f40a0;
        case 0x3f40a4u: goto label_3f40a4;
        case 0x3f40a8u: goto label_3f40a8;
        case 0x3f40acu: goto label_3f40ac;
        case 0x3f40b0u: goto label_3f40b0;
        case 0x3f40b4u: goto label_3f40b4;
        case 0x3f40b8u: goto label_3f40b8;
        case 0x3f40bcu: goto label_3f40bc;
        case 0x3f40c0u: goto label_3f40c0;
        case 0x3f40c4u: goto label_3f40c4;
        case 0x3f40c8u: goto label_3f40c8;
        case 0x3f40ccu: goto label_3f40cc;
        case 0x3f40d0u: goto label_3f40d0;
        case 0x3f40d4u: goto label_3f40d4;
        case 0x3f40d8u: goto label_3f40d8;
        case 0x3f40dcu: goto label_3f40dc;
        case 0x3f40e0u: goto label_3f40e0;
        case 0x3f40e4u: goto label_3f40e4;
        case 0x3f40e8u: goto label_3f40e8;
        case 0x3f40ecu: goto label_3f40ec;
        case 0x3f40f0u: goto label_3f40f0;
        case 0x3f40f4u: goto label_3f40f4;
        case 0x3f40f8u: goto label_3f40f8;
        case 0x3f40fcu: goto label_3f40fc;
        case 0x3f4100u: goto label_3f4100;
        case 0x3f4104u: goto label_3f4104;
        case 0x3f4108u: goto label_3f4108;
        case 0x3f410cu: goto label_3f410c;
        case 0x3f4110u: goto label_3f4110;
        case 0x3f4114u: goto label_3f4114;
        case 0x3f4118u: goto label_3f4118;
        case 0x3f411cu: goto label_3f411c;
        case 0x3f4120u: goto label_3f4120;
        case 0x3f4124u: goto label_3f4124;
        case 0x3f4128u: goto label_3f4128;
        case 0x3f412cu: goto label_3f412c;
        case 0x3f4130u: goto label_3f4130;
        case 0x3f4134u: goto label_3f4134;
        case 0x3f4138u: goto label_3f4138;
        case 0x3f413cu: goto label_3f413c;
        case 0x3f4140u: goto label_3f4140;
        case 0x3f4144u: goto label_3f4144;
        case 0x3f4148u: goto label_3f4148;
        case 0x3f414cu: goto label_3f414c;
        case 0x3f4150u: goto label_3f4150;
        case 0x3f4154u: goto label_3f4154;
        case 0x3f4158u: goto label_3f4158;
        case 0x3f415cu: goto label_3f415c;
        case 0x3f4160u: goto label_3f4160;
        case 0x3f4164u: goto label_3f4164;
        case 0x3f4168u: goto label_3f4168;
        case 0x3f416cu: goto label_3f416c;
        case 0x3f4170u: goto label_3f4170;
        case 0x3f4174u: goto label_3f4174;
        case 0x3f4178u: goto label_3f4178;
        case 0x3f417cu: goto label_3f417c;
        case 0x3f4180u: goto label_3f4180;
        case 0x3f4184u: goto label_3f4184;
        default: break;
    }

    ctx->pc = 0x3f3f58u;

label_3f3f58:
    // 0x3f3f58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3f3f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3f3f5c:
    // 0x3f3f5c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f3f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3f3f60:
    // 0x3f3f60: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f3f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3f3f64:
    // 0x3f3f64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f3f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f68:
    // 0x3f3f68: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f3f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3f3f6c:
    // 0x3f3f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f3f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f70:
    // 0x3f3f70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f3f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3f3f74:
    // 0x3f3f74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f3f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f3f78:
    // 0x3f3f78: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3f3f78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3f3f7c:
    // 0x3f3f7c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3f3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3f3f80:
    // 0x3f3f80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f3f84:
    // 0x3f3f84: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3f3f84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3f3f88:
    // 0x3f3f88: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3f3f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3f3f8c:
    // 0x3f3f8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f3f90:
    // 0x3f3f90: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f3f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f3f94:
    // 0x3f3f94: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f3f98:
    // 0x3f3f98: 0x40f809  jalr        $v0
label_3f3f9c:
    if (ctx->pc == 0x3F3F9Cu) {
        ctx->pc = 0x3F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F98u;
        // 0x3f3f9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FA0u;
        goto label_3f3fa0;
    }
    ctx->pc = 0x3F3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3FA0u);
        ctx->pc = 0x3F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F98u;
        // 0x3f3f9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3F98u, 0x3F3FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3FA0u;
label_3f3fa0:
    // 0x3f3fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fa4:
    // 0x3f3fa4: 0xc0ea146  jal         func_3A8518
label_3f3fa8:
    if (ctx->pc == 0x3F3FA8u) {
        ctx->pc = 0x3F3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FA4u;
        // 0x3f3fa8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FACu;
        goto label_3f3fac;
    }
    ctx->pc = 0x3F3FA4u;
    SET_GPR_U32(ctx, 31, 0x3F3FACu);
    ctx->pc = 0x3F3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FA4u;
    // 0x3f3fa8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F3FA4u, 0x3F3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FACu;
label_3f3fac:
    // 0x3f3fac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f3facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fb0:
    // 0x3f3fb0: 0xc0ea13a  jal         func_3A84E8
label_3f3fb4:
    if (ctx->pc == 0x3F3FB4u) {
        ctx->pc = 0x3F3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FB0u;
        // 0x3f3fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FB8u;
        goto label_3f3fb8;
    }
    ctx->pc = 0x3F3FB0u;
    SET_GPR_U32(ctx, 31, 0x3F3FB8u);
    ctx->pc = 0x3F3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FB0u;
    // 0x3f3fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3F3FB0u, 0x3F3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FB8u;
label_3f3fb8:
    // 0x3f3fb8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3f3fb8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3f3fbc:
    // 0x3f3fbc: 0xc0ea146  jal         func_3A8518
label_3f3fc0:
    if (ctx->pc == 0x3F3FC0u) {
        ctx->pc = 0x3F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FBCu;
        // 0x3f3fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FC4u;
        goto label_3f3fc4;
    }
    ctx->pc = 0x3F3FBCu;
    SET_GPR_U32(ctx, 31, 0x3F3FC4u);
    ctx->pc = 0x3F3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FBCu;
    // 0x3f3fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F3FBCu, 0x3F3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FC4u;
label_3f3fc4:
    // 0x3f3fc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f3fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fc8:
    // 0x3f3fc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f3fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fcc:
    // 0x3f3fcc: 0xc0ea12a  jal         func_3A84A8
label_3f3fd0:
    if (ctx->pc == 0x3F3FD0u) {
        ctx->pc = 0x3F3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FCCu;
        // 0x3f3fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FD4u;
        goto label_3f3fd4;
    }
    ctx->pc = 0x3F3FCCu;
    SET_GPR_U32(ctx, 31, 0x3F3FD4u);
    ctx->pc = 0x3F3FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FCCu;
    // 0x3f3fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F3FCCu, 0x3F3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FD4u;
label_3f3fd4:
    // 0x3f3fd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f3fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f3fd8:
    // 0x3f3fd8: 0xc0ea12a  jal         func_3A84A8
label_3f3fdc:
    if (ctx->pc == 0x3F3FDCu) {
        ctx->pc = 0x3F3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FD8u;
        // 0x3f3fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FE0u;
        goto label_3f3fe0;
    }
    ctx->pc = 0x3F3FD8u;
    SET_GPR_U32(ctx, 31, 0x3F3FE0u);
    ctx->pc = 0x3F3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FD8u;
    // 0x3f3fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F3FD8u, 0x3F3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FE0u;
label_3f3fe0:
    // 0x3f3fe0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f3fe4:
    // 0x3f3fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fe8:
    // 0x3f3fe8: 0xc1073cc  jal         func_41CF30
label_3f3fec:
    if (ctx->pc == 0x3F3FECu) {
        ctx->pc = 0x3F3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FE8u;
        // 0x3f3fec: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3FF0u;
        goto label_3f3ff0;
    }
    ctx->pc = 0x3F3FE8u;
    SET_GPR_U32(ctx, 31, 0x3F3FF0u);
    ctx->pc = 0x3F3FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FE8u;
    // 0x3f3fec: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3F3FE8u, 0x3F3FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FF0u;
label_3f3ff0:
    // 0x3f3ff0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3f3ff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ff4:
    // 0x3f3ff4: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3f3ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3f3ff8:
    // 0x3f3ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f3ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3f3ffc:
    // 0x3f3ffc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3f4000:
    if (ctx->pc == 0x3F4000u) {
        ctx->pc = 0x3F4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FFCu;
        // 0x3f4000: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4004u;
        goto label_3f4004;
    }
    ctx->pc = 0x3F3FFCu;
    {
        const bool branch_taken_0x3f3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FFCu;
        // 0x3f4000: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ffc) {
            ctx->pc = 0x3F4008u;
            goto label_3f4008;
        }
    }
    ctx->pc = 0x3F4004u;
label_3f4004:
    // 0x3f4004: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f4004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f4008:
    // 0x3f4008: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3f4008u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3f400c:
    // 0x3f400c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3f4010:
    // 0x3f4010: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3f4010u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4014:
    // 0x3f4014: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f4014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f4018:
    // 0x3f4018: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3f4018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3f401c:
    // 0x3f401c: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x3f401cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_3f4020:
    // 0x3f4020: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3f4020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3f4024:
    // 0x3f4024: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3f4024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3f4028:
    // 0x3f4028: 0xc0cd4ee  jal         func_3353B8
label_3f402c:
    if (ctx->pc == 0x3F402Cu) {
        ctx->pc = 0x3F402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4028u;
        // 0x3f402c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4030u;
        goto label_3f4030;
    }
    ctx->pc = 0x3F4028u;
    SET_GPR_U32(ctx, 31, 0x3F4030u);
    ctx->pc = 0x3F402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4028u;
    // 0x3f402c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F4028u, 0x3F4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4030u;
label_3f4030:
    // 0x3f4030: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3f4030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3f4034:
    // 0x3f4034: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f4034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f4038:
    // 0x3f4038: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3f4038u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f403c:
    // 0x3f403c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3f403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_3f4040:
    // 0x3f4040: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f4040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3f4044:
    // 0x3f4044: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3f4044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3f4048:
    // 0x3f4048: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f404c:
    // 0x3f404c: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3f404cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3f4050:
    // 0x3f4050: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3f4050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3f4054:
    // 0x3f4054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4058:
    // 0x3f4058: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f4058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f405c:
    // 0x3f405c: 0xc0cd508  jal         func_335420
label_3f4060:
    if (ctx->pc == 0x3F4060u) {
        ctx->pc = 0x3F4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F405Cu;
        // 0x3f4060: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4064u;
        goto label_3f4064;
    }
    ctx->pc = 0x3F405Cu;
    SET_GPR_U32(ctx, 31, 0x3F4064u);
    ctx->pc = 0x3F4060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F405Cu;
    // 0x3f4060: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F405Cu, 0x3F4064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4064u;
label_3f4064:
    // 0x3f4064: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3f4064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f4068:
    // 0x3f4068: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f4068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f406c:
    // 0x3f406c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3f406cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3f4070:
    // 0x3f4070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4074:
    // 0x3f4074: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f4074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f4078:
    // 0x3f4078: 0xc0cd508  jal         func_335420
label_3f407c:
    if (ctx->pc == 0x3F407Cu) {
        ctx->pc = 0x3F407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4078u;
        // 0x3f407c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4080u;
        goto label_3f4080;
    }
    ctx->pc = 0x3F4078u;
    SET_GPR_U32(ctx, 31, 0x3F4080u);
    ctx->pc = 0x3F407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4078u;
    // 0x3f407c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F4078u, 0x3F4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4080u;
label_3f4080:
    // 0x3f4080: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3f4080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f4084:
    // 0x3f4084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4088:
    // 0x3f4088: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f4088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f408c:
    // 0x3f408c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f408cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f4090:
    // 0x3f4090: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f4090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f4094:
    // 0x3f4094: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3f4094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3f4098:
    // 0x3f4098: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f4098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f409c:
    // 0x3f409c: 0xc0cd508  jal         func_335420
label_3f40a0:
    if (ctx->pc == 0x3F40A0u) {
        ctx->pc = 0x3F40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F409Cu;
        // 0x3f40a0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F40A4u;
        goto label_3f40a4;
    }
    ctx->pc = 0x3F409Cu;
    SET_GPR_U32(ctx, 31, 0x3F40A4u);
    ctx->pc = 0x3F40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F409Cu;
    // 0x3f40a0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F409Cu, 0x3F40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F40A4u;
label_3f40a4:
    // 0x3f40a4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3f40a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f40a8:
    // 0x3f40a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f40a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f40ac:
    // 0x3f40ac: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_3f40b0:
    if (ctx->pc == 0x3F40B0u) {
        ctx->pc = 0x3F40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40ACu;
        // 0x3f40b0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F40B4u;
        goto label_3f40b4;
    }
    ctx->pc = 0x3F40ACu;
    {
        const bool branch_taken_0x3f40ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40ACu;
        // 0x3f40b0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f40ac) {
            ctx->pc = 0x3F40CCu;
            goto label_3f40cc;
        }
    }
    ctx->pc = 0x3F40B4u;
label_3f40b4:
    // 0x3f40b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f40b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f40b8:
    // 0x3f40b8: 0x0  nop
    ctx->pc = 0x3f40b8u;
    // NOP
label_3f40bc:
    // 0x3f40bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f40bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f40c0:
    // 0x3f40c0: 0x0  nop
    ctx->pc = 0x3f40c0u;
    // NOP
label_3f40c4:
    // 0x3f40c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3f40c8:
    if (ctx->pc == 0x3F40C8u) {
        ctx->pc = 0x3F40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40C4u;
        // 0x3f40c8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F40CCu;
        goto label_3f40cc;
    }
    ctx->pc = 0x3F40C4u;
    {
        const bool branch_taken_0x3f40c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f40c4) {
            ctx->pc = 0x3F40C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F40C4u;
            // 0x3f40c8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F40CCu;
            goto label_3f40cc;
        }
    }
    ctx->pc = 0x3F40CCu;
label_3f40cc:
    // 0x3f40cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f40ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f40d0:
    // 0x3f40d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f40d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f40d4:
    // 0x3f40d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f40d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f40d8:
    // 0x3f40d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f40dc:
    // 0x3f40dc: 0x26b0b8b8  addiu       $s0, $s5, -0x4748
    ctx->pc = 0x3f40dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
label_3f40e0:
    // 0x3f40e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3f40e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3f40e4:
    // 0x3f40e4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f40e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f40e8:
    // 0x3f40e8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f40ec:
    // 0x3f40ec: 0x40f809  jalr        $v0
label_3f40f0:
    if (ctx->pc == 0x3F40F0u) {
        ctx->pc = 0x3F40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40ECu;
        // 0x3f40f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F40F4u;
        goto label_3f40f4;
    }
    ctx->pc = 0x3F40ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F40F4u);
        ctx->pc = 0x3F40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40ECu;
        // 0x3f40f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F40ECu, 0x3F40F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F40F4u;
label_3f40f4:
    // 0x3f40f4: 0x4600b307  neg.s       $f12, $f22
    ctx->pc = 0x3f40f4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
label_3f40f8:
    // 0x3f40f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f40f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f40fc:
    // 0x3f40fc: 0xc0cd508  jal         func_335420
label_3f4100:
    if (ctx->pc == 0x3F4100u) {
        ctx->pc = 0x3F4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40FCu;
        // 0x3f4100: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4104u;
        goto label_3f4104;
    }
    ctx->pc = 0x3F40FCu;
    SET_GPR_U32(ctx, 31, 0x3F4104u);
    ctx->pc = 0x3F4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F40FCu;
    // 0x3f4100: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F40FCu, 0x3F4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4104u;
label_3f4104:
    // 0x3f4104: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f4104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f4108:
    // 0x3f4108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f4108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f410c:
    // 0x3f410c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4110:
    // 0x3f4110: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3f4110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3f4114:
    // 0x3f4114: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f4114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f4118:
    // 0x3f4118: 0xc0cd508  jal         func_335420
label_3f411c:
    if (ctx->pc == 0x3F411Cu) {
        ctx->pc = 0x3F411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4118u;
        // 0x3f411c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4120u;
        goto label_3f4120;
    }
    ctx->pc = 0x3F4118u;
    SET_GPR_U32(ctx, 31, 0x3F4120u);
    ctx->pc = 0x3F411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4118u;
    // 0x3f411c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F4118u, 0x3F4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4120u;
label_3f4120:
    // 0x3f4120: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x3f4120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3f4124:
    // 0x3f4124: 0xae3400b4  sw          $s4, 0xB4($s1)
    ctx->pc = 0x3f4124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 20));
label_3f4128:
    // 0x3f4128: 0xae3400b0  sw          $s4, 0xB0($s1)
    ctx->pc = 0x3f4128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 20));
label_3f412c:
    // 0x3f412c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4130:
    // 0x3f4130: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f4130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f4134:
    // 0x3f4134: 0x4614b500  add.s       $f20, $f22, $f20
    ctx->pc = 0x3f4134u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3f4138:
    // 0x3f4138: 0xe63400c0  swc1        $f20, 0xC0($s1)
    ctx->pc = 0x3f4138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3f413c:
    // 0x3f413c: 0xc0e858c  jal         func_3A1630
label_3f4140:
    if (ctx->pc == 0x3F4140u) {
        ctx->pc = 0x3F4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F413Cu;
        // 0x3f4140: 0xe63400bc  swc1        $f20, 0xBC($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4144u;
        goto label_3f4144;
    }
    ctx->pc = 0x3F413Cu;
    SET_GPR_U32(ctx, 31, 0x3F4144u);
    ctx->pc = 0x3F4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F413Cu;
    // 0x3f4140: 0xe63400bc  swc1        $f20, 0xBC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F413Cu, 0x3F4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4144u;
label_3f4144:
    // 0x3f4144: 0xae72001c  sw          $s2, 0x1C($s3)
    ctx->pc = 0x3f4144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 18));
label_3f4148:
    // 0x3f4148: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3f4148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3f414c:
    // 0x3f414c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3f414cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3f4150:
    // 0x3f4150: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3f4150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3f4154:
    // 0x3f4154: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f4154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f4158:
    // 0x3f4158: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f4158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f415c:
    // 0x3f415c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f4160:
    // 0x3f4160: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f4160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f4164:
    // 0x3f4164: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f4164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f4168:
    // 0x3f4168: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3f4168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f416c:
    // 0x3f416c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f4170:
    // 0x3f4170: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x3f4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f4174:
    // 0x3f4174: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3f4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f4178:
    // 0x3f4178: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3f4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f417c:
    // 0x3f417c: 0x3e00008  jr          $ra
label_3f4180:
    if (ctx->pc == 0x3F4180u) {
        ctx->pc = 0x3F4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F417Cu;
        // 0x3f4180: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4184u;
        goto label_3f4184;
    }
    ctx->pc = 0x3F417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F417Cu;
        // 0x3f4180: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4184u;
label_3f4184:
    // 0x3f4184: 0x0  nop
    ctx->pc = 0x3f4184u;
    // NOP
    ctx->pc = 0x3f4188u;
}
