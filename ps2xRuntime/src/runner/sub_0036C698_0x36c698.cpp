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

// Function: sub_0036C698
// Address: 0x36c698 - 0x36c710
void sub_0036C698_0x36c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C698_0x36c698");
#endif

    switch (ctx->pc) {
        case 0x36c6c0u: goto label_36c6c0;
        case 0x36c6c8u: goto label_36c6c8;
        case 0x36c6dcu: goto label_36c6dc;
        case 0x36c6e4u: goto label_36c6e4;
        case 0x36c6f0u: goto label_36c6f0;
        default: break;
    }

    ctx->pc = 0x36c698u;

    // 0x36c698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c69c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c6a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36c6a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36c6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36c6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36c6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c6b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C6B8u;
    SET_GPR_U32(ctx, 31, 0x36C6C0u);
    ctx->pc = 0x36C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6B8u;
    // 0x36c6bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C6B8u, 0x36C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6C0u;
label_36c6c0:
    // 0x36c6c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36C6C0u;
    SET_GPR_U32(ctx, 31, 0x36C6C8u);
    ctx->pc = 0x36C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6C0u;
    // 0x36c6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36C6C0u, 0x36C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6C8u;
label_36c6c8:
    // 0x36c6c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36c6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C6D4u;
    SET_GPR_U32(ctx, 31, 0x36C6DCu);
    ctx->pc = 0x36C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6D4u;
    // 0x36c6d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C6D4u, 0x36C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6DCu;
label_36c6dc:
    // 0x36c6dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C6DCu;
    SET_GPR_U32(ctx, 31, 0x36C6E4u);
    ctx->pc = 0x36C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6DCu;
    // 0x36c6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C6DCu, 0x36C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6E4u;
label_36c6e4:
    // 0x36c6e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36c6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c6e8: 0xc107618  jal         func_41D860
    ctx->pc = 0x36C6E8u;
    SET_GPR_U32(ctx, 31, 0x36C6F0u);
    ctx->pc = 0x36C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6E8u;
    // 0x36c6ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D860u, 0x36C6E8u, 0x36C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6F0u;
label_36c6f0:
    // 0x36c6f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36c6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36c6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c6fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36c6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c704: 0x3e00008  jr          $ra
    ctx->pc = 0x36C704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C704u;
        // 0x36c708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C70Cu;
    // 0x36c70c: 0x0  nop
    ctx->pc = 0x36c70cu;
    // NOP
    ctx->pc = 0x36c710u;
}
