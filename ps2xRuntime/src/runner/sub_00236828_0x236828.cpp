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

// Function: sub_00236828
// Address: 0x236828 - 0x2368d0
void sub_00236828_0x236828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236828_0x236828");
#endif

    switch (ctx->pc) {
        case 0x236828u: goto label_236828;
        case 0x23682cu: goto label_23682c;
        case 0x236830u: goto label_236830;
        case 0x236834u: goto label_236834;
        case 0x236838u: goto label_236838;
        case 0x23683cu: goto label_23683c;
        case 0x236840u: goto label_236840;
        case 0x236844u: goto label_236844;
        case 0x236848u: goto label_236848;
        case 0x23684cu: goto label_23684c;
        case 0x236850u: goto label_236850;
        case 0x236854u: goto label_236854;
        case 0x236858u: goto label_236858;
        case 0x23685cu: goto label_23685c;
        case 0x236860u: goto label_236860;
        case 0x236864u: goto label_236864;
        case 0x236868u: goto label_236868;
        case 0x23686cu: goto label_23686c;
        case 0x236870u: goto label_236870;
        case 0x236874u: goto label_236874;
        case 0x236878u: goto label_236878;
        case 0x23687cu: goto label_23687c;
        case 0x236880u: goto label_236880;
        case 0x236884u: goto label_236884;
        case 0x236888u: goto label_236888;
        case 0x23688cu: goto label_23688c;
        case 0x236890u: goto label_236890;
        case 0x236894u: goto label_236894;
        case 0x236898u: goto label_236898;
        case 0x23689cu: goto label_23689c;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368a4u: goto label_2368a4;
        case 0x2368a8u: goto label_2368a8;
        case 0x2368acu: goto label_2368ac;
        case 0x2368b0u: goto label_2368b0;
        case 0x2368b4u: goto label_2368b4;
        case 0x2368b8u: goto label_2368b8;
        case 0x2368bcu: goto label_2368bc;
        case 0x2368c0u: goto label_2368c0;
        case 0x2368c4u: goto label_2368c4;
        case 0x2368c8u: goto label_2368c8;
        case 0x2368ccu: goto label_2368cc;
        default: break;
    }

    ctx->pc = 0x236828u;

label_236828:
    // 0x236828: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23682c:
    // 0x23682c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236830:
    // 0x236830: 0x8c420284  lw          $v0, 0x284($v0)
    ctx->pc = 0x236830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_236834:
    // 0x236834: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_236838:
    // 0x236838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23683c:
    // 0x23683c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_236840:
    // 0x236840: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_236844:
    if (ctx->pc == 0x236844u) {
        ctx->pc = 0x236844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236840u;
        // 0x236844: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236848u;
        goto label_236848;
    }
    ctx->pc = 0x236840u;
    {
        const bool branch_taken_0x236840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236840u;
        // 0x236844: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236840) {
            ctx->pc = 0x2368C0u;
            goto label_2368c0;
        }
    }
    ctx->pc = 0x236848u;
label_236848:
    // 0x236848: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x236848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23684c:
    // 0x23684c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23684cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236850:
    // 0x236850: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236854:
    // 0x236854: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236858:
    // 0x236858: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x236858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_23685c:
    // 0x23685c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_236860:
    // 0x236860: 0x40f809  jalr        $v0
label_236864:
    if (ctx->pc == 0x236864u) {
        ctx->pc = 0x236864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236860u;
        // 0x236864: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236868u;
        goto label_236868;
    }
    ctx->pc = 0x236860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236868u);
        ctx->pc = 0x236864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236860u;
        // 0x236864: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236860u, 0x236868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236868u;
label_236868:
    // 0x236868: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23686c:
    // 0x23686c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236870:
    // 0x236870: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236874:
    // 0x236874: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x236874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_236878:
    // 0x236878: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x236878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23687c:
    // 0x23687c: 0x60f809  jalr        $v1
label_236880:
    if (ctx->pc == 0x236880u) {
        ctx->pc = 0x236880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23687Cu;
        // 0x236880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236884u;
        goto label_236884;
    }
    ctx->pc = 0x23687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236884u);
        ctx->pc = 0x236880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23687Cu;
        // 0x236880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23687Cu, 0x236884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236884u;
label_236884:
    // 0x236884: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236888:
    // 0x236888: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x236888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_23688c:
    // 0x23688c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236890:
    // 0x236890: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x236890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_236894:
    // 0x236894: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x236894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_236898:
    // 0x236898: 0x60f809  jalr        $v1
label_23689c:
    if (ctx->pc == 0x23689Cu) {
        ctx->pc = 0x23689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236898u;
        // 0x23689c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368A0u;
        goto label_2368a0;
    }
    ctx->pc = 0x236898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2368A0u);
        ctx->pc = 0x23689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236898u;
        // 0x23689c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236898u, 0x2368A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2368A0u;
label_2368a0:
    // 0x2368a0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2368a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2368a4:
    // 0x2368a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2368a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2368a8:
    // 0x2368a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2368a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2368ac:
    // 0x2368ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2368acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2368b0:
    // 0x2368b0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2368b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2368b4:
    // 0x2368b4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2368b8:
    // 0x2368b8: 0x60f809  jalr        $v1
label_2368bc:
    if (ctx->pc == 0x2368BCu) {
        ctx->pc = 0x2368BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368B8u;
        // 0x2368bc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368C0u;
        goto label_2368c0;
    }
    ctx->pc = 0x2368B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2368C0u);
        ctx->pc = 0x2368BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368B8u;
        // 0x2368bc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368B8u, 0x2368C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2368C0u;
label_2368c0:
    // 0x2368c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2368c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2368c4:
    // 0x2368c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2368c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2368c8:
    // 0x2368c8: 0x3e00008  jr          $ra
label_2368cc:
    if (ctx->pc == 0x2368CCu) {
        ctx->pc = 0x2368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368C8u;
        // 0x2368cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368D0u;
        goto label_fallthrough_0x2368c8;
    }
    ctx->pc = 0x2368C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368C8u;
        // 0x2368cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2368c8:
    ctx->pc = 0x2368D0u;
}
