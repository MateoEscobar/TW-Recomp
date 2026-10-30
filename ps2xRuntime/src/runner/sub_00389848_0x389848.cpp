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

// Function: sub_00389848
// Address: 0x389848 - 0x389898
void sub_00389848_0x389848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389848_0x389848");
#endif

    switch (ctx->pc) {
        case 0x389848u: goto label_389848;
        case 0x38984cu: goto label_38984c;
        case 0x389850u: goto label_389850;
        case 0x389854u: goto label_389854;
        case 0x389858u: goto label_389858;
        case 0x38985cu: goto label_38985c;
        case 0x389860u: goto label_389860;
        case 0x389864u: goto label_389864;
        case 0x389868u: goto label_389868;
        case 0x38986cu: goto label_38986c;
        case 0x389870u: goto label_389870;
        case 0x389874u: goto label_389874;
        case 0x389878u: goto label_389878;
        case 0x38987cu: goto label_38987c;
        case 0x389880u: goto label_389880;
        case 0x389884u: goto label_389884;
        case 0x389888u: goto label_389888;
        case 0x38988cu: goto label_38988c;
        case 0x389890u: goto label_389890;
        case 0x389894u: goto label_389894;
        default: break;
    }

    ctx->pc = 0x389848u;

label_389848:
    // 0x389848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38984c:
    // 0x38984c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_389850:
    // 0x389850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389854:
    // 0x389854: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_389858:
    if (ctx->pc == 0x389858u) {
        ctx->pc = 0x389858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389854u;
        // 0x389858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38985Cu;
        goto label_38985c;
    }
    ctx->pc = 0x389854u;
    {
        const bool branch_taken_0x389854 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x389858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389854u;
        // 0x389858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389854) {
            ctx->pc = 0x389864u;
            goto label_389864;
        }
    }
    ctx->pc = 0x38985Cu;
label_38985c:
    // 0x38985c: 0x1000000a  b           . + 4 + (0xA << 2)
label_389860:
    if (ctx->pc == 0x389860u) {
        ctx->pc = 0x389860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38985Cu;
        // 0x389860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389864u;
        goto label_389864;
    }
    ctx->pc = 0x38985Cu;
    {
        const bool branch_taken_0x38985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38985Cu;
        // 0x389860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38985c) {
            ctx->pc = 0x389888u;
            goto label_389888;
        }
    }
    ctx->pc = 0x389864u;
label_389864:
    // 0x389864: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_389868:
    // 0x389868: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x389868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_38986c:
    // 0x38986c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x38986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_389870:
    // 0x389870: 0x40f809  jalr        $v0
label_389874:
    if (ctx->pc == 0x389874u) {
        ctx->pc = 0x389874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389870u;
        // 0x389874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389878u;
        goto label_389878;
    }
    ctx->pc = 0x389870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389878u);
        ctx->pc = 0x389874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389870u;
        // 0x389874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389870u, 0x389878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389878u;
label_389878:
    // 0x389878: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x389878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_38987c:
    // 0x38987c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_389880:
    // 0x389880: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x389880u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_389884:
    // 0x389884: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389888:
    // 0x389888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38988c:
    // 0x38988c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389890:
    // 0x389890: 0x3e00008  jr          $ra
label_389894:
    if (ctx->pc == 0x389894u) {
        ctx->pc = 0x389894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389890u;
        // 0x389894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389898u;
        goto label_fallthrough_0x389890;
    }
    ctx->pc = 0x389890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389890u;
        // 0x389894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389890:
    ctx->pc = 0x389898u;
}
