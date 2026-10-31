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

// Function: sub_0029FBA8
// Address: 0x29fba8 - 0x29fc18
void sub_0029FBA8_0x29fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FBA8_0x29fba8");
#endif

    switch (ctx->pc) {
        case 0x29fbccu: goto label_29fbcc;
        case 0x29fbd4u: goto label_29fbd4;
        case 0x29fbdcu: goto label_29fbdc;
        case 0x29fbf4u: goto label_29fbf4;
        case 0x29fc00u: goto label_29fc00;
        default: break;
    }

    ctx->pc = 0x29fba8u;

    // 0x29fba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29fbac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29fbb0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29fbb4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x29fbb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29fbb8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29fbbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29fbc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29fbc4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29FBC4u;
    SET_GPR_U32(ctx, 31, 0x29FBCCu);
    ctx->pc = 0x29FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBC4u;
    // 0x29fbc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29FBC4u, 0x29FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBCCu;
label_29fbcc:
    // 0x29fbcc: 0xc087502  jal         func_21D408
    ctx->pc = 0x29FBCCu;
    SET_GPR_U32(ctx, 31, 0x29FBD4u);
    ctx->pc = 0x29FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBCCu;
    // 0x29fbd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29FBCCu, 0x29FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBD4u;
label_29fbd4:
    // 0x29fbd4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x29FBD4u;
    SET_GPR_U32(ctx, 31, 0x29FBDCu);
    ctx->pc = 0x29FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBD4u;
    // 0x29fbd8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x29FBD4u, 0x29FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBDCu;
label_29fbdc:
    // 0x29fbdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29fbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbe0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FBE0u;
    {
        const bool branch_taken_0x29fbe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBE0u;
        // 0x29fbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbe0) {
            ctx->pc = 0x29FBF4u;
            goto label_29fbf4;
        }
    }
    ctx->pc = 0x29FBE8u;
    // 0x29fbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbec: 0xc0a7f06  jal         func_29FC18
    ctx->pc = 0x29FBECu;
    SET_GPR_U32(ctx, 31, 0x29FBF4u);
    ctx->pc = 0x29FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBECu;
    // 0x29fbf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FC18u, 0x29FBECu, 0x29FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBF4u;
label_29fbf4:
    // 0x29fbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbf8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x29FBF8u;
    SET_GPR_U32(ctx, 31, 0x29FC00u);
    ctx->pc = 0x29FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBF8u;
    // 0x29fbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x29FBF8u, 0x29FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC00u;
label_29fc00:
    // 0x29fc00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29fc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fc04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29fc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fc08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29fc08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fc0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29fc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fc10: 0x3e00008  jr          $ra
    ctx->pc = 0x29FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC10u;
        // 0x29fc14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FC18u;
}
