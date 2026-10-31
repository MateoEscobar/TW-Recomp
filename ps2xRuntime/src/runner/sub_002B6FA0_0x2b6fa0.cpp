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

// Function: sub_002B6FA0
// Address: 0x2b6fa0 - 0x2b7140
void sub_002B6FA0_0x2b6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6FA0_0x2b6fa0");
#endif

    switch (ctx->pc) {
        case 0x2b6fc8u: goto label_2b6fc8;
        case 0x2b6fd8u: goto label_2b6fd8;
        case 0x2b6fe8u: goto label_2b6fe8;
        case 0x2b700cu: goto label_2b700c;
        case 0x2b704cu: goto label_2b704c;
        case 0x2b70b0u: goto label_2b70b0;
        case 0x2b70bcu: goto label_2b70bc;
        case 0x2b70d4u: goto label_2b70d4;
        case 0x2b710cu: goto label_2b710c;
        default: break;
    }

    ctx->pc = 0x2b6fa0u;

    // 0x2b6fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6fa4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b6fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b6fa8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b6fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b6fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b6fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b6fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6fb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6fbc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b6fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6fc0: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2B6FC0u;
    SET_GPR_U32(ctx, 31, 0x2B6FC8u);
    ctx->pc = 0x2B6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FC0u;
    // 0x2b6fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2B6FC0u, 0x2B6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FC8u;
label_2b6fc8:
    // 0x2b6fc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6FC8u;
    {
        const bool branch_taken_0x2b6fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FC8u;
        // 0x2b6fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fc8) {
            ctx->pc = 0x2B6FE0u;
            goto label_2b6fe0;
        }
    }
    ctx->pc = 0x2B6FD0u;
    // 0x2b6fd0: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B6FD0u;
    SET_GPR_U32(ctx, 31, 0x2B6FD8u);
    ctx->pc = 0x2B6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FD0u;
    // 0x2b6fd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B6FD0u, 0x2B6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FD8u;
label_2b6fd8:
    // 0x2b6fd8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2B6FD8u;
    {
        const bool branch_taken_0x2b6fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FD8u;
        // 0x2b6fdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fd8) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B6FE0u;
label_2b6fe0:
    // 0x2b6fe0: 0xc0adbac  jal         func_2B6EB0
    ctx->pc = 0x2B6FE0u;
    SET_GPR_U32(ctx, 31, 0x2B6FE8u);
    ctx->pc = 0x2B6FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FE0u;
    // 0x2b6fe4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6EB0u, 0x2B6FE0u, 0x2B6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FE8u;
label_2b6fe8:
    // 0x2b6fe8: 0x1051004f  beq         $v0, $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B6FE8u;
    {
        const bool branch_taken_0x2b6fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE8u;
        // 0x2b6fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fe8) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B6FF0u;
    // 0x2b6ff0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2b6ff4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b6ff4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2b6ff8: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B6FF8u;
    {
        const bool branch_taken_0x2b6ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ff8) {
            ctx->pc = 0x2B6FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6FF8u;
            // 0x2b6ffc: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7124u;
            goto label_2b7124;
        }
    }
    ctx->pc = 0x2B7000u;
    // 0x2b7000: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7004: 0xc0a2fd0  jal         func_28BF40
    ctx->pc = 0x2B7004u;
    SET_GPR_U32(ctx, 31, 0x2B700Cu);
    ctx->pc = 0x2B7008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7004u;
    // 0x2b7008: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2B7004u, 0x2B700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B700Cu;
label_2b700c:
    // 0x2b700c: 0x54510045  bnel        $v0, $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B700Cu;
    {
        const bool branch_taken_0x2b700c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b700c) {
            ctx->pc = 0x2B7010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B700Cu;
            // 0x2b7010: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7124u;
            goto label_2b7124;
        }
    }
    ctx->pc = 0x2B7014u;
    // 0x2b7014: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b7014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7018: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b7018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b701c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b7020: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B7020u;
    {
        const bool branch_taken_0x2b7020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7020u;
        // 0x2b7024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7020) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B7028u;
    // 0x2b7028: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2b7028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2b702c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b702cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2b7030: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2b7030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2b7034: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2b7034u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2b7038: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2b7038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2b703c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b7040: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2b7040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b7044: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x2B7044u;
    SET_GPR_U32(ctx, 31, 0x2B704Cu);
    ctx->pc = 0x2B7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7044u;
    // 0x2b7048: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2B7044u, 0x2B704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B704Cu;
label_2b704c:
    // 0x2b704c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7050: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B7050u;
    {
        const bool branch_taken_0x2b7050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7050u;
        // 0x2b7054: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7050) {
            ctx->pc = 0x2B7120u;
            goto label_2b7120;
        }
    }
    ctx->pc = 0x2B7058u;
    // 0x2b7058: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2b705c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b705cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7060: 0x0  nop
    ctx->pc = 0x2b7060u;
    // NOP
    // 0x2b7064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b7064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7068: 0x0  nop
    ctx->pc = 0x2b7068u;
    // NOP
    // 0x2b706c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2B706Cu;
    {
        const bool branch_taken_0x2b706c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B706Cu;
        // 0x2b7070: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b706c) {
            ctx->pc = 0x2B7120u;
            goto label_2b7120;
        }
    }
    ctx->pc = 0x2B7074u;
    // 0x2b7074: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2b7074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b7078: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2b7078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x2b707c: 0x14a00025  bnez        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B707Cu;
    {
        const bool branch_taken_0x2b707c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B707Cu;
        // 0x2b7080: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b707c) {
            ctx->pc = 0x2B7114u;
            goto label_2b7114;
        }
    }
    ctx->pc = 0x2B7084u;
    // 0x2b7084: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2b7084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2b7088: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b7088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b708c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b708cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b7090: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7094: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b7098: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7098u;
    {
        const bool branch_taken_0x2b7098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b7098) {
            ctx->pc = 0x2B709Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7098u;
            // 0x2b709c: 0x8cb0020c  lw          $s0, 0x20C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B70A8u;
            goto label_2b70a8;
        }
    }
    ctx->pc = 0x2B70A0u;
    // 0x2b70a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B70A0u;
    {
        const bool branch_taken_0x2b70a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70A0u;
        // 0x2b70a4: 0x2411007e  addiu       $s1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70a0) {
            ctx->pc = 0x2B70C4u;
            goto label_2b70c4;
        }
    }
    ctx->pc = 0x2B70A8u;
label_2b70a8:
    // 0x2b70a8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B70A8u;
    SET_GPR_U32(ctx, 31, 0x2B70B0u);
    ctx->pc = 0x2B70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70A8u;
    // 0x2b70ac: 0x24110048  addiu       $s1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B70A8u, 0x2B70B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70B0u;
label_2b70b0:
    // 0x2b70b0: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2b70b4: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x2B70B4u;
    SET_GPR_U32(ctx, 31, 0x2B70BCu);
    ctx->pc = 0x2B70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70B4u;
    // 0x2b70b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x2B70B4u, 0x2B70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70BCu;
label_2b70bc:
    // 0x2b70bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b70bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b70c0: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x2b70c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2b70c4:
    // 0x2b70c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B70C4u;
    {
        const bool branch_taken_0x2b70c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70C4u;
        // 0x2b70c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70c4) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B70CCu;
    // 0x2b70cc: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2B70CCu;
    SET_GPR_U32(ctx, 31, 0x2B70D4u);
    ctx->pc = 0x2B70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70CCu;
    // 0x2b70d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B70CCu, 0x2B70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70D4u;
label_2b70d4:
    // 0x2b70d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b70d8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B70D8u;
    {
        const bool branch_taken_0x2b70d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70D8u;
        // 0x2b70dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70d8) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B70E0u;
    // 0x2b70e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b70e4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2b70e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2b70e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b70e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b70ec: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2b70ecu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b70f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b70f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b70f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b70f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b70fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7100: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7104: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2B7104u;
    SET_GPR_U32(ctx, 31, 0x2B710Cu);
    ctx->pc = 0x2B7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7104u;
    // 0x2b7108: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2B7104u, 0x2B710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B710Cu;
label_2b710c:
    // 0x2b710c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B710Cu;
    {
        const bool branch_taken_0x2b710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B710Cu;
        // 0x2b7110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b710c) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B7114u;
label_2b7114:
    // 0x2b7114: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7118u;
    {
        const bool branch_taken_0x2b7118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7118u;
        // 0x2b711c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7118) {
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B7120u;
label_2b7120:
    // 0x2b7120: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b7120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2b7124:
    // 0x2b7124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7128:
    // 0x2b7128: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b7128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b712c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b712cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b7130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7138: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7138u;
        // 0x2b713c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7140u;
}
