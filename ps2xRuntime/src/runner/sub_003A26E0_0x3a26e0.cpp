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

// Function: sub_003A26E0
// Address: 0x3a26e0 - 0x3a2728
void sub_003A26E0_0x3a26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A26E0_0x3a26e0");
#endif

    switch (ctx->pc) {
        case 0x3a26f8u: goto label_3a26f8;
        case 0x3a2708u: goto label_3a2708;
        case 0x3a2714u: goto label_3a2714;
        default: break;
    }

    ctx->pc = 0x3a26e0u;

    // 0x3a26e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a26e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3a26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3a26e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a26e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a26ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a26ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a26f0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3A26F0u;
    SET_GPR_U32(ctx, 31, 0x3A26F8u);
    ctx->pc = 0x3A26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26F0u;
    // 0x3a26f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3A26F0u, 0x3A26F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A26F8u;
label_3a26f8:
    // 0x3a26f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A26F8u;
    {
        const bool branch_taken_0x3a26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26F8u;
        // 0x3a26fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26f8) {
            ctx->pc = 0x3A2714u;
            goto label_3a2714;
        }
    }
    ctx->pc = 0x3A2700u;
    // 0x3a2700: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3A2700u;
    SET_GPR_U32(ctx, 31, 0x3A2708u);
    ctx->pc = 0x3A2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2700u;
    // 0x3a2704: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3A2700u, 0x3A2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2708u;
label_3a2708:
    // 0x3a2708: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a2708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a270c: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x3A270Cu;
    SET_GPR_U32(ctx, 31, 0x3A2714u);
    ctx->pc = 0x3A2710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A270Cu;
    // 0x3a2710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3A270Cu, 0x3A2714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2714u;
label_3a2714:
    // 0x3a2714: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a2714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a271c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A271Cu;
        // 0x3a2720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2724u;
    // 0x3a2724: 0x0  nop
    ctx->pc = 0x3a2724u;
    // NOP
    ctx->pc = 0x3a2728u;
}
