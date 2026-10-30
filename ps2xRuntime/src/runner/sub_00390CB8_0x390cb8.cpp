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

// Function: sub_00390CB8
// Address: 0x390cb8 - 0x390d90
void sub_00390CB8_0x390cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390CB8_0x390cb8");
#endif

    switch (ctx->pc) {
        case 0x390cb8u: goto label_390cb8;
        case 0x390cbcu: goto label_390cbc;
        case 0x390cc0u: goto label_390cc0;
        case 0x390cc4u: goto label_390cc4;
        case 0x390cc8u: goto label_390cc8;
        case 0x390cccu: goto label_390ccc;
        case 0x390cd0u: goto label_390cd0;
        case 0x390cd4u: goto label_390cd4;
        case 0x390cd8u: goto label_390cd8;
        case 0x390cdcu: goto label_390cdc;
        case 0x390ce0u: goto label_390ce0;
        case 0x390ce4u: goto label_390ce4;
        case 0x390ce8u: goto label_390ce8;
        case 0x390cecu: goto label_390cec;
        case 0x390cf0u: goto label_390cf0;
        case 0x390cf4u: goto label_390cf4;
        case 0x390cf8u: goto label_390cf8;
        case 0x390cfcu: goto label_390cfc;
        case 0x390d00u: goto label_390d00;
        case 0x390d04u: goto label_390d04;
        case 0x390d08u: goto label_390d08;
        case 0x390d0cu: goto label_390d0c;
        case 0x390d10u: goto label_390d10;
        case 0x390d14u: goto label_390d14;
        case 0x390d18u: goto label_390d18;
        case 0x390d1cu: goto label_390d1c;
        case 0x390d20u: goto label_390d20;
        case 0x390d24u: goto label_390d24;
        case 0x390d28u: goto label_390d28;
        case 0x390d2cu: goto label_390d2c;
        case 0x390d30u: goto label_390d30;
        case 0x390d34u: goto label_390d34;
        case 0x390d38u: goto label_390d38;
        case 0x390d3cu: goto label_390d3c;
        case 0x390d40u: goto label_390d40;
        case 0x390d44u: goto label_390d44;
        case 0x390d48u: goto label_390d48;
        case 0x390d4cu: goto label_390d4c;
        case 0x390d50u: goto label_390d50;
        case 0x390d54u: goto label_390d54;
        case 0x390d58u: goto label_390d58;
        case 0x390d5cu: goto label_390d5c;
        case 0x390d60u: goto label_390d60;
        case 0x390d64u: goto label_390d64;
        case 0x390d68u: goto label_390d68;
        case 0x390d6cu: goto label_390d6c;
        case 0x390d70u: goto label_390d70;
        case 0x390d74u: goto label_390d74;
        case 0x390d78u: goto label_390d78;
        case 0x390d7cu: goto label_390d7c;
        case 0x390d80u: goto label_390d80;
        case 0x390d84u: goto label_390d84;
        case 0x390d88u: goto label_390d88;
        case 0x390d8cu: goto label_390d8c;
        default: break;
    }

    ctx->pc = 0x390cb8u;

label_390cb8:
    // 0x390cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x390cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_390cbc:
    // 0x390cbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x390cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_390cc0:
    // 0x390cc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x390cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_390cc4:
    // 0x390cc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x390cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390cc8:
    // 0x390cc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x390cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_390ccc:
    // 0x390ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390cd0:
    // 0x390cd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x390cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_390cd4:
    // 0x390cd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x390cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390cd8:
    // 0x390cd8: 0x84650010  lh          $a1, 0x10($v1)
    ctx->pc = 0x390cd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_390cdc:
    // 0x390cdc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x390cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_390ce0:
    // 0x390ce0: 0x40f809  jalr        $v0
label_390ce4:
    if (ctx->pc == 0x390CE4u) {
        ctx->pc = 0x390CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CE0u;
        // 0x390ce4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390CE8u;
        goto label_390ce8;
    }
    ctx->pc = 0x390CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390CE8u);
        ctx->pc = 0x390CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CE0u;
        // 0x390ce4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390CE0u, 0x390CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390CE8u;
label_390ce8:
    // 0x390ce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x390ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390cec:
    // 0x390cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390cf0:
    // 0x390cf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x390cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_390cf4:
    // 0x390cf4: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x390cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_390cf8:
    // 0x390cf8: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x390cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_390cfc:
    // 0x390cfc: 0xc0f809  jalr        $a2
label_390d00:
    if (ctx->pc == 0x390D00u) {
        ctx->pc = 0x390D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CFCu;
        // 0x390d00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D04u;
        goto label_390d04;
    }
    ctx->pc = 0x390CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x390D04u);
        ctx->pc = 0x390D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CFCu;
        // 0x390d00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390CFCu, 0x390D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390D04u;
label_390d04:
    // 0x390d04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x390d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_390d08:
    // 0x390d08: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x390d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_390d0c:
    // 0x390d0c: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x390d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_390d10:
    // 0x390d10: 0x40f809  jalr        $v0
label_390d14:
    if (ctx->pc == 0x390D14u) {
        ctx->pc = 0x390D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D10u;
        // 0x390d14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D18u;
        goto label_390d18;
    }
    ctx->pc = 0x390D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390D18u);
        ctx->pc = 0x390D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D10u;
        // 0x390d14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390D10u, 0x390D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390D18u;
label_390d18:
    // 0x390d18: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_390d1c:
    if (ctx->pc == 0x390D1Cu) {
        ctx->pc = 0x390D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D18u;
        // 0x390d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D20u;
        goto label_390d20;
    }
    ctx->pc = 0x390D18u;
    {
        const bool branch_taken_0x390d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390d18) {
            ctx->pc = 0x390D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390D18u;
            // 0x390d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390D48u;
            goto label_390d48;
        }
    }
    ctx->pc = 0x390D20u;
label_390d20:
    // 0x390d20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x390d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_390d24:
    // 0x390d24: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x390d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_390d28:
    // 0x390d28: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x390d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_390d2c:
    // 0x390d2c: 0x40f809  jalr        $v0
label_390d30:
    if (ctx->pc == 0x390D30u) {
        ctx->pc = 0x390D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D2Cu;
        // 0x390d30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D34u;
        goto label_390d34;
    }
    ctx->pc = 0x390D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390D34u);
        ctx->pc = 0x390D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D2Cu;
        // 0x390d30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390D2Cu, 0x390D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390D34u;
label_390d34:
    // 0x390d34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x390d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_390d38:
    // 0x390d38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x390d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_390d3c:
    // 0x390d3c: 0x60f809  jalr        $v1
label_390d40:
    if (ctx->pc == 0x390D40u) {
        ctx->pc = 0x390D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D3Cu;
        // 0x390d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D44u;
        goto label_390d44;
    }
    ctx->pc = 0x390D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390D44u);
        ctx->pc = 0x390D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D3Cu;
        // 0x390d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390D3Cu, 0x390D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390D44u;
label_390d44:
    // 0x390d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390d48:
    // 0x390d48: 0xc0e4120  jal         func_390480
label_390d4c:
    if (ctx->pc == 0x390D4Cu) {
        ctx->pc = 0x390D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D48u;
        // 0x390d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D50u;
        goto label_390d50;
    }
    ctx->pc = 0x390D48u;
    SET_GPR_U32(ctx, 31, 0x390D50u);
    ctx->pc = 0x390D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D48u;
    // 0x390d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390480u, 0x390D48u, 0x390D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D50u;
label_390d50:
    // 0x390d50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x390d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_390d54:
    // 0x390d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x390d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390d58:
    // 0x390d58: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x390d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_390d5c:
    // 0x390d5c: 0xc0e8cbc  jal         func_3A32F0
label_390d60:
    if (ctx->pc == 0x390D60u) {
        ctx->pc = 0x390D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D5Cu;
        // 0x390d60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D64u;
        goto label_390d64;
    }
    ctx->pc = 0x390D5Cu;
    SET_GPR_U32(ctx, 31, 0x390D64u);
    ctx->pc = 0x390D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D5Cu;
    // 0x390d60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x390D5Cu, 0x390D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D64u;
label_390d64:
    // 0x390d64: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x390d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_390d68:
    // 0x390d68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x390d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_390d6c:
    // 0x390d6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x390d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390d70:
    // 0x390d70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x390d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390d74:
    // 0x390d74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x390d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_390d78:
    // 0x390d78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x390d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390d7c:
    // 0x390d7c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x390d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_390d80:
    // 0x390d80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x390d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390d84:
    // 0x390d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390d88:
    // 0x390d88: 0x3e00008  jr          $ra
label_390d8c:
    if (ctx->pc == 0x390D8Cu) {
        ctx->pc = 0x390D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D88u;
        // 0x390d8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390D90u;
        goto label_fallthrough_0x390d88;
    }
    ctx->pc = 0x390D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D88u;
        // 0x390d8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390d88:
    ctx->pc = 0x390D90u;
}
