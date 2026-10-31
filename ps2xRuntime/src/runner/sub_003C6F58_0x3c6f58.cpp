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

// Function: sub_003C6F58
// Address: 0x3c6f58 - 0x3c70b0
void sub_003C6F58_0x3c6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6F58_0x3c6f58");
#endif

    switch (ctx->pc) {
        case 0x3c6f58u: goto label_3c6f58;
        case 0x3c6f5cu: goto label_3c6f5c;
        case 0x3c6f60u: goto label_3c6f60;
        case 0x3c6f64u: goto label_3c6f64;
        case 0x3c6f68u: goto label_3c6f68;
        case 0x3c6f6cu: goto label_3c6f6c;
        case 0x3c6f70u: goto label_3c6f70;
        case 0x3c6f74u: goto label_3c6f74;
        case 0x3c6f78u: goto label_3c6f78;
        case 0x3c6f7cu: goto label_3c6f7c;
        case 0x3c6f80u: goto label_3c6f80;
        case 0x3c6f84u: goto label_3c6f84;
        case 0x3c6f88u: goto label_3c6f88;
        case 0x3c6f8cu: goto label_3c6f8c;
        case 0x3c6f90u: goto label_3c6f90;
        case 0x3c6f94u: goto label_3c6f94;
        case 0x3c6f98u: goto label_3c6f98;
        case 0x3c6f9cu: goto label_3c6f9c;
        case 0x3c6fa0u: goto label_3c6fa0;
        case 0x3c6fa4u: goto label_3c6fa4;
        case 0x3c6fa8u: goto label_3c6fa8;
        case 0x3c6facu: goto label_3c6fac;
        case 0x3c6fb0u: goto label_3c6fb0;
        case 0x3c6fb4u: goto label_3c6fb4;
        case 0x3c6fb8u: goto label_3c6fb8;
        case 0x3c6fbcu: goto label_3c6fbc;
        case 0x3c6fc0u: goto label_3c6fc0;
        case 0x3c6fc4u: goto label_3c6fc4;
        case 0x3c6fc8u: goto label_3c6fc8;
        case 0x3c6fccu: goto label_3c6fcc;
        case 0x3c6fd0u: goto label_3c6fd0;
        case 0x3c6fd4u: goto label_3c6fd4;
        case 0x3c6fd8u: goto label_3c6fd8;
        case 0x3c6fdcu: goto label_3c6fdc;
        case 0x3c6fe0u: goto label_3c6fe0;
        case 0x3c6fe4u: goto label_3c6fe4;
        case 0x3c6fe8u: goto label_3c6fe8;
        case 0x3c6fecu: goto label_3c6fec;
        case 0x3c6ff0u: goto label_3c6ff0;
        case 0x3c6ff4u: goto label_3c6ff4;
        case 0x3c6ff8u: goto label_3c6ff8;
        case 0x3c6ffcu: goto label_3c6ffc;
        case 0x3c7000u: goto label_3c7000;
        case 0x3c7004u: goto label_3c7004;
        case 0x3c7008u: goto label_3c7008;
        case 0x3c700cu: goto label_3c700c;
        case 0x3c7010u: goto label_3c7010;
        case 0x3c7014u: goto label_3c7014;
        case 0x3c7018u: goto label_3c7018;
        case 0x3c701cu: goto label_3c701c;
        case 0x3c7020u: goto label_3c7020;
        case 0x3c7024u: goto label_3c7024;
        case 0x3c7028u: goto label_3c7028;
        case 0x3c702cu: goto label_3c702c;
        case 0x3c7030u: goto label_3c7030;
        case 0x3c7034u: goto label_3c7034;
        case 0x3c7038u: goto label_3c7038;
        case 0x3c703cu: goto label_3c703c;
        case 0x3c7040u: goto label_3c7040;
        case 0x3c7044u: goto label_3c7044;
        case 0x3c7048u: goto label_3c7048;
        case 0x3c704cu: goto label_3c704c;
        case 0x3c7050u: goto label_3c7050;
        case 0x3c7054u: goto label_3c7054;
        case 0x3c7058u: goto label_3c7058;
        case 0x3c705cu: goto label_3c705c;
        case 0x3c7060u: goto label_3c7060;
        case 0x3c7064u: goto label_3c7064;
        case 0x3c7068u: goto label_3c7068;
        case 0x3c706cu: goto label_3c706c;
        case 0x3c7070u: goto label_3c7070;
        case 0x3c7074u: goto label_3c7074;
        case 0x3c7078u: goto label_3c7078;
        case 0x3c707cu: goto label_3c707c;
        case 0x3c7080u: goto label_3c7080;
        case 0x3c7084u: goto label_3c7084;
        case 0x3c7088u: goto label_3c7088;
        case 0x3c708cu: goto label_3c708c;
        case 0x3c7090u: goto label_3c7090;
        case 0x3c7094u: goto label_3c7094;
        case 0x3c7098u: goto label_3c7098;
        case 0x3c709cu: goto label_3c709c;
        case 0x3c70a0u: goto label_3c70a0;
        case 0x3c70a4u: goto label_3c70a4;
        case 0x3c70a8u: goto label_3c70a8;
        case 0x3c70acu: goto label_3c70ac;
        default: break;
    }

    ctx->pc = 0x3c6f58u;

label_3c6f58:
    // 0x3c6f58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c6f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3c6f5c:
    // 0x3c6f5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c6f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3c6f60:
    // 0x3c6f60: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c6f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3c6f64:
    // 0x3c6f64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c6f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f68:
    // 0x3c6f68: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3c6f6c:
    // 0x3c6f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c6f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f70:
    // 0x3c6f70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c6f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3c6f74:
    // 0x3c6f74: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3c6f74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3c6f78:
    // 0x3c6f78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c6f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c6f7c:
    // 0x3c6f7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6f80:
    // 0x3c6f80: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c6f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c6f84:
    // 0x3c6f84: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c6f88:
    // 0x3c6f88: 0x40f809  jalr        $v0
label_3c6f8c:
    if (ctx->pc == 0x3C6F8Cu) {
        ctx->pc = 0x3C6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F88u;
        // 0x3c6f8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F90u;
        goto label_3c6f90;
    }
    ctx->pc = 0x3C6F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6F90u);
        ctx->pc = 0x3C6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F88u;
        // 0x3c6f8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6F88u, 0x3C6F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6F90u;
label_3c6f90:
    // 0x3c6f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f94:
    // 0x3c6f94: 0xc0ea14c  jal         func_3A8530
label_3c6f98:
    if (ctx->pc == 0x3C6F98u) {
        ctx->pc = 0x3C6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F94u;
        // 0x3c6f98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F9Cu;
        goto label_3c6f9c;
    }
    ctx->pc = 0x3C6F94u;
    SET_GPR_U32(ctx, 31, 0x3C6F9Cu);
    ctx->pc = 0x3C6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F94u;
    // 0x3c6f98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C6F94u, 0x3C6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F9Cu;
label_3c6f9c:
    // 0x3c6f9c: 0xc0ea13a  jal         func_3A84E8
label_3c6fa0:
    if (ctx->pc == 0x3C6FA0u) {
        ctx->pc = 0x3C6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F9Cu;
        // 0x3c6fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6FA4u;
        goto label_3c6fa4;
    }
    ctx->pc = 0x3C6F9Cu;
    SET_GPR_U32(ctx, 31, 0x3C6FA4u);
    ctx->pc = 0x3C6FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F9Cu;
    // 0x3c6fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C6F9Cu, 0x3C6FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6FA4u;
label_3c6fa4:
    // 0x3c6fa4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c6fa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c6fa8:
    // 0x3c6fa8: 0xc0ea146  jal         func_3A8518
label_3c6fac:
    if (ctx->pc == 0x3C6FACu) {
        ctx->pc = 0x3C6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FA8u;
        // 0x3c6fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6FB0u;
        goto label_3c6fb0;
    }
    ctx->pc = 0x3C6FA8u;
    SET_GPR_U32(ctx, 31, 0x3C6FB0u);
    ctx->pc = 0x3C6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6FA8u;
    // 0x3c6fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C6FA8u, 0x3C6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6FB0u;
label_3c6fb0:
    // 0x3c6fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c6fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6fb4:
    // 0x3c6fb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c6fb8:
    // 0x3c6fb8: 0xc0ea12a  jal         func_3A84A8
label_3c6fbc:
    if (ctx->pc == 0x3C6FBCu) {
        ctx->pc = 0x3C6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FB8u;
        // 0x3c6fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6FC0u;
        goto label_3c6fc0;
    }
    ctx->pc = 0x3C6FB8u;
    SET_GPR_U32(ctx, 31, 0x3C6FC0u);
    ctx->pc = 0x3C6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6FB8u;
    // 0x3c6fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6FB8u, 0x3C6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6FC0u;
label_3c6fc0:
    // 0x3c6fc0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c6fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6fc4:
    // 0x3c6fc4: 0x24030488  addiu       $v1, $zero, 0x488
    ctx->pc = 0x3c6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
label_3c6fc8:
    // 0x3c6fc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c6fcc:
    // 0x3c6fcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c6fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6fd0:
    // 0x3c6fd0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3c6fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c6fd4:
    // 0x3c6fd4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c6fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c6fd8:
    // 0x3c6fd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c6fd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c6fdc:
    // 0x3c6fdc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3c6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3c6fe0:
    // 0x3c6fe0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c6fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c6fe4:
    // 0x3c6fe4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3c6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3c6fe8:
    // 0x3c6fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6fec:
    // 0x3c6fec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3c6fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3c6ff0:
    // 0x3c6ff0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3c6ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c6ff4:
    // 0x3c6ff4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3c6ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c6ff8:
    // 0x3c6ff8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c6ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6ffc:
    // 0x3c6ffc: 0xc136b24  jal         func_4DAC90
label_3c7000:
    if (ctx->pc == 0x3C7000u) {
        ctx->pc = 0x3C7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FFCu;
        // 0x3c7000: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7004u;
        goto label_3c7004;
    }
    ctx->pc = 0x3C6FFCu;
    SET_GPR_U32(ctx, 31, 0x3C7004u);
    ctx->pc = 0x3C7000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6FFCu;
    // 0x3c7000: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C6FFCu, 0x3C7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7004u;
label_3c7004:
    // 0x3c7004: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c7004u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7008:
    // 0x3c7008: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c7008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c700c:
    // 0x3c700c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c700cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7010:
    // 0x3c7010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7014:
    // 0x3c7014: 0xc136b18  jal         func_4DAC60
label_3c7018:
    if (ctx->pc == 0x3C7018u) {
        ctx->pc = 0x3C7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7014u;
        // 0x3c7018: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C701Cu;
        goto label_3c701c;
    }
    ctx->pc = 0x3C7014u;
    SET_GPR_U32(ctx, 31, 0x3C701Cu);
    ctx->pc = 0x3C7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7014u;
    // 0x3c7018: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7014u, 0x3C701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C701Cu;
label_3c701c:
    // 0x3c701c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c701cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7020:
    // 0x3c7020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c7020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7024:
    // 0x3c7024: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c7028:
    // 0x3c7028: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3c7028u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3c702c:
    // 0x3c702c: 0xc0e858c  jal         func_3A1630
label_3c7030:
    if (ctx->pc == 0x3C7030u) {
        ctx->pc = 0x3C7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C702Cu;
        // 0x3c7030: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7034u;
        goto label_3c7034;
    }
    ctx->pc = 0x3C702Cu;
    SET_GPR_U32(ctx, 31, 0x3C7034u);
    ctx->pc = 0x3C7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C702Cu;
    // 0x3c7030: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C702Cu, 0x3C7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7034u;
label_3c7034:
    // 0x3c7034: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x3c7034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_3c7038:
    // 0x3c7038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c7038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c703c:
    // 0x3c703c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3c703cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3c7040:
    // 0x3c7040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c7040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c7044:
    // 0x3c7044: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c7044u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c7048:
    // 0x3c7048: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x3c7048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c704c:
    // 0x3c704c: 0x0  nop
    ctx->pc = 0x3c704cu;
    // NOP
label_3c7050:
    // 0x3c7050: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3c7054:
    if (ctx->pc == 0x3C7054u) {
        ctx->pc = 0x3C7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7050u;
        // 0x3c7054: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7058u;
        goto label_3c7058;
    }
    ctx->pc = 0x3C7050u;
    {
        const bool branch_taken_0x3c7050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7050) {
            ctx->pc = 0x3C7054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7050u;
            // 0x3c7054: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7058u;
            goto label_3c7058;
        }
    }
    ctx->pc = 0x3C7058u;
label_3c7058:
    // 0x3c7058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c7058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c705c:
    // 0x3c705c: 0x3c02f45c  lui         $v0, 0xF45C
    ctx->pc = 0x3c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62556 << 16));
label_3c7060:
    // 0x3c7060: 0x34421cff  ori         $v0, $v0, 0x1CFF
    ctx->pc = 0x3c7060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
label_3c7064:
    // 0x3c7064: 0xe634008c  swc1        $f20, 0x8C($s1)
    ctx->pc = 0x3c7064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3c7068:
    // 0x3c7068: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3c7068u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c706c:
    // 0x3c706c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3c706cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3c7070:
    // 0x3c7070: 0xe6340090  swc1        $f20, 0x90($s1)
    ctx->pc = 0x3c7070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3c7074:
    // 0x3c7074: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x3c7074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_3c7078:
    // 0x3c7078: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x3c7078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_3c707c:
    // 0x3c707c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3c7080:
    if (ctx->pc == 0x3C7080u) {
        ctx->pc = 0x3C7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C707Cu;
        // 0x3c7080: 0xe6540004  swc1        $f20, 0x4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7084u;
        goto label_3c7084;
    }
    ctx->pc = 0x3C707Cu;
    {
        const bool branch_taken_0x3c707c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C707Cu;
        // 0x3c7080: 0xe6540004  swc1        $f20, 0x4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c707c) {
            ctx->pc = 0x3C7090u;
            goto label_3c7090;
        }
    }
    ctx->pc = 0x3C7084u;
label_3c7084:
    // 0x3c7084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c7084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7088:
    // 0x3c7088: 0xc0e858c  jal         func_3A1630
label_3c708c:
    if (ctx->pc == 0x3C708Cu) {
        ctx->pc = 0x3C708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7088u;
        // 0x3c708c: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7090u;
        goto label_3c7090;
    }
    ctx->pc = 0x3C7088u;
    SET_GPR_U32(ctx, 31, 0x3C7090u);
    ctx->pc = 0x3C708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7088u;
    // 0x3c708c: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C7088u, 0x3C7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7090u;
label_3c7090:
    // 0x3c7090: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c7090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c7094:
    // 0x3c7094: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c7094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c7098:
    // 0x3c7098: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c7098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c709c:
    // 0x3c709c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c709cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c70a0:
    // 0x3c70a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c70a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c70a4:
    // 0x3c70a4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3c70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c70a8:
    // 0x3c70a8: 0x3e00008  jr          $ra
label_3c70ac:
    if (ctx->pc == 0x3C70ACu) {
        ctx->pc = 0x3C70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70A8u;
        // 0x3c70ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C70B0u;
        goto label_fallthrough_0x3c70a8;
    }
    ctx->pc = 0x3C70A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70A8u;
        // 0x3c70ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C70A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c70a8:
    ctx->pc = 0x3C70B0u;
}
