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

// Function: sub_0037B850
// Address: 0x37b850 - 0x37b8a8
void sub_0037B850_0x37b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B850_0x37b850");
#endif

    switch (ctx->pc) {
        case 0x37b86cu: goto label_37b86c;
        case 0x37b874u: goto label_37b874;
        case 0x37b880u: goto label_37b880;
        case 0x37b888u: goto label_37b888;
        case 0x37b894u: goto label_37b894;
        default: break;
    }

    ctx->pc = 0x37b850u;

    // 0x37b850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b85c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b864: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B864u;
    SET_GPR_U32(ctx, 31, 0x37B86Cu);
    ctx->pc = 0x37B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B864u;
    // 0x37b868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B864u, 0x37B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B86Cu;
label_37b86c:
    // 0x37b86c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B86Cu;
    SET_GPR_U32(ctx, 31, 0x37B874u);
    ctx->pc = 0x37B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B86Cu;
    // 0x37b870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B86Cu, 0x37B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B874u;
label_37b874:
    // 0x37b874: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b878: 0xc106b40  jal         func_41AD00
    ctx->pc = 0x37B878u;
    SET_GPR_U32(ctx, 31, 0x37B880u);
    ctx->pc = 0x37B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B878u;
    // 0x37b87c: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AD00u, 0x37B878u, 0x37B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B880u;
label_37b880:
    // 0x37b880: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37B880u;
    SET_GPR_U32(ctx, 31, 0x37B888u);
    ctx->pc = 0x37B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B880u;
    // 0x37b884: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37B880u, 0x37B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B888u;
label_37b888:
    // 0x37b888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b88c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B88Cu;
    SET_GPR_U32(ctx, 31, 0x37B894u);
    ctx->pc = 0x37B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B88Cu;
    // 0x37b890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B88Cu, 0x37B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B894u;
label_37b894:
    // 0x37b894: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8A0u;
        // 0x37b8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B8A8u;
}
