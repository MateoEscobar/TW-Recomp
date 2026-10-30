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

// Function: sub_003636C8
// Address: 0x3636c8 - 0x363758
void sub_003636C8_0x3636c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003636C8_0x3636c8");
#endif

    switch (ctx->pc) {
        case 0x3636f0u: goto label_3636f0;
        case 0x3636f8u: goto label_3636f8;
        case 0x36370cu: goto label_36370c;
        case 0x363714u: goto label_363714;
        case 0x363728u: goto label_363728;
        case 0x363738u: goto label_363738;
        default: break;
    }

    ctx->pc = 0x3636c8u;

    // 0x3636c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3636c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3636cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3636ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3636d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3636d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3636d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3636d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3636d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3636d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3636dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3636e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3636e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3636e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3636e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3636E8u;
    SET_GPR_U32(ctx, 31, 0x3636F0u);
    ctx->pc = 0x3636ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3636E8u;
    // 0x3636ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3636E8u, 0x3636F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3636F0u;
label_3636f0:
    // 0x3636f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3636F0u;
    SET_GPR_U32(ctx, 31, 0x3636F8u);
    ctx->pc = 0x3636F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3636F0u;
    // 0x3636f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3636F0u, 0x3636F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3636F8u;
label_3636f8:
    // 0x3636f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3636f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3636fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363704: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363704u;
    SET_GPR_U32(ctx, 31, 0x36370Cu);
    ctx->pc = 0x363708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363704u;
    // 0x363708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363704u, 0x36370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36370Cu;
label_36370c:
    // 0x36370c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36370Cu;
    SET_GPR_U32(ctx, 31, 0x363714u);
    ctx->pc = 0x363710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36370Cu;
    // 0x363710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36370Cu, 0x363714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363714u;
label_363714:
    // 0x363714: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x363714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36371c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363720: 0xc102488  jal         func_409220
    ctx->pc = 0x363720u;
    SET_GPR_U32(ctx, 31, 0x363728u);
    ctx->pc = 0x363724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363720u;
    // 0x363724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363720u, 0x363728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363728u;
label_363728:
    // 0x363728: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x363728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36372c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363730: 0xc0b518a  jal         func_2D4628
    ctx->pc = 0x363730u;
    SET_GPR_U32(ctx, 31, 0x363738u);
    ctx->pc = 0x363734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363730u;
    // 0x363734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4628u, 0x363730u, 0x363738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363738u;
label_363738:
    // 0x363738: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x363738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36373c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36373cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x363740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363744: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x363744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36374c: 0x3e00008  jr          $ra
    ctx->pc = 0x36374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36374Cu;
        // 0x363750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363754u;
    // 0x363754: 0x0  nop
    ctx->pc = 0x363754u;
    // NOP
    ctx->pc = 0x363758u;
}
