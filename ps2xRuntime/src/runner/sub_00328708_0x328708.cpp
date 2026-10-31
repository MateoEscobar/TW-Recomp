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

// Function: sub_00328708
// Address: 0x328708 - 0x328770
void sub_00328708_0x328708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328708_0x328708");
#endif

    switch (ctx->pc) {
        case 0x328730u: goto label_328730;
        default: break;
    }

    ctx->pc = 0x328708u;

    // 0x328708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32870c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x328710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x328714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x328718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32871c: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x32871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x328720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328724: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x328724u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x328728: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x328728u;
    SET_GPR_U32(ctx, 31, 0x328730u);
    ctx->pc = 0x32872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328728u;
    // 0x32872c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x328728u, 0x328730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328730u;
label_328730:
    // 0x328730: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x328730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x328734: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x328734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x328738: 0x24a3fff0  addiu       $v1, $a1, -0x10
    ctx->pc = 0x328738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x32873c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x32873cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x328740: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x328740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x328744: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x328744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328748: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x328748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32874c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x32874cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x328750: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x328750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x328754: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x328754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x328758: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x328758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32875c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32875cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328768: 0x3e00008  jr          $ra
    ctx->pc = 0x328768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328768u;
        // 0x32876c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328770u;
}
