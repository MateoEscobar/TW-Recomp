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

// Function: sub_004B8748
// Address: 0x4b8748 - 0x4b87e0
void sub_004B8748_0x4b8748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8748_0x4b8748");
#endif

    switch (ctx->pc) {
        case 0x4b8768u: goto label_4b8768;
        case 0x4b877cu: goto label_4b877c;
        case 0x4b878cu: goto label_4b878c;
        case 0x4b8798u: goto label_4b8798;
        case 0x4b87a8u: goto label_4b87a8;
        case 0x4b87b8u: goto label_4b87b8;
        default: break;
    }

    ctx->pc = 0x4b8748u;

    // 0x4b8748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b8748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b874c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8750: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b8750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b8754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b8758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b875c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b875cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8760: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B8760u;
    SET_GPR_U32(ctx, 31, 0x4B8768u);
    ctx->pc = 0x4B8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8760u;
    // 0x4b8764: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B8760u, 0x4B8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8768u;
label_4b8768:
    // 0x4b8768: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B8768u;
    {
        const bool branch_taken_0x4b8768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8768u;
        // 0x4b876c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8768) {
            ctx->pc = 0x4B87C0u;
            goto label_4b87c0;
        }
    }
    ctx->pc = 0x4B8770u;
    // 0x4b8770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8774: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B8774u;
    SET_GPR_U32(ctx, 31, 0x4B877Cu);
    ctx->pc = 0x4B8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8774u;
    // 0x4b8778: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B8774u, 0x4B877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B877Cu;
label_4b877c:
    // 0x4b877c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B877Cu;
    {
        const bool branch_taken_0x4b877c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B877Cu;
        // 0x4b8780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b877c) {
            ctx->pc = 0x4B87C0u;
            goto label_4b87c0;
        }
    }
    ctx->pc = 0x4B8784u;
    // 0x4b8784: 0xc12e1f8  jal         func_4B87E0
    ctx->pc = 0x4B8784u;
    SET_GPR_U32(ctx, 31, 0x4B878Cu);
    ctx->pc = 0x4B8788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8784u;
    // 0x4b8788: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B87E0u, 0x4B8784u, 0x4B878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B878Cu;
label_4b878c:
    // 0x4b878c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b878cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8790: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B8790u;
    SET_GPR_U32(ctx, 31, 0x4B8798u);
    ctx->pc = 0x4B8794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8790u;
    // 0x4b8794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B8790u, 0x4B8798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8798u;
label_4b8798:
    // 0x4b8798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8798u;
    {
        const bool branch_taken_0x4b8798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8798u;
        // 0x4b879c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8798) {
            ctx->pc = 0x4B87B0u;
            goto label_4b87b0;
        }
    }
    ctx->pc = 0x4B87A0u;
    // 0x4b87a0: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B87A0u;
    SET_GPR_U32(ctx, 31, 0x4B87A8u);
    ctx->pc = 0x4B87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B87A0u;
    // 0x4b87a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B87A0u, 0x4B87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B87A8u;
label_4b87a8:
    // 0x4b87a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B87A8u;
    {
        const bool branch_taken_0x4b87a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B87A8u;
        // 0x4b87ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b87a8) {
            ctx->pc = 0x4B87C4u;
            goto label_4b87c4;
        }
    }
    ctx->pc = 0x4B87B0u;
label_4b87b0:
    // 0x4b87b0: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B87B0u;
    SET_GPR_U32(ctx, 31, 0x4B87B8u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B87B0u, 0x4B87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B87B8u;
label_4b87b8:
    // 0x4b87b8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4b87bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b87bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b87c0:
    // 0x4b87c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b87c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b87c4:
    // 0x4b87c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b87c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b87c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b87c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b87cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b87ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b87d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b87d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b87d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B87D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B87D4u;
        // 0x4b87d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B87D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B87DCu;
    // 0x4b87dc: 0x0  nop
    ctx->pc = 0x4b87dcu;
    // NOP
    ctx->pc = 0x4b87e0u;
}
