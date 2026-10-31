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

// Function: sub_0035AAA0
// Address: 0x35aaa0 - 0x35ab00
void sub_0035AAA0_0x35aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AAA0_0x35aaa0");
#endif

    switch (ctx->pc) {
        case 0x35aac0u: goto label_35aac0;
        case 0x35aac8u: goto label_35aac8;
        case 0x35aadcu: goto label_35aadc;
        case 0x35aae8u: goto label_35aae8;
        default: break;
    }

    ctx->pc = 0x35aaa0u;

    // 0x35aaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35aaa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aaa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35aaac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35aaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35aab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35aab8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AAB8u;
    SET_GPR_U32(ctx, 31, 0x35AAC0u);
    ctx->pc = 0x35AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAB8u;
    // 0x35aabc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AAB8u, 0x35AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAC0u;
label_35aac0:
    // 0x35aac0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AAC0u;
    SET_GPR_U32(ctx, 31, 0x35AAC8u);
    ctx->pc = 0x35AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAC0u;
    // 0x35aac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AAC0u, 0x35AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAC8u;
label_35aac8:
    // 0x35aac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35aac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35aad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aad4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35AAD4u;
    SET_GPR_U32(ctx, 31, 0x35AADCu);
    ctx->pc = 0x35AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAD4u;
    // 0x35aad8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35AAD4u, 0x35AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AADCu;
label_35aadc:
    // 0x35aadc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35aadcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35aae0: 0xc08dd8a  jal         func_237628
    ctx->pc = 0x35AAE0u;
    SET_GPR_U32(ctx, 31, 0x35AAE8u);
    ctx->pc = 0x35AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAE0u;
    // 0x35aae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237628u, 0x35AAE0u, 0x35AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAE8u;
label_35aae8:
    // 0x35aae8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35aae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aaec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35aaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35aaf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x35AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AAF8u;
        // 0x35aafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AB00u;
}
