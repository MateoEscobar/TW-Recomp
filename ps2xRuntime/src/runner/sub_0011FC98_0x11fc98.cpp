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

// Function: sub_0011FC98
// Address: 0x11fc98 - 0x11fd80
void sub_0011FC98_0x11fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FC98_0x11fc98");
#endif

    switch (ctx->pc) {
        case 0x11fc98u: goto label_11fc98;
        case 0x11fc9cu: goto label_11fc9c;
        case 0x11fca0u: goto label_11fca0;
        case 0x11fca4u: goto label_11fca4;
        case 0x11fca8u: goto label_11fca8;
        case 0x11fcacu: goto label_11fcac;
        case 0x11fcb0u: goto label_11fcb0;
        case 0x11fcb4u: goto label_11fcb4;
        case 0x11fcb8u: goto label_11fcb8;
        case 0x11fcbcu: goto label_11fcbc;
        case 0x11fcc0u: goto label_11fcc0;
        case 0x11fcc4u: goto label_11fcc4;
        case 0x11fcc8u: goto label_11fcc8;
        case 0x11fcccu: goto label_11fccc;
        case 0x11fcd0u: goto label_11fcd0;
        case 0x11fcd4u: goto label_11fcd4;
        case 0x11fcd8u: goto label_11fcd8;
        case 0x11fcdcu: goto label_11fcdc;
        case 0x11fce0u: goto label_11fce0;
        case 0x11fce4u: goto label_11fce4;
        case 0x11fce8u: goto label_11fce8;
        case 0x11fcecu: goto label_11fcec;
        case 0x11fcf0u: goto label_11fcf0;
        case 0x11fcf4u: goto label_11fcf4;
        case 0x11fcf8u: goto label_11fcf8;
        case 0x11fcfcu: goto label_11fcfc;
        case 0x11fd00u: goto label_11fd00;
        case 0x11fd04u: goto label_11fd04;
        case 0x11fd08u: goto label_11fd08;
        case 0x11fd0cu: goto label_11fd0c;
        case 0x11fd10u: goto label_11fd10;
        case 0x11fd14u: goto label_11fd14;
        case 0x11fd18u: goto label_11fd18;
        case 0x11fd1cu: goto label_11fd1c;
        case 0x11fd20u: goto label_11fd20;
        case 0x11fd24u: goto label_11fd24;
        case 0x11fd28u: goto label_11fd28;
        case 0x11fd2cu: goto label_11fd2c;
        case 0x11fd30u: goto label_11fd30;
        case 0x11fd34u: goto label_11fd34;
        case 0x11fd38u: goto label_11fd38;
        case 0x11fd3cu: goto label_11fd3c;
        case 0x11fd40u: goto label_11fd40;
        case 0x11fd44u: goto label_11fd44;
        case 0x11fd48u: goto label_11fd48;
        case 0x11fd4cu: goto label_11fd4c;
        case 0x11fd50u: goto label_11fd50;
        case 0x11fd54u: goto label_11fd54;
        case 0x11fd58u: goto label_11fd58;
        case 0x11fd5cu: goto label_11fd5c;
        case 0x11fd60u: goto label_11fd60;
        case 0x11fd64u: goto label_11fd64;
        case 0x11fd68u: goto label_11fd68;
        case 0x11fd6cu: goto label_11fd6c;
        case 0x11fd70u: goto label_11fd70;
        case 0x11fd74u: goto label_11fd74;
        case 0x11fd78u: goto label_11fd78;
        case 0x11fd7cu: goto label_11fd7c;
        default: break;
    }

    ctx->pc = 0x11fc98u;

label_11fc98:
    // 0x11fc98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11fc9c:
    // 0x11fc9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11fca0:
    // 0x11fca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11fca4:
    // 0x11fca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11fca8:
    // 0x11fca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11fcac:
    // 0x11fcac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11fcb0:
    // 0x11fcb0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11fcb4:
    if (ctx->pc == 0x11FCB4u) {
        ctx->pc = 0x11FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB0u;
        // 0x11fcb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCB8u;
        goto label_11fcb8;
    }
    ctx->pc = 0x11FCB0u;
    {
        const bool branch_taken_0x11fcb0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB0u;
        // 0x11fcb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcb0) {
            ctx->pc = 0x11FCC0u;
            goto label_11fcc0;
        }
    }
    ctx->pc = 0x11FCB8u;
label_11fcb8:
    // 0x11fcb8: 0x10000029  b           . + 4 + (0x29 << 2)
label_11fcbc:
    if (ctx->pc == 0x11FCBCu) {
        ctx->pc = 0x11FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB8u;
        // 0x11fcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCC0u;
        goto label_11fcc0;
    }
    ctx->pc = 0x11FCB8u;
    {
        const bool branch_taken_0x11fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB8u;
        // 0x11fcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcb8) {
            ctx->pc = 0x11FD60u;
            goto label_11fd60;
        }
    }
    ctx->pc = 0x11FCC0u;
label_11fcc0:
    // 0x11fcc0: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11fcc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11fcc4:
    // 0x11fcc4: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11fcc8:
    if (ctx->pc == 0x11FCC8u) {
        ctx->pc = 0x11FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC4u;
        // 0x11fcc8: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCCCu;
        goto label_11fccc;
    }
    ctx->pc = 0x11FCC4u;
    {
        const bool branch_taken_0x11fcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC4u;
        // 0x11fcc8: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcc4) {
            ctx->pc = 0x11FD54u;
            goto label_11fd54;
        }
    }
    ctx->pc = 0x11FCCCu;
label_11fccc:
    // 0x11fccc: 0x26629188  addiu       $v0, $s3, -0x6E78
    ctx->pc = 0x11fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939016));
label_11fcd0:
    // 0x11fcd0: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11fcd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11fcd4:
    // 0x11fcd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fcd8:
    // 0x11fcd8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11fcdc:
    if (ctx->pc == 0x11FCDCu) {
        ctx->pc = 0x11FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD8u;
        // 0x11fcdc: 0x26639188  addiu       $v1, $s3, -0x6E78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCE0u;
        goto label_11fce0;
    }
    ctx->pc = 0x11FCD8u;
    {
        const bool branch_taken_0x11fcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD8u;
        // 0x11fcdc: 0x26639188  addiu       $v1, $s3, -0x6E78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcd8) {
            ctx->pc = 0x11FD58u;
            goto label_11fd58;
        }
    }
    ctx->pc = 0x11FCE0u;
label_11fce0:
    // 0x11fce0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11fce4:
    // 0x11fce4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11fce8:
    // 0x11fce8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11fce8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11fcec:
    // 0x11fcec: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11fcecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11fcf0:
    // 0x11fcf0: 0x24060340  addiu       $a2, $zero, 0x340
    ctx->pc = 0x11fcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
label_11fcf4:
    // 0x11fcf4: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x11fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
label_11fcf8:
    // 0x11fcf8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11fcfc:
    // 0x11fcfc: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11fcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11fd00:
    // 0x11fd00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fd04:
    // 0x11fd04: 0x24090479  addiu       $t1, $zero, 0x479
    ctx->pc = 0x11fd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1145));
label_11fd08:
    // 0x11fd08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11fd08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11fd0c:
    // 0x11fd0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fd0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fd10:
    // 0x11fd10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11fd14:
    // 0x11fd14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fd14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fd18:
    // 0x11fd18: 0x40f809  jalr        $v0
label_11fd1c:
    if (ctx->pc == 0x11FD1Cu) {
        ctx->pc = 0x11FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD18u;
        // 0x11fd1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD20u;
        goto label_11fd20;
    }
    ctx->pc = 0x11FD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FD20u);
        ctx->pc = 0x11FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD18u;
        // 0x11fd1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD18u, 0x11FD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FD20u;
label_11fd20:
    // 0x11fd20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fd24:
    // 0x11fd24: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11fd28:
    if (ctx->pc == 0x11FD28u) {
        ctx->pc = 0x11FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD24u;
        // 0x11fd28: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD2Cu;
        goto label_11fd2c;
    }
    ctx->pc = 0x11FD24u;
    {
        const bool branch_taken_0x11fd24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fd24) {
            ctx->pc = 0x11FD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FD24u;
            // 0x11fd28: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FD3Cu;
            goto label_11fd3c;
        }
    }
    ctx->pc = 0x11FD2Cu;
label_11fd2c:
    // 0x11fd2c: 0xc04e75a  jal         func_139D68
label_11fd30:
    if (ctx->pc == 0x11FD30u) {
        ctx->pc = 0x11FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD2Cu;
        // 0x11fd30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD34u;
        goto label_11fd34;
    }
    ctx->pc = 0x11FD2Cu;
    SET_GPR_U32(ctx, 31, 0x11FD34u);
    ctx->pc = 0x11FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD2Cu;
    // 0x11fd30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D68u, 0x11FD2Cu, 0x11FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD34u;
label_11fd34:
    // 0x11fd34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fd38:
    // 0x11fd38: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11fd3c:
    // 0x11fd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fd40:
    // 0x11fd40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11fd44:
    // 0x11fd44: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11fd44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11fd48:
    // 0x11fd48: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11fd4c:
    // 0x11fd4c: 0x60f809  jalr        $v1
label_11fd50:
    if (ctx->pc == 0x11FD50u) {
        ctx->pc = 0x11FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD4Cu;
        // 0x11fd50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD54u;
        goto label_11fd54;
    }
    ctx->pc = 0x11FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11FD54u);
        ctx->pc = 0x11FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD4Cu;
        // 0x11fd50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD4Cu, 0x11FD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FD54u;
label_11fd54:
    // 0x11fd54: 0x26639188  addiu       $v1, $s3, -0x6E78
    ctx->pc = 0x11fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939016));
label_11fd58:
    // 0x11fd58: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11fd5c:
    // 0x11fd5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11fd60:
    // 0x11fd60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11fd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11fd64:
    // 0x11fd64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11fd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11fd68:
    // 0x11fd68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fd68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11fd6c:
    // 0x11fd6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11fd6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11fd70:
    // 0x11fd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fd74:
    // 0x11fd74: 0x3e00008  jr          $ra
label_11fd78:
    if (ctx->pc == 0x11FD78u) {
        ctx->pc = 0x11FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD74u;
        // 0x11fd78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD7Cu;
        goto label_11fd7c;
    }
    ctx->pc = 0x11FD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD74u;
        // 0x11fd78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD7Cu;
label_11fd7c:
    // 0x11fd7c: 0x0  nop
    ctx->pc = 0x11fd7cu;
    // NOP
    ctx->pc = 0x11fd80u;
}
