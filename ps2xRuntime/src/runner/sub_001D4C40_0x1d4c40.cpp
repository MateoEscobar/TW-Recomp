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

// Function: sub_001D4C40
// Address: 0x1d4c40 - 0x1d4d28
void sub_001D4C40_0x1d4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4C40_0x1d4c40");
#endif

    switch (ctx->pc) {
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c44u: goto label_1d4c44;
        case 0x1d4c48u: goto label_1d4c48;
        case 0x1d4c4cu: goto label_1d4c4c;
        case 0x1d4c50u: goto label_1d4c50;
        case 0x1d4c54u: goto label_1d4c54;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c5cu: goto label_1d4c5c;
        case 0x1d4c60u: goto label_1d4c60;
        case 0x1d4c64u: goto label_1d4c64;
        case 0x1d4c68u: goto label_1d4c68;
        case 0x1d4c6cu: goto label_1d4c6c;
        case 0x1d4c70u: goto label_1d4c70;
        case 0x1d4c74u: goto label_1d4c74;
        case 0x1d4c78u: goto label_1d4c78;
        case 0x1d4c7cu: goto label_1d4c7c;
        case 0x1d4c80u: goto label_1d4c80;
        case 0x1d4c84u: goto label_1d4c84;
        case 0x1d4c88u: goto label_1d4c88;
        case 0x1d4c8cu: goto label_1d4c8c;
        case 0x1d4c90u: goto label_1d4c90;
        case 0x1d4c94u: goto label_1d4c94;
        case 0x1d4c98u: goto label_1d4c98;
        case 0x1d4c9cu: goto label_1d4c9c;
        case 0x1d4ca0u: goto label_1d4ca0;
        case 0x1d4ca4u: goto label_1d4ca4;
        case 0x1d4ca8u: goto label_1d4ca8;
        case 0x1d4cacu: goto label_1d4cac;
        case 0x1d4cb0u: goto label_1d4cb0;
        case 0x1d4cb4u: goto label_1d4cb4;
        case 0x1d4cb8u: goto label_1d4cb8;
        case 0x1d4cbcu: goto label_1d4cbc;
        case 0x1d4cc0u: goto label_1d4cc0;
        case 0x1d4cc4u: goto label_1d4cc4;
        case 0x1d4cc8u: goto label_1d4cc8;
        case 0x1d4cccu: goto label_1d4ccc;
        case 0x1d4cd0u: goto label_1d4cd0;
        case 0x1d4cd4u: goto label_1d4cd4;
        case 0x1d4cd8u: goto label_1d4cd8;
        case 0x1d4cdcu: goto label_1d4cdc;
        case 0x1d4ce0u: goto label_1d4ce0;
        case 0x1d4ce4u: goto label_1d4ce4;
        case 0x1d4ce8u: goto label_1d4ce8;
        case 0x1d4cecu: goto label_1d4cec;
        case 0x1d4cf0u: goto label_1d4cf0;
        case 0x1d4cf4u: goto label_1d4cf4;
        case 0x1d4cf8u: goto label_1d4cf8;
        case 0x1d4cfcu: goto label_1d4cfc;
        case 0x1d4d00u: goto label_1d4d00;
        case 0x1d4d04u: goto label_1d4d04;
        case 0x1d4d08u: goto label_1d4d08;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d10u: goto label_1d4d10;
        case 0x1d4d14u: goto label_1d4d14;
        case 0x1d4d18u: goto label_1d4d18;
        case 0x1d4d1cu: goto label_1d4d1c;
        case 0x1d4d20u: goto label_1d4d20;
        case 0x1d4d24u: goto label_1d4d24;
        default: break;
    }

    ctx->pc = 0x1d4c40u;

label_1d4c40:
    // 0x1d4c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d4c44:
    // 0x1d4c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d4c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d4c48:
    // 0x1d4c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d4c4c:
    // 0x1d4c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4c50:
    // 0x1d4c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c54:
    // 0x1d4c54: 0x8e260080  lw          $a2, 0x80($s1)
    ctx->pc = 0x1d4c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1d4c58:
    // 0x1d4c58: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d4c5c:
    if (ctx->pc == 0x1D4C5Cu) {
        ctx->pc = 0x1D4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C58u;
        // 0x1d4c5c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C60u;
        goto label_1d4c60;
    }
    ctx->pc = 0x1D4C58u;
    {
        const bool branch_taken_0x1d4c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C58u;
        // 0x1d4c5c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c58) {
            ctx->pc = 0x1D4C7Cu;
            goto label_1d4c7c;
        }
    }
    ctx->pc = 0x1D4C60u;
label_1d4c60:
    // 0x1d4c60: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1d4c64:
    // 0x1d4c64: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1d4c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1d4c68:
    // 0x1d4c68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d4c6c:
    // 0x1d4c6c: 0x40f809  jalr        $v0
label_1d4c70:
    if (ctx->pc == 0x1D4C70u) {
        ctx->pc = 0x1D4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C6Cu;
        // 0x1d4c70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C74u;
        goto label_1d4c74;
    }
    ctx->pc = 0x1D4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4C74u);
        ctx->pc = 0x1D4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C6Cu;
        // 0x1d4c70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C6Cu, 0x1D4C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4C74u;
label_1d4c74:
    // 0x1d4c74: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1d4c78:
    if (ctx->pc == 0x1D4C78u) {
        ctx->pc = 0x1D4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C74u;
        // 0x1d4c78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C7Cu;
        goto label_1d4c7c;
    }
    ctx->pc = 0x1D4C74u;
    {
        const bool branch_taken_0x1d4c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C74u;
        // 0x1d4c78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c74) {
            ctx->pc = 0x1D4CF4u;
            goto label_1d4cf4;
        }
    }
    ctx->pc = 0x1D4C7Cu;
label_1d4c7c:
    // 0x1d4c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4c80:
    // 0x1d4c80: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_1d4c84:
    if (ctx->pc == 0x1D4C84u) {
        ctx->pc = 0x1D4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C80u;
        // 0x1d4c84: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C88u;
        goto label_1d4c88;
    }
    ctx->pc = 0x1D4C80u;
    {
        const bool branch_taken_0x1d4c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C80u;
        // 0x1d4c84: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c80) {
            ctx->pc = 0x1D4CC8u;
            goto label_1d4cc8;
        }
    }
    ctx->pc = 0x1D4C88u;
label_1d4c88:
    // 0x1d4c88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d4c8c:
    if (ctx->pc == 0x1D4C8Cu) {
        ctx->pc = 0x1D4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C88u;
        // 0x1d4c8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C90u;
        goto label_1d4c90;
    }
    ctx->pc = 0x1D4C88u;
    {
        const bool branch_taken_0x1d4c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C88u;
        // 0x1d4c8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c88) {
            ctx->pc = 0x1D4CA0u;
            goto label_1d4ca0;
        }
    }
    ctx->pc = 0x1D4C90u;
label_1d4c90:
    // 0x1d4c90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1d4c94:
    if (ctx->pc == 0x1D4C94u) {
        ctx->pc = 0x1D4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C90u;
        // 0x1d4c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C98u;
        goto label_1d4c98;
    }
    ctx->pc = 0x1D4C90u;
    {
        const bool branch_taken_0x1d4c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C90u;
        // 0x1d4c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c90) {
            ctx->pc = 0x1D4CB8u;
            goto label_1d4cb8;
        }
    }
    ctx->pc = 0x1D4C98u;
label_1d4c98:
    // 0x1d4c98: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d4c9c:
    if (ctx->pc == 0x1D4C9Cu) {
        ctx->pc = 0x1D4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C98u;
        // 0x1d4c9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CA0u;
        goto label_1d4ca0;
    }
    ctx->pc = 0x1D4C98u;
    {
        const bool branch_taken_0x1d4c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C98u;
        // 0x1d4c9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c98) {
            ctx->pc = 0x1D4D18u;
            goto label_1d4d18;
        }
    }
    ctx->pc = 0x1D4CA0u;
label_1d4ca0:
    // 0x1d4ca0: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1d4ca4:
    if (ctx->pc == 0x1D4CA4u) {
        ctx->pc = 0x1D4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CA0u;
        // 0x1d4ca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CA8u;
        goto label_1d4ca8;
    }
    ctx->pc = 0x1D4CA0u;
    {
        const bool branch_taken_0x1d4ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CA0u;
        // 0x1d4ca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ca0) {
            ctx->pc = 0x1D4CD8u;
            goto label_1d4cd8;
        }
    }
    ctx->pc = 0x1D4CA8u;
label_1d4ca8:
    // 0x1d4ca8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_1d4cac:
    if (ctx->pc == 0x1D4CACu) {
        ctx->pc = 0x1D4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CA8u;
        // 0x1d4cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CB0u;
        goto label_1d4cb0;
    }
    ctx->pc = 0x1D4CA8u;
    {
        const bool branch_taken_0x1d4ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CA8u;
        // 0x1d4cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ca8) {
            ctx->pc = 0x1D4CE8u;
            goto label_1d4ce8;
        }
    }
    ctx->pc = 0x1D4CB0u;
label_1d4cb0:
    // 0x1d4cb0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1d4cb4:
    if (ctx->pc == 0x1D4CB4u) {
        ctx->pc = 0x1D4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB0u;
        // 0x1d4cb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CB8u;
        goto label_1d4cb8;
    }
    ctx->pc = 0x1D4CB0u;
    {
        const bool branch_taken_0x1d4cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB0u;
        // 0x1d4cb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cb0) {
            ctx->pc = 0x1D4D18u;
            goto label_1d4d18;
        }
    }
    ctx->pc = 0x1D4CB8u;
label_1d4cb8:
    // 0x1d4cb8: 0xc07518a  jal         func_1D4628
label_1d4cbc:
    if (ctx->pc == 0x1D4CBCu) {
        ctx->pc = 0x1D4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB8u;
        // 0x1d4cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CC0u;
        goto label_1d4cc0;
    }
    ctx->pc = 0x1D4CB8u;
    SET_GPR_U32(ctx, 31, 0x1D4CC0u);
    ctx->pc = 0x1D4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CB8u;
    // 0x1d4cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4628u, 0x1D4CB8u, 0x1D4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CC0u;
label_1d4cc0:
    // 0x1d4cc0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d4cc4:
    if (ctx->pc == 0x1D4CC4u) {
        ctx->pc = 0x1D4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CC0u;
        // 0x1d4cc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CC8u;
        goto label_1d4cc8;
    }
    ctx->pc = 0x1D4CC0u;
    {
        const bool branch_taken_0x1d4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CC0u;
        // 0x1d4cc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cc0) {
            ctx->pc = 0x1D4CF4u;
            goto label_1d4cf4;
        }
    }
    ctx->pc = 0x1D4CC8u;
label_1d4cc8:
    // 0x1d4cc8: 0xc0751e4  jal         func_1D4790
label_1d4ccc:
    if (ctx->pc == 0x1D4CCCu) {
        ctx->pc = 0x1D4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CC8u;
        // 0x1d4ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CD0u;
        goto label_1d4cd0;
    }
    ctx->pc = 0x1D4CC8u;
    SET_GPR_U32(ctx, 31, 0x1D4CD0u);
    ctx->pc = 0x1D4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CC8u;
    // 0x1d4ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4790u, 0x1D4CC8u, 0x1D4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CD0u;
label_1d4cd0:
    // 0x1d4cd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d4cd4:
    if (ctx->pc == 0x1D4CD4u) {
        ctx->pc = 0x1D4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD0u;
        // 0x1d4cd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CD8u;
        goto label_1d4cd8;
    }
    ctx->pc = 0x1D4CD0u;
    {
        const bool branch_taken_0x1d4cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD0u;
        // 0x1d4cd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cd0) {
            ctx->pc = 0x1D4CF4u;
            goto label_1d4cf4;
        }
    }
    ctx->pc = 0x1D4CD8u;
label_1d4cd8:
    // 0x1d4cd8: 0xc075238  jal         func_1D48E0
label_1d4cdc:
    if (ctx->pc == 0x1D4CDCu) {
        ctx->pc = 0x1D4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD8u;
        // 0x1d4cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CE0u;
        goto label_1d4ce0;
    }
    ctx->pc = 0x1D4CD8u;
    SET_GPR_U32(ctx, 31, 0x1D4CE0u);
    ctx->pc = 0x1D4CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CD8u;
    // 0x1d4cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D48E0u, 0x1D4CD8u, 0x1D4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CE0u;
label_1d4ce0:
    // 0x1d4ce0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d4ce4:
    if (ctx->pc == 0x1D4CE4u) {
        ctx->pc = 0x1D4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE0u;
        // 0x1d4ce4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CE8u;
        goto label_1d4ce8;
    }
    ctx->pc = 0x1D4CE0u;
    {
        const bool branch_taken_0x1d4ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE0u;
        // 0x1d4ce4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ce0) {
            ctx->pc = 0x1D4CF4u;
            goto label_1d4cf4;
        }
    }
    ctx->pc = 0x1D4CE8u;
label_1d4ce8:
    // 0x1d4ce8: 0xc07528c  jal         func_1D4A30
label_1d4cec:
    if (ctx->pc == 0x1D4CECu) {
        ctx->pc = 0x1D4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE8u;
        // 0x1d4cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CF0u;
        goto label_1d4cf0;
    }
    ctx->pc = 0x1D4CE8u;
    SET_GPR_U32(ctx, 31, 0x1D4CF0u);
    ctx->pc = 0x1D4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CE8u;
    // 0x1d4cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A30u, 0x1D4CE8u, 0x1D4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CF0u;
label_1d4cf0:
    // 0x1d4cf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d4cf4:
    // 0x1d4cf4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1d4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1d4cf8:
    // 0x1d4cf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4cfc:
    // 0x1d4cfc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d4d00:
    // 0x1d4d00: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d4d04:
    // 0x1d4d04: 0x40f809  jalr        $v0
label_1d4d08:
    if (ctx->pc == 0x1D4D08u) {
        ctx->pc = 0x1D4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D04u;
        // 0x1d4d08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D0Cu;
        goto label_1d4d0c;
    }
    ctx->pc = 0x1D4D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4D0Cu);
        ctx->pc = 0x1D4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D04u;
        // 0x1d4d08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D04u, 0x1D4D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4D0Cu;
label_1d4d0c:
    // 0x1d4d0c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x1d4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_1d4d10:
    // 0x1d4d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4d14:
    // 0x1d4d14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d4d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4d18:
    // 0x1d4d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4d1c:
    // 0x1d4d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4d20:
    // 0x1d4d20: 0x3e00008  jr          $ra
label_1d4d24:
    if (ctx->pc == 0x1D4D24u) {
        ctx->pc = 0x1D4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D20u;
        // 0x1d4d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D28u;
        goto label_fallthrough_0x1d4d20;
    }
    ctx->pc = 0x1D4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D20u;
        // 0x1d4d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4d20:
    ctx->pc = 0x1D4D28u;
}
