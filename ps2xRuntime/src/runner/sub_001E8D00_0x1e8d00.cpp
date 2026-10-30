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

// Function: sub_001E8D00
// Address: 0x1e8d00 - 0x1e8dd0
void sub_001E8D00_0x1e8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D00_0x1e8d00");
#endif

    switch (ctx->pc) {
        case 0x1e8d00u: goto label_1e8d00;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d0cu: goto label_1e8d0c;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d14u: goto label_1e8d14;
        case 0x1e8d18u: goto label_1e8d18;
        case 0x1e8d1cu: goto label_1e8d1c;
        case 0x1e8d20u: goto label_1e8d20;
        case 0x1e8d24u: goto label_1e8d24;
        case 0x1e8d28u: goto label_1e8d28;
        case 0x1e8d2cu: goto label_1e8d2c;
        case 0x1e8d30u: goto label_1e8d30;
        case 0x1e8d34u: goto label_1e8d34;
        case 0x1e8d38u: goto label_1e8d38;
        case 0x1e8d3cu: goto label_1e8d3c;
        case 0x1e8d40u: goto label_1e8d40;
        case 0x1e8d44u: goto label_1e8d44;
        case 0x1e8d48u: goto label_1e8d48;
        case 0x1e8d4cu: goto label_1e8d4c;
        case 0x1e8d50u: goto label_1e8d50;
        case 0x1e8d54u: goto label_1e8d54;
        case 0x1e8d58u: goto label_1e8d58;
        case 0x1e8d5cu: goto label_1e8d5c;
        case 0x1e8d60u: goto label_1e8d60;
        case 0x1e8d64u: goto label_1e8d64;
        case 0x1e8d68u: goto label_1e8d68;
        case 0x1e8d6cu: goto label_1e8d6c;
        case 0x1e8d70u: goto label_1e8d70;
        case 0x1e8d74u: goto label_1e8d74;
        case 0x1e8d78u: goto label_1e8d78;
        case 0x1e8d7cu: goto label_1e8d7c;
        case 0x1e8d80u: goto label_1e8d80;
        case 0x1e8d84u: goto label_1e8d84;
        case 0x1e8d88u: goto label_1e8d88;
        case 0x1e8d8cu: goto label_1e8d8c;
        case 0x1e8d90u: goto label_1e8d90;
        case 0x1e8d94u: goto label_1e8d94;
        case 0x1e8d98u: goto label_1e8d98;
        case 0x1e8d9cu: goto label_1e8d9c;
        case 0x1e8da0u: goto label_1e8da0;
        case 0x1e8da4u: goto label_1e8da4;
        case 0x1e8da8u: goto label_1e8da8;
        case 0x1e8dacu: goto label_1e8dac;
        case 0x1e8db0u: goto label_1e8db0;
        case 0x1e8db4u: goto label_1e8db4;
        case 0x1e8db8u: goto label_1e8db8;
        case 0x1e8dbcu: goto label_1e8dbc;
        case 0x1e8dc0u: goto label_1e8dc0;
        case 0x1e8dc4u: goto label_1e8dc4;
        case 0x1e8dc8u: goto label_1e8dc8;
        case 0x1e8dccu: goto label_1e8dcc;
        default: break;
    }

    ctx->pc = 0x1e8d00u;

label_1e8d00:
    // 0x1e8d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e8d04:
    // 0x1e8d04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e8d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e8d08:
    // 0x1e8d08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8d0c:
    // 0x1e8d0c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e8d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1e8d10:
    // 0x1e8d10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e8d14:
    // 0x1e8d14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e8d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e8d18:
    // 0x1e8d18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1e8d1c:
    // 0x1e8d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e8d20:
    // 0x1e8d20: 0xc079f5e  jal         func_1E7D78
label_1e8d24:
    if (ctx->pc == 0x1E8D24u) {
        ctx->pc = 0x1E8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D20u;
        // 0x1e8d24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D28u;
        goto label_1e8d28;
    }
    ctx->pc = 0x1E8D20u;
    SET_GPR_U32(ctx, 31, 0x1E8D28u);
    ctx->pc = 0x1E8D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D20u;
    // 0x1e8d24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D78u, 0x1E8D20u, 0x1E8D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D28u;
label_1e8d28:
    // 0x1e8d28: 0x8e420ba0  lw          $v0, 0xBA0($s2)
    ctx->pc = 0x1e8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2976)));
label_1e8d2c:
    // 0x1e8d2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1e8d30:
    if (ctx->pc == 0x1E8D30u) {
        ctx->pc = 0x1E8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D2Cu;
        // 0x1e8d30: 0x26510490  addiu       $s1, $s2, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D34u;
        goto label_1e8d34;
    }
    ctx->pc = 0x1E8D2Cu;
    {
        const bool branch_taken_0x1e8d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D2Cu;
        // 0x1e8d30: 0x26510490  addiu       $s1, $s2, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d2c) {
            ctx->pc = 0x1E8D88u;
            goto label_1e8d88;
        }
    }
    ctx->pc = 0x1E8D34u;
label_1e8d34:
    // 0x1e8d34: 0x26500790  addiu       $s0, $s2, 0x790
    ctx->pc = 0x1e8d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
label_1e8d38:
    // 0x1e8d38: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1e8d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8d3c:
    // 0x1e8d3c: 0x0  nop
    ctx->pc = 0x1e8d3cu;
    // NOP
label_1e8d40:
    // 0x1e8d40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8d44:
    // 0x1e8d44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e8d44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e8d48:
    // 0x1e8d48: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1e8d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1e8d4c:
    // 0x1e8d4c: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1e8d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e8d50:
    // 0x1e8d50: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1e8d54:
    // 0x1e8d54: 0x40f809  jalr        $v0
label_1e8d58:
    if (ctx->pc == 0x1E8D58u) {
        ctx->pc = 0x1E8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D54u;
        // 0x1e8d58: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D5Cu;
        goto label_1e8d5c;
    }
    ctx->pc = 0x1E8D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8D5Cu);
        ctx->pc = 0x1E8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D54u;
        // 0x1e8d58: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D54u, 0x1E8D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8D5Cu;
label_1e8d5c:
    // 0x1e8d5c: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1e8d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1e8d60:
    // 0x1e8d60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8d64:
    // 0x1e8d64: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x1e8d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
label_1e8d68:
    // 0x1e8d68: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e8d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e8d6c:
    // 0x1e8d6c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e8d70:
    // 0x1e8d70: 0x60f809  jalr        $v1
label_1e8d74:
    if (ctx->pc == 0x1E8D74u) {
        ctx->pc = 0x1E8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D70u;
        // 0x1e8d74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D78u;
        goto label_1e8d78;
    }
    ctx->pc = 0x1E8D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8D78u);
        ctx->pc = 0x1E8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D70u;
        // 0x1e8d74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D70u, 0x1E8D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8D78u;
label_1e8d78:
    // 0x1e8d78: 0x8e420ba0  lw          $v0, 0xBA0($s2)
    ctx->pc = 0x1e8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2976)));
label_1e8d7c:
    // 0x1e8d7c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1e8d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8d80:
    // 0x1e8d80: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1e8d84:
    if (ctx->pc == 0x1E8D84u) {
        ctx->pc = 0x1E8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D80u;
        // 0x1e8d84: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D88u;
        goto label_1e8d88;
    }
    ctx->pc = 0x1E8D80u;
    {
        const bool branch_taken_0x1e8d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D80u;
        // 0x1e8d84: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d80) {
            ctx->pc = 0x1E8D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8d40;
        }
    }
    ctx->pc = 0x1E8D88u;
label_1e8d88:
    // 0x1e8d88: 0x26440390  addiu       $a0, $s2, 0x390
    ctx->pc = 0x1e8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
label_1e8d8c:
    // 0x1e8d8c: 0xc068998  jal         func_1A2660
label_1e8d90:
    if (ctx->pc == 0x1E8D90u) {
        ctx->pc = 0x1E8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D8Cu;
        // 0x1e8d90: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D94u;
        goto label_1e8d94;
    }
    ctx->pc = 0x1E8D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D94u);
    ctx->pc = 0x1E8D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D8Cu;
    // 0x1e8d90: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E8D8Cu, 0x1E8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D94u;
label_1e8d94:
    // 0x1e8d94: 0x26420a00  addiu       $v0, $s2, 0xA00
    ctx->pc = 0x1e8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2560));
label_1e8d98:
    // 0x1e8d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e8d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8d9c:
    // 0x1e8d9c: 0xc0734a2  jal         func_1CD288
label_1e8da0:
    if (ctx->pc == 0x1E8DA0u) {
        ctx->pc = 0x1E8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D9Cu;
        // 0x1e8da0: 0xa05000c4  sb          $s0, 0xC4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DA4u;
        goto label_1e8da4;
    }
    ctx->pc = 0x1E8D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E8DA4u);
    ctx->pc = 0x1E8DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D9Cu;
    // 0x1e8da0: 0xa05000c4  sb          $s0, 0xC4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1E8D9Cu, 0x1E8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DA4u;
label_1e8da4:
    // 0x1e8da4: 0x26440ad0  addiu       $a0, $s2, 0xAD0
    ctx->pc = 0x1e8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2768));
label_1e8da8:
    // 0x1e8da8: 0xc0734a2  jal         func_1CD288
label_1e8dac:
    if (ctx->pc == 0x1E8DACu) {
        ctx->pc = 0x1E8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DA8u;
        // 0x1e8dac: 0xa09000c4  sb          $s0, 0xC4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DB0u;
        goto label_1e8db0;
    }
    ctx->pc = 0x1E8DA8u;
    SET_GPR_U32(ctx, 31, 0x1E8DB0u);
    ctx->pc = 0x1E8DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DA8u;
    // 0x1e8dac: 0xa09000c4  sb          $s0, 0xC4($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1E8DA8u, 0x1E8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DB0u;
label_1e8db0:
    // 0x1e8db0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e8db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8db4:
    // 0x1e8db4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e8db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8db8:
    // 0x1e8db8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e8db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8dbc:
    // 0x1e8dbc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e8dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8dc0:
    // 0x1e8dc0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e8dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8dc4:
    // 0x1e8dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8dc8:
    // 0x1e8dc8: 0x3e00008  jr          $ra
label_1e8dcc:
    if (ctx->pc == 0x1E8DCCu) {
        ctx->pc = 0x1E8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DC8u;
        // 0x1e8dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DD0u;
        goto label_fallthrough_0x1e8dc8;
    }
    ctx->pc = 0x1E8DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DC8u;
        // 0x1e8dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8dc8:
    ctx->pc = 0x1E8DD0u;
}
