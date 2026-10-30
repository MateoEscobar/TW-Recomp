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

// Function: sub_0042C4F0
// Address: 0x42c4f0 - 0x42c548
void sub_0042C4F0_0x42c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C4F0_0x42c4f0");
#endif

    switch (ctx->pc) {
        case 0x42c508u: goto label_42c508;
        case 0x42c538u: goto label_42c538;
        default: break;
    }

    ctx->pc = 0x42c4f0u;

    // 0x42c4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42c4f4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x42c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x42c4f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42c4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c4fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42c500: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C500u;
    SET_GPR_U32(ctx, 31, 0x42C508u);
    ctx->pc = 0x42C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C500u;
    // 0x42c504: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C500u, 0x42C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C508u;
label_42c508:
    // 0x42c508: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x42c508u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c50c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x42c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x42c510: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42c510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x42c514: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x42c514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c518: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x42c518u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x42c51c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x42c51cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x42c520: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x42c520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42c524: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42c524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42c528: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x42c528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x42c52c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x42c52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x42c530: 0xc10b1ec  jal         func_42C7B0
    ctx->pc = 0x42C530u;
    SET_GPR_U32(ctx, 31, 0x42C538u);
    ctx->pc = 0x42C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C530u;
    // 0x42c534: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7B0u, 0x42C530u, 0x42C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C538u;
label_42c538:
    // 0x42c538: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42c538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42c53c: 0x3e00008  jr          $ra
    ctx->pc = 0x42C53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C53Cu;
        // 0x42c540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C544u;
    // 0x42c544: 0x0  nop
    ctx->pc = 0x42c544u;
    // NOP
    ctx->pc = 0x42c548u;
}
