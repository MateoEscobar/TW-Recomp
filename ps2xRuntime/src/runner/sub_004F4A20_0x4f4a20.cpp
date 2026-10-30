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

// Function: sub_004F4A20
// Address: 0x4f4a20 - 0x4f4aa0
void sub_004F4A20_0x4f4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4A20_0x4f4a20");
#endif

    switch (ctx->pc) {
        case 0x4f4a20u: goto label_4f4a20;
        case 0x4f4a24u: goto label_4f4a24;
        case 0x4f4a28u: goto label_4f4a28;
        case 0x4f4a2cu: goto label_4f4a2c;
        case 0x4f4a30u: goto label_4f4a30;
        case 0x4f4a34u: goto label_4f4a34;
        case 0x4f4a38u: goto label_4f4a38;
        case 0x4f4a3cu: goto label_4f4a3c;
        case 0x4f4a40u: goto label_4f4a40;
        case 0x4f4a44u: goto label_4f4a44;
        case 0x4f4a48u: goto label_4f4a48;
        case 0x4f4a4cu: goto label_4f4a4c;
        case 0x4f4a50u: goto label_4f4a50;
        case 0x4f4a54u: goto label_4f4a54;
        case 0x4f4a58u: goto label_4f4a58;
        case 0x4f4a5cu: goto label_4f4a5c;
        case 0x4f4a60u: goto label_4f4a60;
        case 0x4f4a64u: goto label_4f4a64;
        case 0x4f4a68u: goto label_4f4a68;
        case 0x4f4a6cu: goto label_4f4a6c;
        case 0x4f4a70u: goto label_4f4a70;
        case 0x4f4a74u: goto label_4f4a74;
        case 0x4f4a78u: goto label_4f4a78;
        case 0x4f4a7cu: goto label_4f4a7c;
        case 0x4f4a80u: goto label_4f4a80;
        case 0x4f4a84u: goto label_4f4a84;
        case 0x4f4a88u: goto label_4f4a88;
        case 0x4f4a8cu: goto label_4f4a8c;
        case 0x4f4a90u: goto label_4f4a90;
        case 0x4f4a94u: goto label_4f4a94;
        case 0x4f4a98u: goto label_4f4a98;
        case 0x4f4a9cu: goto label_4f4a9c;
        default: break;
    }

    ctx->pc = 0x4f4a20u;

label_4f4a20:
    // 0x4f4a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f4a24:
    // 0x4f4a24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f4a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f4a28:
    // 0x4f4a28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f4a2c:
    // 0x4f4a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4a30:
    // 0x4f4a30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f4a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f4a34:
    // 0x4f4a34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f4a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4a38:
    // 0x4f4a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4a3c:
    // 0x4f4a3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f4a40:
    if (ctx->pc == 0x4F4A40u) {
        ctx->pc = 0x4F4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A3Cu;
        // 0x4f4a40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4A44u;
        goto label_4f4a44;
    }
    ctx->pc = 0x4F4A3Cu;
    {
        const bool branch_taken_0x4f4a3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A3Cu;
        // 0x4f4a40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4a3c) {
            ctx->pc = 0x4F4A84u;
            goto label_4f4a84;
        }
    }
    ctx->pc = 0x4F4A44u;
label_4f4a44:
    // 0x4f4a44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4a48:
    // 0x4f4a48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4a4c:
    // 0x4f4a4c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f4a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f4a50:
    // 0x4f4a50: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f4a54:
    // 0x4f4a54: 0x60f809  jalr        $v1
label_4f4a58:
    if (ctx->pc == 0x4F4A58u) {
        ctx->pc = 0x4F4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A54u;
        // 0x4f4a58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4A5Cu;
        goto label_4f4a5c;
    }
    ctx->pc = 0x4F4A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4A5Cu);
        ctx->pc = 0x4F4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A54u;
        // 0x4f4a58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4A54u, 0x4F4A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4A5Cu;
label_4f4a5c:
    // 0x4f4a5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f4a60:
    // 0x4f4a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4a64:
    // 0x4f4a64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f4a64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f4a68:
    // 0x4f4a68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f4a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f4a6c:
    // 0x4f4a6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f4a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4a70:
    // 0x4f4a70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4a74:
    // 0x4f4a74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f4a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4a78:
    // 0x4f4a78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f4a7c:
    // 0x4f4a7c: 0x60f809  jalr        $v1
label_4f4a80:
    if (ctx->pc == 0x4F4A80u) {
        ctx->pc = 0x4F4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A7Cu;
        // 0x4f4a80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4A84u;
        goto label_4f4a84;
    }
    ctx->pc = 0x4F4A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4A84u);
        ctx->pc = 0x4F4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A7Cu;
        // 0x4f4a80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4A7Cu, 0x4F4A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4A84u;
label_4f4a84:
    // 0x4f4a84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4a88:
    // 0x4f4a88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4a8c:
    // 0x4f4a8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f4a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4a90:
    // 0x4f4a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4a94:
    // 0x4f4a94: 0x3e00008  jr          $ra
label_4f4a98:
    if (ctx->pc == 0x4F4A98u) {
        ctx->pc = 0x4F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A94u;
        // 0x4f4a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4A9Cu;
        goto label_4f4a9c;
    }
    ctx->pc = 0x4F4A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4A94u;
        // 0x4f4a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4A9Cu;
label_4f4a9c:
    // 0x4f4a9c: 0x0  nop
    ctx->pc = 0x4f4a9cu;
    // NOP
    ctx->pc = 0x4f4aa0u;
}
