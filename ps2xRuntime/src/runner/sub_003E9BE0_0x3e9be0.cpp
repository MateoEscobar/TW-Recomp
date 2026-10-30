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

// Function: sub_003E9BE0
// Address: 0x3e9be0 - 0x3e9d40
void sub_003E9BE0_0x3e9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9BE0_0x3e9be0");
#endif

    switch (ctx->pc) {
        case 0x3e9be0u: goto label_3e9be0;
        case 0x3e9be4u: goto label_3e9be4;
        case 0x3e9be8u: goto label_3e9be8;
        case 0x3e9becu: goto label_3e9bec;
        case 0x3e9bf0u: goto label_3e9bf0;
        case 0x3e9bf4u: goto label_3e9bf4;
        case 0x3e9bf8u: goto label_3e9bf8;
        case 0x3e9bfcu: goto label_3e9bfc;
        case 0x3e9c00u: goto label_3e9c00;
        case 0x3e9c04u: goto label_3e9c04;
        case 0x3e9c08u: goto label_3e9c08;
        case 0x3e9c0cu: goto label_3e9c0c;
        case 0x3e9c10u: goto label_3e9c10;
        case 0x3e9c14u: goto label_3e9c14;
        case 0x3e9c18u: goto label_3e9c18;
        case 0x3e9c1cu: goto label_3e9c1c;
        case 0x3e9c20u: goto label_3e9c20;
        case 0x3e9c24u: goto label_3e9c24;
        case 0x3e9c28u: goto label_3e9c28;
        case 0x3e9c2cu: goto label_3e9c2c;
        case 0x3e9c30u: goto label_3e9c30;
        case 0x3e9c34u: goto label_3e9c34;
        case 0x3e9c38u: goto label_3e9c38;
        case 0x3e9c3cu: goto label_3e9c3c;
        case 0x3e9c40u: goto label_3e9c40;
        case 0x3e9c44u: goto label_3e9c44;
        case 0x3e9c48u: goto label_3e9c48;
        case 0x3e9c4cu: goto label_3e9c4c;
        case 0x3e9c50u: goto label_3e9c50;
        case 0x3e9c54u: goto label_3e9c54;
        case 0x3e9c58u: goto label_3e9c58;
        case 0x3e9c5cu: goto label_3e9c5c;
        case 0x3e9c60u: goto label_3e9c60;
        case 0x3e9c64u: goto label_3e9c64;
        case 0x3e9c68u: goto label_3e9c68;
        case 0x3e9c6cu: goto label_3e9c6c;
        case 0x3e9c70u: goto label_3e9c70;
        case 0x3e9c74u: goto label_3e9c74;
        case 0x3e9c78u: goto label_3e9c78;
        case 0x3e9c7cu: goto label_3e9c7c;
        case 0x3e9c80u: goto label_3e9c80;
        case 0x3e9c84u: goto label_3e9c84;
        case 0x3e9c88u: goto label_3e9c88;
        case 0x3e9c8cu: goto label_3e9c8c;
        case 0x3e9c90u: goto label_3e9c90;
        case 0x3e9c94u: goto label_3e9c94;
        case 0x3e9c98u: goto label_3e9c98;
        case 0x3e9c9cu: goto label_3e9c9c;
        case 0x3e9ca0u: goto label_3e9ca0;
        case 0x3e9ca4u: goto label_3e9ca4;
        case 0x3e9ca8u: goto label_3e9ca8;
        case 0x3e9cacu: goto label_3e9cac;
        case 0x3e9cb0u: goto label_3e9cb0;
        case 0x3e9cb4u: goto label_3e9cb4;
        case 0x3e9cb8u: goto label_3e9cb8;
        case 0x3e9cbcu: goto label_3e9cbc;
        case 0x3e9cc0u: goto label_3e9cc0;
        case 0x3e9cc4u: goto label_3e9cc4;
        case 0x3e9cc8u: goto label_3e9cc8;
        case 0x3e9cccu: goto label_3e9ccc;
        case 0x3e9cd0u: goto label_3e9cd0;
        case 0x3e9cd4u: goto label_3e9cd4;
        case 0x3e9cd8u: goto label_3e9cd8;
        case 0x3e9cdcu: goto label_3e9cdc;
        case 0x3e9ce0u: goto label_3e9ce0;
        case 0x3e9ce4u: goto label_3e9ce4;
        case 0x3e9ce8u: goto label_3e9ce8;
        case 0x3e9cecu: goto label_3e9cec;
        case 0x3e9cf0u: goto label_3e9cf0;
        case 0x3e9cf4u: goto label_3e9cf4;
        case 0x3e9cf8u: goto label_3e9cf8;
        case 0x3e9cfcu: goto label_3e9cfc;
        case 0x3e9d00u: goto label_3e9d00;
        case 0x3e9d04u: goto label_3e9d04;
        case 0x3e9d08u: goto label_3e9d08;
        case 0x3e9d0cu: goto label_3e9d0c;
        case 0x3e9d10u: goto label_3e9d10;
        case 0x3e9d14u: goto label_3e9d14;
        case 0x3e9d18u: goto label_3e9d18;
        case 0x3e9d1cu: goto label_3e9d1c;
        case 0x3e9d20u: goto label_3e9d20;
        case 0x3e9d24u: goto label_3e9d24;
        case 0x3e9d28u: goto label_3e9d28;
        case 0x3e9d2cu: goto label_3e9d2c;
        case 0x3e9d30u: goto label_3e9d30;
        case 0x3e9d34u: goto label_3e9d34;
        case 0x3e9d38u: goto label_3e9d38;
        case 0x3e9d3cu: goto label_3e9d3c;
        default: break;
    }

    ctx->pc = 0x3e9be0u;

label_3e9be0:
    // 0x3e9be0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3e9be4:
    // 0x3e9be4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e9be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e9be8:
    // 0x3e9be8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e9be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e9bec:
    // 0x3e9bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e9becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9bf0:
    // 0x3e9bf0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e9bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e9bf4:
    // 0x3e9bf4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e9bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e9bf8:
    // 0x3e9bf8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e9bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e9bfc:
    // 0x3e9bfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e9c00:
    // 0x3e9c00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e9c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9c04:
    // 0x3e9c04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9c08:
    // 0x3e9c08: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9c0c:
    // 0x3e9c0c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e9c10:
    // 0x3e9c10: 0x40f809  jalr        $v0
label_3e9c14:
    if (ctx->pc == 0x3E9C14u) {
        ctx->pc = 0x3E9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C10u;
        // 0x3e9c14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C18u;
        goto label_3e9c18;
    }
    ctx->pc = 0x3E9C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9C18u);
        ctx->pc = 0x3E9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C10u;
        // 0x3e9c14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9C10u, 0x3E9C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9C18u;
label_3e9c18:
    // 0x3e9c18: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3e9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3e9c1c:
    // 0x3e9c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e9c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9c20:
    // 0x3e9c20: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x3e9c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3e9c24:
    // 0x3e9c24: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_3e9c28:
    if (ctx->pc == 0x3E9C28u) {
        ctx->pc = 0x3E9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C24u;
        // 0x3e9c28: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C2Cu;
        goto label_3e9c2c;
    }
    ctx->pc = 0x3E9C24u;
    {
        const bool branch_taken_0x3e9c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C24u;
        // 0x3e9c28: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c24) {
            ctx->pc = 0x3E9D40u;
            return;
        }
    }
    ctx->pc = 0x3E9C2Cu;
label_3e9c2c:
    // 0x3e9c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e9c30:
    // 0x3e9c30: 0x24425a80  addiu       $v0, $v0, 0x5A80
    ctx->pc = 0x3e9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23168));
label_3e9c34:
    // 0x3e9c34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9c38:
    // 0x3e9c38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9c3c:
    // 0x3e9c3c: 0x800008  jr          $a0
label_3e9c40:
    if (ctx->pc == 0x3E9C40u) {
        ctx->pc = 0x3E9C44u;
        goto label_3e9c44;
    }
    ctx->pc = 0x3E9C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E9C44u: goto label_3e9c44;
            case 0x3E9C6Cu: goto label_3e9c6c;
            case 0x3E9CB8u: goto label_3e9cb8;
            case 0x3E9CC4u: goto label_3e9cc4;
            case 0x3E9CDCu: goto label_3e9cdc;
            case 0x3E9CF8u: goto label_3e9cf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9C3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E9C44u;
label_3e9c44:
    // 0x3e9c44: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3e9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e9c48:
    // 0x3e9c48: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_3e9c4c:
    if (ctx->pc == 0x3E9C4Cu) {
        ctx->pc = 0x3E9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C48u;
        // 0x3e9c4c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C50u;
        goto label_3e9c50;
    }
    ctx->pc = 0x3E9C48u;
    {
        const bool branch_taken_0x3e9c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C48u;
        // 0x3e9c4c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c48) {
            ctx->pc = 0x3E9D44u;
            return;
        }
    }
    ctx->pc = 0x3E9C50u;
label_3e9c50:
    // 0x3e9c50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3e9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3e9c54:
    // 0x3e9c54: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e9c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e9c58:
    // 0x3e9c58: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e9c5c:
    // 0x3e9c5c: 0x60f809  jalr        $v1
label_3e9c60:
    if (ctx->pc == 0x3E9C60u) {
        ctx->pc = 0x3E9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C5Cu;
        // 0x3e9c60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C64u;
        goto label_3e9c64;
    }
    ctx->pc = 0x3E9C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E9C64u);
        ctx->pc = 0x3E9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C5Cu;
        // 0x3e9c60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9C5Cu, 0x3E9C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9C64u;
label_3e9c64:
    // 0x3e9c64: 0x10000036  b           . + 4 + (0x36 << 2)
label_3e9c68:
    if (ctx->pc == 0x3E9C68u) {
        ctx->pc = 0x3E9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C64u;
        // 0x3e9c68: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C6Cu;
        goto label_3e9c6c;
    }
    ctx->pc = 0x3E9C64u;
    {
        const bool branch_taken_0x3e9c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C64u;
        // 0x3e9c68: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c64) {
            ctx->pc = 0x3E9D40u;
            return;
        }
    }
    ctx->pc = 0x3E9C6Cu;
label_3e9c6c:
    // 0x3e9c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9c70:
    // 0x3e9c70: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3e9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e9c74:
    // 0x3e9c74: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3e9c78:
    if (ctx->pc == 0x3E9C78u) {
        ctx->pc = 0x3E9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C74u;
        // 0x3e9c78: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C7Cu;
        goto label_3e9c7c;
    }
    ctx->pc = 0x3E9C74u;
    {
        const bool branch_taken_0x3e9c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C74u;
        // 0x3e9c78: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c74) {
            ctx->pc = 0x3E9CA4u;
            goto label_3e9ca4;
        }
    }
    ctx->pc = 0x3E9C7Cu;
label_3e9c7c:
    // 0x3e9c7c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e9c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e9c80:
    // 0x3e9c80: 0xc0e8b48  jal         func_3A2D20
label_3e9c84:
    if (ctx->pc == 0x3E9C84u) {
        ctx->pc = 0x3E9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C80u;
        // 0x3e9c84: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C88u;
        goto label_3e9c88;
    }
    ctx->pc = 0x3E9C80u;
    SET_GPR_U32(ctx, 31, 0x3E9C88u);
    ctx->pc = 0x3E9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9C80u;
    // 0x3e9c84: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3E9C80u, 0x3E9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9C88u;
label_3e9c88:
    // 0x3e9c88: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3e9c8c:
    // 0x3e9c8c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x3e9c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3e9c90:
    // 0x3e9c90: 0xc0e8b80  jal         func_3A2E00
label_3e9c94:
    if (ctx->pc == 0x3E9C94u) {
        ctx->pc = 0x3E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C90u;
        // 0x3e9c94: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C98u;
        goto label_3e9c98;
    }
    ctx->pc = 0x3E9C90u;
    SET_GPR_U32(ctx, 31, 0x3E9C98u);
    ctx->pc = 0x3E9C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9C90u;
    // 0x3e9c94: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3E9C90u, 0x3E9C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9C98u;
label_3e9c98:
    // 0x3e9c98: 0xc0e8b50  jal         func_3A2D40
label_3e9c9c:
    if (ctx->pc == 0x3E9C9Cu) {
        ctx->pc = 0x3E9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C98u;
        // 0x3e9c9c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CA0u;
        goto label_3e9ca0;
    }
    ctx->pc = 0x3E9C98u;
    SET_GPR_U32(ctx, 31, 0x3E9CA0u);
    ctx->pc = 0x3E9C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9C98u;
    // 0x3e9c9c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3E9C98u, 0x3E9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CA0u;
label_3e9ca0:
    // 0x3e9ca0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3e9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3e9ca4:
    // 0x3e9ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ca8:
    // 0x3e9ca8: 0xc0ea16a  jal         func_3A85A8
label_3e9cac:
    if (ctx->pc == 0x3E9CACu) {
        ctx->pc = 0x3E9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CA8u;
        // 0x3e9cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CB0u;
        goto label_3e9cb0;
    }
    ctx->pc = 0x3E9CA8u;
    SET_GPR_U32(ctx, 31, 0x3E9CB0u);
    ctx->pc = 0x3E9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9CA8u;
    // 0x3e9cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E9CA8u, 0x3E9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CB0u;
label_3e9cb0:
    // 0x3e9cb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e9cb4:
    if (ctx->pc == 0x3E9CB4u) {
        ctx->pc = 0x3E9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CB0u;
        // 0x3e9cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CB8u;
        goto label_3e9cb8;
    }
    ctx->pc = 0x3E9CB0u;
    {
        const bool branch_taken_0x3e9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CB0u;
        // 0x3e9cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9cb0) {
            ctx->pc = 0x3E9CC8u;
            goto label_3e9cc8;
        }
    }
    ctx->pc = 0x3E9CB8u;
label_3e9cb8:
    // 0x3e9cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9cbc:
    // 0x3e9cbc: 0xc0ea16a  jal         func_3A85A8
label_3e9cc0:
    if (ctx->pc == 0x3E9CC0u) {
        ctx->pc = 0x3E9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CBCu;
        // 0x3e9cc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CC4u;
        goto label_3e9cc4;
    }
    ctx->pc = 0x3E9CBCu;
    SET_GPR_U32(ctx, 31, 0x3E9CC4u);
    ctx->pc = 0x3E9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9CBCu;
    // 0x3e9cc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E9CBCu, 0x3E9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CC4u;
label_3e9cc4:
    // 0x3e9cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9cc8:
    // 0x3e9cc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e9cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ccc:
    // 0x3e9ccc: 0xc0fa60a  jal         func_3E9828
label_3e9cd0:
    if (ctx->pc == 0x3E9CD0u) {
        ctx->pc = 0x3E9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CCCu;
        // 0x3e9cd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CD4u;
        goto label_3e9cd4;
    }
    ctx->pc = 0x3E9CCCu;
    SET_GPR_U32(ctx, 31, 0x3E9CD4u);
    ctx->pc = 0x3E9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9CCCu;
    // 0x3e9cd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9828u, 0x3E9CCCu, 0x3E9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CD4u;
label_3e9cd4:
    // 0x3e9cd4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3e9cd8:
    if (ctx->pc == 0x3E9CD8u) {
        ctx->pc = 0x3E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CD4u;
        // 0x3e9cd8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CDCu;
        goto label_3e9cdc;
    }
    ctx->pc = 0x3E9CD4u;
    {
        const bool branch_taken_0x3e9cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CD4u;
        // 0x3e9cd8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9cd4) {
            ctx->pc = 0x3E9D44u;
            return;
        }
    }
    ctx->pc = 0x3E9CDCu;
label_3e9cdc:
    // 0x3e9cdc: 0xc0ea146  jal         func_3A8518
label_3e9ce0:
    if (ctx->pc == 0x3E9CE0u) {
        ctx->pc = 0x3E9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CDCu;
        // 0x3e9ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CE4u;
        goto label_3e9ce4;
    }
    ctx->pc = 0x3E9CDCu;
    SET_GPR_U32(ctx, 31, 0x3E9CE4u);
    ctx->pc = 0x3E9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9CDCu;
    // 0x3e9ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9CDCu, 0x3E9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CE4u;
label_3e9ce4:
    // 0x3e9ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e9ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ce8:
    // 0x3e9ce8: 0xc0e9132  jal         func_3A44C8
label_3e9cec:
    if (ctx->pc == 0x3E9CECu) {
        ctx->pc = 0x3E9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CE8u;
        // 0x3e9cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CF0u;
        goto label_3e9cf0;
    }
    ctx->pc = 0x3E9CE8u;
    SET_GPR_U32(ctx, 31, 0x3E9CF0u);
    ctx->pc = 0x3E9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9CE8u;
    // 0x3e9cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3E9CE8u, 0x3E9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CF0u;
label_3e9cf0:
    // 0x3e9cf0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3e9cf4:
    if (ctx->pc == 0x3E9CF4u) {
        ctx->pc = 0x3E9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CF0u;
        // 0x3e9cf4: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CF8u;
        goto label_3e9cf8;
    }
    ctx->pc = 0x3E9CF0u;
    {
        const bool branch_taken_0x3e9cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CF0u;
        // 0x3e9cf4: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9cf0) {
            ctx->pc = 0x3E9D40u;
            return;
        }
    }
    ctx->pc = 0x3E9CF8u;
label_3e9cf8:
    // 0x3e9cf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e9cfc:
    // 0x3e9cfc: 0xc0ea12a  jal         func_3A84A8
label_3e9d00:
    if (ctx->pc == 0x3E9D00u) {
        ctx->pc = 0x3E9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CFCu;
        // 0x3e9d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D04u;
        goto label_3e9d04;
    }
    ctx->pc = 0x3E9CFCu;
    SET_GPR_U32(ctx, 31, 0x3E9D04u);
    ctx->pc = 0x3E9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9CFCu;
    // 0x3e9d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9CFCu, 0x3E9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D04u;
label_3e9d04:
    // 0x3e9d04: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e9d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9d08:
    // 0x3e9d08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e9d0c:
    // 0x3e9d0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e9d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d10:
    // 0x3e9d10: 0xc0ea12a  jal         func_3A84A8
label_3e9d14:
    if (ctx->pc == 0x3E9D14u) {
        ctx->pc = 0x3E9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D10u;
        // 0x3e9d14: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D18u;
        goto label_3e9d18;
    }
    ctx->pc = 0x3E9D10u;
    SET_GPR_U32(ctx, 31, 0x3E9D18u);
    ctx->pc = 0x3E9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D10u;
    // 0x3e9d14: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E9D10u, 0x3E9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D18u;
label_3e9d18:
    // 0x3e9d18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e9d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9d1c:
    // 0x3e9d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d20:
    // 0x3e9d20: 0xc0ea146  jal         func_3A8518
label_3e9d24:
    if (ctx->pc == 0x3E9D24u) {
        ctx->pc = 0x3E9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D20u;
        // 0x3e9d24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D28u;
        goto label_3e9d28;
    }
    ctx->pc = 0x3E9D20u;
    SET_GPR_U32(ctx, 31, 0x3E9D28u);
    ctx->pc = 0x3E9D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D20u;
    // 0x3e9d24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9D20u, 0x3E9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D28u;
label_3e9d28:
    // 0x3e9d28: 0xc0ea146  jal         func_3A8518
label_3e9d2c:
    if (ctx->pc == 0x3E9D2Cu) {
        ctx->pc = 0x3E9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D28u;
        // 0x3e9d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D30u;
        goto label_3e9d30;
    }
    ctx->pc = 0x3E9D28u;
    SET_GPR_U32(ctx, 31, 0x3E9D30u);
    ctx->pc = 0x3E9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D28u;
    // 0x3e9d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9D28u, 0x3E9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D30u;
label_3e9d30:
    // 0x3e9d30: 0xc0ea14c  jal         func_3A8530
label_3e9d34:
    if (ctx->pc == 0x3E9D34u) {
        ctx->pc = 0x3E9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D30u;
        // 0x3e9d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D38u;
        goto label_3e9d38;
    }
    ctx->pc = 0x3E9D30u;
    SET_GPR_U32(ctx, 31, 0x3E9D38u);
    ctx->pc = 0x3E9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D30u;
    // 0x3e9d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9D30u, 0x3E9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D38u;
label_3e9d38:
    // 0x3e9d38: 0xc0ea14c  jal         func_3A8530
label_3e9d3c:
    if (ctx->pc == 0x3E9D3Cu) {
        ctx->pc = 0x3E9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D38u;
        // 0x3e9d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D40u;
        goto label_fallthrough_0x3e9d38;
    }
    ctx->pc = 0x3E9D38u;
    SET_GPR_U32(ctx, 31, 0x3E9D40u);
    ctx->pc = 0x3E9D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D38u;
    // 0x3e9d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9D38u, 0x3E9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3e9d38:
    ctx->pc = 0x3E9D40u;
}
