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

// Function: sub_004B7C20
// Address: 0x4b7c20 - 0x4b7c98
void sub_004B7C20_0x4b7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7C20_0x4b7c20");
#endif

    switch (ctx->pc) {
        case 0x4b7c40u: goto label_4b7c40;
        case 0x4b7c4cu: goto label_4b7c4c;
        case 0x4b7c6cu: goto label_4b7c6c;
        case 0x4b7c74u: goto label_4b7c74;
        case 0x4b7c7cu: goto label_4b7c7c;
        case 0x4b7c90u: goto label_4b7c90;
        default: break;
    }

    ctx->pc = 0x4b7c20u;

    // 0x4b7c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b7c24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b7c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b7c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b7c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b7c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b7c38: 0xc136274  jal         func_4D89D0
    ctx->pc = 0x4B7C38u;
    SET_GPR_U32(ctx, 31, 0x4B7C40u);
    ctx->pc = 0x4B7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7C38u;
    // 0x4b7c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D89D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89D0u, 0x4B7C38u, 0x4B7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7C40u;
label_4b7c40:
    // 0x4b7c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b7c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c44: 0xc12ccba  jal         func_4B32E8
    ctx->pc = 0x4B7C44u;
    SET_GPR_U32(ctx, 31, 0x4B7C4Cu);
    ctx->pc = 0x4B7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7C44u;
    // 0x4b7c48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B32E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B32E8u, 0x4B7C44u, 0x4B7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7C4Cu;
label_4b7c4c:
    // 0x4b7c4c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b7c50: 0x24630e08  addiu       $v1, $v1, 0xE08
    ctx->pc = 0x4b7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3592));
    // 0x4b7c54: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x4b7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x4b7c58: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x4b7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x4b7c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b7c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b7c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c64: 0xc12cd90  jal         func_4B3640
    ctx->pc = 0x4B7C64u;
    SET_GPR_U32(ctx, 31, 0x4B7C6Cu);
    ctx->pc = 0x4B7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7C64u;
    // 0x4b7c68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3640u, 0x4B7C64u, 0x4B7C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7C6Cu;
label_4b7c6c:
    // 0x4b7c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7C6Cu;
    {
        const bool branch_taken_0x4b7c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7C6Cu;
        // 0x4b7c70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7c6c) {
            ctx->pc = 0x4B7C7Cu;
            goto label_4b7c7c;
        }
    }
    ctx->pc = 0x4B7C74u;
label_4b7c74:
    // 0x4b7c74: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4B7C74u;
    SET_GPR_U32(ctx, 31, 0x4B7C7Cu);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4B7C74u, 0x4B7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7C7Cu;
label_4b7c7c:
    // 0x4b7c7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B7C7Cu;
    {
        const bool branch_taken_0x4b7c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7C7Cu;
        // 0x4b7c80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7c7c) {
            ctx->pc = 0x4B7CA0u;
            return;
        }
    }
    ctx->pc = 0x4B7C84u;
    // 0x4b7c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b7c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7c88: 0xc12cd08  jal         func_4B3420
    ctx->pc = 0x4B7C88u;
    SET_GPR_U32(ctx, 31, 0x4B7C90u);
    ctx->pc = 0x4B7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7C88u;
    // 0x4b7c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3420u, 0x4B7C88u, 0x4B7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7C90u;
label_4b7c90:
    // 0x4b7c90: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x4B7C90u;
    {
        const bool branch_taken_0x4b7c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7c90) {
            ctx->pc = 0x4B7C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b7c74;
        }
    }
    ctx->pc = 0x4B7C98u;
}
