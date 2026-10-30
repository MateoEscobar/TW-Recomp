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

// Function: sub_0035B188
// Address: 0x35b188 - 0x35b200
void sub_0035B188_0x35b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B188_0x35b188");
#endif

    switch (ctx->pc) {
        case 0x35b1a8u: goto label_35b1a8;
        case 0x35b1b0u: goto label_35b1b0;
        case 0x35b1b8u: goto label_35b1b8;
        case 0x35b1c4u: goto label_35b1c4;
        case 0x35b1dcu: goto label_35b1dc;
        case 0x35b1e8u: goto label_35b1e8;
        default: break;
    }

    ctx->pc = 0x35b188u;

    // 0x35b188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b18c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b198: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35b19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b1a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B1A0u;
    SET_GPR_U32(ctx, 31, 0x35B1A8u);
    ctx->pc = 0x35B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1A0u;
    // 0x35b1a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B1A0u, 0x35B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1A8u;
label_35b1a8:
    // 0x35b1a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B1A8u;
    SET_GPR_U32(ctx, 31, 0x35B1B0u);
    ctx->pc = 0x35B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1A8u;
    // 0x35b1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B1A8u, 0x35B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1B0u;
label_35b1b0:
    // 0x35b1b0: 0xc08d3ee  jal         func_234FB8
    ctx->pc = 0x35B1B0u;
    SET_GPR_U32(ctx, 31, 0x35B1B8u);
    ctx->pc = 0x35B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1B0u;
    // 0x35b1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234FB8u, 0x35B1B0u, 0x35B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1B8u;
label_35b1b8:
    // 0x35b1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1bc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B1BCu;
    SET_GPR_U32(ctx, 31, 0x35B1C4u);
    ctx->pc = 0x35B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1BCu;
    // 0x35b1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B1BCu, 0x35B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1C4u;
label_35b1c4:
    // 0x35b1c4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B1C4u;
    {
        const bool branch_taken_0x35b1c4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B1C4u;
        // 0x35b1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b1c4) {
            ctx->pc = 0x35B1E0u;
            goto label_35b1e0;
        }
    }
    ctx->pc = 0x35B1CCu;
    // 0x35b1cc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35b1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35b1d0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35b1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35b1d4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35B1D4u;
    SET_GPR_U32(ctx, 31, 0x35B1DCu);
    ctx->pc = 0x35B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1D4u;
    // 0x35b1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35B1D4u, 0x35B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1DCu;
label_35b1dc:
    // 0x35b1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b1e0:
    // 0x35b1e0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B1E0u;
    SET_GPR_U32(ctx, 31, 0x35B1E8u);
    ctx->pc = 0x35B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1E0u;
    // 0x35b1e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B1E0u, 0x35B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1E8u;
label_35b1e8:
    // 0x35b1e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35b1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b1f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35B1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B1F8u;
        // 0x35b1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B200u;
}
