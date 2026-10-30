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

// Function: sub_0035B340
// Address: 0x35b340 - 0x35b398
void sub_0035B340_0x35b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B340_0x35b340");
#endif

    switch (ctx->pc) {
        case 0x35b35cu: goto label_35b35c;
        case 0x35b364u: goto label_35b364;
        case 0x35b36cu: goto label_35b36c;
        case 0x35b374u: goto label_35b374;
        case 0x35b380u: goto label_35b380;
        default: break;
    }

    ctx->pc = 0x35b340u;

    // 0x35b340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b354: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B354u;
    SET_GPR_U32(ctx, 31, 0x35B35Cu);
    ctx->pc = 0x35B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B354u;
    // 0x35b358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B354u, 0x35B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B35Cu;
label_35b35c:
    // 0x35b35c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B35Cu;
    SET_GPR_U32(ctx, 31, 0x35B364u);
    ctx->pc = 0x35B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B35Cu;
    // 0x35b360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B35Cu, 0x35B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B364u;
label_35b364:
    // 0x35b364: 0xc08d4be  jal         func_2352F8
    ctx->pc = 0x35B364u;
    SET_GPR_U32(ctx, 31, 0x35B36Cu);
    ctx->pc = 0x35B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B364u;
    // 0x35b368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2352F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2352F8u, 0x35B364u, 0x35B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B36Cu;
label_35b36c:
    // 0x35b36c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35B36Cu;
    SET_GPR_U32(ctx, 31, 0x35B374u);
    ctx->pc = 0x35B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B36Cu;
    // 0x35b370: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35B36Cu, 0x35B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B374u;
label_35b374:
    // 0x35b374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b378: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B378u;
    SET_GPR_U32(ctx, 31, 0x35B380u);
    ctx->pc = 0x35B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B378u;
    // 0x35b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B378u, 0x35B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B380u;
label_35b380:
    // 0x35b380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b38c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B38Cu;
        // 0x35b390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B394u;
    // 0x35b394: 0x0  nop
    ctx->pc = 0x35b394u;
    // NOP
    ctx->pc = 0x35b398u;
}
