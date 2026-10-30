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

// Function: sub_004BF4B8
// Address: 0x4bf4b8 - 0x4bf518
void sub_004BF4B8_0x4bf4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF4B8_0x4bf4b8");
#endif

    switch (ctx->pc) {
        case 0x4bf4f0u: goto label_4bf4f0;
        case 0x4bf500u: goto label_4bf500;
        default: break;
    }

    ctx->pc = 0x4bf4b8u;

    // 0x4bf4b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bf4bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4bf4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4bf4c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4bf4c4: 0x246241f0  addiu       $v0, $v1, 0x41F0
    ctx->pc = 0x4bf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16880));
    // 0x4bf4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bf4cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4bf4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bf4d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf4d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4bf4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bf4dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4bf4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bf4e0: 0xac7041f0  sw          $s0, 0x41F0($v1)
    ctx->pc = 0x4bf4e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7141F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7141F0u, _value); } while (0);
    // 0x4bf4e4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x4bf4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4bf4e8: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4BF4E8u;
    SET_GPR_U32(ctx, 31, 0x4BF4F0u);
    ctx->pc = 0x4BF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF4E8u;
    // 0x4bf4ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4BF4E8u, 0x4BF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF4F0u;
label_4bf4f0:
    // 0x4bf4f0: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x4bf4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4bf4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf4f8: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4BF4F8u;
    SET_GPR_U32(ctx, 31, 0x4BF500u);
    ctx->pc = 0x4BF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF4F8u;
    // 0x4bf4fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4BF4F8u, 0x4BF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF500u;
label_4bf500:
    // 0x4bf500: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf504: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf510: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF510u;
        // 0x4bf514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF518u;
}
