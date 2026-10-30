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

// Function: sub_004F57D8
// Address: 0x4f57d8 - 0x4f5848
void sub_004F57D8_0x4f57d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F57D8_0x4f57d8");
#endif

    switch (ctx->pc) {
        case 0x4f57d8u: goto label_4f57d8;
        case 0x4f57dcu: goto label_4f57dc;
        case 0x4f57e0u: goto label_4f57e0;
        case 0x4f57e4u: goto label_4f57e4;
        case 0x4f57e8u: goto label_4f57e8;
        case 0x4f57ecu: goto label_4f57ec;
        case 0x4f57f0u: goto label_4f57f0;
        case 0x4f57f4u: goto label_4f57f4;
        case 0x4f57f8u: goto label_4f57f8;
        case 0x4f57fcu: goto label_4f57fc;
        case 0x4f5800u: goto label_4f5800;
        case 0x4f5804u: goto label_4f5804;
        case 0x4f5808u: goto label_4f5808;
        case 0x4f580cu: goto label_4f580c;
        case 0x4f5810u: goto label_4f5810;
        case 0x4f5814u: goto label_4f5814;
        case 0x4f5818u: goto label_4f5818;
        case 0x4f581cu: goto label_4f581c;
        case 0x4f5820u: goto label_4f5820;
        case 0x4f5824u: goto label_4f5824;
        case 0x4f5828u: goto label_4f5828;
        case 0x4f582cu: goto label_4f582c;
        case 0x4f5830u: goto label_4f5830;
        case 0x4f5834u: goto label_4f5834;
        case 0x4f5838u: goto label_4f5838;
        case 0x4f583cu: goto label_4f583c;
        case 0x4f5840u: goto label_4f5840;
        case 0x4f5844u: goto label_4f5844;
        default: break;
    }

    ctx->pc = 0x4f57d8u;

label_4f57d8:
    // 0x4f57d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f57d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f57dc:
    // 0x4f57dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f57dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f57e0:
    // 0x4f57e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f57e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f57e4:
    // 0x4f57e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f57e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f57e8:
    // 0x4f57e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f57ec:
    // 0x4f57ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f57ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f57f0:
    // 0x4f57f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f57f4:
    // 0x4f57f4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f57f8:
    if (ctx->pc == 0x4F57F8u) {
        ctx->pc = 0x4F57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F57F4u;
        // 0x4f57f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F57FCu;
        goto label_4f57fc;
    }
    ctx->pc = 0x4F57F4u;
    {
        const bool branch_taken_0x4f57f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F57F4u;
        // 0x4f57f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f57f4) {
            ctx->pc = 0x4F582Cu;
            goto label_4f582c;
        }
    }
    ctx->pc = 0x4F57FCu;
label_4f57fc:
    // 0x4f57fc: 0xc104156  jal         func_410558
label_4f5800:
    if (ctx->pc == 0x4F5800u) {
        ctx->pc = 0x4F5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F57FCu;
        // 0x4f5800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5804u;
        goto label_4f5804;
    }
    ctx->pc = 0x4F57FCu;
    SET_GPR_U32(ctx, 31, 0x4F5804u);
    ctx->pc = 0x4F5800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F57FCu;
    // 0x4f5800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410558u, 0x4F57FCu, 0x4F5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5804u;
label_4f5804:
    // 0x4f5804: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f5804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f5808:
    // 0x4f5808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f5808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f580c:
    // 0x4f580c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f580cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f5810:
    // 0x4f5810: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f5810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f5814:
    // 0x4f5814: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f5814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f5818:
    // 0x4f5818: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f581c:
    // 0x4f581c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f581cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5820:
    // 0x4f5820: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5824:
    // 0x4f5824: 0x60f809  jalr        $v1
label_4f5828:
    if (ctx->pc == 0x4F5828u) {
        ctx->pc = 0x4F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5824u;
        // 0x4f5828: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F582Cu;
        goto label_4f582c;
    }
    ctx->pc = 0x4F5824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F582Cu);
        ctx->pc = 0x4F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5824u;
        // 0x4f5828: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5824u, 0x4F582Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F582Cu;
label_4f582c:
    // 0x4f582c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f582cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5830:
    // 0x4f5830: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f5830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5834:
    // 0x4f5834: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f5834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5838:
    // 0x4f5838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f583c:
    // 0x4f583c: 0x3e00008  jr          $ra
label_4f5840:
    if (ctx->pc == 0x4F5840u) {
        ctx->pc = 0x4F5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F583Cu;
        // 0x4f5840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5844u;
        goto label_4f5844;
    }
    ctx->pc = 0x4F583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F583Cu;
        // 0x4f5840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F583Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5844u;
label_4f5844:
    // 0x4f5844: 0x0  nop
    ctx->pc = 0x4f5844u;
    // NOP
    ctx->pc = 0x4f5848u;
}
