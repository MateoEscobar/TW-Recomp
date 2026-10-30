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

// Function: sub_003875E8
// Address: 0x3875e8 - 0x387650
void sub_003875E8_0x3875e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003875E8_0x3875e8");
#endif

    switch (ctx->pc) {
        case 0x387608u: goto label_387608;
        case 0x387614u: goto label_387614;
        default: break;
    }

    ctx->pc = 0x3875e8u;

    // 0x3875e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3875e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3875ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3875ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3875f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3875f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3875f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3875f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3875f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3875f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3875fc: 0x263001a0  addiu       $s0, $s1, 0x1A0
    ctx->pc = 0x3875fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x387600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387604: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x387604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387608:
    // 0x387608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38760c: 0xc0e1cf2  jal         func_3873C8
    ctx->pc = 0x38760Cu;
    SET_GPR_U32(ctx, 31, 0x387614u);
    ctx->pc = 0x387610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38760Cu;
    // 0x387610: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873C8u, 0x38760Cu, 0x387614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387614u;
label_387614:
    // 0x387614: 0x2e42001a  sltiu       $v0, $s2, 0x1A
    ctx->pc = 0x387614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x387618: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x387618u;
    {
        const bool branch_taken_0x387618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387618u;
        // 0x38761c: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387618) {
            ctx->pc = 0x387608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387608;
        }
    }
    ctx->pc = 0x387620u;
    // 0x387620: 0xa22012d6  sb          $zero, 0x12D6($s1)
    ctx->pc = 0x387620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4822), (uint8_t)GPR_U32(ctx, 0));
    // 0x387624: 0xae2011ec  sw          $zero, 0x11EC($s1)
    ctx->pc = 0x387624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4588), GPR_U32(ctx, 0));
    // 0x387628: 0xae2011f0  sw          $zero, 0x11F0($s1)
    ctx->pc = 0x387628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4592), GPR_U32(ctx, 0));
    // 0x38762c: 0xae2011f4  sw          $zero, 0x11F4($s1)
    ctx->pc = 0x38762cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4596), GPR_U32(ctx, 0));
    // 0x387630: 0xae2011f8  sw          $zero, 0x11F8($s1)
    ctx->pc = 0x387630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4600), GPR_U32(ctx, 0));
    // 0x387634: 0xa22012d5  sb          $zero, 0x12D5($s1)
    ctx->pc = 0x387634u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4821), (uint8_t)GPR_U32(ctx, 0));
    // 0x387638: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x387638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38763c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38763cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387640: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x387640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387648: 0x3e00008  jr          $ra
    ctx->pc = 0x387648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387648u;
        // 0x38764c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387650u;
}
