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

// Function: sub_001C37F8
// Address: 0x1c37f8 - 0x1c3868
void sub_001C37F8_0x1c37f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C37F8_0x1c37f8");
#endif

    switch (ctx->pc) {
        case 0x1c37f8u: goto label_1c37f8;
        case 0x1c37fcu: goto label_1c37fc;
        case 0x1c3800u: goto label_1c3800;
        case 0x1c3804u: goto label_1c3804;
        case 0x1c3808u: goto label_1c3808;
        case 0x1c380cu: goto label_1c380c;
        case 0x1c3810u: goto label_1c3810;
        case 0x1c3814u: goto label_1c3814;
        case 0x1c3818u: goto label_1c3818;
        case 0x1c381cu: goto label_1c381c;
        case 0x1c3820u: goto label_1c3820;
        case 0x1c3824u: goto label_1c3824;
        case 0x1c3828u: goto label_1c3828;
        case 0x1c382cu: goto label_1c382c;
        case 0x1c3830u: goto label_1c3830;
        case 0x1c3834u: goto label_1c3834;
        case 0x1c3838u: goto label_1c3838;
        case 0x1c383cu: goto label_1c383c;
        case 0x1c3840u: goto label_1c3840;
        case 0x1c3844u: goto label_1c3844;
        case 0x1c3848u: goto label_1c3848;
        case 0x1c384cu: goto label_1c384c;
        case 0x1c3850u: goto label_1c3850;
        case 0x1c3854u: goto label_1c3854;
        case 0x1c3858u: goto label_1c3858;
        case 0x1c385cu: goto label_1c385c;
        case 0x1c3860u: goto label_1c3860;
        case 0x1c3864u: goto label_1c3864;
        default: break;
    }

    ctx->pc = 0x1c37f8u;

label_1c37f8:
    // 0x1c37f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c37f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c37fc:
    // 0x1c37fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c37fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c3800:
    // 0x1c3800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3804:
    // 0x1c3804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3808:
    // 0x1c3808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c380c:
    // 0x1c380c: 0x26113390  addiu       $s1, $s0, 0x3390
    ctx->pc = 0x1c380cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13200));
label_1c3810:
    // 0x1c3810: 0x8e02064c  lw          $v0, 0x64C($s0)
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1612)));
label_1c3814:
    // 0x1c3814: 0x0  nop
    ctx->pc = 0x1c3814u;
    // NOP
label_1c3818:
    // 0x1c3818: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1c381c:
    if (ctx->pc == 0x1C381Cu) {
        ctx->pc = 0x1C381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3818u;
        // 0x1c381c: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3820u;
        goto label_1c3820;
    }
    ctx->pc = 0x1C3818u;
    {
        const bool branch_taken_0x1c3818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3818) {
            ctx->pc = 0x1C381Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3818u;
            // 0x1c381c: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3848u;
            goto label_1c3848;
        }
    }
    ctx->pc = 0x1C3820u;
label_1c3820:
    // 0x1c3820: 0xc070b38  jal         func_1C2CE0
label_1c3824:
    if (ctx->pc == 0x1C3824u) {
        ctx->pc = 0x1C3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3820u;
        // 0x1c3824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3828u;
        goto label_1c3828;
    }
    ctx->pc = 0x1C3820u;
    SET_GPR_U32(ctx, 31, 0x1C3828u);
    ctx->pc = 0x1C3824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3820u;
    // 0x1c3824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2CE0u, 0x1C3820u, 0x1C3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3828u;
label_1c3828:
    // 0x1c3828: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1c382c:
    if (ctx->pc == 0x1C382Cu) {
        ctx->pc = 0x1C382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3828u;
        // 0x1c382c: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3830u;
        goto label_1c3830;
    }
    ctx->pc = 0x1C3828u;
    {
        const bool branch_taken_0x1c3828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3828) {
            ctx->pc = 0x1C382Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3828u;
            // 0x1c382c: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3848u;
            goto label_1c3848;
        }
    }
    ctx->pc = 0x1C3830u;
label_1c3830:
    // 0x1c3830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c3834:
    // 0x1c3834: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1c3834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c3838:
    // 0x1c3838: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1c3838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c383c:
    // 0x1c383c: 0x60f809  jalr        $v1
label_1c3840:
    if (ctx->pc == 0x1C3840u) {
        ctx->pc = 0x1C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C383Cu;
        // 0x1c3840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3844u;
        goto label_1c3844;
    }
    ctx->pc = 0x1C383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3844u);
        ctx->pc = 0x1C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C383Cu;
        // 0x1c3840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C383Cu, 0x1C3844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3844u;
label_1c3844:
    // 0x1c3844: 0x26100a50  addiu       $s0, $s0, 0xA50
    ctx->pc = 0x1c3844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_1c3848:
    // 0x1c3848: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1c3848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1c384c:
    // 0x1c384c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_1c3850:
    if (ctx->pc == 0x1C3850u) {
        ctx->pc = 0x1C3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C384Cu;
        // 0x1c3850: 0x8e02064c  lw          $v0, 0x64C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3854u;
        goto label_1c3854;
    }
    ctx->pc = 0x1C384Cu;
    {
        const bool branch_taken_0x1c384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c384c) {
            ctx->pc = 0x1C3850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C384Cu;
            // 0x1c3850: 0x8e02064c  lw          $v0, 0x64C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3818;
        }
    }
    ctx->pc = 0x1C3854u;
label_1c3854:
    // 0x1c3854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3858:
    // 0x1c3858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c385c:
    // 0x1c385c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3860:
    // 0x1c3860: 0x3e00008  jr          $ra
label_1c3864:
    if (ctx->pc == 0x1C3864u) {
        ctx->pc = 0x1C3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3860u;
        // 0x1c3864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3868u;
        goto label_fallthrough_0x1c3860;
    }
    ctx->pc = 0x1C3860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3860u;
        // 0x1c3864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3860:
    ctx->pc = 0x1C3868u;
}
