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

// Function: sub_0046C160
// Address: 0x46c160 - 0x46c1a0
void sub_0046C160_0x46c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C160_0x46c160");
#endif

    switch (ctx->pc) {
        case 0x46c18cu: goto label_46c18c;
        default: break;
    }

    ctx->pc = 0x46c160u;

    // 0x46c160: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x46c160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c164: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46c164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46c168: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x46c168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c16c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x46c16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c170: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x46c170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c174: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x46c178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c17c: 0x2444e6e0  addiu       $a0, $v0, -0x1920
    ctx->pc = 0x46c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x46c180: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x46c180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c184: 0xc11fd86  jal         func_47F618
    ctx->pc = 0x46C184u;
    SET_GPR_U32(ctx, 31, 0x46C18Cu);
    ctx->pc = 0x46C188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C184u;
    // 0x46c188: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F618u, 0x46C184u, 0x46C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C18Cu;
label_46c18c:
    // 0x46c18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c190: 0x3e00008  jr          $ra
    ctx->pc = 0x46C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C190u;
        // 0x46c194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C198u;
    // 0x46c198: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46c198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46c19c: 0x0  nop
    ctx->pc = 0x46c19cu;
    // NOP
    ctx->pc = 0x46c1a0u;
}
