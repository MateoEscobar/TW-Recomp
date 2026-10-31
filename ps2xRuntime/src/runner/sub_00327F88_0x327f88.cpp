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

// Function: sub_00327F88
// Address: 0x327f88 - 0x328008
void sub_00327F88_0x327f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327F88_0x327f88");
#endif

    switch (ctx->pc) {
        case 0x327fa8u: goto label_327fa8;
        case 0x327fb4u: goto label_327fb4;
        case 0x327fd4u: goto label_327fd4;
        default: break;
    }

    ctx->pc = 0x327f88u;

    // 0x327f88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x327f8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x327f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x327f90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x327f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x327f94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x327f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327fa0: 0xc0c9eae  jal         func_327AB8
    ctx->pc = 0x327FA0u;
    SET_GPR_U32(ctx, 31, 0x327FA8u);
    ctx->pc = 0x327FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FA0u;
    // 0x327fa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327AB8u, 0x327FA0u, 0x327FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FA8u;
label_327fa8:
    // 0x327fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fac: 0xc0c9fb8  jal         func_327EE0
    ctx->pc = 0x327FACu;
    SET_GPR_U32(ctx, 31, 0x327FB4u);
    ctx->pc = 0x327FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FACu;
    // 0x327fb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327EE0u, 0x327FACu, 0x327FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FB4u;
label_327fb4:
    // 0x327fb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327FB4u;
    {
        const bool branch_taken_0x327fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FB4u;
        // 0x327fb8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fb4) {
            ctx->pc = 0x327FC8u;
            goto label_327fc8;
        }
    }
    ctx->pc = 0x327FBCu;
    // 0x327fbc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x327fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x327fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x327FC0u;
    {
        const bool branch_taken_0x327fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FC0u;
        // 0x327fc4: 0x24425150  addiu       $v0, $v0, 0x5150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fc0) {
            ctx->pc = 0x327FF0u;
            goto label_327ff0;
        }
    }
    ctx->pc = 0x327FC8u;
label_327fc8:
    // 0x327fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fcc: 0xc0c9f9a  jal         func_327E68
    ctx->pc = 0x327FCCu;
    SET_GPR_U32(ctx, 31, 0x327FD4u);
    ctx->pc = 0x327FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FCCu;
    // 0x327fd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327E68u, 0x327FCCu, 0x327FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FD4u;
label_327fd4:
    // 0x327fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327FD4u;
    {
        const bool branch_taken_0x327fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FD4u;
        // 0x327fd8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fd4) {
            ctx->pc = 0x327FE8u;
            goto label_327fe8;
        }
    }
    ctx->pc = 0x327FDCu;
    // 0x327fdc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x327fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x327fe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327FE0u;
    {
        const bool branch_taken_0x327fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FE0u;
        // 0x327fe4: 0x24425158  addiu       $v0, $v0, 0x5158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fe0) {
            ctx->pc = 0x327FF0u;
            goto label_327ff0;
        }
    }
    ctx->pc = 0x327FE8u;
label_327fe8:
    // 0x327fe8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x327fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x327fec: 0x24425168  addiu       $v0, $v0, 0x5168
    ctx->pc = 0x327fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20840));
label_327ff0:
    // 0x327ff0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x327ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x327ff4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x327ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327ff8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x327ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328000: 0x3e00008  jr          $ra
    ctx->pc = 0x328000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328000u;
        // 0x328004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328008u;
}
