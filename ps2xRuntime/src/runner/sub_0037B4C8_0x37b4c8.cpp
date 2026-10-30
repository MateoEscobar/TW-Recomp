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

// Function: sub_0037B4C8
// Address: 0x37b4c8 - 0x37b538
void sub_0037B4C8_0x37b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B4C8_0x37b4c8");
#endif

    switch (ctx->pc) {
        case 0x37b4e8u: goto label_37b4e8;
        case 0x37b4f0u: goto label_37b4f0;
        case 0x37b508u: goto label_37b508;
        case 0x37b510u: goto label_37b510;
        case 0x37b51cu: goto label_37b51c;
        default: break;
    }

    ctx->pc = 0x37b4c8u;

    // 0x37b4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b4cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b4d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b4dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b4e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B4E0u;
    SET_GPR_U32(ctx, 31, 0x37B4E8u);
    ctx->pc = 0x37B4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B4E0u;
    // 0x37b4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B4E0u, 0x37B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4E8u;
label_37b4e8:
    // 0x37b4e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B4E8u;
    SET_GPR_U32(ctx, 31, 0x37B4F0u);
    ctx->pc = 0x37B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B4E8u;
    // 0x37b4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B4E8u, 0x37B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4F0u;
label_37b4f0:
    // 0x37b4f0: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b4f4: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b4f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b500: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B500u;
    SET_GPR_U32(ctx, 31, 0x37B508u);
    ctx->pc = 0x37B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B500u;
    // 0x37b504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B500u, 0x37B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B508u;
label_37b508:
    // 0x37b508: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B508u;
    SET_GPR_U32(ctx, 31, 0x37B510u);
    ctx->pc = 0x37B50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B508u;
    // 0x37b50c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B508u, 0x37B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B510u;
label_37b510:
    // 0x37b510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b514: 0xc107bd8  jal         func_41EF60
    ctx->pc = 0x37B514u;
    SET_GPR_U32(ctx, 31, 0x37B51Cu);
    ctx->pc = 0x37B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B514u;
    // 0x37b518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EF60u, 0x37B514u, 0x37B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B51Cu;
label_37b51c:
    // 0x37b51c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B52Cu;
        // 0x37b530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B534u;
    // 0x37b534: 0x0  nop
    ctx->pc = 0x37b534u;
    // NOP
    ctx->pc = 0x37b538u;
}
