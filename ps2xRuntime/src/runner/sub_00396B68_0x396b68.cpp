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

// Function: sub_00396B68
// Address: 0x396b68 - 0x396bd0
void sub_00396B68_0x396b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396B68_0x396b68");
#endif

    switch (ctx->pc) {
        case 0x396b84u: goto label_396b84;
        case 0x396b98u: goto label_396b98;
        case 0x396ba4u: goto label_396ba4;
        case 0x396bb4u: goto label_396bb4;
        case 0x396bbcu: goto label_396bbc;
        default: break;
    }

    ctx->pc = 0x396b68u;

    // 0x396b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396b6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x396b70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x396b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x396b74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x396b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x396b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396b7c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396B7Cu;
    SET_GPR_U32(ctx, 31, 0x396B84u);
    ctx->pc = 0x396B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B7Cu;
    // 0x396b80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396B7Cu, 0x396B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396B84u;
label_396b84:
    // 0x396b84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396b88: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x396B88u;
    {
        const bool branch_taken_0x396b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B88u;
        // 0x396b8c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b88) {
            ctx->pc = 0x396BBCu;
            goto label_396bbc;
        }
    }
    ctx->pc = 0x396B90u;
    // 0x396b90: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x396B90u;
    SET_GPR_U32(ctx, 31, 0x396B98u);
    ctx->pc = 0x396B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B90u;
    // 0x396b94: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396B90u, 0x396B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396B98u;
label_396b98:
    // 0x396b98: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396b9c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x396B9Cu;
    SET_GPR_U32(ctx, 31, 0x396BA4u);
    ctx->pc = 0x396BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B9Cu;
    // 0x396ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x396B9Cu, 0x396BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BA4u;
label_396ba4:
    // 0x396ba4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396ba8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x396ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x396bac: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x396BACu;
    SET_GPR_U32(ctx, 31, 0x396BB4u);
    ctx->pc = 0x396BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396BACu;
    // 0x396bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396BACu, 0x396BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BB4u;
label_396bb4:
    // 0x396bb4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x396BB4u;
    SET_GPR_U32(ctx, 31, 0x396BBCu);
    ctx->pc = 0x396BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396BB4u;
    // 0x396bb8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396BB4u, 0x396BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BBCu;
label_396bbc:
    // 0x396bbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x396bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396bc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x396bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x396BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BC8u;
        // 0x396bcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396BD0u;
}
