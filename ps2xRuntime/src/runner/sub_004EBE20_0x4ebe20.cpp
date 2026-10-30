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

// Function: sub_004EBE20
// Address: 0x4ebe20 - 0x4ebea0
void sub_004EBE20_0x4ebe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBE20_0x4ebe20");
#endif

    switch (ctx->pc) {
        case 0x4ebe20u: goto label_4ebe20;
        case 0x4ebe24u: goto label_4ebe24;
        case 0x4ebe28u: goto label_4ebe28;
        case 0x4ebe2cu: goto label_4ebe2c;
        case 0x4ebe30u: goto label_4ebe30;
        case 0x4ebe34u: goto label_4ebe34;
        case 0x4ebe38u: goto label_4ebe38;
        case 0x4ebe3cu: goto label_4ebe3c;
        case 0x4ebe40u: goto label_4ebe40;
        case 0x4ebe44u: goto label_4ebe44;
        case 0x4ebe48u: goto label_4ebe48;
        case 0x4ebe4cu: goto label_4ebe4c;
        case 0x4ebe50u: goto label_4ebe50;
        case 0x4ebe54u: goto label_4ebe54;
        case 0x4ebe58u: goto label_4ebe58;
        case 0x4ebe5cu: goto label_4ebe5c;
        case 0x4ebe60u: goto label_4ebe60;
        case 0x4ebe64u: goto label_4ebe64;
        case 0x4ebe68u: goto label_4ebe68;
        case 0x4ebe6cu: goto label_4ebe6c;
        case 0x4ebe70u: goto label_4ebe70;
        case 0x4ebe74u: goto label_4ebe74;
        case 0x4ebe78u: goto label_4ebe78;
        case 0x4ebe7cu: goto label_4ebe7c;
        case 0x4ebe80u: goto label_4ebe80;
        case 0x4ebe84u: goto label_4ebe84;
        case 0x4ebe88u: goto label_4ebe88;
        case 0x4ebe8cu: goto label_4ebe8c;
        case 0x4ebe90u: goto label_4ebe90;
        case 0x4ebe94u: goto label_4ebe94;
        case 0x4ebe98u: goto label_4ebe98;
        case 0x4ebe9cu: goto label_4ebe9c;
        default: break;
    }

    ctx->pc = 0x4ebe20u;

label_4ebe20:
    // 0x4ebe20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebe24:
    // 0x4ebe24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebe28:
    // 0x4ebe28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebe2c:
    // 0x4ebe2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebe30:
    // 0x4ebe30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebe34:
    // 0x4ebe34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebe34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebe38:
    // 0x4ebe38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebe3c:
    // 0x4ebe3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebe40:
    if (ctx->pc == 0x4EBE40u) {
        ctx->pc = 0x4EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE3Cu;
        // 0x4ebe40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBE44u;
        goto label_4ebe44;
    }
    ctx->pc = 0x4EBE3Cu;
    {
        const bool branch_taken_0x4ebe3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE3Cu;
        // 0x4ebe40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebe3c) {
            ctx->pc = 0x4EBE84u;
            goto label_4ebe84;
        }
    }
    ctx->pc = 0x4EBE44u;
label_4ebe44:
    // 0x4ebe44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebe48:
    // 0x4ebe48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebe4c:
    // 0x4ebe4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebe4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebe50:
    // 0x4ebe50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebe54:
    // 0x4ebe54: 0x60f809  jalr        $v1
label_4ebe58:
    if (ctx->pc == 0x4EBE58u) {
        ctx->pc = 0x4EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE54u;
        // 0x4ebe58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBE5Cu;
        goto label_4ebe5c;
    }
    ctx->pc = 0x4EBE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBE5Cu);
        ctx->pc = 0x4EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE54u;
        // 0x4ebe58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBE54u, 0x4EBE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBE5Cu;
label_4ebe5c:
    // 0x4ebe5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebe60:
    // 0x4ebe60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebe64:
    // 0x4ebe64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebe64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebe68:
    // 0x4ebe68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebe68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebe6c:
    // 0x4ebe6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebe6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebe70:
    // 0x4ebe70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebe74:
    // 0x4ebe74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebe74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebe78:
    // 0x4ebe78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebe7c:
    // 0x4ebe7c: 0x60f809  jalr        $v1
label_4ebe80:
    if (ctx->pc == 0x4EBE80u) {
        ctx->pc = 0x4EBE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE7Cu;
        // 0x4ebe80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBE84u;
        goto label_4ebe84;
    }
    ctx->pc = 0x4EBE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBE84u);
        ctx->pc = 0x4EBE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE7Cu;
        // 0x4ebe80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBE7Cu, 0x4EBE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBE84u;
label_4ebe84:
    // 0x4ebe84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebe84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebe88:
    // 0x4ebe88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebe88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebe8c:
    // 0x4ebe8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebe8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebe90:
    // 0x4ebe90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebe94:
    // 0x4ebe94: 0x3e00008  jr          $ra
label_4ebe98:
    if (ctx->pc == 0x4EBE98u) {
        ctx->pc = 0x4EBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE94u;
        // 0x4ebe98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBE9Cu;
        goto label_4ebe9c;
    }
    ctx->pc = 0x4EBE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBE94u;
        // 0x4ebe98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBE9Cu;
label_4ebe9c:
    // 0x4ebe9c: 0x0  nop
    ctx->pc = 0x4ebe9cu;
    // NOP
    ctx->pc = 0x4ebea0u;
}
