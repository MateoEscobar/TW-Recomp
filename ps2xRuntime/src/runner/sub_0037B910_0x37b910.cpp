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

// Function: sub_0037B910
// Address: 0x37b910 - 0x37b960
void sub_0037B910_0x37b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B910_0x37b910");
#endif

    switch (ctx->pc) {
        case 0x37b92cu: goto label_37b92c;
        case 0x37b934u: goto label_37b934;
        case 0x37b940u: goto label_37b940;
        case 0x37b94cu: goto label_37b94c;
        default: break;
    }

    ctx->pc = 0x37b910u;

    // 0x37b910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b924: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B924u;
    SET_GPR_U32(ctx, 31, 0x37B92Cu);
    ctx->pc = 0x37B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B924u;
    // 0x37b928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B924u, 0x37B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B92Cu;
label_37b92c:
    // 0x37b92c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B92Cu;
    SET_GPR_U32(ctx, 31, 0x37B934u);
    ctx->pc = 0x37B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B92Cu;
    // 0x37b930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B92Cu, 0x37B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B934u;
label_37b934:
    // 0x37b934: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b938: 0xc106b58  jal         func_41AD60
    ctx->pc = 0x37B938u;
    SET_GPR_U32(ctx, 31, 0x37B940u);
    ctx->pc = 0x37B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B938u;
    // 0x37b93c: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AD60u, 0x37B938u, 0x37B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B940u;
label_37b940:
    // 0x37b940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b944: 0xc102562  jal         func_409588
    ctx->pc = 0x37B944u;
    SET_GPR_U32(ctx, 31, 0x37B94Cu);
    ctx->pc = 0x37B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B944u;
    // 0x37b948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37B944u, 0x37B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B94Cu;
label_37b94c:
    // 0x37b94c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b958: 0x3e00008  jr          $ra
    ctx->pc = 0x37B958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B958u;
        // 0x37b95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B960u;
}
