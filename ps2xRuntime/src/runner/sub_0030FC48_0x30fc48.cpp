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

// Function: sub_0030FC48
// Address: 0x30fc48 - 0x30fe58
void sub_0030FC48_0x30fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FC48_0x30fc48");
#endif

    switch (ctx->pc) {
        case 0x30fcb8u: goto label_30fcb8;
        case 0x30fcc8u: goto label_30fcc8;
        case 0x30fcd0u: goto label_30fcd0;
        case 0x30fcd8u: goto label_30fcd8;
        case 0x30fcecu: goto label_30fcec;
        case 0x30fd00u: goto label_30fd00;
        case 0x30fd14u: goto label_30fd14;
        case 0x30fd30u: goto label_30fd30;
        case 0x30fd40u: goto label_30fd40;
        case 0x30fd60u: goto label_30fd60;
        case 0x30fd78u: goto label_30fd78;
        case 0x30fda0u: goto label_30fda0;
        case 0x30fdb8u: goto label_30fdb8;
        case 0x30fdd8u: goto label_30fdd8;
        case 0x30fde0u: goto label_30fde0;
        case 0x30fdf4u: goto label_30fdf4;
        case 0x30fe18u: goto label_30fe18;
        default: break;
    }

    ctx->pc = 0x30fc48u;

    // 0x30fc48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30fc4c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x30fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x30fc50: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x30fc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x30fc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30fc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x30fc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x30fc5c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x30fc5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc60: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x30fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x30fc64: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x30fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x30fc68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x30fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x30fc6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30fc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30fc70: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x30fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x30fc74: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x30fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x30fc78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30fc7c: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x30fc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x30fc80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FC80u;
    {
        const bool branch_taken_0x30fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC80u;
        // 0x30fc84: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc80) {
            ctx->pc = 0x30FC90u;
            goto label_30fc90;
        }
    }
    ctx->pc = 0x30FC88u;
    // 0x30fc88: 0x52c00068  beql        $s6, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x30FC88u;
    {
        const bool branch_taken_0x30fc88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc88) {
            ctx->pc = 0x30FC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FC88u;
            // 0x30fc8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FE2Cu;
            goto label_30fe2c;
        }
    }
    ctx->pc = 0x30FC90u;
label_30fc90:
    // 0x30fc90: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x30fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x30fc94: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x30fc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x30fc98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30fc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30fca0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30fca4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fca8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x30fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x30fcac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30fcacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcb0: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x30FCB0u;
    SET_GPR_U32(ctx, 31, 0x30FCB8u);
    ctx->pc = 0x30FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FCB0u;
    // 0x30fcb4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x30FCB0u, 0x30FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FCB8u;
label_30fcb8:
    // 0x30fcb8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x30fcb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30fcc0: 0x245e0048  addiu       $fp, $v0, 0x48
    ctx->pc = 0x30fcc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30fcc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30fcc8:
    // 0x30fcc8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30FCC8u;
    SET_GPR_U32(ctx, 31, 0x30FCD0u);
    ctx->pc = 0x30FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FCC8u;
    // 0x30fccc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30FCC8u, 0x30FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FCD0u;
label_30fcd0:
    // 0x30fcd0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30FCD0u;
    SET_GPR_U32(ctx, 31, 0x30FCD8u);
    ctx->pc = 0x30FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FCD0u;
    // 0x30fcd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30FCD0u, 0x30FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FCD8u;
label_30fcd8:
    // 0x30fcd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30fcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcdc: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x30FCDCu;
    {
        const bool branch_taken_0x30fcdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCDCu;
        // 0x30fce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcdc) {
            ctx->pc = 0x30FE18u;
            goto label_30fe18;
        }
    }
    ctx->pc = 0x30FCE4u;
    // 0x30fce4: 0xc088f0c  jal         func_223C30
    ctx->pc = 0x30FCE4u;
    SET_GPR_U32(ctx, 31, 0x30FCECu);
    ctx->pc = 0x30FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FCE4u;
    // 0x30fce8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x30FCE4u, 0x30FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FCECu;
label_30fcec:
    // 0x30fcec: 0x1053004a  beq         $v0, $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x30FCECu;
    {
        const bool branch_taken_0x30fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x30FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCECu;
        // 0x30fcf0: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcec) {
            ctx->pc = 0x30FE18u;
            goto label_30fe18;
        }
    }
    ctx->pc = 0x30FCF4u;
    // 0x30fcf4: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x30fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x30fcf8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x30FCF8u;
    SET_GPR_U32(ctx, 31, 0x30FD00u);
    ctx->pc = 0x30FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FCF8u;
    // 0x30fcfc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x30FCF8u, 0x30FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD00u;
label_30fd00:
    // 0x30fd00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30fd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fd04: 0x50530045  beql        $v0, $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x30FD04u;
    {
        const bool branch_taken_0x30fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x30fd04) {
            ctx->pc = 0x30FD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FD04u;
            // 0x30fd08: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FD0Cu;
    // 0x30fd0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x30FD0Cu;
    SET_GPR_U32(ctx, 31, 0x30FD14u);
    ctx->pc = 0x30FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD0Cu;
    // 0x30fd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30FD0Cu, 0x30FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD14u;
label_30fd14:
    // 0x30fd14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30fd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd18: 0x8242002e  lb          $v0, 0x2E($s2)
    ctx->pc = 0x30fd18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x30fd1c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x30fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30fd20: 0x5053003e  beql        $v0, $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x30FD20u;
    {
        const bool branch_taken_0x30fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x30fd20) {
            ctx->pc = 0x30FD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FD20u;
            // 0x30fd24: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FD28u;
    // 0x30fd28: 0xc08a148  jal         func_228520
    ctx->pc = 0x30FD28u;
    SET_GPR_U32(ctx, 31, 0x30FD30u);
    ctx->pc = 0x30FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD28u;
    // 0x30fd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228520u, 0x30FD28u, 0x30FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD30u;
label_30fd30:
    // 0x30fd30: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FD30u;
    {
        const bool branch_taken_0x30fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x30fd30) {
            ctx->pc = 0x30FD40u;
            goto label_30fd40;
        }
    }
    ctx->pc = 0x30FD38u;
    // 0x30fd38: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x30FD38u;
    SET_GPR_U32(ctx, 31, 0x30FD40u);
    ctx->pc = 0x30FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD38u;
    // 0x30fd3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x30FD38u, 0x30FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD40u;
label_30fd40:
    // 0x30fd40: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x30FD40u;
    {
        const bool branch_taken_0x30fd40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD40u;
        // 0x30fd44: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd40) {
            ctx->pc = 0x30FD60u;
            goto label_30fd60;
        }
    }
    ctx->pc = 0x30FD48u;
    // 0x30fd48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fd4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30fd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30fd50: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30fd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd54: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x30fd58: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x30FD58u;
    SET_GPR_U32(ctx, 31, 0x30FD60u);
    ctx->pc = 0x30FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD58u;
    // 0x30fd5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x30FD58u, 0x30FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD60u;
label_30fd60:
    // 0x30fd60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x30fd64: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x30fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30fd68: 0x2454b8a0  addiu       $s4, $v0, -0x4760
    ctx->pc = 0x30fd68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
    // 0x30fd6c: 0x2411008f  addiu       $s1, $zero, 0x8F
    ctx->pc = 0x30fd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x30fd70: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x30FD70u;
    SET_GPR_U32(ctx, 31, 0x30FD78u);
    ctx->pc = 0x30FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD70u;
    // 0x30fd74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x30FD70u, 0x30FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD78u;
label_30fd78:
    // 0x30fd78: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x30fd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x30fd7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FD7Cu;
    {
        const bool branch_taken_0x30fd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD7Cu;
        // 0x30fd80: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd7c) {
            ctx->pc = 0x30FD88u;
            goto label_30fd88;
        }
    }
    ctx->pc = 0x30FD84u;
    // 0x30fd84: 0x56880a  movz        $s1, $v0, $s6
    ctx->pc = 0x30fd84u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_30fd88:
    // 0x30fd88: 0x16d30003  bne         $s6, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FD88u;
    {
        const bool branch_taken_0x30fd88 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        ctx->pc = 0x30FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD88u;
        // 0x30fd8c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd88) {
            ctx->pc = 0x30FD98u;
            goto label_30fd98;
        }
    }
    ctx->pc = 0x30FD90u;
    // 0x30fd90: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x30fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x30fd94: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x30fd94u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_30fd98:
    // 0x30fd98: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x30FD98u;
    SET_GPR_U32(ctx, 31, 0x30FDA0u);
    ctx->pc = 0x30FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD98u;
    // 0x30fd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x30FD98u, 0x30FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDA0u;
label_30fda0:
    // 0x30fda0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30fda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fda4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30FDA4u;
    {
        const bool branch_taken_0x30fda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDA4u;
        // 0x30fda8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fda4) {
            ctx->pc = 0x30FDD8u;
            goto label_30fdd8;
        }
    }
    ctx->pc = 0x30FDACu;
    // 0x30fdac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdb0: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x30FDB0u;
    SET_GPR_U32(ctx, 31, 0x30FDB8u);
    ctx->pc = 0x30FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDB0u;
    // 0x30fdb4: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x30FDB0u, 0x30FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDB8u;
label_30fdb8:
    // 0x30fdb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fdbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30fdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30fdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30fdc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdc8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30fdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30fdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdd0: 0xc0bee1a  jal         func_2FB868
    ctx->pc = 0x30FDD0u;
    SET_GPR_U32(ctx, 31, 0x30FDD8u);
    ctx->pc = 0x30FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDD0u;
    // 0x30fdd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x30FDD0u, 0x30FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDD8u;
label_30fdd8:
    // 0x30fdd8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x30FDD8u;
    SET_GPR_U32(ctx, 31, 0x30FDE0u);
    ctx->pc = 0x30FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDD8u;
    // 0x30fddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x30FDD8u, 0x30FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDE0u;
label_30fde0:
    // 0x30fde0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30fde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fde4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30FDE4u;
    {
        const bool branch_taken_0x30fde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDE4u;
        // 0x30fde8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fde4) {
            ctx->pc = 0x30FE18u;
            goto label_30fe18;
        }
    }
    ctx->pc = 0x30FDECu;
    // 0x30fdec: 0xc0cd526  jal         func_335498
    ctx->pc = 0x30FDECu;
    SET_GPR_U32(ctx, 31, 0x30FDF4u);
    ctx->pc = 0x30FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FDECu;
    // 0x30fdf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x30FDECu, 0x30FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDF4u;
label_30fdf4:
    // 0x30fdf4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x30fdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x30fdf8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x30fdf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30fdfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30fdfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30fe00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30fe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30fe08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe0c: 0x24060256  addiu       $a2, $zero, 0x256
    ctx->pc = 0x30fe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x30fe10: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x30FE10u;
    SET_GPR_U32(ctx, 31, 0x30FE18u);
    ctx->pc = 0x30FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE10u;
    // 0x30fe14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x30FE10u, 0x30FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE18u;
label_30fe18:
    // 0x30fe18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30fe18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_30fe1c:
    // 0x30fe1c: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x30fe1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30fe20: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x30FE20u;
    {
        const bool branch_taken_0x30fe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE20u;
        // 0x30fe24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe20) {
            ctx->pc = 0x30FCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fcc8;
        }
    }
    ctx->pc = 0x30FE28u;
    // 0x30fe28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x30fe28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30fe2c:
    // 0x30fe2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30fe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30fe30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30fe30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30fe34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x30fe34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30fe38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x30fe38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30fe3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30fe3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30fe40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x30fe40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30fe44: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x30fe44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fe48: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x30fe48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fe4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE50u;
        // 0x30fe54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE58u;
}
