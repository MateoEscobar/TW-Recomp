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

// Function: sub_00484320
// Address: 0x484320 - 0x484370
void sub_00484320_0x484320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484320_0x484320");
#endif

    switch (ctx->pc) {
        case 0x484358u: goto label_484358;
        default: break;
    }

    ctx->pc = 0x484320u;

    // 0x484320: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x484320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484324: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x484324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x484328: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x484328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48432c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x48432cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484330: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x484330u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484334: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x484334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484338: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x484338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x48433c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x484340: 0x2484ebc0  addiu       $a0, $a0, -0x1440
    ctx->pc = 0x484340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    // 0x484344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x484344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484348: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x484348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48434c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x48434cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484350: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x484350u;
    SET_GPR_U32(ctx, 31, 0x484358u);
    ctx->pc = 0x484354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484350u;
    // 0x484354: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x484350u, 0x484358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484358u;
label_484358:
    // 0x484358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48435c: 0x3e00008  jr          $ra
    ctx->pc = 0x48435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48435Cu;
        // 0x484360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484364u;
    // 0x484364: 0x0  nop
    ctx->pc = 0x484364u;
    // NOP
    // 0x484368: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x484368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48436c: 0x0  nop
    ctx->pc = 0x48436cu;
    // NOP
    ctx->pc = 0x484370u;
}
