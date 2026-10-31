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

// Function: sub_0037CB98
// Address: 0x37cb98 - 0x37cc10
void sub_0037CB98_0x37cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CB98_0x37cb98");
#endif

    switch (ctx->pc) {
        case 0x37cbb8u: goto label_37cbb8;
        case 0x37cbc0u: goto label_37cbc0;
        case 0x37cbc8u: goto label_37cbc8;
        case 0x37cbd4u: goto label_37cbd4;
        case 0x37cbecu: goto label_37cbec;
        case 0x37cbf8u: goto label_37cbf8;
        default: break;
    }

    ctx->pc = 0x37cb98u;

    // 0x37cb98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37cb9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37cba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37cba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cba8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37cbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cbb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CBB0u;
    SET_GPR_U32(ctx, 31, 0x37CBB8u);
    ctx->pc = 0x37CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBB0u;
    // 0x37cbb4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CBB0u, 0x37CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBB8u;
label_37cbb8:
    // 0x37cbb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CBB8u;
    SET_GPR_U32(ctx, 31, 0x37CBC0u);
    ctx->pc = 0x37CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBB8u;
    // 0x37cbbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CBB8u, 0x37CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBC0u;
label_37cbc0:
    // 0x37cbc0: 0xc10899c  jal         func_422670
    ctx->pc = 0x37CBC0u;
    SET_GPR_U32(ctx, 31, 0x37CBC8u);
    ctx->pc = 0x37CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBC0u;
    // 0x37cbc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422670u, 0x37CBC0u, 0x37CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBC8u;
label_37cbc8:
    // 0x37cbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37cbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cbcc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37CBCCu;
    SET_GPR_U32(ctx, 31, 0x37CBD4u);
    ctx->pc = 0x37CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBCCu;
    // 0x37cbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37CBCCu, 0x37CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBD4u;
label_37cbd4:
    // 0x37cbd4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37CBD4u;
    {
        const bool branch_taken_0x37cbd4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CBD4u;
        // 0x37cbd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cbd4) {
            ctx->pc = 0x37CBF0u;
            goto label_37cbf0;
        }
    }
    ctx->pc = 0x37CBDCu;
    // 0x37cbdc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37cbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37cbe0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37cbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37cbe4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37CBE4u;
    SET_GPR_U32(ctx, 31, 0x37CBECu);
    ctx->pc = 0x37CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBE4u;
    // 0x37cbe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37CBE4u, 0x37CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBECu;
label_37cbec:
    // 0x37cbec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37cbf0:
    // 0x37cbf0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37CBF0u;
    SET_GPR_U32(ctx, 31, 0x37CBF8u);
    ctx->pc = 0x37CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBF0u;
    // 0x37cbf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37CBF0u, 0x37CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBF8u;
label_37cbf8:
    // 0x37cbf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37cbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cbfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cc00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37cc00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC08u;
        // 0x37cc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CC10u;
}
