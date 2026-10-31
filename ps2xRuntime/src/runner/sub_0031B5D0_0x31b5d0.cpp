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

// Function: sub_0031B5D0
// Address: 0x31b5d0 - 0x31b660
void sub_0031B5D0_0x31b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B5D0_0x31b5d0");
#endif

    switch (ctx->pc) {
        case 0x31b5f8u: goto label_31b5f8;
        case 0x31b610u: goto label_31b610;
        case 0x31b618u: goto label_31b618;
        case 0x31b628u: goto label_31b628;
        default: break;
    }

    ctx->pc = 0x31b5d0u;

    // 0x31b5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31b5d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31b5d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31b5dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31b5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31b5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31b5e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b5ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b5f0: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x31b5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31b5f4: 0x0  nop
    ctx->pc = 0x31b5f4u;
    // NOP
label_31b5f8:
    // 0x31b5f8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x31b5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31b5fc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31B5FCu;
    {
        const bool branch_taken_0x31b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b5fc) {
            ctx->pc = 0x31B600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B5FCu;
            // 0x31b600: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B63Cu;
            goto label_31b63c;
        }
    }
    ctx->pc = 0x31B604u;
    // 0x31b604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b608: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31B608u;
    SET_GPR_U32(ctx, 31, 0x31B610u);
    ctx->pc = 0x31B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B608u;
    // 0x31b60c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31B608u, 0x31B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B610u;
label_31b610:
    // 0x31b610: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31B610u;
    SET_GPR_U32(ctx, 31, 0x31B618u);
    ctx->pc = 0x31B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B610u;
    // 0x31b614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31B610u, 0x31B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B618u;
label_31b618:
    // 0x31b618: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31B618u;
    {
        const bool branch_taken_0x31b618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b618) {
            ctx->pc = 0x31B61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B618u;
            // 0x31b61c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b5f8;
        }
    }
    ctx->pc = 0x31B620u;
    // 0x31b620: 0xc087502  jal         func_21D408
    ctx->pc = 0x31B620u;
    SET_GPR_U32(ctx, 31, 0x31B628u);
    ctx->pc = 0x31B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B620u;
    // 0x31b624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B620u, 0x31B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B628u;
label_31b628:
    // 0x31b628: 0x80420264  lb          $v0, 0x264($v0)
    ctx->pc = 0x31b628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x31b62c: 0x440fff2  bltz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31B62Cu;
    {
        const bool branch_taken_0x31b62c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B62Cu;
        // 0x31b630: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b62c) {
            ctx->pc = 0x31B5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b5f8;
        }
    }
    ctx->pc = 0x31B634u;
    // 0x31b634: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x31b634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x31b638: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31b63c:
    // 0x31b63c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31b63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b640: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31b640u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31b644: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31b644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b648: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31b648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b64c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31b64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31b650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b654: 0x3e00008  jr          $ra
    ctx->pc = 0x31B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B654u;
        // 0x31b658: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B65Cu;
    // 0x31b65c: 0x0  nop
    ctx->pc = 0x31b65cu;
    // NOP
    ctx->pc = 0x31b660u;
}
