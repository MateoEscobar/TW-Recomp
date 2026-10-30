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

// Function: sub_0032C628
// Address: 0x32c628 - 0x32c6b0
void sub_0032C628_0x32c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C628_0x32c628");
#endif

    switch (ctx->pc) {
        case 0x32c648u: goto label_32c648;
        case 0x32c65cu: goto label_32c65c;
        case 0x32c670u: goto label_32c670;
        case 0x32c690u: goto label_32c690;
        case 0x32c6a0u: goto label_32c6a0;
        default: break;
    }

    ctx->pc = 0x32c628u;

    // 0x32c628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c62c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32c630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c634: 0x24a559e8  addiu       $a1, $a1, 0x59E8
    ctx->pc = 0x32c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23016));
    // 0x32c638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c640: 0xc0c920a  jal         func_324828
    ctx->pc = 0x32C640u;
    SET_GPR_U32(ctx, 31, 0x32C648u);
    ctx->pc = 0x32C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C640u;
    // 0x32c644: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324828u, 0x32C640u, 0x32C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C648u;
label_32c648:
    // 0x32c648: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32c648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32c64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c654: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x32C654u;
    SET_GPR_U32(ctx, 31, 0x32C65Cu);
    ctx->pc = 0x32C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C654u;
    // 0x32c658: 0x24a5c048  addiu       $a1, $a1, -0x3FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x32C654u, 0x32C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C65Cu;
label_32c65c:
    // 0x32c65c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32c65cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32c660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c664: 0x24c65918  addiu       $a2, $a2, 0x5918
    ctx->pc = 0x32c664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22808));
    // 0x32c668: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x32C668u;
    SET_GPR_U32(ctx, 31, 0x32C670u);
    ctx->pc = 0x32C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C668u;
    // 0x32c66c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x32C668u, 0x32C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C670u;
label_32c670:
    // 0x32c670: 0x34058012  ori         $a1, $zero, 0x8012
    ctx->pc = 0x32c670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32786);
    // 0x32c674: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x32c674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x32c678: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x32c678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x32c67c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x32c67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x32c680: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x32c680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x32c684: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x32c684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x32c688: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C688u;
    SET_GPR_U32(ctx, 31, 0x32C690u);
    ctx->pc = 0x32C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C688u;
    // 0x32c68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C688u, 0x32C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C690u;
label_32c690:
    // 0x32c690: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32c690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32c694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c698: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x32C698u;
    SET_GPR_U32(ctx, 31, 0x32C6A0u);
    ctx->pc = 0x32C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C698u;
    // 0x32c69c: 0x24a55920  addiu       $a1, $a1, 0x5920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x32C698u, 0x32C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6A0u;
label_32c6a0:
    // 0x32c6a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6A8u;
        // 0x32c6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C6B0u;
}
