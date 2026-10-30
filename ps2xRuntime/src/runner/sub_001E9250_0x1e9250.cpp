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

// Function: sub_001E9250
// Address: 0x1e9250 - 0x1e9298
void sub_001E9250_0x1e9250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9250_0x1e9250");
#endif

    switch (ctx->pc) {
        case 0x1e9250u: goto label_1e9250;
        case 0x1e9254u: goto label_1e9254;
        case 0x1e9258u: goto label_1e9258;
        case 0x1e925cu: goto label_1e925c;
        case 0x1e9260u: goto label_1e9260;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e9268u: goto label_1e9268;
        case 0x1e926cu: goto label_1e926c;
        case 0x1e9270u: goto label_1e9270;
        case 0x1e9274u: goto label_1e9274;
        case 0x1e9278u: goto label_1e9278;
        case 0x1e927cu: goto label_1e927c;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e9284u: goto label_1e9284;
        case 0x1e9288u: goto label_1e9288;
        case 0x1e928cu: goto label_1e928c;
        case 0x1e9290u: goto label_1e9290;
        case 0x1e9294u: goto label_1e9294;
        default: break;
    }

    ctx->pc = 0x1e9250u;

label_1e9250:
    // 0x1e9250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9254:
    // 0x1e9254: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e9254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e9258:
    // 0x1e9258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e925c:
    // 0x1e925c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e925cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9260:
    // 0x1e9260: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x1e9260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1e9264:
    // 0x1e9264: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1e9264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1e9268:
    // 0x1e9268: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e9268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e926c:
    // 0x1e926c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e9270:
    // 0x1e9270: 0x40f809  jalr        $v0
label_1e9274:
    if (ctx->pc == 0x1E9274u) {
        ctx->pc = 0x1E9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9270u;
        // 0x1e9274: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9278u;
        goto label_1e9278;
    }
    ctx->pc = 0x1E9270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9278u);
        ctx->pc = 0x1E9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9270u;
        // 0x1e9274: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9270u, 0x1E9278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9278u;
label_1e9278:
    // 0x1e9278: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e927c:
    if (ctx->pc == 0x1E927Cu) {
        ctx->pc = 0x1E927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9278u;
        // 0x1e927c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9280u;
        goto label_1e9280;
    }
    ctx->pc = 0x1E9278u;
    {
        const bool branch_taken_0x1e9278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9278) {
            ctx->pc = 0x1E927Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9278u;
            // 0x1e927c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E928Cu;
            goto label_1e928c;
        }
    }
    ctx->pc = 0x1E9280u;
label_1e9280:
    // 0x1e9280: 0xc0734a2  jal         func_1CD288
label_1e9284:
    if (ctx->pc == 0x1E9284u) {
        ctx->pc = 0x1E9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9280u;
        // 0x1e9284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9288u;
        goto label_1e9288;
    }
    ctx->pc = 0x1E9280u;
    SET_GPR_U32(ctx, 31, 0x1E9288u);
    ctx->pc = 0x1E9284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9280u;
    // 0x1e9284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1E9280u, 0x1E9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9288u;
label_1e9288:
    // 0x1e9288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e9288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e928c:
    // 0x1e928c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e928cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9290:
    // 0x1e9290: 0x3e00008  jr          $ra
label_1e9294:
    if (ctx->pc == 0x1E9294u) {
        ctx->pc = 0x1E9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9290u;
        // 0x1e9294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9298u;
        goto label_fallthrough_0x1e9290;
    }
    ctx->pc = 0x1E9290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9290u;
        // 0x1e9294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9290:
    ctx->pc = 0x1E9298u;
}
