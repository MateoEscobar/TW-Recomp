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

// Function: sub_0029B428
// Address: 0x29b428 - 0x29b470
void sub_0029B428_0x29b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B428_0x29b428");
#endif

    switch (ctx->pc) {
        case 0x29b458u: goto label_29b458;
        default: break;
    }

    ctx->pc = 0x29b428u;

    // 0x29b428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b42c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29b430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b43c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b440: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x29b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29b444: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29b448: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B448u;
    {
        const bool branch_taken_0x29b448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B448u;
        // 0x29b44c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b448) {
            ctx->pc = 0x29B458u;
            goto label_29b458;
        }
    }
    ctx->pc = 0x29B450u;
    // 0x29b450: 0xc0a22b4  jal         func_288AD0
    ctx->pc = 0x29B450u;
    SET_GPR_U32(ctx, 31, 0x29B458u);
    ctx->pc = 0x288AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AD0u, 0x29B450u, 0x29B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B458u;
label_29b458:
    // 0x29b458: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x29b458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x29b45c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29b45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b468: 0x3e00008  jr          $ra
    ctx->pc = 0x29B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B468u;
        // 0x29b46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B470u;
}
