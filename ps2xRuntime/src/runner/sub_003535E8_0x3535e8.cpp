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

// Function: sub_003535E8
// Address: 0x3535e8 - 0x353698
void sub_003535E8_0x3535e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003535E8_0x3535e8");
#endif

    switch (ctx->pc) {
        case 0x353618u: goto label_353618;
        case 0x35364cu: goto label_35364c;
        case 0x353658u: goto label_353658;
        case 0x353660u: goto label_353660;
        case 0x353674u: goto label_353674;
        default: break;
    }

    ctx->pc = 0x3535e8u;

    // 0x3535e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3535e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3535ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3535ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3535f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3535f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3535f4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3535f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x3535f8: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x3535f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x3535fc: 0x26108a30  addiu       $s0, $s0, -0x75D0
    ctx->pc = 0x3535fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937136));
    // 0x353600: 0x8e245340  lw          $a0, 0x5340($s1)
    ctx->pc = 0x353600u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E5340u));
    // 0x353604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x353604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x353608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35360c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353610: 0xc05528a  jal         func_154A28
    ctx->pc = 0x353610u;
    SET_GPR_U32(ctx, 31, 0x353618u);
    ctx->pc = 0x353614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353610u;
    // 0x353614: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A28u, 0x353610u, 0x353618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353618u;
label_353618:
    // 0x353618: 0x8e245340  lw          $a0, 0x5340($s1)
    ctx->pc = 0x353618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21312)));
    // 0x35361c: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x35361cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x353620: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x353620u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x353624: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x353624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x353628: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x353628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x35362c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x353634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353638: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x353638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35363c: 0x24e735a0  addiu       $a3, $a3, 0x35A0
    ctx->pc = 0x35363cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13728));
    // 0x353640: 0xad62bd18  sw          $v0, -0x42E8($t3)
    ctx->pc = 0x353640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6EBD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EBD18u, _value); } while (0);
    // 0x353644: 0xc055354  jal         func_154D50
    ctx->pc = 0x353644u;
    SET_GPR_U32(ctx, 31, 0x35364Cu);
    ctx->pc = 0x353648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353644u;
    // 0x353648: 0xad43bd1c  sw          $v1, -0x42E4($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294950172), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x353644u, 0x35364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35364Cu;
label_35364c:
    // 0x35364c: 0x8e245340  lw          $a0, 0x5340($s1)
    ctx->pc = 0x35364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21312)));
    // 0x353650: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x353650u;
    SET_GPR_U32(ctx, 31, 0x353658u);
    ctx->pc = 0x353654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353650u;
    // 0x353654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x353650u, 0x353658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353658u;
label_353658:
    // 0x353658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x35365c: 0x2450ba18  addiu       $s0, $v0, -0x45E8
    ctx->pc = 0x35365cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
label_353660:
    // 0x353660: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x353660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x353664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35366c: 0xc0d4768  jal         func_351DA0
    ctx->pc = 0x35366Cu;
    SET_GPR_U32(ctx, 31, 0x353674u);
    ctx->pc = 0x353670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35366Cu;
    // 0x353670: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351DA0u, 0x35366Cu, 0x353674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353674u;
label_353674:
    // 0x353674: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x353674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x353678: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x353678u;
    {
        const bool branch_taken_0x353678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353678u;
        // 0x35367c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353678) {
            ctx->pc = 0x353660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353660;
        }
    }
    ctx->pc = 0x353680u;
    // 0x353680: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x353680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353684: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x353684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353688: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x353688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35368c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35368cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353690: 0x3e00008  jr          $ra
    ctx->pc = 0x353690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353690u;
        // 0x353694: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353698u;
}
