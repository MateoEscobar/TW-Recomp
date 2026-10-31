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

// Function: sub_0036C620
// Address: 0x36c620 - 0x36c698
void sub_0036C620_0x36c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C620_0x36c620");
#endif

    switch (ctx->pc) {
        case 0x36c648u: goto label_36c648;
        case 0x36c650u: goto label_36c650;
        case 0x36c664u: goto label_36c664;
        case 0x36c66cu: goto label_36c66c;
        case 0x36c678u: goto label_36c678;
        default: break;
    }

    ctx->pc = 0x36c620u;

    // 0x36c620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c628: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36c62c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36c630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c634: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c638: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36c63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c640: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C640u;
    SET_GPR_U32(ctx, 31, 0x36C648u);
    ctx->pc = 0x36C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C640u;
    // 0x36c644: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C640u, 0x36C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C648u;
label_36c648:
    // 0x36c648: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36C648u;
    SET_GPR_U32(ctx, 31, 0x36C650u);
    ctx->pc = 0x36C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C648u;
    // 0x36c64c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36C648u, 0x36C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C650u;
label_36c650:
    // 0x36c650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36c654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c65c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C65Cu;
    SET_GPR_U32(ctx, 31, 0x36C664u);
    ctx->pc = 0x36C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C65Cu;
    // 0x36c660: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C65Cu, 0x36C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C664u;
label_36c664:
    // 0x36c664: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C664u;
    SET_GPR_U32(ctx, 31, 0x36C66Cu);
    ctx->pc = 0x36C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C664u;
    // 0x36c668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C664u, 0x36C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C66Cu;
label_36c66c:
    // 0x36c66c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36c66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c670: 0xc10760c  jal         func_41D830
    ctx->pc = 0x36C670u;
    SET_GPR_U32(ctx, 31, 0x36C678u);
    ctx->pc = 0x36C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C670u;
    // 0x36c674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D830u, 0x36C670u, 0x36C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C678u;
label_36c678:
    // 0x36c678: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36c678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36c680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c684: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36c684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c68c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C68Cu;
        // 0x36c690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C694u;
    // 0x36c694: 0x0  nop
    ctx->pc = 0x36c694u;
    // NOP
    ctx->pc = 0x36c698u;
}
