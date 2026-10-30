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

// Function: sub_002D32F8
// Address: 0x2d32f8 - 0x2d3380
void sub_002D32F8_0x2d32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D32F8_0x2d32f8");
#endif

    switch (ctx->pc) {
        case 0x2d3324u: goto label_2d3324;
        case 0x2d332cu: goto label_2d332c;
        case 0x2d333cu: goto label_2d333c;
        case 0x2d3344u: goto label_2d3344;
        case 0x2d3358u: goto label_2d3358;
        case 0x2d336cu: goto label_2d336c;
        default: break;
    }

    ctx->pc = 0x2d32f8u;

    // 0x2d32f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d32fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d3300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d330c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3310: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2d3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d3314: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2d3314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2d3318: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x2d3318u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d331c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D331Cu;
    SET_GPR_U32(ctx, 31, 0x2D3324u);
    ctx->pc = 0x2D3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D331Cu;
    // 0x2d3320: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D331Cu, 0x2D3324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3324u;
label_2d3324:
    // 0x2d3324: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2D3324u;
    SET_GPR_U32(ctx, 31, 0x2D332Cu);
    ctx->pc = 0x2D3328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3324u;
    // 0x2d3328: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2D3324u, 0x2D332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D332Cu;
label_2d332c:
    // 0x2d332c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3330: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2d3330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3334: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2D3334u;
    SET_GPR_U32(ctx, 31, 0x2D333Cu);
    ctx->pc = 0x2D3338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3334u;
    // 0x2d3338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2D3334u, 0x2D333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D333Cu;
label_2d333c:
    // 0x2d333c: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2D333Cu;
    SET_GPR_U32(ctx, 31, 0x2D3344u);
    ctx->pc = 0x2D3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D333Cu;
    // 0x2d3340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2D333Cu, 0x2D3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3344u;
label_2d3344:
    // 0x2d3344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3348: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3348u;
    {
        const bool branch_taken_0x2d3348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3348) {
            ctx->pc = 0x2D334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3348u;
            // 0x2d334c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D335Cu;
            goto label_2d335c;
        }
    }
    ctx->pc = 0x2D3350u;
    // 0x2d3350: 0xc08c050  jal         func_230140
    ctx->pc = 0x2D3350u;
    SET_GPR_U32(ctx, 31, 0x2D3358u);
    ctx->pc = 0x2D3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3350u;
    // 0x2d3354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x2D3350u, 0x2D3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3358u;
label_2d3358:
    // 0x2d3358: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d335c:
    // 0x2d335c: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x2d335cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x2d3360: 0x82050031  lb          $a1, 0x31($s0)
    ctx->pc = 0x2d3360u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x2d3364: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x2D3364u;
    SET_GPR_U32(ctx, 31, 0x2D336Cu);
    ctx->pc = 0x2D3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3364u;
    // 0x2d3368: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2D3364u, 0x2D336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D336Cu;
label_2d336c:
    // 0x2d336c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d336cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3378: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3378u;
        // 0x2d337c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3380u;
}
