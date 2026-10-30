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

// Function: sub_00356290
// Address: 0x356290 - 0x356308
void sub_00356290_0x356290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356290_0x356290");
#endif

    switch (ctx->pc) {
        case 0x3562c4u: goto label_3562c4;
        case 0x3562d4u: goto label_3562d4;
        default: break;
    }

    ctx->pc = 0x356290u;

    // 0x356290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x356294: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x356294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x356298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35629c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3562a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3562a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3562a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3562a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3562a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3562ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3562acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3562b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3562b4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3562b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3562b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3562bc: 0xc0d5824  jal         func_356090
    ctx->pc = 0x3562BCu;
    SET_GPR_U32(ctx, 31, 0x3562C4u);
    ctx->pc = 0x3562C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562BCu;
    // 0x3562c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356090u, 0x3562BCu, 0x3562C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562C4u;
label_3562c4:
    // 0x3562c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3562c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3562c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562cc: 0xc0d580a  jal         func_356028
    ctx->pc = 0x3562CCu;
    SET_GPR_U32(ctx, 31, 0x3562D4u);
    ctx->pc = 0x3562D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562CCu;
    // 0x3562d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356028u, 0x3562CCu, 0x3562D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562D4u;
label_3562d4:
    // 0x3562d4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3562d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3562d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3562d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3562dc: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x3562dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x3562e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3562e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3562e4: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x3562e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3562e8: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x3562e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x3562ec: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x3562ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x3562f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3562f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3562f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3562f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3562f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3562f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3562fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3562FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3562FCu;
        // 0x356300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3562FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356304u;
    // 0x356304: 0x0  nop
    ctx->pc = 0x356304u;
    // NOP
    ctx->pc = 0x356308u;
}
