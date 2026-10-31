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

// Function: sub_004827F8
// Address: 0x4827f8 - 0x482830
void sub_004827F8_0x4827f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004827F8_0x4827f8");
#endif

    switch (ctx->pc) {
        case 0x4827f8u: goto label_4827f8;
        case 0x4827fcu: goto label_4827fc;
        case 0x482800u: goto label_482800;
        case 0x482804u: goto label_482804;
        case 0x482808u: goto label_482808;
        case 0x48280cu: goto label_48280c;
        case 0x482810u: goto label_482810;
        case 0x482814u: goto label_482814;
        case 0x482818u: goto label_482818;
        case 0x48281cu: goto label_48281c;
        case 0x482820u: goto label_482820;
        case 0x482824u: goto label_482824;
        case 0x482828u: goto label_482828;
        case 0x48282cu: goto label_48282c;
        default: break;
    }

    ctx->pc = 0x4827f8u;

label_4827f8:
    // 0x4827f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4827f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4827fc:
    // 0x4827fc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4827fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_482800:
    // 0x482800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_482804:
    // 0x482804: 0x8c62adb4  lw          $v0, -0x524C($v1)
    ctx->pc = 0x482804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946228)));
label_482808:
    // 0x482808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48280c:
    // 0x48280c: 0x40f809  jalr        $v0
label_482810:
    if (ctx->pc == 0x482810u) {
        ctx->pc = 0x482810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48280Cu;
        // 0x482810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482814u;
        goto label_482814;
    }
    ctx->pc = 0x48280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x482814u);
        ctx->pc = 0x482810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48280Cu;
        // 0x482810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48280Cu, 0x482814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x482814u;
label_482814:
    // 0x482814: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x482814u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_482818:
    // 0x482818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48281c:
    // 0x48281c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48281cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482820:
    // 0x482820: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x482820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482824:
    // 0x482824: 0x3e00008  jr          $ra
label_482828:
    if (ctx->pc == 0x482828u) {
        ctx->pc = 0x482828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482824u;
        // 0x482828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48282Cu;
        goto label_48282c;
    }
    ctx->pc = 0x482824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482824u;
        // 0x482828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48282Cu;
label_48282c:
    // 0x48282c: 0x0  nop
    ctx->pc = 0x48282cu;
    // NOP
    ctx->pc = 0x482830u;
}
