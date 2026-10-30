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

// Function: sub_0035B6B8
// Address: 0x35b6b8 - 0x35b708
void sub_0035B6B8_0x35b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B6B8_0x35b6b8");
#endif

    switch (ctx->pc) {
        case 0x35b6d4u: goto label_35b6d4;
        case 0x35b6dcu: goto label_35b6dc;
        case 0x35b6e4u: goto label_35b6e4;
        case 0x35b6f0u: goto label_35b6f0;
        default: break;
    }

    ctx->pc = 0x35b6b8u;

    // 0x35b6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b6cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B6CCu;
    SET_GPR_U32(ctx, 31, 0x35B6D4u);
    ctx->pc = 0x35B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B6CCu;
    // 0x35b6d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B6CCu, 0x35B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6D4u;
label_35b6d4:
    // 0x35b6d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B6D4u;
    SET_GPR_U32(ctx, 31, 0x35B6DCu);
    ctx->pc = 0x35B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B6D4u;
    // 0x35b6d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B6D4u, 0x35B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6DCu;
label_35b6dc:
    // 0x35b6dc: 0xc08d5c6  jal         func_235718
    ctx->pc = 0x35B6DCu;
    SET_GPR_U32(ctx, 31, 0x35B6E4u);
    ctx->pc = 0x35B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B6DCu;
    // 0x35b6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235718u, 0x35B6DCu, 0x35B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6E4u;
label_35b6e4:
    // 0x35b6e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b6e8: 0xc102562  jal         func_409588
    ctx->pc = 0x35B6E8u;
    SET_GPR_U32(ctx, 31, 0x35B6F0u);
    ctx->pc = 0x35B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B6E8u;
    // 0x35b6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B6E8u, 0x35B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6F0u;
label_35b6f0:
    // 0x35b6f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6FCu;
        // 0x35b700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B704u;
    // 0x35b704: 0x0  nop
    ctx->pc = 0x35b704u;
    // NOP
    ctx->pc = 0x35b708u;
}
