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

// Function: sub_0015E838
// Address: 0x15e838 - 0x15e8b0
void sub_0015E838_0x15e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E838_0x15e838");
#endif

    switch (ctx->pc) {
        case 0x15e838u: goto label_15e838;
        case 0x15e83cu: goto label_15e83c;
        case 0x15e840u: goto label_15e840;
        case 0x15e844u: goto label_15e844;
        case 0x15e848u: goto label_15e848;
        case 0x15e84cu: goto label_15e84c;
        case 0x15e850u: goto label_15e850;
        case 0x15e854u: goto label_15e854;
        case 0x15e858u: goto label_15e858;
        case 0x15e85cu: goto label_15e85c;
        case 0x15e860u: goto label_15e860;
        case 0x15e864u: goto label_15e864;
        case 0x15e868u: goto label_15e868;
        case 0x15e86cu: goto label_15e86c;
        case 0x15e870u: goto label_15e870;
        case 0x15e874u: goto label_15e874;
        case 0x15e878u: goto label_15e878;
        case 0x15e87cu: goto label_15e87c;
        case 0x15e880u: goto label_15e880;
        case 0x15e884u: goto label_15e884;
        case 0x15e888u: goto label_15e888;
        case 0x15e88cu: goto label_15e88c;
        case 0x15e890u: goto label_15e890;
        case 0x15e894u: goto label_15e894;
        case 0x15e898u: goto label_15e898;
        case 0x15e89cu: goto label_15e89c;
        case 0x15e8a0u: goto label_15e8a0;
        case 0x15e8a4u: goto label_15e8a4;
        case 0x15e8a8u: goto label_15e8a8;
        case 0x15e8acu: goto label_15e8ac;
        default: break;
    }

    ctx->pc = 0x15e838u;

label_15e838:
    // 0x15e838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15e83c:
    // 0x15e83c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15e840:
    // 0x15e840: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15e840u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15e844:
    // 0x15e844: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e848:
    // 0x15e848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15e84c:
    // 0x15e84c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15e84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15e850:
    // 0x15e850: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15e854:
    // 0x15e854: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e858:
    // 0x15e858: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15e85c:
    // 0x15e85c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_15e860:
    // 0x15e860: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_15e864:
    // 0x15e864: 0x40f809  jalr        $v0
label_15e868:
    if (ctx->pc == 0x15E868u) {
        ctx->pc = 0x15E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E864u;
        // 0x15e868: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E86Cu;
        goto label_15e86c;
    }
    ctx->pc = 0x15E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E86Cu);
        ctx->pc = 0x15E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E864u;
        // 0x15e868: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E864u, 0x15E86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E86Cu;
label_15e86c:
    // 0x15e86c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15e870:
    // 0x15e870: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15e870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15e874:
    // 0x15e874: 0xac6267c0  sw          $v0, 0x67C0($v1)
    ctx->pc = 0x15e874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26560), GPR_U32(ctx, 2));
label_15e878:
    // 0x15e878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e87c:
    // 0x15e87c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15e880:
    // 0x15e880: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x15e880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_15e884:
    // 0x15e884: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_15e888:
    // 0x15e888: 0x40f809  jalr        $v0
label_15e88c:
    if (ctx->pc == 0x15E88Cu) {
        ctx->pc = 0x15E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E888u;
        // 0x15e88c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E890u;
        goto label_15e890;
    }
    ctx->pc = 0x15E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E890u);
        ctx->pc = 0x15E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E888u;
        // 0x15e88c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E888u, 0x15E890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E890u;
label_15e890:
    // 0x15e890: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15e890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15e894:
    // 0x15e894: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15e894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e898:
    // 0x15e898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e89c:
    // 0x15e89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e8a0:
    // 0x15e8a0: 0xac6267c4  sw          $v0, 0x67C4($v1)
    ctx->pc = 0x15e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26564), GPR_U32(ctx, 2));
label_15e8a4:
    // 0x15e8a4: 0x3e00008  jr          $ra
label_15e8a8:
    if (ctx->pc == 0x15E8A8u) {
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8ACu;
        goto label_15e8ac;
    }
    ctx->pc = 0x15E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E8ACu;
label_15e8ac:
    // 0x15e8ac: 0x0  nop
    ctx->pc = 0x15e8acu;
    // NOP
    ctx->pc = 0x15e8b0u;
}
