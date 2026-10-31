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

// Function: sub_0035B0D8
// Address: 0x35b0d8 - 0x35b110
void sub_0035B0D8_0x35b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B0D8_0x35b0d8");
#endif

    switch (ctx->pc) {
        case 0x35b0ecu: goto label_35b0ec;
        case 0x35b0f4u: goto label_35b0f4;
        case 0x35b100u: goto label_35b100;
        default: break;
    }

    ctx->pc = 0x35b0d8u;

    // 0x35b0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b0dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b0e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B0E4u;
    SET_GPR_U32(ctx, 31, 0x35B0ECu);
    ctx->pc = 0x35B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B0E4u;
    // 0x35b0e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B0E4u, 0x35B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B0ECu;
label_35b0ec:
    // 0x35b0ec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35B0ECu;
    SET_GPR_U32(ctx, 31, 0x35B0F4u);
    ctx->pc = 0x35B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B0ECu;
    // 0x35b0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35B0ECu, 0x35B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B0F4u;
label_35b0f4:
    // 0x35b0f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35b0f8: 0xc0a6548  jal         func_299520
    ctx->pc = 0x35B0F8u;
    SET_GPR_U32(ctx, 31, 0x35B100u);
    ctx->pc = 0x35B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B0F8u;
    // 0x35b0fc: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299520u, 0x35B0F8u, 0x35B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B100u;
label_35b100:
    // 0x35b100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b108: 0x3e00008  jr          $ra
    ctx->pc = 0x35B108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B108u;
        // 0x35b10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B110u;
}
