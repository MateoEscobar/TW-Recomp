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

// Function: sub_0040C7F0
// Address: 0x40c7f0 - 0x40c868
void sub_0040C7F0_0x40c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C7F0_0x40c7f0");
#endif

    switch (ctx->pc) {
        case 0x40c80cu: goto label_40c80c;
        case 0x40c818u: goto label_40c818;
        case 0x40c82cu: goto label_40c82c;
        case 0x40c834u: goto label_40c834;
        case 0x40c83cu: goto label_40c83c;
        case 0x40c844u: goto label_40c844;
        case 0x40c84cu: goto label_40c84c;
        case 0x40c854u: goto label_40c854;
        default: break;
    }

    ctx->pc = 0x40c7f0u;

    // 0x40c7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40c7f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40c7f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40c7fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c804: 0xc05f9a0  jal         func_17E680
    ctx->pc = 0x40C804u;
    SET_GPR_U32(ctx, 31, 0x40C80Cu);
    ctx->pc = 0x40C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C804u;
    // 0x40c808: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E680u, 0x40C804u, 0x40C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C80Cu;
label_40c80c:
    // 0x40c80c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x40c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x40c810: 0xc072be8  jal         func_1CAFA0
    ctx->pc = 0x40C810u;
    SET_GPR_U32(ctx, 31, 0x40C818u);
    ctx->pc = 0x40C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C810u;
    // 0x40c814: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFA0u, 0x40C810u, 0x40C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C818u;
label_40c818:
    // 0x40c818: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c820: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x40c820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x40c824: 0xc13d2be  jal         func_4F4AF8
    ctx->pc = 0x40C824u;
    SET_GPR_U32(ctx, 31, 0x40C82Cu);
    ctx->pc = 0x40C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C824u;
    // 0x40c828: 0x24a58640  addiu       $a1, $a1, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4AF8u, 0x40C824u, 0x40C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C82Cu;
label_40c82c:
    // 0x40c82c: 0xc0e1bd6  jal         func_386F58
    ctx->pc = 0x40C82Cu;
    SET_GPR_U32(ctx, 31, 0x40C834u);
    ctx->pc = 0x386F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386F58u, 0x40C82Cu, 0x40C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C834u;
label_40c834:
    // 0x40c834: 0xc0e1bda  jal         func_386F68
    ctx->pc = 0x40C834u;
    SET_GPR_U32(ctx, 31, 0x40C83Cu);
    ctx->pc = 0x386F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386F68u, 0x40C834u, 0x40C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C83Cu;
label_40c83c:
    // 0x40c83c: 0xc0e1bde  jal         func_386F78
    ctx->pc = 0x40C83Cu;
    SET_GPR_U32(ctx, 31, 0x40C844u);
    ctx->pc = 0x386F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386F78u, 0x40C83Cu, 0x40C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C844u;
label_40c844:
    // 0x40c844: 0xc0e1be2  jal         func_386F88
    ctx->pc = 0x40C844u;
    SET_GPR_U32(ctx, 31, 0x40C84Cu);
    ctx->pc = 0x386F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386F88u, 0x40C844u, 0x40C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C84Cu;
label_40c84c:
    // 0x40c84c: 0xc0e1be6  jal         func_386F98
    ctx->pc = 0x40C84Cu;
    SET_GPR_U32(ctx, 31, 0x40C854u);
    ctx->pc = 0x386F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386F98u, 0x40C84Cu, 0x40C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C854u;
label_40c854:
    // 0x40c854: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40c854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c85c: 0x3e00008  jr          $ra
    ctx->pc = 0x40C85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C85Cu;
        // 0x40c860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C864u;
    // 0x40c864: 0x0  nop
    ctx->pc = 0x40c864u;
    // NOP
    ctx->pc = 0x40c868u;
}
