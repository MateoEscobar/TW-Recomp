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

// Function: sub_004EB880
// Address: 0x4eb880 - 0x4eb8f0
void sub_004EB880_0x4eb880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB880_0x4eb880");
#endif

    switch (ctx->pc) {
        case 0x4eb8b4u: goto label_4eb8b4;
        case 0x4eb8c8u: goto label_4eb8c8;
        case 0x4eb8dcu: goto label_4eb8dc;
        default: break;
    }

    ctx->pc = 0x4eb880u;

    // 0x4eb880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eb880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4eb884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eb884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4eb888: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eb888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb88c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4eb88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4eb890: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x4eb890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4eb894: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4eb898: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4eb898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4eb89c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4EB89Cu;
    {
        const bool branch_taken_0x4eb89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB89Cu;
        // 0x4eb8a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb89c) {
            ctx->pc = 0x4EB8D0u;
            goto label_4eb8d0;
        }
    }
    ctx->pc = 0x4EB8A4u;
    // 0x4eb8a4: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x4eb8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4eb8a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eb8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb8ac: 0xc13adde  jal         func_4EB778
    ctx->pc = 0x4EB8ACu;
    SET_GPR_U32(ctx, 31, 0x4EB8B4u);
    ctx->pc = 0x4EB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB8ACu;
    // 0x4eb8b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB778u, 0x4EB8ACu, 0x4EB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB8B4u;
label_4eb8b4:
    // 0x4eb8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb8b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eb8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb8bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eb8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb8c0: 0xc13ae0c  jal         func_4EB830
    ctx->pc = 0x4EB8C0u;
    SET_GPR_U32(ctx, 31, 0x4EB8C8u);
    ctx->pc = 0x4EB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB8C0u;
    // 0x4eb8c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB830u, 0x4EB8C0u, 0x4EB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB8C8u;
label_4eb8c8:
    // 0x4eb8c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4EB8C8u;
    {
        const bool branch_taken_0x4eb8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB8C8u;
        // 0x4eb8cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb8c8) {
            ctx->pc = 0x4EB8E0u;
            goto label_4eb8e0;
        }
    }
    ctx->pc = 0x4EB8D0u;
label_4eb8d0:
    // 0x4eb8d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eb8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb8d4: 0xc13adde  jal         func_4EB778
    ctx->pc = 0x4EB8D4u;
    SET_GPR_U32(ctx, 31, 0x4EB8DCu);
    ctx->pc = 0x4EB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB8D4u;
    // 0x4eb8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB778u, 0x4EB8D4u, 0x4EB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB8DCu;
label_4eb8dc:
    // 0x4eb8dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4eb8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb8e0:
    // 0x4eb8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eb8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB8E8u;
        // 0x4eb8ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB8F0u;
}
