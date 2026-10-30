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

// Function: sub_001C7890
// Address: 0x1c7890 - 0x1c7928
void sub_001C7890_0x1c7890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7890_0x1c7890");
#endif

    switch (ctx->pc) {
        case 0x1c78b8u: goto label_1c78b8;
        case 0x1c78dcu: goto label_1c78dc;
        case 0x1c7904u: goto label_1c7904;
        default: break;
    }

    ctx->pc = 0x1c7890u;

    // 0x1c7890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c7890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c7894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7898: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c7898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c789c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c78a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c78a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c78a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c78a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c78a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c78acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c78b0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1c78b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1c78b4: 0x0  nop
    ctx->pc = 0x1c78b4u;
    // NOP
label_1c78b8:
    // 0x1c78b8: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x1c78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x1c78bc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1c78bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1c78c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c78c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c78c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C78C4u;
    {
        const bool branch_taken_0x1c78c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c78c4) {
            ctx->pc = 0x1C78F0u;
            goto label_1c78f0;
        }
    }
    ctx->pc = 0x1C78CCu;
    // 0x1c78cc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c78d0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1c78d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1c78d4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1C78D4u;
    SET_GPR_U32(ctx, 31, 0x1C78DCu);
    ctx->pc = 0x1C78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78D4u;
    // 0x1c78d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C78D4u, 0x1C78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78DCu;
label_1c78dc:
    // 0x1c78dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c78dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78e0: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x1c78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x1c78e4: 0x8ca20380  lw          $v0, 0x380($a1)
    ctx->pc = 0x1c78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x1c78e8: 0x1443fff3  bne         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C78E8u;
    {
        const bool branch_taken_0x1c78e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78E8u;
        // 0x1c78ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78e8) {
            ctx->pc = 0x1C78B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78b8;
        }
    }
    ctx->pc = 0x1C78F0u;
label_1c78f0:
    // 0x1c78f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C78F0u;
    {
        const bool branch_taken_0x1c78f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F0u;
        // 0x1c78f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f0) {
            ctx->pc = 0x1C7910u;
            goto label_1c7910;
        }
    }
    ctx->pc = 0x1C78F8u;
    // 0x1c78f8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c78fc: 0xc108a66  jal         func_422998
    ctx->pc = 0x1C78FCu;
    SET_GPR_U32(ctx, 31, 0x1C7904u);
    ctx->pc = 0x1C7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78FCu;
    // 0x1c7900: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422998u, 0x1C78FCu, 0x1C7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7904u;
label_1c7904:
    // 0x1c7904: 0xae22036c  sw          $v0, 0x36C($s1)
    ctx->pc = 0x1c7904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 876), GPR_U32(ctx, 2));
    // 0x1c7908: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x1c7908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
    // 0x1c790c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7910:
    // 0x1c7910: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7914: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c7914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c791c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C791Cu;
        // 0x1c7920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7924u;
    // 0x1c7924: 0x0  nop
    ctx->pc = 0x1c7924u;
    // NOP
    ctx->pc = 0x1c7928u;
}
