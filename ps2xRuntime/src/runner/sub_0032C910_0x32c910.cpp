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

// Function: sub_0032C910
// Address: 0x32c910 - 0x32c978
void sub_0032C910_0x32c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C910_0x32c910");
#endif

    switch (ctx->pc) {
        case 0x32c944u: goto label_32c944;
        default: break;
    }

    ctx->pc = 0x32c910u;

    // 0x32c910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32c914: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32c918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32c924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c928: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x32c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x32c92c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x32c92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x32c930: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x32C930u;
    {
        const bool branch_taken_0x32c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c930) {
            ctx->pc = 0x32C934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C930u;
            // 0x32c934: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C964u;
            goto label_32c964;
        }
    }
    ctx->pc = 0x32C938u;
    // 0x32c938: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x32c938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32c93c: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32C93Cu;
    SET_GPR_U32(ctx, 31, 0x32C944u);
    ctx->pc = 0x32C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C93Cu;
    // 0x32c940: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32C93Cu, 0x32C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C944u;
label_32c944:
    // 0x32c944: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x32c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x32c948: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x32c948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32c94c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x32c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x32c950: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x32c950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x32c954: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x32c954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32c958: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x32c958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x32c95c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x32c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x32c960: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x32c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_32c964:
    // 0x32c964: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32c964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c970: 0x3e00008  jr          $ra
    ctx->pc = 0x32C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C970u;
        // 0x32c974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C978u;
}
