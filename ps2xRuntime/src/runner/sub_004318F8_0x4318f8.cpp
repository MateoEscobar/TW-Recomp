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

// Function: sub_004318F8
// Address: 0x4318f8 - 0x431988
void sub_004318F8_0x4318f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004318F8_0x4318f8");
#endif

    switch (ctx->pc) {
        case 0x431938u: goto label_431938;
        case 0x43194cu: goto label_43194c;
        case 0x431960u: goto label_431960;
        default: break;
    }

    ctx->pc = 0x4318f8u;

    // 0x4318f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4318f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4318fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x4318fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x431900: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x431900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x431904: 0x24421a98  addiu       $v0, $v0, 0x1A98
    ctx->pc = 0x431904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x431908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x431908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43190c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x431910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x431910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x431914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x431914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431918: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x431918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x43191c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x43191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x431920: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x431920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x431924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431928: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x431928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43192c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x43192cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x431930: 0xc10c5d2  jal         func_431748
    ctx->pc = 0x431930u;
    SET_GPR_U32(ctx, 31, 0x431938u);
    ctx->pc = 0x431934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431930u;
    // 0x431934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431748u, 0x431930u, 0x431938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431938u;
label_431938:
    // 0x431938: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x431938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x43193c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x43193cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431940: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x431940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x431944: 0xc10c5d2  jal         func_431748
    ctx->pc = 0x431944u;
    SET_GPR_U32(ctx, 31, 0x43194Cu);
    ctx->pc = 0x431948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431944u;
    // 0x431948: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431748u, 0x431944u, 0x43194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43194Cu;
label_43194c:
    // 0x43194c: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x43194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x431950: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x431950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431954: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x431954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x431958: 0xc10c5d2  jal         func_431748
    ctx->pc = 0x431958u;
    SET_GPR_U32(ctx, 31, 0x431960u);
    ctx->pc = 0x43195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431958u;
    // 0x43195c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431748u, 0x431958u, 0x431960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431960u;
label_431960:
    // 0x431960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x431960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x431964: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x431964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x431968: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x431968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x43196c: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x43196cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x431970: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x431970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x431978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43197c: 0x3e00008  jr          $ra
    ctx->pc = 0x43197Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43197Cu;
        // 0x431980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43197Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431984u;
    // 0x431984: 0x0  nop
    ctx->pc = 0x431984u;
    // NOP
    ctx->pc = 0x431988u;
}
