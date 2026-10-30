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

// Function: sub_00113A08
// Address: 0x113a08 - 0x113a58
void sub_00113A08_0x113a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113A08_0x113a08");
#endif

    switch (ctx->pc) {
        case 0x113a4cu: goto label_113a4c;
        default: break;
    }

    ctx->pc = 0x113a08u;

    // 0x113a08: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x113a08u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113a14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x113a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a18: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x113a18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a1c: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x113a1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a20: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x113a20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a24: 0x95600  sll         $t2, $t1, 24
    ctx->pc = 0x113a24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x113a28: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x113a2c: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x113a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113a34: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x113a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a38: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x113a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a3c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x113a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a40: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x113a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a44: 0xc04438a  jal         func_110E28
    ctx->pc = 0x113A44u;
    SET_GPR_U32(ctx, 31, 0x113A4Cu);
    ctx->pc = 0x113A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A44u;
    // 0x113a48: 0xa5603  sra         $t2, $t2, 24 (Delay Slot)
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E28u, 0x113A44u, 0x113A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A4Cu;
label_113a4c:
    // 0x113a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a50: 0x3e00008  jr          $ra
    ctx->pc = 0x113A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A50u;
        // 0x113a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A58u;
}
