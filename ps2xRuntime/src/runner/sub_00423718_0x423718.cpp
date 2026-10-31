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

// Function: sub_00423718
// Address: 0x423718 - 0x423768
void sub_00423718_0x423718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423718_0x423718");
#endif

    switch (ctx->pc) {
        case 0x42375cu: goto label_42375c;
        default: break;
    }

    ctx->pc = 0x423718u;

    // 0x423718: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x423718u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42371c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x42371cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x423720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423724: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x423724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x423728: 0x30ec00ff  andi        $t4, $a3, 0xFF
    ctx->pc = 0x423728u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x42372c: 0x310d00ff  andi        $t5, $t0, 0xFF
    ctx->pc = 0x42372cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x423730: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x423730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x423734: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x423734u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x423738: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x423738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x42373c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423740: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x423740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x423744: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x423744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423748: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x423748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42374c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x42374cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423750: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x423750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423754: 0xc108f0c  jal         func_423C30
    ctx->pc = 0x423754u;
    SET_GPR_U32(ctx, 31, 0x42375Cu);
    ctx->pc = 0x423758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423754u;
    // 0x423758: 0x1a0482d  daddu       $t1, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423C30u, 0x423754u, 0x42375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42375Cu;
label_42375c:
    // 0x42375c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423760: 0x3e00008  jr          $ra
    ctx->pc = 0x423760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423760u;
        // 0x423764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423768u;
}
