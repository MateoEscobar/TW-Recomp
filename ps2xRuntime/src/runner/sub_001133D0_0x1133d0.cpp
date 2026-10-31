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

// Function: sub_001133D0
// Address: 0x1133d0 - 0x113438
void sub_001133D0_0x1133d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001133D0_0x1133d0");
#endif

    switch (ctx->pc) {
        case 0x113404u: goto label_113404;
        case 0x113418u: goto label_113418;
        case 0x113428u: goto label_113428;
        default: break;
    }

    ctx->pc = 0x1133d0u;

    // 0x1133d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1133d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1133d4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1133d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1133d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1133dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1133dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1133e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1133e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1133e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1133e8: 0x8e06aa84  lw          $a2, -0x557C($s0)
    ctx->pc = 0x1133e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1133ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1133ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1133f0: 0x8c437a58  lw          $v1, 0x7A58($v0)
    ctx->pc = 0x1133f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31320)));
    // 0x1133f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1133F4u;
    {
        const bool branch_taken_0x1133f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133F4u;
        // 0x1133f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133f4) {
            ctx->pc = 0x11340Cu;
            goto label_11340c;
        }
    }
    ctx->pc = 0x1133FCu;
    // 0x1133fc: 0xc044586  jal         func_111618
    ctx->pc = 0x1133FCu;
    SET_GPR_U32(ctx, 31, 0x113404u);
    ctx->pc = 0x113400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133FCu;
    // 0x113400: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111618u, 0x1133FCu, 0x113404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113404u;
label_113404:
    // 0x113404: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x113404u;
    {
        const bool branch_taken_0x113404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113404u;
        // 0x113408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113404) {
            ctx->pc = 0x11342Cu;
            goto label_11342c;
        }
    }
    ctx->pc = 0x11340Cu;
label_11340c:
    // 0x11340c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113410: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x113410u;
    SET_GPR_U32(ctx, 31, 0x113418u);
    ctx->pc = 0x113414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113410u;
    // 0x113414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x113410u, 0x113418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113418u;
label_113418:
    // 0x113418: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x113418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x11341c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x11341cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x113420: 0xc044586  jal         func_111618
    ctx->pc = 0x113420u;
    SET_GPR_U32(ctx, 31, 0x113428u);
    ctx->pc = 0x113424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113420u;
    // 0x113424: 0x24a57288  addiu       $a1, $a1, 0x7288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111618u, 0x113420u, 0x113428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113428u;
label_113428:
    // 0x113428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x113428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11342c:
    // 0x11342c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11342cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113430: 0x3e00008  jr          $ra
    ctx->pc = 0x113430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113430u;
        // 0x113434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113438u;
}
