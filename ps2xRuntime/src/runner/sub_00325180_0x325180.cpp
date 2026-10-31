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

// Function: sub_00325180
// Address: 0x325180 - 0x3251e0
void sub_00325180_0x325180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325180_0x325180");
#endif

    switch (ctx->pc) {
        case 0x32519cu: goto label_32519c;
        case 0x3251a8u: goto label_3251a8;
        case 0x3251b4u: goto label_3251b4;
        case 0x3251bcu: goto label_3251bc;
        case 0x3251c8u: goto label_3251c8;
        default: break;
    }

    ctx->pc = 0x325180u;

    // 0x325180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325184: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32518c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325194: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325194u;
    SET_GPR_U32(ctx, 31, 0x32519Cu);
    ctx->pc = 0x325198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325194u;
    // 0x325198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325194u, 0x32519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32519Cu;
label_32519c:
    // 0x32519c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3251a0: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x3251A0u;
    SET_GPR_U32(ctx, 31, 0x3251A8u);
    ctx->pc = 0x3251A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251A0u;
    // 0x3251a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x3251A0u, 0x3251A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251A8u;
label_3251a8:
    // 0x3251a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3251a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3251ac: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x3251ACu;
    SET_GPR_U32(ctx, 31, 0x3251B4u);
    ctx->pc = 0x3251B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251ACu;
    // 0x3251b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x3251ACu, 0x3251B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251B4u;
label_3251b4:
    // 0x3251b4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3251B4u;
    SET_GPR_U32(ctx, 31, 0x3251BCu);
    ctx->pc = 0x3251B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251B4u;
    // 0x3251b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3251B4u, 0x3251BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251BCu;
label_3251bc:
    // 0x3251bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3251bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3251c0: 0xc0c9064  jal         func_324190
    ctx->pc = 0x3251C0u;
    SET_GPR_U32(ctx, 31, 0x3251C8u);
    ctx->pc = 0x3251C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251C0u;
    // 0x3251c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324190u, 0x3251C0u, 0x3251C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251C8u;
label_3251c8:
    // 0x3251c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3251c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3251cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3251ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3251d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3251d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3251d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3251D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3251D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251D4u;
        // 0x3251d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3251D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3251DCu;
    // 0x3251dc: 0x0  nop
    ctx->pc = 0x3251dcu;
    // NOP
    ctx->pc = 0x3251e0u;
}
