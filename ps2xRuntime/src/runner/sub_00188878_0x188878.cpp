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

// Function: sub_00188878
// Address: 0x188878 - 0x1888e8
void sub_00188878_0x188878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188878_0x188878");
#endif

    switch (ctx->pc) {
        case 0x1888a0u: goto label_1888a0;
        case 0x1888c0u: goto label_1888c0;
        default: break;
    }

    ctx->pc = 0x188878u;

    // 0x188878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18887c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188880: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x188884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18888c: 0x8e230c34  lw          $v1, 0xC34($s1)
    ctx->pc = 0x18888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3124)));
    // 0x188890: 0x8e220c24  lw          $v0, 0xC24($s1)
    ctx->pc = 0x188890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3108)));
    // 0x188894: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x188894u;
    {
        const bool branch_taken_0x188894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188894u;
        // 0x188898: 0x26300c18  addiu       $s0, $s1, 0xC18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188894) {
            ctx->pc = 0x1888D0u;
            goto label_1888d0;
        }
    }
    ctx->pc = 0x18889Cu;
    // 0x18889c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1888a0:
    // 0x1888a0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1888a4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1888a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1888A8u;
    {
        const bool branch_taken_0x1888a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1888ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888A8u;
        // 0x1888ac: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888a8) {
            ctx->pc = 0x1888B8u;
            goto label_1888b8;
        }
    }
    ctx->pc = 0x1888B0u;
    // 0x1888b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1888B0u;
    {
        const bool branch_taken_0x1888b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888B0u;
        // 0x1888b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888b0) {
            ctx->pc = 0x1888C0u;
            goto label_1888c0;
        }
    }
    ctx->pc = 0x1888B8u;
label_1888b8:
    // 0x1888b8: 0xc138cb6  jal         func_4E32D8
    ctx->pc = 0x1888B8u;
    SET_GPR_U32(ctx, 31, 0x1888C0u);
    ctx->pc = 0x1888BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1888B8u;
    // 0x1888bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E32D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E32D8u, 0x1888B8u, 0x1888C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888C0u;
label_1888c0:
    // 0x1888c0: 0x8e230c34  lw          $v1, 0xC34($s1)
    ctx->pc = 0x1888c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3124)));
    // 0x1888c4: 0x8e220c24  lw          $v0, 0xC24($s1)
    ctx->pc = 0x1888c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3108)));
    // 0x1888c8: 0x5462fff5  bnel        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1888C8u;
    {
        const bool branch_taken_0x1888c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1888c8) {
            ctx->pc = 0x1888CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1888C8u;
            // 0x1888cc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1888A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1888a0;
        }
    }
    ctx->pc = 0x1888D0u;
label_1888d0:
    // 0x1888d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1888d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1888d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1888d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1888d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1888d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1888dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1888dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1888e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1888E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1888E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888E0u;
        // 0x1888e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1888E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1888E8u;
}
