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

// Function: sub_00175888
// Address: 0x175888 - 0x1758d0
void sub_00175888_0x175888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175888_0x175888");
#endif

    switch (ctx->pc) {
        case 0x1758a4u: goto label_1758a4;
        default: break;
    }

    ctx->pc = 0x175888u;

    // 0x175888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17588c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17589c: 0xc05d610  jal         func_175840
    ctx->pc = 0x17589Cu;
    SET_GPR_U32(ctx, 31, 0x1758A4u);
    ctx->pc = 0x1758A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17589Cu;
    // 0x1758a0: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x17589Cu, 0x1758A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758A4u;
label_1758a4:
    // 0x1758a4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1758a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1758a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1758acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1758b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1758b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1758b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1758b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1758b8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1758bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1758c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1758c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1758c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1758C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758C4u;
        // 0x1758c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1758C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1758CCu;
    // 0x1758cc: 0x0  nop
    ctx->pc = 0x1758ccu;
    // NOP
    ctx->pc = 0x1758d0u;
}
