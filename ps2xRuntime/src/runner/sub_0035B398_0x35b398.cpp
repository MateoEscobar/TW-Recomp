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

// Function: sub_0035B398
// Address: 0x35b398 - 0x35b3f0
void sub_0035B398_0x35b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B398_0x35b398");
#endif

    switch (ctx->pc) {
        case 0x35b3b4u: goto label_35b3b4;
        case 0x35b3bcu: goto label_35b3bc;
        case 0x35b3c4u: goto label_35b3c4;
        case 0x35b3ccu: goto label_35b3cc;
        case 0x35b3d8u: goto label_35b3d8;
        default: break;
    }

    ctx->pc = 0x35b398u;

    // 0x35b398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b3a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b3ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B3ACu;
    SET_GPR_U32(ctx, 31, 0x35B3B4u);
    ctx->pc = 0x35B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B3ACu;
    // 0x35b3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B3ACu, 0x35B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3B4u;
label_35b3b4:
    // 0x35b3b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B3B4u;
    SET_GPR_U32(ctx, 31, 0x35B3BCu);
    ctx->pc = 0x35B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B3B4u;
    // 0x35b3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B3B4u, 0x35B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3BCu;
label_35b3bc:
    // 0x35b3bc: 0xc08d50e  jal         func_235438
    ctx->pc = 0x35B3BCu;
    SET_GPR_U32(ctx, 31, 0x35B3C4u);
    ctx->pc = 0x35B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B3BCu;
    // 0x35b3c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235438u, 0x35B3BCu, 0x35B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3C4u;
label_35b3c4:
    // 0x35b3c4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B3C4u;
    SET_GPR_U32(ctx, 31, 0x35B3CCu);
    ctx->pc = 0x35B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B3C4u;
    // 0x35b3c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B3C4u, 0x35B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3CCu;
label_35b3cc:
    // 0x35b3cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b3d0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B3D0u;
    SET_GPR_U32(ctx, 31, 0x35B3D8u);
    ctx->pc = 0x35B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B3D0u;
    // 0x35b3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B3D0u, 0x35B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3D8u;
label_35b3d8:
    // 0x35b3d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3E4u;
        // 0x35b3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B3ECu;
    // 0x35b3ec: 0x0  nop
    ctx->pc = 0x35b3ecu;
    // NOP
    ctx->pc = 0x35b3f0u;
}
