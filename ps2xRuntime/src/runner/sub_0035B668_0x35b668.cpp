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

// Function: sub_0035B668
// Address: 0x35b668 - 0x35b6b8
void sub_0035B668_0x35b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B668_0x35b668");
#endif

    switch (ctx->pc) {
        case 0x35b684u: goto label_35b684;
        case 0x35b68cu: goto label_35b68c;
        case 0x35b694u: goto label_35b694;
        case 0x35b6a0u: goto label_35b6a0;
        default: break;
    }

    ctx->pc = 0x35b668u;

    // 0x35b668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b67c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B67Cu;
    SET_GPR_U32(ctx, 31, 0x35B684u);
    ctx->pc = 0x35B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B67Cu;
    // 0x35b680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B67Cu, 0x35B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B684u;
label_35b684:
    // 0x35b684: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B684u;
    SET_GPR_U32(ctx, 31, 0x35B68Cu);
    ctx->pc = 0x35B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B684u;
    // 0x35b688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B684u, 0x35B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B68Cu;
label_35b68c:
    // 0x35b68c: 0xc08d5b2  jal         func_2356C8
    ctx->pc = 0x35B68Cu;
    SET_GPR_U32(ctx, 31, 0x35B694u);
    ctx->pc = 0x35B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B68Cu;
    // 0x35b690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2356C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2356C8u, 0x35B68Cu, 0x35B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B694u;
label_35b694:
    // 0x35b694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b698: 0xc102562  jal         func_409588
    ctx->pc = 0x35B698u;
    SET_GPR_U32(ctx, 31, 0x35B6A0u);
    ctx->pc = 0x35B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B698u;
    // 0x35b69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B698u, 0x35B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6A0u;
label_35b6a0:
    // 0x35b6a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b6a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6ACu;
        // 0x35b6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B6B4u;
    // 0x35b6b4: 0x0  nop
    ctx->pc = 0x35b6b4u;
    // NOP
    ctx->pc = 0x35b6b8u;
}
