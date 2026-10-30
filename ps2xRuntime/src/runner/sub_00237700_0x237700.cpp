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

// Function: sub_00237700
// Address: 0x237700 - 0x237778
void sub_00237700_0x237700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237700_0x237700");
#endif

    switch (ctx->pc) {
        case 0x237720u: goto label_237720;
        case 0x237728u: goto label_237728;
        case 0x237744u: goto label_237744;
        case 0x237754u: goto label_237754;
        case 0x237760u: goto label_237760;
        default: break;
    }

    ctx->pc = 0x237700u;

    // 0x237700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x237704: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x237704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x237708: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23770c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23770cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237710: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x237710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x237714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237718: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237718u;
    SET_GPR_U32(ctx, 31, 0x237720u);
    ctx->pc = 0x23771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237718u;
    // 0x23771c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237718u, 0x237720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237720u;
label_237720:
    // 0x237720: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237720u;
    SET_GPR_U32(ctx, 31, 0x237728u);
    ctx->pc = 0x237724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237720u;
    // 0x237724: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237720u, 0x237728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237728u;
label_237728:
    // 0x237728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23772c: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23772Cu;
    {
        const bool branch_taken_0x23772c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23772c) {
            ctx->pc = 0x237730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23772Cu;
            // 0x237730: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237764u;
            goto label_237764;
        }
    }
    ctx->pc = 0x237734u;
    // 0x237734: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237734u;
    {
        const bool branch_taken_0x237734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x237734) {
            ctx->pc = 0x23774Cu;
            goto label_23774c;
        }
    }
    ctx->pc = 0x23773Cu;
    // 0x23773c: 0xc08bb06  jal         func_22EC18
    ctx->pc = 0x23773Cu;
    SET_GPR_U32(ctx, 31, 0x237744u);
    ctx->pc = 0x237740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23773Cu;
    // 0x237740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EC18u, 0x23773Cu, 0x237744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237744u;
label_237744:
    // 0x237744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237744u;
    {
        const bool branch_taken_0x237744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237744u;
        // 0x237748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237744) {
            ctx->pc = 0x237758u;
            goto label_237758;
        }
    }
    ctx->pc = 0x23774Cu;
label_23774c:
    // 0x23774c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23774Cu;
    SET_GPR_U32(ctx, 31, 0x237754u);
    ctx->pc = 0x237750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23774Cu;
    // 0x237750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF58u, 0x23774Cu, 0x237754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237754u;
label_237754:
    // 0x237754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237758:
    // 0x237758: 0xc089974  jal         func_2265D0
    ctx->pc = 0x237758u;
    SET_GPR_U32(ctx, 31, 0x237760u);
    ctx->pc = 0x23775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237758u;
    // 0x23775c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x237758u, 0x237760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237760u;
label_237760:
    // 0x237760: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x237760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_237764:
    // 0x237764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x237764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23776c: 0x3e00008  jr          $ra
    ctx->pc = 0x23776Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23776Cu;
        // 0x237770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23776Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237774u;
    // 0x237774: 0x0  nop
    ctx->pc = 0x237774u;
    // NOP
    ctx->pc = 0x237778u;
}
