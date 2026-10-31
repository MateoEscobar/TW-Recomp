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

// Function: sub_0032E670
// Address: 0x32e670 - 0x32e6d0
void sub_0032E670_0x32e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E670_0x32e670");
#endif

    switch (ctx->pc) {
        case 0x32e694u: goto label_32e694;
        case 0x32e6a4u: goto label_32e6a4;
        case 0x32e6b4u: goto label_32e6b4;
        default: break;
    }

    ctx->pc = 0x32e670u;

    // 0x32e670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32e674: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32e678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e67c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32e67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e680: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32e680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32e684: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32e688: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x32e688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32e68c: 0xc0cbd4e  jal         func_32F538
    ctx->pc = 0x32E68Cu;
    SET_GPR_U32(ctx, 31, 0x32E694u);
    ctx->pc = 0x32E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E68Cu;
    // 0x32e690: 0x8612001e  lh          $s2, 0x1E($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F538u, 0x32E68Cu, 0x32E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E694u;
label_32e694:
    // 0x32e694: 0x8605001e  lh          $a1, 0x1E($s0)
    ctx->pc = 0x32e694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x32e698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e69c: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x32E69Cu;
    SET_GPR_U32(ctx, 31, 0x32E6A4u);
    ctx->pc = 0x32E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E69Cu;
    // 0x32e6a0: 0xb22823  subu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x32E69Cu, 0x32E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6A4u;
label_32e6a4:
    // 0x32e6a4: 0x8605001e  lh          $a1, 0x1E($s0)
    ctx->pc = 0x32e6a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x32e6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6ac: 0xc0cb436  jal         func_32D0D8
    ctx->pc = 0x32E6ACu;
    SET_GPR_U32(ctx, 31, 0x32E6B4u);
    ctx->pc = 0x32E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6ACu;
    // 0x32e6b0: 0xb22823  subu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0D8u, 0x32E6ACu, 0x32E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6B4u;
label_32e6b4:
    // 0x32e6b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32e6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e6b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32e6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e6bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32e6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6C4u;
        // 0x32e6c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E6CCu;
    // 0x32e6cc: 0x0  nop
    ctx->pc = 0x32e6ccu;
    // NOP
    ctx->pc = 0x32e6d0u;
}
