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

// Function: sub_00251718
// Address: 0x251718 - 0x251768
void sub_00251718_0x251718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251718_0x251718");
#endif

    switch (ctx->pc) {
        case 0x25175cu: goto label_25175c;
        default: break;
    }

    ctx->pc = 0x251718u;

    // 0x251718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25171c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x25171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x251720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251724: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x251724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x251728: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x251728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x25172c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x251730: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x251730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x251734: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x251734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251738: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x251738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25173c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x25173cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251740: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x251740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x251744: 0x8c44a21c  lw          $a0, -0x5DE4($v0)
    ctx->pc = 0x251744u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CA21Cu));
    // 0x251748: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x251748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x25174c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x25174cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x251750: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x251750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x251754: 0xc09442a  jal         func_2510A8
    ctx->pc = 0x251754u;
    SET_GPR_U32(ctx, 31, 0x25175Cu);
    ctx->pc = 0x251758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251754u;
    // 0x251758: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2510A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2510A8u, 0x251754u, 0x25175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25175Cu;
label_25175c:
    // 0x25175c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251760: 0x3e00008  jr          $ra
    ctx->pc = 0x251760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251760u;
        // 0x251764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251768u;
}
