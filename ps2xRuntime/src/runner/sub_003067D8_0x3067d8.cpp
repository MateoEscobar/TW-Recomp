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

// Function: sub_003067D8
// Address: 0x3067d8 - 0x306850
void sub_003067D8_0x3067d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003067D8_0x3067d8");
#endif

    switch (ctx->pc) {
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        case 0x306800u: goto label_306800;
        case 0x306804u: goto label_306804;
        case 0x306808u: goto label_306808;
        case 0x30680cu: goto label_30680c;
        case 0x306810u: goto label_306810;
        case 0x306814u: goto label_306814;
        case 0x306818u: goto label_306818;
        case 0x30681cu: goto label_30681c;
        case 0x306820u: goto label_306820;
        case 0x306824u: goto label_306824;
        case 0x306828u: goto label_306828;
        case 0x30682cu: goto label_30682c;
        case 0x306830u: goto label_306830;
        case 0x306834u: goto label_306834;
        case 0x306838u: goto label_306838;
        case 0x30683cu: goto label_30683c;
        case 0x306840u: goto label_306840;
        case 0x306844u: goto label_306844;
        case 0x306848u: goto label_306848;
        case 0x30684cu: goto label_30684c;
        default: break;
    }

    ctx->pc = 0x3067d8u;

label_3067d8:
    // 0x3067d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3067d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3067dc:
    // 0x3067dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3067dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3067e0:
    // 0x3067e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3067e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3067e4:
    // 0x3067e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3067e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3067e8:
    // 0x3067e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3067e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3067ec:
    // 0x3067ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3067f0:
    if (ctx->pc == 0x3067F0u) {
        ctx->pc = 0x3067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067ECu;
        // 0x3067f0: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067F4u;
        goto label_3067f4;
    }
    ctx->pc = 0x3067ECu;
    {
        const bool branch_taken_0x3067ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067ECu;
        // 0x3067f0: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067ec) {
            ctx->pc = 0x306800u;
            goto label_306800;
        }
    }
    ctx->pc = 0x3067F4u;
label_3067f4:
    // 0x3067f4: 0xc0c19a4  jal         func_306690
label_3067f8:
    if (ctx->pc == 0x3067F8u) {
        ctx->pc = 0x3067FCu;
        goto label_3067fc;
    }
    ctx->pc = 0x3067F4u;
    SET_GPR_U32(ctx, 31, 0x3067FCu);
    ctx->pc = 0x306690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306690u, 0x3067F4u, 0x3067FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067FCu;
label_3067fc:
    // 0x3067fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3067fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_306800:
    // 0x306800: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x306800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_306804:
    // 0x306804: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x306804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_306808:
    // 0x306808: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x306808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_30680c:
    // 0x30680c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x30680cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_306810:
    // 0x306810: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_306814:
    if (ctx->pc == 0x306814u) {
        ctx->pc = 0x306814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306810u;
        // 0x306814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306818u;
        goto label_306818;
    }
    ctx->pc = 0x306810u;
    {
        const bool branch_taken_0x306810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306810u;
        // 0x306814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306810) {
            ctx->pc = 0x30683Cu;
            goto label_30683c;
        }
    }
    ctx->pc = 0x306818u;
label_306818:
    // 0x306818: 0xc0c1ae2  jal         func_306B88
label_30681c:
    if (ctx->pc == 0x30681Cu) {
        ctx->pc = 0x30681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306818u;
        // 0x30681c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306820u;
        goto label_306820;
    }
    ctx->pc = 0x306818u;
    SET_GPR_U32(ctx, 31, 0x306820u);
    ctx->pc = 0x30681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306818u;
    // 0x30681c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306B88u, 0x306818u, 0x306820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306820u;
label_306820:
    // 0x306820: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x306820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_306824:
    // 0x306824: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x306824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_306828:
    // 0x306828: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x306828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_30682c:
    // 0x30682c: 0x40f809  jalr        $v0
label_306830:
    if (ctx->pc == 0x306830u) {
        ctx->pc = 0x306830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30682Cu;
        // 0x306830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306834u;
        goto label_306834;
    }
    ctx->pc = 0x30682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306834u);
        ctx->pc = 0x306830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30682Cu;
        // 0x306830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30682Cu, 0x306834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306834u;
label_306834:
    // 0x306834: 0x10000002  b           . + 4 + (0x2 << 2)
label_306838:
    if (ctx->pc == 0x306838u) {
        ctx->pc = 0x306838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306834u;
        // 0x306838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30683Cu;
        goto label_30683c;
    }
    ctx->pc = 0x306834u;
    {
        const bool branch_taken_0x306834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306834u;
        // 0x306838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306834) {
            ctx->pc = 0x306840u;
            goto label_306840;
        }
    }
    ctx->pc = 0x30683Cu;
label_30683c:
    // 0x30683c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30683cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306840:
    // 0x306840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306844:
    // 0x306844: 0x3e00008  jr          $ra
label_306848:
    if (ctx->pc == 0x306848u) {
        ctx->pc = 0x306848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306844u;
        // 0x306848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30684Cu;
        goto label_30684c;
    }
    ctx->pc = 0x306844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306844u;
        // 0x306848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30684Cu;
label_30684c:
    // 0x30684c: 0x0  nop
    ctx->pc = 0x30684cu;
    // NOP
    ctx->pc = 0x306850u;
}
