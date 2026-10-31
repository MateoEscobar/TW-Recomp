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

// Function: sub_0037A5C8
// Address: 0x37a5c8 - 0x37a600
void sub_0037A5C8_0x37a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A5C8_0x37a5c8");
#endif

    switch (ctx->pc) {
        case 0x37a5dcu: goto label_37a5dc;
        case 0x37a5e4u: goto label_37a5e4;
        case 0x37a5f0u: goto label_37a5f0;
        default: break;
    }

    ctx->pc = 0x37a5c8u;

    // 0x37a5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37a5cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a5d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A5D4u;
    SET_GPR_U32(ctx, 31, 0x37A5DCu);
    ctx->pc = 0x37A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A5D4u;
    // 0x37a5d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A5D4u, 0x37A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5DCu;
label_37a5dc:
    // 0x37a5dc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A5DCu;
    SET_GPR_U32(ctx, 31, 0x37A5E4u);
    ctx->pc = 0x37A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A5DCu;
    // 0x37a5e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A5DCu, 0x37A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5E4u;
label_37a5e4:
    // 0x37a5e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a5e8: 0xc106db2  jal         func_41B6C8
    ctx->pc = 0x37A5E8u;
    SET_GPR_U32(ctx, 31, 0x37A5F0u);
    ctx->pc = 0x37A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A5E8u;
    // 0x37a5ec: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B6C8u, 0x37A5E8u, 0x37A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5F0u;
label_37a5f0:
    // 0x37a5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5F8u;
        // 0x37a5fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A600u;
}
