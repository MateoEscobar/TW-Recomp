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

// Function: sub_00412CA0
// Address: 0x412ca0 - 0x412dc8
void sub_00412CA0_0x412ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412CA0_0x412ca0");
#endif

    switch (ctx->pc) {
        case 0x412ca0u: goto label_412ca0;
        case 0x412ca4u: goto label_412ca4;
        case 0x412ca8u: goto label_412ca8;
        case 0x412cacu: goto label_412cac;
        case 0x412cb0u: goto label_412cb0;
        case 0x412cb4u: goto label_412cb4;
        case 0x412cb8u: goto label_412cb8;
        case 0x412cbcu: goto label_412cbc;
        case 0x412cc0u: goto label_412cc0;
        case 0x412cc4u: goto label_412cc4;
        case 0x412cc8u: goto label_412cc8;
        case 0x412cccu: goto label_412ccc;
        case 0x412cd0u: goto label_412cd0;
        case 0x412cd4u: goto label_412cd4;
        case 0x412cd8u: goto label_412cd8;
        case 0x412cdcu: goto label_412cdc;
        case 0x412ce0u: goto label_412ce0;
        case 0x412ce4u: goto label_412ce4;
        case 0x412ce8u: goto label_412ce8;
        case 0x412cecu: goto label_412cec;
        case 0x412cf0u: goto label_412cf0;
        case 0x412cf4u: goto label_412cf4;
        case 0x412cf8u: goto label_412cf8;
        case 0x412cfcu: goto label_412cfc;
        case 0x412d00u: goto label_412d00;
        case 0x412d04u: goto label_412d04;
        case 0x412d08u: goto label_412d08;
        case 0x412d0cu: goto label_412d0c;
        case 0x412d10u: goto label_412d10;
        case 0x412d14u: goto label_412d14;
        case 0x412d18u: goto label_412d18;
        case 0x412d1cu: goto label_412d1c;
        case 0x412d20u: goto label_412d20;
        case 0x412d24u: goto label_412d24;
        case 0x412d28u: goto label_412d28;
        case 0x412d2cu: goto label_412d2c;
        case 0x412d30u: goto label_412d30;
        case 0x412d34u: goto label_412d34;
        case 0x412d38u: goto label_412d38;
        case 0x412d3cu: goto label_412d3c;
        case 0x412d40u: goto label_412d40;
        case 0x412d44u: goto label_412d44;
        case 0x412d48u: goto label_412d48;
        case 0x412d4cu: goto label_412d4c;
        case 0x412d50u: goto label_412d50;
        case 0x412d54u: goto label_412d54;
        case 0x412d58u: goto label_412d58;
        case 0x412d5cu: goto label_412d5c;
        case 0x412d60u: goto label_412d60;
        case 0x412d64u: goto label_412d64;
        case 0x412d68u: goto label_412d68;
        case 0x412d6cu: goto label_412d6c;
        case 0x412d70u: goto label_412d70;
        case 0x412d74u: goto label_412d74;
        case 0x412d78u: goto label_412d78;
        case 0x412d7cu: goto label_412d7c;
        case 0x412d80u: goto label_412d80;
        case 0x412d84u: goto label_412d84;
        case 0x412d88u: goto label_412d88;
        case 0x412d8cu: goto label_412d8c;
        case 0x412d90u: goto label_412d90;
        case 0x412d94u: goto label_412d94;
        case 0x412d98u: goto label_412d98;
        case 0x412d9cu: goto label_412d9c;
        case 0x412da0u: goto label_412da0;
        case 0x412da4u: goto label_412da4;
        case 0x412da8u: goto label_412da8;
        case 0x412dacu: goto label_412dac;
        case 0x412db0u: goto label_412db0;
        case 0x412db4u: goto label_412db4;
        case 0x412db8u: goto label_412db8;
        case 0x412dbcu: goto label_412dbc;
        case 0x412dc0u: goto label_412dc0;
        case 0x412dc4u: goto label_412dc4;
        default: break;
    }

    ctx->pc = 0x412ca0u;

label_412ca0:
    // 0x412ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x412ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_412ca4:
    // 0x412ca4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x412ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_412ca8:
    // 0x412ca8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x412ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_412cac:
    // 0x412cac: 0x2411026c  addiu       $s1, $zero, 0x26C
    ctx->pc = 0x412cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_412cb0:
    // 0x412cb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x412cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_412cb4:
    // 0x412cb4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x412cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_412cb8:
    // 0x412cb8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x412cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_412cbc:
    // 0x412cbc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x412cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_412cc0:
    // 0x412cc0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x412cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_412cc4:
    // 0x412cc4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x412cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412cc8:
    // 0x412cc8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x412cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_412ccc:
    // 0x412ccc: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x412cccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_412cd0:
    // 0x412cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_412cd4:
    // 0x412cd4: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x412cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_412cd8:
    // 0x412cd8: 0xc0e403c  jal         func_3900F0
label_412cdc:
    if (ctx->pc == 0x412CDCu) {
        ctx->pc = 0x412CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CD8u;
        // 0x412cdc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CE0u;
        goto label_412ce0;
    }
    ctx->pc = 0x412CD8u;
    SET_GPR_U32(ctx, 31, 0x412CE0u);
    ctx->pc = 0x412CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412CD8u;
    // 0x412cdc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x412CD8u, 0x412CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412CE0u;
label_412ce0:
    // 0x412ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x412ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412ce4:
    // 0x412ce4: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_412ce8:
    if (ctx->pc == 0x412CE8u) {
        ctx->pc = 0x412CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CE4u;
        // 0x412ce8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CECu;
        goto label_412cec;
    }
    ctx->pc = 0x412CE4u;
    {
        const bool branch_taken_0x412ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x412ce4) {
            ctx->pc = 0x412CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412CE4u;
            // 0x412ce8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412D80u;
            goto label_412d80;
        }
    }
    ctx->pc = 0x412CECu;
label_412cec:
    // 0x412cec: 0x9202006a  lbu         $v0, 0x6A($s0)
    ctx->pc = 0x412cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
label_412cf0:
    // 0x412cf0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_412cf4:
    if (ctx->pc == 0x412CF4u) {
        ctx->pc = 0x412CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CF0u;
        // 0x412cf4: 0x232001a  div         $zero, $s1, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CF8u;
        goto label_412cf8;
    }
    ctx->pc = 0x412CF0u;
    {
        const bool branch_taken_0x412cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412cf0) {
            ctx->pc = 0x412CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412CF0u;
            // 0x412cf4: 0x232001a  div         $zero, $s1, $s2 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x412D50u;
            goto label_412d50;
        }
    }
    ctx->pc = 0x412CF8u;
label_412cf8:
    // 0x412cf8: 0xc047e6c  jal         func_11F9B0
label_412cfc:
    if (ctx->pc == 0x412CFCu) {
        ctx->pc = 0x412CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CF8u;
        // 0x412cfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D00u;
        goto label_412d00;
    }
    ctx->pc = 0x412CF8u;
    SET_GPR_U32(ctx, 31, 0x412D00u);
    ctx->pc = 0x412CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412CF8u;
    // 0x412cfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x412CF8u, 0x412D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412D00u;
label_412d00:
    // 0x412d00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x412d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412d04:
    // 0x412d04: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x412d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_412d08:
    // 0x412d08: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x412d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_412d0c:
    // 0x412d0c: 0xa0f809  jalr        $a1
label_412d10:
    if (ctx->pc == 0x412D10u) {
        ctx->pc = 0x412D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D0Cu;
        // 0x412d10: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D14u;
        goto label_412d14;
    }
    ctx->pc = 0x412D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x412D14u);
        ctx->pc = 0x412D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D0Cu;
        // 0x412d10: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412D0Cu, 0x412D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412D14u;
label_412d14:
    // 0x412d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x412d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412d18:
    // 0x412d18: 0xc104a86  jal         func_412A18
label_412d1c:
    if (ctx->pc == 0x412D1Cu) {
        ctx->pc = 0x412D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D18u;
        // 0x412d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D20u;
        goto label_412d20;
    }
    ctx->pc = 0x412D18u;
    SET_GPR_U32(ctx, 31, 0x412D20u);
    ctx->pc = 0x412D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412D18u;
    // 0x412d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x412D18u, 0x412D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412D20u;
label_412d20:
    // 0x412d20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_412d24:
    if (ctx->pc == 0x412D24u) {
        ctx->pc = 0x412D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D20u;
        // 0x412d24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D28u;
        goto label_412d28;
    }
    ctx->pc = 0x412D20u;
    {
        const bool branch_taken_0x412d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D20u;
        // 0x412d24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d20) {
            ctx->pc = 0x412D48u;
            goto label_412d48;
        }
    }
    ctx->pc = 0x412D28u;
label_412d28:
    // 0x412d28: 0x92020069  lbu         $v0, 0x69($s0)
    ctx->pc = 0x412d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_412d2c:
    // 0x412d2c: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_412d30:
    if (ctx->pc == 0x412D30u) {
        ctx->pc = 0x412D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D2Cu;
        // 0x412d30: 0x8ea2489c  lw          $v0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D34u;
        goto label_412d34;
    }
    ctx->pc = 0x412D2Cu;
    {
        const bool branch_taken_0x412d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x412D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D2Cu;
        // 0x412d30: 0x8ea2489c  lw          $v0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d2c) {
            ctx->pc = 0x412D4Cu;
            goto label_412d4c;
        }
    }
    ctx->pc = 0x412D34u;
label_412d34:
    // 0x412d34: 0x8c430268  lw          $v1, 0x268($v0)
    ctx->pc = 0x412d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
label_412d38:
    // 0x412d38: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_412d3c:
    if (ctx->pc == 0x412D3Cu) {
        ctx->pc = 0x412D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D38u;
        // 0x412d3c: 0xa2140069  sb          $s4, 0x69($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D40u;
        goto label_412d40;
    }
    ctx->pc = 0x412D38u;
    {
        const bool branch_taken_0x412d38 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x412d38) {
            ctx->pc = 0x412D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412D38u;
            // 0x412d3c: 0xa2140069  sb          $s4, 0x69($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412D4Cu;
            goto label_412d4c;
        }
    }
    ctx->pc = 0x412D40u;
label_412d40:
    // 0x412d40: 0x10000002  b           . + 4 + (0x2 << 2)
label_412d44:
    if (ctx->pc == 0x412D44u) {
        ctx->pc = 0x412D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D40u;
        // 0x412d44: 0xa2040069  sb          $a0, 0x69($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D48u;
        goto label_412d48;
    }
    ctx->pc = 0x412D40u;
    {
        const bool branch_taken_0x412d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D40u;
        // 0x412d44: 0xa2040069  sb          $a0, 0x69($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d40) {
            ctx->pc = 0x412D4Cu;
            goto label_412d4c;
        }
    }
    ctx->pc = 0x412D48u;
label_412d48:
    // 0x412d48: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x412d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_412d4c:
    // 0x412d4c: 0x232001a  div         $zero, $s1, $s2
    ctx->pc = 0x412d4cu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_412d50:
    // 0x412d50: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_412d54:
    if (ctx->pc == 0x412D54u) {
        ctx->pc = 0x412D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D50u;
        // 0x412d54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D58u;
        goto label_412d58;
    }
    ctx->pc = 0x412D50u;
    {
        const bool branch_taken_0x412d50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x412d50) {
            ctx->pc = 0x412D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412D50u;
            // 0x412d54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x412D58u;
            goto label_412d58;
        }
    }
    ctx->pc = 0x412D58u;
label_412d58:
    // 0x412d58: 0x8e624804  lw          $v0, 0x4804($s3)
    ctx->pc = 0x412d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18436)));
label_412d5c:
    // 0x412d5c: 0x1810  mfhi        $v1
    ctx->pc = 0x412d5cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_412d60:
    // 0x412d60: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_412d64:
    if (ctx->pc == 0x412D64u) {
        ctx->pc = 0x412D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D60u;
        // 0x412d64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D68u;
        goto label_412d68;
    }
    ctx->pc = 0x412D60u;
    {
        const bool branch_taken_0x412d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x412d60) {
            ctx->pc = 0x412D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412D60u;
            // 0x412d64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412D80u;
            goto label_412d80;
        }
    }
    ctx->pc = 0x412D68u;
label_412d68:
    // 0x412d68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x412d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412d6c:
    // 0x412d6c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x412d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_412d70:
    // 0x412d70: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x412d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_412d74:
    // 0x412d74: 0x60f809  jalr        $v1
label_412d78:
    if (ctx->pc == 0x412D78u) {
        ctx->pc = 0x412D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D74u;
        // 0x412d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D7Cu;
        goto label_412d7c;
    }
    ctx->pc = 0x412D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x412D7Cu);
        ctx->pc = 0x412D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D74u;
        // 0x412d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412D74u, 0x412D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412D7Cu;
label_412d7c:
    // 0x412d7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x412d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_412d80:
    // 0x412d80: 0x2a2202ec  slti        $v0, $s1, 0x2EC
    ctx->pc = 0x412d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)748) ? 1 : 0);
label_412d84:
    // 0x412d84: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
label_412d88:
    if (ctx->pc == 0x412D88u) {
        ctx->pc = 0x412D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D84u;
        // 0x412d88: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D8Cu;
        goto label_412d8c;
    }
    ctx->pc = 0x412D84u;
    {
        const bool branch_taken_0x412d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412d84) {
            ctx->pc = 0x412D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412D84u;
            // 0x412d88: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412cd8;
        }
    }
    ctx->pc = 0x412D8Cu;
label_412d8c:
    // 0x412d8c: 0x8e624804  lw          $v0, 0x4804($s3)
    ctx->pc = 0x412d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18436)));
label_412d90:
    // 0x412d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x412d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_412d94:
    // 0x412d94: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x412d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_412d98:
    // 0x412d98: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_412d9c:
    if (ctx->pc == 0x412D9Cu) {
        ctx->pc = 0x412D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D98u;
        // 0x412d9c: 0xae624804  sw          $v0, 0x4804($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 18436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412DA0u;
        goto label_412da0;
    }
    ctx->pc = 0x412D98u;
    {
        const bool branch_taken_0x412d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x412D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D98u;
        // 0x412d9c: 0xae624804  sw          $v0, 0x4804($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 18436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d98) {
            ctx->pc = 0x412DA4u;
            goto label_412da4;
        }
    }
    ctx->pc = 0x412DA0u;
label_412da0:
    // 0x412da0: 0xae604804  sw          $zero, 0x4804($s3)
    ctx->pc = 0x412da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18436), GPR_U32(ctx, 0));
label_412da4:
    // 0x412da4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x412da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_412da8:
    // 0x412da8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x412da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_412dac:
    // 0x412dac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x412dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412db0:
    // 0x412db0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x412db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412db4:
    // 0x412db4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x412db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412db8:
    // 0x412db8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x412db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412dbc:
    // 0x412dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412dc0:
    // 0x412dc0: 0x3e00008  jr          $ra
label_412dc4:
    if (ctx->pc == 0x412DC4u) {
        ctx->pc = 0x412DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412DC0u;
        // 0x412dc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412DC8u;
        goto label_fallthrough_0x412dc0;
    }
    ctx->pc = 0x412DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412DC0u;
        // 0x412dc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x412dc0:
    ctx->pc = 0x412DC8u;
}
