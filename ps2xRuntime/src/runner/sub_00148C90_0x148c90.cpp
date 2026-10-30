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

// Function: sub_00148C90
// Address: 0x148c90 - 0x148db0
void sub_00148C90_0x148c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148C90_0x148c90");
#endif

    switch (ctx->pc) {
        case 0x148c90u: goto label_148c90;
        case 0x148c94u: goto label_148c94;
        case 0x148c98u: goto label_148c98;
        case 0x148c9cu: goto label_148c9c;
        case 0x148ca0u: goto label_148ca0;
        case 0x148ca4u: goto label_148ca4;
        case 0x148ca8u: goto label_148ca8;
        case 0x148cacu: goto label_148cac;
        case 0x148cb0u: goto label_148cb0;
        case 0x148cb4u: goto label_148cb4;
        case 0x148cb8u: goto label_148cb8;
        case 0x148cbcu: goto label_148cbc;
        case 0x148cc0u: goto label_148cc0;
        case 0x148cc4u: goto label_148cc4;
        case 0x148cc8u: goto label_148cc8;
        case 0x148cccu: goto label_148ccc;
        case 0x148cd0u: goto label_148cd0;
        case 0x148cd4u: goto label_148cd4;
        case 0x148cd8u: goto label_148cd8;
        case 0x148cdcu: goto label_148cdc;
        case 0x148ce0u: goto label_148ce0;
        case 0x148ce4u: goto label_148ce4;
        case 0x148ce8u: goto label_148ce8;
        case 0x148cecu: goto label_148cec;
        case 0x148cf0u: goto label_148cf0;
        case 0x148cf4u: goto label_148cf4;
        case 0x148cf8u: goto label_148cf8;
        case 0x148cfcu: goto label_148cfc;
        case 0x148d00u: goto label_148d00;
        case 0x148d04u: goto label_148d04;
        case 0x148d08u: goto label_148d08;
        case 0x148d0cu: goto label_148d0c;
        case 0x148d10u: goto label_148d10;
        case 0x148d14u: goto label_148d14;
        case 0x148d18u: goto label_148d18;
        case 0x148d1cu: goto label_148d1c;
        case 0x148d20u: goto label_148d20;
        case 0x148d24u: goto label_148d24;
        case 0x148d28u: goto label_148d28;
        case 0x148d2cu: goto label_148d2c;
        case 0x148d30u: goto label_148d30;
        case 0x148d34u: goto label_148d34;
        case 0x148d38u: goto label_148d38;
        case 0x148d3cu: goto label_148d3c;
        case 0x148d40u: goto label_148d40;
        case 0x148d44u: goto label_148d44;
        case 0x148d48u: goto label_148d48;
        case 0x148d4cu: goto label_148d4c;
        case 0x148d50u: goto label_148d50;
        case 0x148d54u: goto label_148d54;
        case 0x148d58u: goto label_148d58;
        case 0x148d5cu: goto label_148d5c;
        case 0x148d60u: goto label_148d60;
        case 0x148d64u: goto label_148d64;
        case 0x148d68u: goto label_148d68;
        case 0x148d6cu: goto label_148d6c;
        case 0x148d70u: goto label_148d70;
        case 0x148d74u: goto label_148d74;
        case 0x148d78u: goto label_148d78;
        case 0x148d7cu: goto label_148d7c;
        case 0x148d80u: goto label_148d80;
        case 0x148d84u: goto label_148d84;
        case 0x148d88u: goto label_148d88;
        case 0x148d8cu: goto label_148d8c;
        case 0x148d90u: goto label_148d90;
        case 0x148d94u: goto label_148d94;
        case 0x148d98u: goto label_148d98;
        case 0x148d9cu: goto label_148d9c;
        case 0x148da0u: goto label_148da0;
        case 0x148da4u: goto label_148da4;
        case 0x148da8u: goto label_148da8;
        case 0x148dacu: goto label_148dac;
        default: break;
    }

    ctx->pc = 0x148c90u;

label_148c90:
    // 0x148c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_148c94:
    // 0x148c94: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x148c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_148c98:
    // 0x148c98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x148c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_148c9c:
    // 0x148c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148ca0:
    // 0x148ca0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x148ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_148ca4:
    // 0x148ca4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x148ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_148ca8:
    // 0x148ca8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x148ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_148cac:
    // 0x148cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148cb0:
    // 0x148cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x148cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_148cb4:
    // 0x148cb4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_148cb8:
    // 0x148cb8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x148cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_148cbc:
    // 0x148cbc: 0x40f809  jalr        $v0
label_148cc0:
    if (ctx->pc == 0x148CC0u) {
        ctx->pc = 0x148CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CBCu;
        // 0x148cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148CC4u;
        goto label_148cc4;
    }
    ctx->pc = 0x148CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148CC4u);
        ctx->pc = 0x148CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CBCu;
        // 0x148cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148CBCu, 0x148CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148CC4u;
label_148cc4:
    // 0x148cc4: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_148cc8:
    if (ctx->pc == 0x148CC8u) {
        ctx->pc = 0x148CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CC4u;
        // 0x148cc8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148CCCu;
        goto label_148ccc;
    }
    ctx->pc = 0x148CC4u;
    {
        const bool branch_taken_0x148cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148cc4) {
            ctx->pc = 0x148CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148CC4u;
            // 0x148cc8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148D90u;
            goto label_148d90;
        }
    }
    ctx->pc = 0x148CCCu;
label_148ccc:
    // 0x148ccc: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x148cccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_148cd0:
    // 0x148cd0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_148cd4:
    // 0x148cd4: 0x0  nop
    ctx->pc = 0x148cd4u;
    // NOP
label_148cd8:
    // 0x148cd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_148cdc:
    // 0x148cdc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x148cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_148ce0:
    // 0x148ce0: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_148ce4:
    // 0x148ce4: 0xa0f809  jalr        $a1
label_148ce8:
    if (ctx->pc == 0x148CE8u) {
        ctx->pc = 0x148CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CE4u;
        // 0x148ce8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148CECu;
        goto label_148cec;
    }
    ctx->pc = 0x148CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x148CECu);
        ctx->pc = 0x148CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CE4u;
        // 0x148ce8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148CE4u, 0x148CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148CECu;
label_148cec:
    // 0x148cec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x148cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_148cf0:
    // 0x148cf0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_148cf4:
    // 0x148cf4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x148cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_148cf8:
    // 0x148cf8: 0x40f809  jalr        $v0
label_148cfc:
    if (ctx->pc == 0x148CFCu) {
        ctx->pc = 0x148CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CF8u;
        // 0x148cfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D00u;
        goto label_148d00;
    }
    ctx->pc = 0x148CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148D00u);
        ctx->pc = 0x148CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CF8u;
        // 0x148cfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148CF8u, 0x148D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148D00u;
label_148d00:
    // 0x148d00: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_148d04:
    if (ctx->pc == 0x148D04u) {
        ctx->pc = 0x148D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D00u;
        // 0x148d04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D08u;
        goto label_148d08;
    }
    ctx->pc = 0x148D00u;
    {
        const bool branch_taken_0x148d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D00u;
        // 0x148d04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d00) {
            ctx->pc = 0x148D8Cu;
            goto label_148d8c;
        }
    }
    ctx->pc = 0x148D08u;
label_148d08:
    // 0x148d08: 0xc12aa7c  jal         func_4AA9F0
label_148d0c:
    if (ctx->pc == 0x148D0Cu) {
        ctx->pc = 0x148D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D08u;
        // 0x148d0c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D10u;
        goto label_148d10;
    }
    ctx->pc = 0x148D08u;
    SET_GPR_U32(ctx, 31, 0x148D10u);
    ctx->pc = 0x148D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D08u;
    // 0x148d0c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA9F0u, 0x148D08u, 0x148D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D10u;
label_148d10:
    // 0x148d10: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_148d14:
    // 0x148d14: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_148d18:
    // 0x148d18: 0x2672b728  addiu       $s2, $s3, -0x48D8
    ctx->pc = 0x148d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948648));
label_148d1c:
    // 0x148d1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_148d20:
    // 0x148d20: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_148d24:
    // 0x148d24: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x148d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_148d28:
    // 0x148d28: 0x40f809  jalr        $v0
label_148d2c:
    if (ctx->pc == 0x148D2Cu) {
        ctx->pc = 0x148D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D28u;
        // 0x148d2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D30u;
        goto label_148d30;
    }
    ctx->pc = 0x148D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148D30u);
        ctx->pc = 0x148D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D28u;
        // 0x148d2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D28u, 0x148D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148D30u;
label_148d30:
    // 0x148d30: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_148d34:
    // 0x148d34: 0x8e84b720  lw          $a0, -0x48E0($s4)
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948640)));
label_148d38:
    // 0x148d38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_148d3c:
    // 0x148d3c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x148d3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_148d40:
    // 0x148d40: 0x5060ffe5  beql        $v1, $zero, . + 4 + (-0x1B << 2)
label_148d44:
    if (ctx->pc == 0x148D44u) {
        ctx->pc = 0x148D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D40u;
        // 0x148d44: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D48u;
        goto label_148d48;
    }
    ctx->pc = 0x148D40u;
    {
        const bool branch_taken_0x148d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d40) {
            ctx->pc = 0x148D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148D40u;
            // 0x148d44: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148cd8;
        }
    }
    ctx->pc = 0x148D48u;
label_148d48:
    // 0x148d48: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x148d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_148d4c:
    // 0x148d4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x148d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_148d50:
    // 0x148d50: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_148d54:
    // 0x148d54: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_148d58:
    // 0x148d58: 0x40f809  jalr        $v0
label_148d5c:
    if (ctx->pc == 0x148D5Cu) {
        ctx->pc = 0x148D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D58u;
        // 0x148d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D60u;
        goto label_148d60;
    }
    ctx->pc = 0x148D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148D60u);
        ctx->pc = 0x148D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D58u;
        // 0x148d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D58u, 0x148D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148D60u;
label_148d60:
    // 0x148d60: 0xc05152a  jal         func_1454A8
label_148d64:
    if (ctx->pc == 0x148D64u) {
        ctx->pc = 0x148D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D60u;
        // 0x148d64: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D68u;
        goto label_148d68;
    }
    ctx->pc = 0x148D60u;
    SET_GPR_U32(ctx, 31, 0x148D68u);
    ctx->pc = 0x148D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D60u;
    // 0x148d64: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x148D60u, 0x148D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D68u;
label_148d68:
    // 0x148d68: 0xc051632  jal         func_1458C8
label_148d6c:
    if (ctx->pc == 0x148D6Cu) {
        ctx->pc = 0x148D70u;
        goto label_148d70;
    }
    ctx->pc = 0x148D68u;
    SET_GPR_U32(ctx, 31, 0x148D70u);
    ctx->pc = 0x1458C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C8u, 0x148D68u, 0x148D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D70u;
label_148d70:
    // 0x148d70: 0x5040ffd9  beql        $v0, $zero, . + 4 + (-0x27 << 2)
label_148d74:
    if (ctx->pc == 0x148D74u) {
        ctx->pc = 0x148D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D70u;
        // 0x148d74: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D78u;
        goto label_148d78;
    }
    ctx->pc = 0x148D70u;
    {
        const bool branch_taken_0x148d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d70) {
            ctx->pc = 0x148D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148D70u;
            // 0x148d74: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148cd8;
        }
    }
    ctx->pc = 0x148D78u;
label_148d78:
    // 0x148d78: 0x8e62b728  lw          $v0, -0x48D8($s3)
    ctx->pc = 0x148d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948648)));
label_148d7c:
    // 0x148d7c: 0x40f809  jalr        $v0
label_148d80:
    if (ctx->pc == 0x148D80u) {
        ctx->pc = 0x148D84u;
        goto label_148d84;
    }
    ctx->pc = 0x148D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148D84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D7Cu, 0x148D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148D84u;
label_148d84:
    // 0x148d84: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_148d88:
    if (ctx->pc == 0x148D88u) {
        ctx->pc = 0x148D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D84u;
        // 0x148d88: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148D8Cu;
        goto label_148d8c;
    }
    ctx->pc = 0x148D84u;
    {
        const bool branch_taken_0x148d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D84u;
        // 0x148d88: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d84) {
            ctx->pc = 0x148CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148cd8;
        }
    }
    ctx->pc = 0x148D8Cu;
label_148d8c:
    // 0x148d8c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x148d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_148d90:
    // 0x148d90: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x148d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_148d94:
    // 0x148d94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x148d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_148d98:
    // 0x148d98: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x148d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148d9c:
    // 0x148d9c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x148d9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148da0:
    // 0x148da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148da4:
    // 0x148da4: 0x3e00008  jr          $ra
label_148da8:
    if (ctx->pc == 0x148DA8u) {
        ctx->pc = 0x148DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DA4u;
        // 0x148da8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148DACu;
        goto label_148dac;
    }
    ctx->pc = 0x148DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DA4u;
        // 0x148da8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148DACu;
label_148dac:
    // 0x148dac: 0x0  nop
    ctx->pc = 0x148dacu;
    // NOP
    ctx->pc = 0x148db0u;
}
