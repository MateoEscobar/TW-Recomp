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

// Function: sub_002D6080
// Address: 0x2d6080 - 0x2d6130
void sub_002D6080_0x2d6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6080_0x2d6080");
#endif

    switch (ctx->pc) {
        case 0x2d60c0u: goto label_2d60c0;
        case 0x2d60ecu: goto label_2d60ec;
        case 0x2d6100u: goto label_2d6100;
        case 0x2d610cu: goto label_2d610c;
        default: break;
    }

    ctx->pc = 0x2d6080u;

    // 0x2d6080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6088: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d6088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d608c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d6090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d6094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d6098: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d6098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d609c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d60a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d60a4: 0x16430013  bne         $s2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D60A4u;
    {
        const bool branch_taken_0x2d60a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60A4u;
        // 0x2d60a8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60a4) {
            ctx->pc = 0x2D60F4u;
            goto label_2d60f4;
        }
    }
    ctx->pc = 0x2D60ACu;
    // 0x2d60ac: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d60acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d60b0: 0x26040418  addiu       $a0, $s0, 0x418
    ctx->pc = 0x2d60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1048));
    // 0x2d60b4: 0x24a56420  addiu       $a1, $a1, 0x6420
    ctx->pc = 0x2d60b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25632));
    // 0x2d60b8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D60B8u;
    SET_GPR_U32(ctx, 31, 0x2D60C0u);
    ctx->pc = 0x2D60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60B8u;
    // 0x2d60bc: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D60B8u, 0x2D60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60C0u;
label_2d60c0:
    // 0x2d60c0: 0x92230033  lbu         $v1, 0x33($s1)
    ctx->pc = 0x2d60c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x2d60c4: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D60C4u;
    {
        const bool branch_taken_0x2d60c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d60c4) {
            ctx->pc = 0x2D60C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D60C4u;
            // 0x2d60c8: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D60DCu;
            goto label_2d60dc;
        }
    }
    ctx->pc = 0x2D60CCu;
    // 0x2d60cc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d60d0: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x2d60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x2d60d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D60D4u;
    {
        const bool branch_taken_0x2d60d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60D4u;
        // 0x2d60d8: 0x24a56430  addiu       $a1, $a1, 0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60d4) {
            ctx->pc = 0x2D60E4u;
            goto label_2d60e4;
        }
    }
    ctx->pc = 0x2D60DCu;
label_2d60dc:
    // 0x2d60dc: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x2d60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x2d60e0: 0x24a56388  addiu       $a1, $a1, 0x6388
    ctx->pc = 0x2d60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
label_2d60e4:
    // 0x2d60e4: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D60E4u;
    SET_GPR_U32(ctx, 31, 0x2D60ECu);
    ctx->pc = 0x2D60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60E4u;
    // 0x2d60e8: 0x2406029d  addiu       $a2, $zero, 0x29D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D60E4u, 0x2D60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60ECu;
label_2d60ec:
    // 0x2d60ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D60ECu;
    {
        const bool branch_taken_0x2d60ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60ECu;
        // 0x2d60f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60ec) {
            ctx->pc = 0x2D611Cu;
            goto label_2d611c;
        }
    }
    ctx->pc = 0x2D60F4u;
label_2d60f4:
    // 0x2d60f4: 0x26100418  addiu       $s0, $s0, 0x418
    ctx->pc = 0x2d60f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1048));
    // 0x2d60f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d60f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60fc: 0x0  nop
    ctx->pc = 0x2d60fcu;
    // NOP
label_2d6100:
    // 0x2d6100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6104: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D6104u;
    SET_GPR_U32(ctx, 31, 0x2D610Cu);
    ctx->pc = 0x2D6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6104u;
    // 0x2d6108: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D6104u, 0x2D610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D610Cu;
label_2d610c:
    // 0x2d610c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x2d610cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d6110: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6110u;
    {
        const bool branch_taken_0x2d6110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6110u;
        // 0x2d6114: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6110) {
            ctx->pc = 0x2D6100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6100;
        }
    }
    ctx->pc = 0x2D6118u;
    // 0x2d6118: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d6118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d611c:
    // 0x2d611c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d611cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6120: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d6120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6128: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6128u;
        // 0x2d612c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6130u;
}
