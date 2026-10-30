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

// Function: sub_00321328
// Address: 0x321328 - 0x3213b8
void sub_00321328_0x321328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321328_0x321328");
#endif

    switch (ctx->pc) {
        case 0x321348u: goto label_321348;
        case 0x32138cu: goto label_32138c;
        case 0x3213b0u: goto label_3213b0;
        default: break;
    }

    ctx->pc = 0x321328u;

    // 0x321328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32132c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x321330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321334: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x321334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32133c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32133cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321340: 0xc08a61a  jal         func_229868
    ctx->pc = 0x321340u;
    SET_GPR_U32(ctx, 31, 0x321348u);
    ctx->pc = 0x321344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321340u;
    // 0x321344: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x321340u, 0x321348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321348u;
label_321348:
    // 0x321348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32134c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x32134Cu;
    {
        const bool branch_taken_0x32134c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x321350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32134Cu;
        // 0x321350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32134c) {
            ctx->pc = 0x3213C4u;
            return;
        }
    }
    ctx->pc = 0x321354u;
    // 0x321354: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x321354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x321358: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x321358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32135c: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x32135cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x321360: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x321360u;
    {
        const bool branch_taken_0x321360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x321364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321360u;
        // 0x321364: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321360) {
            ctx->pc = 0x3213C0u;
            return;
        }
    }
    ctx->pc = 0x321368u;
    // 0x321368: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x321368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32136c: 0x244238b0  addiu       $v0, $v0, 0x38B0
    ctx->pc = 0x32136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14512));
    // 0x321370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x321370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x321374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x321374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321378: 0x800008  jr          $a0
    ctx->pc = 0x321378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x321380u: goto label_321380;
            case 0x321394u: goto label_321394;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321378u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x321380u;
label_321380:
    // 0x321380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321384: 0xc0c837e  jal         func_320DF8
    ctx->pc = 0x321384u;
    SET_GPR_U32(ctx, 31, 0x32138Cu);
    ctx->pc = 0x321388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321384u;
    // 0x321388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320DF8u, 0x321384u, 0x32138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32138Cu;
label_32138c:
    // 0x32138c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32138Cu;
    {
        const bool branch_taken_0x32138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32138Cu;
        // 0x321390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32138c) {
            ctx->pc = 0x3213C4u;
            return;
        }
    }
    ctx->pc = 0x321394u;
label_321394:
    // 0x321394: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x321394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x321398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32139c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32139Cu;
    {
        const bool branch_taken_0x32139c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3213A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32139Cu;
        // 0x3213a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32139c) {
            ctx->pc = 0x3213C4u;
            return;
        }
    }
    ctx->pc = 0x3213A4u;
    // 0x3213a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3213a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213a8: 0xc0c837e  jal         func_320DF8
    ctx->pc = 0x3213A8u;
    SET_GPR_U32(ctx, 31, 0x3213B0u);
    ctx->pc = 0x3213ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213A8u;
    // 0x3213ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320DF8u, 0x3213A8u, 0x3213B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213B0u;
label_3213b0:
    // 0x3213b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3213B0u;
    {
        const bool branch_taken_0x3213b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213B0u;
        // 0x3213b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213b0) {
            ctx->pc = 0x3213C4u;
            return;
        }
    }
    ctx->pc = 0x3213B8u;
}
