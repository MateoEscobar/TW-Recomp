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

// Function: sub_0040CDA8
// Address: 0x40cda8 - 0x40cdd8
void sub_0040CDA8_0x40cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CDA8_0x40cda8");
#endif

    switch (ctx->pc) {
        case 0x40cdc8u: goto label_40cdc8;
        default: break;
    }

    ctx->pc = 0x40cda8u;

    // 0x40cda8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40cda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cdac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x40cdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40cdb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x40cdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cdb8: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x40cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x40cdbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40cdc0: 0xc062b50  jal         func_18AD40
    ctx->pc = 0x40CDC0u;
    SET_GPR_U32(ctx, 31, 0x40CDC8u);
    ctx->pc = 0x40CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CDC0u;
    // 0x40cdc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD40u, 0x40CDC0u, 0x40CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CDC8u;
label_40cdc8:
    // 0x40cdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40cdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x40CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CDCCu;
        // 0x40cdd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CDD4u;
    // 0x40cdd4: 0x0  nop
    ctx->pc = 0x40cdd4u;
    // NOP
    ctx->pc = 0x40cdd8u;
}
