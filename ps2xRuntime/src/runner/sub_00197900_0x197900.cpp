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

// Function: sub_00197900
// Address: 0x197900 - 0x197970
void sub_00197900_0x197900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197900_0x197900");
#endif

    switch (ctx->pc) {
        case 0x197914u: goto label_197914;
        case 0x197924u: goto label_197924;
        case 0x197938u: goto label_197938;
        default: break;
    }

    ctx->pc = 0x197900u;

    // 0x197900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19790c: 0xc060b5c  jal         func_182D70
    ctx->pc = 0x19790Cu;
    SET_GPR_U32(ctx, 31, 0x197914u);
    ctx->pc = 0x197910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19790Cu;
    // 0x197910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D70u, 0x19790Cu, 0x197914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197914u;
label_197914:
    // 0x197914: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197914u;
    {
        const bool branch_taken_0x197914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197914u;
        // 0x197918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197914) {
            ctx->pc = 0x19795Cu;
            goto label_19795c;
        }
    }
    ctx->pc = 0x19791Cu;
    // 0x19791c: 0xc113afe  jal         func_44EBF8
    ctx->pc = 0x19791Cu;
    SET_GPR_U32(ctx, 31, 0x197924u);
    ctx->pc = 0x197920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19791Cu;
    // 0x197920: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EBF8u, 0x19791Cu, 0x197924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197924u;
label_197924:
    // 0x197924: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x197924u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19792c: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x19792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x197930: 0x26030044  addiu       $v1, $s0, 0x44
    ctx->pc = 0x197930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x197934: 0x0  nop
    ctx->pc = 0x197934u;
    // NOP
label_197938:
    // 0x197938: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x197938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19793c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x197940: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x197940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x197944: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x197944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x197948: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x197948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x19794c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19794Cu;
    {
        const bool branch_taken_0x19794c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19794Cu;
        // 0x197950: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19794c) {
            ctx->pc = 0x197938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197938;
        }
    }
    ctx->pc = 0x197954u;
    // 0x197954: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x197954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x197958: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x197958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19795c:
    // 0x19795c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19795cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197964: 0x3e00008  jr          $ra
    ctx->pc = 0x197964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197964u;
        // 0x197968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19796Cu;
    // 0x19796c: 0x0  nop
    ctx->pc = 0x19796cu;
    // NOP
    ctx->pc = 0x197970u;
}
