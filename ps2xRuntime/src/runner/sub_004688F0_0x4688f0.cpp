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

// Function: sub_004688F0
// Address: 0x4688f0 - 0x468960
void sub_004688F0_0x4688f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004688F0_0x4688f0");
#endif

    switch (ctx->pc) {
        case 0x468914u: goto label_468914;
        case 0x46893cu: goto label_46893c;
        default: break;
    }

    ctx->pc = 0x4688f0u;

    // 0x4688f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4688f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4688f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4688f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4688f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4688f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4688fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4688fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x468900: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x468900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468908: 0x278588a8  addiu       $a1, $gp, -0x7758
    ctx->pc = 0x468908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936744));
    // 0x46890c: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x46890Cu;
    SET_GPR_U32(ctx, 31, 0x468914u);
    ctx->pc = 0x468910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46890Cu;
    // 0x468910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46890Cu, 0x468914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468914u;
label_468914:
    // 0x468914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x468914u;
    {
        const bool branch_taken_0x468914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468914u;
        // 0x468918: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468914) {
            ctx->pc = 0x468924u;
            goto label_468924;
        }
    }
    ctx->pc = 0x46891Cu;
    // 0x46891c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x46891Cu;
    {
        const bool branch_taken_0x46891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46891Cu;
        // 0x468920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46891c) {
            ctx->pc = 0x46894Cu;
            goto label_46894c;
        }
    }
    ctx->pc = 0x468924u;
label_468924:
    // 0x468924: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x468924u;
    {
        const bool branch_taken_0x468924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x468924) {
            ctx->pc = 0x468928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468924u;
            // 0x468928: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46894Cu;
            goto label_46894c;
        }
    }
    ctx->pc = 0x46892Cu;
    // 0x46892c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468930: 0x278588ac  addiu       $a1, $gp, -0x7754
    ctx->pc = 0x468930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936748));
    // 0x468934: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x468934u;
    SET_GPR_U32(ctx, 31, 0x46893Cu);
    ctx->pc = 0x468938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468934u;
    // 0x468938: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x468934u, 0x46893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46893Cu;
label_46893c:
    // 0x46893c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x46893cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468940: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x468940u;
    {
        const bool branch_taken_0x468940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x468944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468940u;
        // 0x468944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468940) {
            ctx->pc = 0x46894Cu;
            goto label_46894c;
        }
    }
    ctx->pc = 0x468948u;
    // 0x468948: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x468948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46894c:
    // 0x46894c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46894cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x468950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468958: 0x3e00008  jr          $ra
    ctx->pc = 0x468958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468958u;
        // 0x46895c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468960u;
}
