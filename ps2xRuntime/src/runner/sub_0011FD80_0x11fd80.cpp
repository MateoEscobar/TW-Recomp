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

// Function: sub_0011FD80
// Address: 0x11fd80 - 0x11fe68
void sub_0011FD80_0x11fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FD80_0x11fd80");
#endif

    switch (ctx->pc) {
        case 0x11fd80u: goto label_11fd80;
        case 0x11fd84u: goto label_11fd84;
        case 0x11fd88u: goto label_11fd88;
        case 0x11fd8cu: goto label_11fd8c;
        case 0x11fd90u: goto label_11fd90;
        case 0x11fd94u: goto label_11fd94;
        case 0x11fd98u: goto label_11fd98;
        case 0x11fd9cu: goto label_11fd9c;
        case 0x11fda0u: goto label_11fda0;
        case 0x11fda4u: goto label_11fda4;
        case 0x11fda8u: goto label_11fda8;
        case 0x11fdacu: goto label_11fdac;
        case 0x11fdb0u: goto label_11fdb0;
        case 0x11fdb4u: goto label_11fdb4;
        case 0x11fdb8u: goto label_11fdb8;
        case 0x11fdbcu: goto label_11fdbc;
        case 0x11fdc0u: goto label_11fdc0;
        case 0x11fdc4u: goto label_11fdc4;
        case 0x11fdc8u: goto label_11fdc8;
        case 0x11fdccu: goto label_11fdcc;
        case 0x11fdd0u: goto label_11fdd0;
        case 0x11fdd4u: goto label_11fdd4;
        case 0x11fdd8u: goto label_11fdd8;
        case 0x11fddcu: goto label_11fddc;
        case 0x11fde0u: goto label_11fde0;
        case 0x11fde4u: goto label_11fde4;
        case 0x11fde8u: goto label_11fde8;
        case 0x11fdecu: goto label_11fdec;
        case 0x11fdf0u: goto label_11fdf0;
        case 0x11fdf4u: goto label_11fdf4;
        case 0x11fdf8u: goto label_11fdf8;
        case 0x11fdfcu: goto label_11fdfc;
        case 0x11fe00u: goto label_11fe00;
        case 0x11fe04u: goto label_11fe04;
        case 0x11fe08u: goto label_11fe08;
        case 0x11fe0cu: goto label_11fe0c;
        case 0x11fe10u: goto label_11fe10;
        case 0x11fe14u: goto label_11fe14;
        case 0x11fe18u: goto label_11fe18;
        case 0x11fe1cu: goto label_11fe1c;
        case 0x11fe20u: goto label_11fe20;
        case 0x11fe24u: goto label_11fe24;
        case 0x11fe28u: goto label_11fe28;
        case 0x11fe2cu: goto label_11fe2c;
        case 0x11fe30u: goto label_11fe30;
        case 0x11fe34u: goto label_11fe34;
        case 0x11fe38u: goto label_11fe38;
        case 0x11fe3cu: goto label_11fe3c;
        case 0x11fe40u: goto label_11fe40;
        case 0x11fe44u: goto label_11fe44;
        case 0x11fe48u: goto label_11fe48;
        case 0x11fe4cu: goto label_11fe4c;
        case 0x11fe50u: goto label_11fe50;
        case 0x11fe54u: goto label_11fe54;
        case 0x11fe58u: goto label_11fe58;
        case 0x11fe5cu: goto label_11fe5c;
        case 0x11fe60u: goto label_11fe60;
        case 0x11fe64u: goto label_11fe64;
        default: break;
    }

    ctx->pc = 0x11fd80u;

label_11fd80:
    // 0x11fd80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11fd84:
    // 0x11fd84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11fd88:
    // 0x11fd88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11fd8c:
    // 0x11fd8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11fd90:
    // 0x11fd90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11fd94:
    // 0x11fd94: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11fd98:
    // 0x11fd98: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11fd9c:
    if (ctx->pc == 0x11FD9Cu) {
        ctx->pc = 0x11FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD98u;
        // 0x11fd9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FDA0u;
        goto label_11fda0;
    }
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD98u;
        // 0x11fd9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x11FDA8u;
            goto label_11fda8;
        }
    }
    ctx->pc = 0x11FDA0u;
label_11fda0:
    // 0x11fda0: 0x10000029  b           . + 4 + (0x29 << 2)
label_11fda4:
    if (ctx->pc == 0x11FDA4u) {
        ctx->pc = 0x11FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDA0u;
        // 0x11fda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FDA8u;
        goto label_11fda8;
    }
    ctx->pc = 0x11FDA0u;
    {
        const bool branch_taken_0x11fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDA0u;
        // 0x11fda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fda0) {
            ctx->pc = 0x11FE48u;
            goto label_11fe48;
        }
    }
    ctx->pc = 0x11FDA8u;
label_11fda8:
    // 0x11fda8: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11fda8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11fdac:
    // 0x11fdac: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11fdb0:
    if (ctx->pc == 0x11FDB0u) {
        ctx->pc = 0x11FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDACu;
        // 0x11fdb0: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FDB4u;
        goto label_11fdb4;
    }
    ctx->pc = 0x11FDACu;
    {
        const bool branch_taken_0x11fdac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDACu;
        // 0x11fdb0: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdac) {
            ctx->pc = 0x11FE3Cu;
            goto label_11fe3c;
        }
    }
    ctx->pc = 0x11FDB4u;
label_11fdb4:
    // 0x11fdb4: 0x26629170  addiu       $v0, $s3, -0x6E90
    ctx->pc = 0x11fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938992));
label_11fdb8:
    // 0x11fdb8: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11fdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11fdbc:
    // 0x11fdbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fdc0:
    // 0x11fdc0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11fdc4:
    if (ctx->pc == 0x11FDC4u) {
        ctx->pc = 0x11FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDC0u;
        // 0x11fdc4: 0x26639170  addiu       $v1, $s3, -0x6E90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FDC8u;
        goto label_11fdc8;
    }
    ctx->pc = 0x11FDC0u;
    {
        const bool branch_taken_0x11fdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDC0u;
        // 0x11fdc4: 0x26639170  addiu       $v1, $s3, -0x6E90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdc0) {
            ctx->pc = 0x11FE40u;
            goto label_11fe40;
        }
    }
    ctx->pc = 0x11FDC8u;
label_11fdc8:
    // 0x11fdc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11fdcc:
    // 0x11fdcc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11fdd0:
    // 0x11fdd0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11fdd0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11fdd4:
    // 0x11fdd4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11fdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11fdd8:
    // 0x11fdd8: 0x24060250  addiu       $a2, $zero, 0x250
    ctx->pc = 0x11fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_11fddc:
    // 0x11fddc: 0x24a586e0  addiu       $a1, $a1, -0x7920
    ctx->pc = 0x11fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936288));
label_11fde0:
    // 0x11fde0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11fde4:
    // 0x11fde4: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11fde4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11fde8:
    // 0x11fde8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11fde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fdec:
    // 0x11fdec: 0x24090489  addiu       $t1, $zero, 0x489
    ctx->pc = 0x11fdecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1161));
label_11fdf0:
    // 0x11fdf0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11fdf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11fdf4:
    // 0x11fdf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fdf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fdf8:
    // 0x11fdf8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11fdfc:
    // 0x11fdfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fdfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fe00:
    // 0x11fe00: 0x40f809  jalr        $v0
label_11fe04:
    if (ctx->pc == 0x11FE04u) {
        ctx->pc = 0x11FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE00u;
        // 0x11fe04: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE08u;
        goto label_11fe08;
    }
    ctx->pc = 0x11FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FE08u);
        ctx->pc = 0x11FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE00u;
        // 0x11fe04: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FE00u, 0x11FE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FE08u;
label_11fe08:
    // 0x11fe08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fe08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fe0c:
    // 0x11fe0c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11fe10:
    if (ctx->pc == 0x11FE10u) {
        ctx->pc = 0x11FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE0Cu;
        // 0x11fe10: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE14u;
        goto label_11fe14;
    }
    ctx->pc = 0x11FE0Cu;
    {
        const bool branch_taken_0x11fe0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fe0c) {
            ctx->pc = 0x11FE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FE0Cu;
            // 0x11fe10: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FE24u;
            goto label_11fe24;
        }
    }
    ctx->pc = 0x11FE14u;
label_11fe14:
    // 0x11fe14: 0xc04df34  jal         func_137CD0
label_11fe18:
    if (ctx->pc == 0x11FE18u) {
        ctx->pc = 0x11FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE14u;
        // 0x11fe18: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE1Cu;
        goto label_11fe1c;
    }
    ctx->pc = 0x11FE14u;
    SET_GPR_U32(ctx, 31, 0x11FE1Cu);
    ctx->pc = 0x11FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE14u;
    // 0x11fe18: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137CD0u, 0x11FE14u, 0x11FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE1Cu;
label_11fe1c:
    // 0x11fe1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fe1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fe20:
    // 0x11fe20: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11fe24:
    // 0x11fe24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fe28:
    // 0x11fe28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11fe2c:
    // 0x11fe2c: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11fe2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11fe30:
    // 0x11fe30: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11fe34:
    // 0x11fe34: 0x60f809  jalr        $v1
label_11fe38:
    if (ctx->pc == 0x11FE38u) {
        ctx->pc = 0x11FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE34u;
        // 0x11fe38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE3Cu;
        goto label_11fe3c;
    }
    ctx->pc = 0x11FE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11FE3Cu);
        ctx->pc = 0x11FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE34u;
        // 0x11fe38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FE34u, 0x11FE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FE3Cu;
label_11fe3c:
    // 0x11fe3c: 0x26639170  addiu       $v1, $s3, -0x6E90
    ctx->pc = 0x11fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938992));
label_11fe40:
    // 0x11fe40: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11fe44:
    // 0x11fe44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11fe48:
    // 0x11fe48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11fe48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11fe4c:
    // 0x11fe4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11fe4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11fe50:
    // 0x11fe50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fe50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11fe54:
    // 0x11fe54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11fe54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11fe58:
    // 0x11fe58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fe5c:
    // 0x11fe5c: 0x3e00008  jr          $ra
label_11fe60:
    if (ctx->pc == 0x11FE60u) {
        ctx->pc = 0x11FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE5Cu;
        // 0x11fe60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE64u;
        goto label_11fe64;
    }
    ctx->pc = 0x11FE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE5Cu;
        // 0x11fe60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FE64u;
label_11fe64:
    // 0x11fe64: 0x0  nop
    ctx->pc = 0x11fe64u;
    // NOP
    ctx->pc = 0x11fe68u;
}
