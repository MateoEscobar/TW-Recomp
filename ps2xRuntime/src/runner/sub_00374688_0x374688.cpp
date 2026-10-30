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

// Function: sub_00374688
// Address: 0x374688 - 0x374718
void sub_00374688_0x374688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374688_0x374688");
#endif

    switch (ctx->pc) {
        case 0x3746acu: goto label_3746ac;
        case 0x3746b4u: goto label_3746b4;
        case 0x3746ccu: goto label_3746cc;
        case 0x3746e4u: goto label_3746e4;
        case 0x3746ecu: goto label_3746ec;
        case 0x3746fcu: goto label_3746fc;
        default: break;
    }

    ctx->pc = 0x374688u;

    // 0x374688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37468c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374690: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x374694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37469c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3746a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3746a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3746a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3746A4u;
    SET_GPR_U32(ctx, 31, 0x3746ACu);
    ctx->pc = 0x3746A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746A4u;
    // 0x3746a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3746A4u, 0x3746ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746ACu;
label_3746ac:
    // 0x3746ac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3746ACu;
    SET_GPR_U32(ctx, 31, 0x3746B4u);
    ctx->pc = 0x3746B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746ACu;
    // 0x3746b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3746ACu, 0x3746B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746B4u;
label_3746b4:
    // 0x3746b4: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3746b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3746b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3746b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746bc: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3746bcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3746c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3746c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3746c4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3746C4u;
    SET_GPR_U32(ctx, 31, 0x3746CCu);
    ctx->pc = 0x3746C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746C4u;
    // 0x3746c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3746C4u, 0x3746CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746CCu;
label_3746cc:
    // 0x3746cc: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x3746ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3746d0: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3746d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3746d4: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3746d4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3746d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3746d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3746DCu;
    SET_GPR_U32(ctx, 31, 0x3746E4u);
    ctx->pc = 0x3746E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746DCu;
    // 0x3746e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3746DCu, 0x3746E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746E4u;
label_3746e4:
    // 0x3746e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3746E4u;
    SET_GPR_U32(ctx, 31, 0x3746ECu);
    ctx->pc = 0x3746E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746E4u;
    // 0x3746e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3746E4u, 0x3746ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746ECu;
label_3746ec:
    // 0x3746ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3746ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3746f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746f4: 0xc05af8c  jal         func_16BE30
    ctx->pc = 0x3746F4u;
    SET_GPR_U32(ctx, 31, 0x3746FCu);
    ctx->pc = 0x3746F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746F4u;
    // 0x3746f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE30u, 0x3746F4u, 0x3746FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746FCu;
label_3746fc:
    // 0x3746fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3746fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374704: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x374704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374708: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x374708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37470c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37470cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374710: 0x3e00008  jr          $ra
    ctx->pc = 0x374710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374710u;
        // 0x374714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374718u;
}
