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

// Function: sub_0035A6E8
// Address: 0x35a6e8 - 0x35a760
void sub_0035A6E8_0x35a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A6E8_0x35a6e8");
#endif

    switch (ctx->pc) {
        case 0x35a70cu: goto label_35a70c;
        case 0x35a720u: goto label_35a720;
        case 0x35a734u: goto label_35a734;
        case 0x35a744u: goto label_35a744;
        default: break;
    }

    ctx->pc = 0x35a6e8u;

    // 0x35a6e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35a6ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a6f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35a6f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35a6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35a6fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35a700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a704: 0xc102488  jal         func_409220
    ctx->pc = 0x35A704u;
    SET_GPR_U32(ctx, 31, 0x35A70Cu);
    ctx->pc = 0x35A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A704u;
    // 0x35a708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A704u, 0x35A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A70Cu;
label_35a70c:
    // 0x35a70c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35a70cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a714: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a718: 0xc102488  jal         func_409220
    ctx->pc = 0x35A718u;
    SET_GPR_U32(ctx, 31, 0x35A720u);
    ctx->pc = 0x35A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A718u;
    // 0x35a71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A718u, 0x35A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A720u;
label_35a720:
    // 0x35a720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35a720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a728: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a72c: 0xc102488  jal         func_409220
    ctx->pc = 0x35A72Cu;
    SET_GPR_U32(ctx, 31, 0x35A734u);
    ctx->pc = 0x35A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A72Cu;
    // 0x35a730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A72Cu, 0x35A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A734u;
label_35a734:
    // 0x35a734: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35a734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a73c: 0xc08d97c  jal         func_2365F0
    ctx->pc = 0x35A73Cu;
    SET_GPR_U32(ctx, 31, 0x35A744u);
    ctx->pc = 0x35A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A73Cu;
    // 0x35a740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2365F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2365F0u, 0x35A73Cu, 0x35A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A744u;
label_35a744:
    // 0x35a744: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35a744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a74c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35a74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a750: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35a750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a758: 0x3e00008  jr          $ra
    ctx->pc = 0x35A758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A758u;
        // 0x35a75c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A760u;
}
