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

// Function: sub_00139E90
// Address: 0x139e90 - 0x139ef8
void sub_00139E90_0x139e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139E90_0x139e90");
#endif

    switch (ctx->pc) {
        case 0x139ec0u: goto label_139ec0;
        case 0x139ed8u: goto label_139ed8;
        default: break;
    }

    ctx->pc = 0x139e90u;

    // 0x139e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x139e94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x139e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x139e98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x139e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x139e9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ea8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x139ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x139eac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x139eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139eb4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x139eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139eb8: 0xc048892  jal         func_122248
    ctx->pc = 0x139EB8u;
    SET_GPR_U32(ctx, 31, 0x139EC0u);
    ctx->pc = 0x139EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EB8u;
    // 0x139ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x139EB8u, 0x139EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EC0u;
label_139ec0:
    // 0x139ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139EC0u;
    {
        const bool branch_taken_0x139ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139EC0u;
        // 0x139ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ec0) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139EC8u;
    // 0x139ec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ecc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x139eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ed0: 0xc04843e  jal         func_1210F8
    ctx->pc = 0x139ED0u;
    SET_GPR_U32(ctx, 31, 0x139ED8u);
    ctx->pc = 0x139ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139ED0u;
    // 0x139ed4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210F8u, 0x139ED0u, 0x139ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139ED8u;
label_139ed8:
    // 0x139ed8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x139ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139edc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x139edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139ee4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x139ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139eec: 0x3e00008  jr          $ra
    ctx->pc = 0x139EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139EECu;
        // 0x139ef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139EF4u;
    // 0x139ef4: 0x0  nop
    ctx->pc = 0x139ef4u;
    // NOP
    ctx->pc = 0x139ef8u;
}
