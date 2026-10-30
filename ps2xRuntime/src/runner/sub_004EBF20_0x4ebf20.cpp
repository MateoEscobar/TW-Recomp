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

// Function: sub_004EBF20
// Address: 0x4ebf20 - 0x4ebfa0
void sub_004EBF20_0x4ebf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBF20_0x4ebf20");
#endif

    switch (ctx->pc) {
        case 0x4ebf20u: goto label_4ebf20;
        case 0x4ebf24u: goto label_4ebf24;
        case 0x4ebf28u: goto label_4ebf28;
        case 0x4ebf2cu: goto label_4ebf2c;
        case 0x4ebf30u: goto label_4ebf30;
        case 0x4ebf34u: goto label_4ebf34;
        case 0x4ebf38u: goto label_4ebf38;
        case 0x4ebf3cu: goto label_4ebf3c;
        case 0x4ebf40u: goto label_4ebf40;
        case 0x4ebf44u: goto label_4ebf44;
        case 0x4ebf48u: goto label_4ebf48;
        case 0x4ebf4cu: goto label_4ebf4c;
        case 0x4ebf50u: goto label_4ebf50;
        case 0x4ebf54u: goto label_4ebf54;
        case 0x4ebf58u: goto label_4ebf58;
        case 0x4ebf5cu: goto label_4ebf5c;
        case 0x4ebf60u: goto label_4ebf60;
        case 0x4ebf64u: goto label_4ebf64;
        case 0x4ebf68u: goto label_4ebf68;
        case 0x4ebf6cu: goto label_4ebf6c;
        case 0x4ebf70u: goto label_4ebf70;
        case 0x4ebf74u: goto label_4ebf74;
        case 0x4ebf78u: goto label_4ebf78;
        case 0x4ebf7cu: goto label_4ebf7c;
        case 0x4ebf80u: goto label_4ebf80;
        case 0x4ebf84u: goto label_4ebf84;
        case 0x4ebf88u: goto label_4ebf88;
        case 0x4ebf8cu: goto label_4ebf8c;
        case 0x4ebf90u: goto label_4ebf90;
        case 0x4ebf94u: goto label_4ebf94;
        case 0x4ebf98u: goto label_4ebf98;
        case 0x4ebf9cu: goto label_4ebf9c;
        default: break;
    }

    ctx->pc = 0x4ebf20u;

label_4ebf20:
    // 0x4ebf20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebf24:
    // 0x4ebf24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebf28:
    // 0x4ebf28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebf2c:
    // 0x4ebf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf30:
    // 0x4ebf30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebf34:
    // 0x4ebf34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf38:
    // 0x4ebf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebf3c:
    // 0x4ebf3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebf40:
    if (ctx->pc == 0x4EBF40u) {
        ctx->pc = 0x4EBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF3Cu;
        // 0x4ebf40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBF44u;
        goto label_4ebf44;
    }
    ctx->pc = 0x4EBF3Cu;
    {
        const bool branch_taken_0x4ebf3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF3Cu;
        // 0x4ebf40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebf3c) {
            ctx->pc = 0x4EBF84u;
            goto label_4ebf84;
        }
    }
    ctx->pc = 0x4EBF44u;
label_4ebf44:
    // 0x4ebf44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebf48:
    // 0x4ebf48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebf4c:
    // 0x4ebf4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebf50:
    // 0x4ebf50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebf54:
    // 0x4ebf54: 0x60f809  jalr        $v1
label_4ebf58:
    if (ctx->pc == 0x4EBF58u) {
        ctx->pc = 0x4EBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF54u;
        // 0x4ebf58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBF5Cu;
        goto label_4ebf5c;
    }
    ctx->pc = 0x4EBF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBF5Cu);
        ctx->pc = 0x4EBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF54u;
        // 0x4ebf58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBF54u, 0x4EBF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBF5Cu;
label_4ebf5c:
    // 0x4ebf5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebf60:
    // 0x4ebf60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf64:
    // 0x4ebf64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebf64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebf68:
    // 0x4ebf68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf6c:
    // 0x4ebf6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebf6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf70:
    // 0x4ebf70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebf74:
    // 0x4ebf74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebf74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebf78:
    // 0x4ebf78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebf7c:
    // 0x4ebf7c: 0x60f809  jalr        $v1
label_4ebf80:
    if (ctx->pc == 0x4EBF80u) {
        ctx->pc = 0x4EBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF7Cu;
        // 0x4ebf80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBF84u;
        goto label_4ebf84;
    }
    ctx->pc = 0x4EBF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBF84u);
        ctx->pc = 0x4EBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF7Cu;
        // 0x4ebf80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBF7Cu, 0x4EBF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBF84u;
label_4ebf84:
    // 0x4ebf84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebf88:
    // 0x4ebf88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebf88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebf8c:
    // 0x4ebf8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebf8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebf90:
    // 0x4ebf90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebf94:
    // 0x4ebf94: 0x3e00008  jr          $ra
label_4ebf98:
    if (ctx->pc == 0x4EBF98u) {
        ctx->pc = 0x4EBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF94u;
        // 0x4ebf98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBF9Cu;
        goto label_4ebf9c;
    }
    ctx->pc = 0x4EBF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF94u;
        // 0x4ebf98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBF9Cu;
label_4ebf9c:
    // 0x4ebf9c: 0x0  nop
    ctx->pc = 0x4ebf9cu;
    // NOP
    ctx->pc = 0x4ebfa0u;
}
