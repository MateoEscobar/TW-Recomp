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

// Function: sub_00159A58
// Address: 0x159a58 - 0x159ab8
void sub_00159A58_0x159a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159A58_0x159a58");
#endif

    switch (ctx->pc) {
        case 0x159a58u: goto label_159a58;
        case 0x159a5cu: goto label_159a5c;
        case 0x159a60u: goto label_159a60;
        case 0x159a64u: goto label_159a64;
        case 0x159a68u: goto label_159a68;
        case 0x159a6cu: goto label_159a6c;
        case 0x159a70u: goto label_159a70;
        case 0x159a74u: goto label_159a74;
        case 0x159a78u: goto label_159a78;
        case 0x159a7cu: goto label_159a7c;
        case 0x159a80u: goto label_159a80;
        case 0x159a84u: goto label_159a84;
        case 0x159a88u: goto label_159a88;
        case 0x159a8cu: goto label_159a8c;
        case 0x159a90u: goto label_159a90;
        case 0x159a94u: goto label_159a94;
        case 0x159a98u: goto label_159a98;
        case 0x159a9cu: goto label_159a9c;
        case 0x159aa0u: goto label_159aa0;
        case 0x159aa4u: goto label_159aa4;
        case 0x159aa8u: goto label_159aa8;
        case 0x159aacu: goto label_159aac;
        case 0x159ab0u: goto label_159ab0;
        case 0x159ab4u: goto label_159ab4;
        default: break;
    }

    ctx->pc = 0x159a58u;

label_159a58:
    // 0x159a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_159a5c:
    // 0x159a5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_159a60:
    // 0x159a60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_159a64:
    // 0x159a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159a68:
    // 0x159a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_159a6c:
    // 0x159a6c: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x159a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_159a70:
    // 0x159a70: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x159a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_159a74:
    // 0x159a74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x159a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_159a78:
    // 0x159a78: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x159a78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_159a7c:
    // 0x159a7c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x159a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_159a80:
    // 0x159a80: 0x40f809  jalr        $v0
label_159a84:
    if (ctx->pc == 0x159A84u) {
        ctx->pc = 0x159A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A80u;
        // 0x159a84: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A88u;
        goto label_159a88;
    }
    ctx->pc = 0x159A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159A88u);
        ctx->pc = 0x159A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A80u;
        // 0x159a84: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A80u, 0x159A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159A88u;
label_159a88:
    // 0x159a88: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x159a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_159a8c:
    // 0x159a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159a90:
    // 0x159a90: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x159a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_159a94:
    // 0x159a94: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x159a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_159a98:
    // 0x159a98: 0xc056702  jal         func_159C08
label_159a9c:
    if (ctx->pc == 0x159A9Cu) {
        ctx->pc = 0x159A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A98u;
        // 0x159a9c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AA0u;
        goto label_159aa0;
    }
    ctx->pc = 0x159A98u;
    SET_GPR_U32(ctx, 31, 0x159AA0u);
    ctx->pc = 0x159A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A98u;
    // 0x159a9c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C08u, 0x159A98u, 0x159AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AA0u;
label_159aa0:
    // 0x159aa0: 0xc058486  jal         func_161218
label_159aa4:
    if (ctx->pc == 0x159AA4u) {
        ctx->pc = 0x159AA8u;
        goto label_159aa8;
    }
    ctx->pc = 0x159AA0u;
    SET_GPR_U32(ctx, 31, 0x159AA8u);
    ctx->pc = 0x161218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161218u, 0x159AA0u, 0x159AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AA8u;
label_159aa8:
    // 0x159aa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159aac:
    // 0x159aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159ab0:
    // 0x159ab0: 0x3e00008  jr          $ra
label_159ab4:
    if (ctx->pc == 0x159AB4u) {
        ctx->pc = 0x159AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB0u;
        // 0x159ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AB8u;
        goto label_fallthrough_0x159ab0;
    }
    ctx->pc = 0x159AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB0u;
        // 0x159ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159ab0:
    ctx->pc = 0x159AB8u;
}
