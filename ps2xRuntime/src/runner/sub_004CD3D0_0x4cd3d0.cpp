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

// Function: sub_004CD3D0
// Address: 0x4cd3d0 - 0x4cd460
void sub_004CD3D0_0x4cd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD3D0_0x4cd3d0");
#endif

    switch (ctx->pc) {
        case 0x4cd3e4u: goto label_4cd3e4;
        case 0x4cd438u: goto label_4cd438;
        default: break;
    }

    ctx->pc = 0x4cd3d0u;

    // 0x4cd3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd3d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4cd3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4cd3dc: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CD3DCu;
    SET_GPR_U32(ctx, 31, 0x4CD3E4u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CD3DCu, 0x4CD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD3E4u;
label_4cd3e4:
    // 0x4cd3e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4cd3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd3e8: 0x40104800  mfc0        $s0, Count
    ctx->pc = 0x4cd3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_count);
    // 0x4cd3ec: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cd3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4cd3f0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cd3f4: 0x8c824480  lw          $v0, 0x4480($a0)
    ctx->pc = 0x4cd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x714480u));
    // 0x4cd3f8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4cd3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4cd3fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CD3FCu;
    {
        const bool branch_taken_0x4cd3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD3FCu;
        // 0x4cd400: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd3fc) {
            ctx->pc = 0x4CD414u;
            goto label_4cd414;
        }
    }
    ctx->pc = 0x4CD404u;
    // 0x4cd404: 0x8c624484  lw          $v0, 0x4484($v1)
    ctx->pc = 0x4cd404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17540)));
    // 0x4cd408: 0x244238e4  addiu       $v0, $v0, 0x38E4
    ctx->pc = 0x4cd408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14564));
    // 0x4cd40c: 0xac624484  sw          $v0, 0x4484($v1)
    ctx->pc = 0x4cd40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17540), GPR_U32(ctx, 2));
    // 0x4cd410: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4cd410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4cd414:
    // 0x4cd414: 0xac904480  sw          $s0, 0x4480($a0)
    ctx->pc = 0x4cd414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17536), GPR_U32(ctx, 16));
    // 0x4cd418: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4cd418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4cd41c: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4cd41cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x4cd420: 0x8c634484  lw          $v1, 0x4484($v1)
    ctx->pc = 0x4cd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17540)));
    // 0x4cd424: 0x1012  mflo        $v0
    ctx->pc = 0x4cd424u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4cd428: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD428u;
    {
        const bool branch_taken_0x4cd428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD428u;
        // 0x4cd42c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd428) {
            ctx->pc = 0x4CD438u;
            goto label_4cd438;
        }
    }
    ctx->pc = 0x4CD430u;
    // 0x4cd430: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CD430u;
    SET_GPR_U32(ctx, 31, 0x4CD438u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CD430u, 0x4CD438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD438u;
label_4cd438:
    // 0x4cd438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cd438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd43c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cd43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd444: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD444u;
        // 0x4cd448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD44Cu;
    // 0x4cd44c: 0x0  nop
    ctx->pc = 0x4cd44cu;
    // NOP
    // 0x4cd450: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4cd450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4cd454: 0x0  nop
    ctx->pc = 0x4cd454u;
    // NOP
    // 0x4cd458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cd458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd45c: 0x0  nop
    ctx->pc = 0x4cd45cu;
    // NOP
    ctx->pc = 0x4cd460u;
}
