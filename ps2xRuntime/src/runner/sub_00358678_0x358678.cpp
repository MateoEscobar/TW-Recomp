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

// Function: sub_00358678
// Address: 0x358678 - 0x3586f0
void sub_00358678_0x358678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358678_0x358678");
#endif

    switch (ctx->pc) {
        case 0x3586a0u: goto label_3586a0;
        case 0x3586a8u: goto label_3586a8;
        case 0x3586bcu: goto label_3586bc;
        case 0x3586c4u: goto label_3586c4;
        case 0x3586d0u: goto label_3586d0;
        default: break;
    }

    ctx->pc = 0x358678u;

    // 0x358678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x358678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35867c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358680: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x358680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x358684: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x358684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x358688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35868c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35868cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358690: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x358690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x358694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358698: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358698u;
    SET_GPR_U32(ctx, 31, 0x3586A0u);
    ctx->pc = 0x35869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358698u;
    // 0x35869c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358698u, 0x3586A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586A0u;
label_3586a0:
    // 0x3586a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3586A0u;
    SET_GPR_U32(ctx, 31, 0x3586A8u);
    ctx->pc = 0x3586A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586A0u;
    // 0x3586a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3586A0u, 0x3586A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586A8u;
label_3586a8:
    // 0x3586a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3586a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3586acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3586b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3586B4u;
    SET_GPR_U32(ctx, 31, 0x3586BCu);
    ctx->pc = 0x3586B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586B4u;
    // 0x3586b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3586B4u, 0x3586BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586BCu;
label_3586bc:
    // 0x3586bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3586BCu;
    SET_GPR_U32(ctx, 31, 0x3586C4u);
    ctx->pc = 0x3586C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586BCu;
    // 0x3586c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3586BCu, 0x3586C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586C4u;
label_3586c4:
    // 0x3586c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3586c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586c8: 0xc08cfd8  jal         func_233F60
    ctx->pc = 0x3586C8u;
    SET_GPR_U32(ctx, 31, 0x3586D0u);
    ctx->pc = 0x3586CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586C8u;
    // 0x3586cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233F60u, 0x3586C8u, 0x3586D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586D0u;
label_3586d0:
    // 0x3586d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3586d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3586d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3586d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3586d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3586dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3586dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3586e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3586e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3586e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3586E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3586E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586E4u;
        // 0x3586e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3586E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3586ECu;
    // 0x3586ec: 0x0  nop
    ctx->pc = 0x3586ecu;
    // NOP
    ctx->pc = 0x3586f0u;
}
