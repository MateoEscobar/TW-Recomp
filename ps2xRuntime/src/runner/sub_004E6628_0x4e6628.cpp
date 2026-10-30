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

// Function: sub_004E6628
// Address: 0x4e6628 - 0x4e6698
void sub_004E6628_0x4e6628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6628_0x4e6628");
#endif

    switch (ctx->pc) {
        case 0x4e665cu: goto label_4e665c;
        case 0x4e6670u: goto label_4e6670;
        case 0x4e6684u: goto label_4e6684;
        default: break;
    }

    ctx->pc = 0x4e6628u;

    // 0x4e6628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e6628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e662c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e6630: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e6630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e6634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e6638: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x4e6638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4e663c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e663cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e6640: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4e6640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4e6644: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E6644u;
    {
        const bool branch_taken_0x4e6644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6644u;
        // 0x4e6648: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6644) {
            ctx->pc = 0x4E6678u;
            goto label_4e6678;
        }
    }
    ctx->pc = 0x4E664Cu;
    // 0x4e664c: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x4e664cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4e6650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e6650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6654: 0xc139934  jal         func_4E64D0
    ctx->pc = 0x4E6654u;
    SET_GPR_U32(ctx, 31, 0x4E665Cu);
    ctx->pc = 0x4E6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6654u;
    // 0x4e6658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E64D0u, 0x4E6654u, 0x4E665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E665Cu;
label_4e665c:
    // 0x4e665c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e6660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e6664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6668: 0xc139976  jal         func_4E65D8
    ctx->pc = 0x4E6668u;
    SET_GPR_U32(ctx, 31, 0x4E6670u);
    ctx->pc = 0x4E666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6668u;
    // 0x4e666c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E65D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E65D8u, 0x4E6668u, 0x4E6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6670u;
label_4e6670:
    // 0x4e6670: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E6670u;
    {
        const bool branch_taken_0x4e6670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6670u;
        // 0x4e6674: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6670) {
            ctx->pc = 0x4E6688u;
            goto label_4e6688;
        }
    }
    ctx->pc = 0x4E6678u;
label_4e6678:
    // 0x4e6678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e6678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e667c: 0xc139934  jal         func_4E64D0
    ctx->pc = 0x4E667Cu;
    SET_GPR_U32(ctx, 31, 0x4E6684u);
    ctx->pc = 0x4E6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E667Cu;
    // 0x4e6680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E64D0u, 0x4E667Cu, 0x4E6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6684u;
label_4e6684:
    // 0x4e6684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e6684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6688:
    // 0x4e6688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e6688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e668c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6690: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6690u;
        // 0x4e6694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6698u;
}
