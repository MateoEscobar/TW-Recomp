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

// Function: sub_00114028
// Address: 0x114028 - 0x114060
void sub_00114028_0x114028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114028_0x114028");
#endif

    switch (ctx->pc) {
        case 0x114050u: goto label_114050;
        default: break;
    }

    ctx->pc = 0x114028u;

    // 0x114028: 0x44600  sll         $t0, $a0, 24
    ctx->pc = 0x114028u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x11402c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x114030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114034: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x114034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114038: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x114038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11403c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x11403cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x114040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114044: 0x82e03  sra         $a1, $t0, 24
    ctx->pc = 0x114044u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 24));
    // 0x114048: 0xc044432  jal         func_1110C8
    ctx->pc = 0x114048u;
    SET_GPR_U32(ctx, 31, 0x114050u);
    ctx->pc = 0x11404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114048u;
    // 0x11404c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110C8u, 0x114048u, 0x114050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114050u;
label_114050:
    // 0x114050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114054: 0x3e00008  jr          $ra
    ctx->pc = 0x114054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114054u;
        // 0x114058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11405Cu;
    // 0x11405c: 0x0  nop
    ctx->pc = 0x11405cu;
    // NOP
    ctx->pc = 0x114060u;
}
