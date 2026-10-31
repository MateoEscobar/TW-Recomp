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

// Function: sub_00110210
// Address: 0x110210 - 0x110258
void sub_00110210_0x110210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110210_0x110210");
#endif

    switch (ctx->pc) {
        case 0x110234u: goto label_110234;
        case 0x110244u: goto label_110244;
        default: break;
    }

    ctx->pc = 0x110210u;

    // 0x110210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110214: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x110214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x110218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11021c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x110220: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x110220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x110224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110228: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x110228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11022c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x11022Cu;
    SET_GPR_U32(ctx, 31, 0x110234u);
    ctx->pc = 0x110230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11022Cu;
    // 0x110230: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x11022Cu, 0x110234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110234u;
label_110234:
    // 0x110234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110238: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x110238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11023c: 0xc04406e  jal         func_1101B8
    ctx->pc = 0x11023Cu;
    SET_GPR_U32(ctx, 31, 0x110244u);
    ctx->pc = 0x110240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11023Cu;
    // 0x110240: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1101B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1101B8u, 0x11023Cu, 0x110244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110244u;
label_110244:
    // 0x110244: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x110244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x110248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11024c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11024cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110250: 0x3e00008  jr          $ra
    ctx->pc = 0x110250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110250u;
        // 0x110254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110258u;
}
