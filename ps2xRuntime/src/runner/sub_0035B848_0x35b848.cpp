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

// Function: sub_0035B848
// Address: 0x35b848 - 0x35b8a0
void sub_0035B848_0x35b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B848_0x35b848");
#endif

    switch (ctx->pc) {
        case 0x35b864u: goto label_35b864;
        case 0x35b86cu: goto label_35b86c;
        case 0x35b874u: goto label_35b874;
        case 0x35b87cu: goto label_35b87c;
        case 0x35b888u: goto label_35b888;
        default: break;
    }

    ctx->pc = 0x35b848u;

    // 0x35b848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b85c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B85Cu;
    SET_GPR_U32(ctx, 31, 0x35B864u);
    ctx->pc = 0x35B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B85Cu;
    // 0x35b860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B85Cu, 0x35B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B864u;
label_35b864:
    // 0x35b864: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B864u;
    SET_GPR_U32(ctx, 31, 0x35B86Cu);
    ctx->pc = 0x35B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B864u;
    // 0x35b868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B864u, 0x35B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B86Cu;
label_35b86c:
    // 0x35b86c: 0xc08d624  jal         func_235890
    ctx->pc = 0x35B86Cu;
    SET_GPR_U32(ctx, 31, 0x35B874u);
    ctx->pc = 0x35B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B86Cu;
    // 0x35b870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235890u, 0x35B86Cu, 0x35B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B874u;
label_35b874:
    // 0x35b874: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B874u;
    SET_GPR_U32(ctx, 31, 0x35B87Cu);
    ctx->pc = 0x35B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B874u;
    // 0x35b878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B874u, 0x35B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B87Cu;
label_35b87c:
    // 0x35b87c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b880: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B880u;
    SET_GPR_U32(ctx, 31, 0x35B888u);
    ctx->pc = 0x35B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B880u;
    // 0x35b884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B880u, 0x35B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B888u;
label_35b888:
    // 0x35b888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b894: 0x3e00008  jr          $ra
    ctx->pc = 0x35B894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B894u;
        // 0x35b898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B89Cu;
    // 0x35b89c: 0x0  nop
    ctx->pc = 0x35b89cu;
    // NOP
    ctx->pc = 0x35b8a0u;
}
