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

// Function: sub_0028FF78
// Address: 0x28ff78 - 0x28fff8
void sub_0028FF78_0x28ff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FF78_0x28ff78");
#endif

    switch (ctx->pc) {
        case 0x28ff90u: goto label_28ff90;
        case 0x28ffb8u: goto label_28ffb8;
        case 0x28ffe4u: goto label_28ffe4;
        default: break;
    }

    ctx->pc = 0x28ff78u;

    // 0x28ff78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ff78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ff7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ff80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ff80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ff88: 0xc087502  jal         func_21D408
    ctx->pc = 0x28FF88u;
    SET_GPR_U32(ctx, 31, 0x28FF90u);
    ctx->pc = 0x28FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF88u;
    // 0x28ff8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28FF88u, 0x28FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF90u;
label_28ff90:
    // 0x28ff90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28ff94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff98: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28FF98u;
    {
        const bool branch_taken_0x28ff98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x28FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF98u;
        // 0x28ff9c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff98) {
            ctx->pc = 0x28FFC0u;
            goto label_28ffc0;
        }
    }
    ctx->pc = 0x28FFA0u;
    // 0x28ffa0: 0x8c8205e8  lw          $v0, 0x5E8($a0)
    ctx->pc = 0x28ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1512)));
    // 0x28ffa4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28ffa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28ffa8: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x28FFA8u;
    {
        const bool branch_taken_0x28ffa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x28FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFA8u;
        // 0x28ffac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffa8) {
            ctx->pc = 0x28FFE8u;
            goto label_28ffe8;
        }
    }
    ctx->pc = 0x28FFB0u;
    // 0x28ffb0: 0xc05a61e  jal         func_169878
    ctx->pc = 0x28FFB0u;
    SET_GPR_U32(ctx, 31, 0x28FFB8u);
    ctx->pc = 0x28FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFB0u;
    // 0x28ffb4: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x28FFB0u, 0x28FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFB8u;
label_28ffb8:
    // 0x28ffb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28FFB8u;
    {
        const bool branch_taken_0x28ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFB8u;
        // 0x28ffbc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffb8) {
            ctx->pc = 0x28FFE8u;
            goto label_28ffe8;
        }
    }
    ctx->pc = 0x28FFC0u;
label_28ffc0:
    // 0x28ffc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ffc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28FFC4u;
    {
        const bool branch_taken_0x28ffc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFC4u;
        // 0x28ffc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffc4) {
            ctx->pc = 0x28FFE8u;
            goto label_28ffe8;
        }
    }
    ctx->pc = 0x28FFCCu;
    // 0x28ffcc: 0x8c8205f0  lw          $v0, 0x5F0($a0)
    ctx->pc = 0x28ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1520)));
    // 0x28ffd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28ffd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28ffd4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FFD4u;
    {
        const bool branch_taken_0x28ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x28FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFD4u;
        // 0x28ffd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffd4) {
            ctx->pc = 0x28FFECu;
            goto label_28ffec;
        }
    }
    ctx->pc = 0x28FFDCu;
    // 0x28ffdc: 0xc05a632  jal         func_1698C8
    ctx->pc = 0x28FFDCu;
    SET_GPR_U32(ctx, 31, 0x28FFE4u);
    ctx->pc = 0x28FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFDCu;
    // 0x28ffe0: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x28FFDCu, 0x28FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFE4u;
label_28ffe4:
    // 0x28ffe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ffe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28ffe8:
    // 0x28ffe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ffe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ffec:
    // 0x28ffec: 0x3e00008  jr          $ra
    ctx->pc = 0x28FFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFECu;
        // 0x28fff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FFF4u;
    // 0x28fff4: 0x0  nop
    ctx->pc = 0x28fff4u;
    // NOP
    ctx->pc = 0x28fff8u;
}
