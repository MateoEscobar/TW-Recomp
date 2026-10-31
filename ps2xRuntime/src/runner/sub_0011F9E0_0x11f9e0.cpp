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

// Function: sub_0011F9E0
// Address: 0x11f9e0 - 0x11fac8
void sub_0011F9E0_0x11f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F9E0_0x11f9e0");
#endif

    switch (ctx->pc) {
        case 0x11f9e0u: goto label_11f9e0;
        case 0x11f9e4u: goto label_11f9e4;
        case 0x11f9e8u: goto label_11f9e8;
        case 0x11f9ecu: goto label_11f9ec;
        case 0x11f9f0u: goto label_11f9f0;
        case 0x11f9f4u: goto label_11f9f4;
        case 0x11f9f8u: goto label_11f9f8;
        case 0x11f9fcu: goto label_11f9fc;
        case 0x11fa00u: goto label_11fa00;
        case 0x11fa04u: goto label_11fa04;
        case 0x11fa08u: goto label_11fa08;
        case 0x11fa0cu: goto label_11fa0c;
        case 0x11fa10u: goto label_11fa10;
        case 0x11fa14u: goto label_11fa14;
        case 0x11fa18u: goto label_11fa18;
        case 0x11fa1cu: goto label_11fa1c;
        case 0x11fa20u: goto label_11fa20;
        case 0x11fa24u: goto label_11fa24;
        case 0x11fa28u: goto label_11fa28;
        case 0x11fa2cu: goto label_11fa2c;
        case 0x11fa30u: goto label_11fa30;
        case 0x11fa34u: goto label_11fa34;
        case 0x11fa38u: goto label_11fa38;
        case 0x11fa3cu: goto label_11fa3c;
        case 0x11fa40u: goto label_11fa40;
        case 0x11fa44u: goto label_11fa44;
        case 0x11fa48u: goto label_11fa48;
        case 0x11fa4cu: goto label_11fa4c;
        case 0x11fa50u: goto label_11fa50;
        case 0x11fa54u: goto label_11fa54;
        case 0x11fa58u: goto label_11fa58;
        case 0x11fa5cu: goto label_11fa5c;
        case 0x11fa60u: goto label_11fa60;
        case 0x11fa64u: goto label_11fa64;
        case 0x11fa68u: goto label_11fa68;
        case 0x11fa6cu: goto label_11fa6c;
        case 0x11fa70u: goto label_11fa70;
        case 0x11fa74u: goto label_11fa74;
        case 0x11fa78u: goto label_11fa78;
        case 0x11fa7cu: goto label_11fa7c;
        case 0x11fa80u: goto label_11fa80;
        case 0x11fa84u: goto label_11fa84;
        case 0x11fa88u: goto label_11fa88;
        case 0x11fa8cu: goto label_11fa8c;
        case 0x11fa90u: goto label_11fa90;
        case 0x11fa94u: goto label_11fa94;
        case 0x11fa98u: goto label_11fa98;
        case 0x11fa9cu: goto label_11fa9c;
        case 0x11faa0u: goto label_11faa0;
        case 0x11faa4u: goto label_11faa4;
        case 0x11faa8u: goto label_11faa8;
        case 0x11faacu: goto label_11faac;
        case 0x11fab0u: goto label_11fab0;
        case 0x11fab4u: goto label_11fab4;
        case 0x11fab8u: goto label_11fab8;
        case 0x11fabcu: goto label_11fabc;
        case 0x11fac0u: goto label_11fac0;
        case 0x11fac4u: goto label_11fac4;
        default: break;
    }

    ctx->pc = 0x11f9e0u;

label_11f9e0:
    // 0x11f9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11f9e4:
    // 0x11f9e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11f9e8:
    // 0x11f9e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11f9ec:
    // 0x11f9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11f9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11f9f0:
    // 0x11f9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11f9f4:
    // 0x11f9f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11f9f8:
    // 0x11f9f8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11f9fc:
    if (ctx->pc == 0x11F9FCu) {
        ctx->pc = 0x11F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9F8u;
        // 0x11f9fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA00u;
        goto label_11fa00;
    }
    ctx->pc = 0x11F9F8u;
    {
        const bool branch_taken_0x11f9f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9F8u;
        // 0x11f9fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9f8) {
            ctx->pc = 0x11FA08u;
            goto label_11fa08;
        }
    }
    ctx->pc = 0x11FA00u;
label_11fa00:
    // 0x11fa00: 0x10000029  b           . + 4 + (0x29 << 2)
label_11fa04:
    if (ctx->pc == 0x11FA04u) {
        ctx->pc = 0x11FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA00u;
        // 0x11fa04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA08u;
        goto label_11fa08;
    }
    ctx->pc = 0x11FA00u;
    {
        const bool branch_taken_0x11fa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA00u;
        // 0x11fa04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa00) {
            ctx->pc = 0x11FAA8u;
            goto label_11faa8;
        }
    }
    ctx->pc = 0x11FA08u;
label_11fa08:
    // 0x11fa08: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11fa08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11fa0c:
    // 0x11fa0c: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11fa10:
    if (ctx->pc == 0x11FA10u) {
        ctx->pc = 0x11FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA0Cu;
        // 0x11fa10: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA14u;
        goto label_11fa14;
    }
    ctx->pc = 0x11FA0Cu;
    {
        const bool branch_taken_0x11fa0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA0Cu;
        // 0x11fa10: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa0c) {
            ctx->pc = 0x11FA9Cu;
            goto label_11fa9c;
        }
    }
    ctx->pc = 0x11FA14u;
label_11fa14:
    // 0x11fa14: 0x26629158  addiu       $v0, $s3, -0x6EA8
    ctx->pc = 0x11fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938968));
label_11fa18:
    // 0x11fa18: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11fa18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11fa1c:
    // 0x11fa1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fa20:
    // 0x11fa20: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11fa24:
    if (ctx->pc == 0x11FA24u) {
        ctx->pc = 0x11FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA20u;
        // 0x11fa24: 0x26639158  addiu       $v1, $s3, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA28u;
        goto label_11fa28;
    }
    ctx->pc = 0x11FA20u;
    {
        const bool branch_taken_0x11fa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA20u;
        // 0x11fa24: 0x26639158  addiu       $v1, $s3, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa20) {
            ctx->pc = 0x11FAA0u;
            goto label_11faa0;
        }
    }
    ctx->pc = 0x11FA28u;
label_11fa28:
    // 0x11fa28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11fa2c:
    // 0x11fa2c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11fa30:
    // 0x11fa30: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11fa30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11fa34:
    // 0x11fa34: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11fa34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11fa38:
    // 0x11fa38: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x11fa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_11fa3c:
    // 0x11fa3c: 0x24a586a0  addiu       $a1, $a1, -0x7960
    ctx->pc = 0x11fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936224));
label_11fa40:
    // 0x11fa40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11fa44:
    // 0x11fa44: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11fa44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11fa48:
    // 0x11fa48: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11fa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fa4c:
    // 0x11fa4c: 0x24090437  addiu       $t1, $zero, 0x437
    ctx->pc = 0x11fa4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1079));
label_11fa50:
    // 0x11fa50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11fa50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11fa54:
    // 0x11fa54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fa54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fa58:
    // 0x11fa58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11fa5c:
    // 0x11fa5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fa5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fa60:
    // 0x11fa60: 0x40f809  jalr        $v0
label_11fa64:
    if (ctx->pc == 0x11FA64u) {
        ctx->pc = 0x11FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA60u;
        // 0x11fa64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA68u;
        goto label_11fa68;
    }
    ctx->pc = 0x11FA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FA68u);
        ctx->pc = 0x11FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA60u;
        // 0x11fa64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FA60u, 0x11FA68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FA68u;
label_11fa68:
    // 0x11fa68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fa6c:
    // 0x11fa6c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11fa70:
    if (ctx->pc == 0x11FA70u) {
        ctx->pc = 0x11FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA6Cu;
        // 0x11fa70: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA74u;
        goto label_11fa74;
    }
    ctx->pc = 0x11FA6Cu;
    {
        const bool branch_taken_0x11fa6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fa6c) {
            ctx->pc = 0x11FA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FA6Cu;
            // 0x11fa70: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FA84u;
            goto label_11fa84;
        }
    }
    ctx->pc = 0x11FA74u;
label_11fa74:
    // 0x11fa74: 0xc0491de  jal         func_124778
label_11fa78:
    if (ctx->pc == 0x11FA78u) {
        ctx->pc = 0x11FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA74u;
        // 0x11fa78: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA7Cu;
        goto label_11fa7c;
    }
    ctx->pc = 0x11FA74u;
    SET_GPR_U32(ctx, 31, 0x11FA7Cu);
    ctx->pc = 0x11FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA74u;
    // 0x11fa78: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124778u, 0x11FA74u, 0x11FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA7Cu;
label_11fa7c:
    // 0x11fa7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fa80:
    // 0x11fa80: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11fa84:
    // 0x11fa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fa88:
    // 0x11fa88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11fa8c:
    // 0x11fa8c: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11fa8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11fa90:
    // 0x11fa90: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11fa94:
    // 0x11fa94: 0x60f809  jalr        $v1
label_11fa98:
    if (ctx->pc == 0x11FA98u) {
        ctx->pc = 0x11FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA94u;
        // 0x11fa98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FA9Cu;
        goto label_11fa9c;
    }
    ctx->pc = 0x11FA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11FA9Cu);
        ctx->pc = 0x11FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA94u;
        // 0x11fa98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FA94u, 0x11FA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FA9Cu;
label_11fa9c:
    // 0x11fa9c: 0x26639158  addiu       $v1, $s3, -0x6EA8
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938968));
label_11faa0:
    // 0x11faa0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11faa4:
    // 0x11faa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11faa8:
    // 0x11faa8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11faa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11faac:
    // 0x11faac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11faacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11fab0:
    // 0x11fab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11fab4:
    // 0x11fab4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11fab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11fab8:
    // 0x11fab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fabc:
    // 0x11fabc: 0x3e00008  jr          $ra
label_11fac0:
    if (ctx->pc == 0x11FAC0u) {
        ctx->pc = 0x11FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FABCu;
        // 0x11fac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FAC4u;
        goto label_11fac4;
    }
    ctx->pc = 0x11FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FABCu;
        // 0x11fac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FAC4u;
label_11fac4:
    // 0x11fac4: 0x0  nop
    ctx->pc = 0x11fac4u;
    // NOP
    ctx->pc = 0x11fac8u;
}
