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

// Function: sub_003916A8
// Address: 0x3916a8 - 0x391778
void sub_003916A8_0x3916a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003916A8_0x3916a8");
#endif

    switch (ctx->pc) {
        case 0x391700u: goto label_391700;
        case 0x39170cu: goto label_39170c;
        case 0x391720u: goto label_391720;
        default: break;
    }

    ctx->pc = 0x3916a8u;

    // 0x3916a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3916a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3916ac: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3916acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3916b0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3916b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3916b4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x3916b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x3916b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3916b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3916bc: 0x34424be8  ori         $v0, $v0, 0x4BE8
    ctx->pc = 0x3916bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19432);
    // 0x3916c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3916c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3916c4: 0x34c64be4  ori         $a2, $a2, 0x4BE4
    ctx->pc = 0x3916c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19428);
    // 0x3916c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3916c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3916cc: 0x34634bc4  ori         $v1, $v1, 0x4BC4
    ctx->pc = 0x3916ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19396);
    // 0x3916d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3916d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3916d4: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x3916d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3916d8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3916d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3916dc: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x3916dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3916e0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3916e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3916e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3916e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3916e8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3916e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3916ec: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x3916ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3916f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3916f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3916f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3916f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3916f8: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x3916f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    // 0x3916fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3916fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391700:
    // 0x391700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391704: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x391704u;
    SET_GPR_U32(ctx, 31, 0x39170Cu);
    ctx->pc = 0x391708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391704u;
    // 0x391708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x391704u, 0x39170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39170Cu;
label_39170c:
    // 0x39170c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39170Cu;
    {
        const bool branch_taken_0x39170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39170Cu;
        // 0x391710: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39170c) {
            ctx->pc = 0x391734u;
            goto label_391734;
        }
    }
    ctx->pc = 0x391714u;
    // 0x391714: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x391714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x391718: 0xc0cd526  jal         func_335498
    ctx->pc = 0x391718u;
    SET_GPR_U32(ctx, 31, 0x391720u);
    ctx->pc = 0x39171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391718u;
    // 0x39171c: 0x26c4b8a8  addiu       $a0, $s6, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x391718u, 0x391720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391720u;
label_391720:
    // 0x391720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x391724: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x391724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x391728: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x391728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x39172c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39172Cu;
    {
        const bool branch_taken_0x39172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39172Cu;
        // 0x391730: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39172c) {
            ctx->pc = 0x39174Cu;
            goto label_39174c;
        }
    }
    ctx->pc = 0x391734u;
label_391734:
    // 0x391734: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x391734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x391738: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x391738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x39173c: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x39173cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x391740: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x391740u;
    {
        const bool branch_taken_0x391740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391740u;
        // 0x391744: 0x26730038  addiu       $s3, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391740) {
            ctx->pc = 0x391700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391700;
        }
    }
    ctx->pc = 0x391748u;
    // 0x391748: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x391748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39174c:
    // 0x39174c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x39174cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x391750: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x391750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x391754: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x391754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x391758: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x391758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39175c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x39175cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x391760: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x391760u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391764: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x391764u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39176c: 0x3e00008  jr          $ra
    ctx->pc = 0x39176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39176Cu;
        // 0x391770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391774u;
    // 0x391774: 0x0  nop
    ctx->pc = 0x391774u;
    // NOP
    ctx->pc = 0x391778u;
}
