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

// Function: sub_0044C868
// Address: 0x44c868 - 0x44c9c0
void sub_0044C868_0x44c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C868_0x44c868");
#endif

    switch (ctx->pc) {
        case 0x44c8b0u: goto label_44c8b0;
        case 0x44c8c4u: goto label_44c8c4;
        case 0x44c8d0u: goto label_44c8d0;
        case 0x44c8d8u: goto label_44c8d8;
        case 0x44c8e4u: goto label_44c8e4;
        case 0x44c900u: goto label_44c900;
        case 0x44c944u: goto label_44c944;
        case 0x44c954u: goto label_44c954;
        case 0x44c964u: goto label_44c964;
        case 0x44c97cu: goto label_44c97c;
        default: break;
    }

    ctx->pc = 0x44c868u;

    // 0x44c868: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x44c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x44c86c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x44c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x44c870: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x44c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x44c874: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x44c874u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x44c878: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x44c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x44c87c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x44c87cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x44c880: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x44c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x44c884: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x44c884u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x44c888: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x44c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x44c88c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x44c88cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x44c890: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x44c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x44c894: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x44c894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x44c898: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x44c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x44c89c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x44c89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44c8a0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x44c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x44c8a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44c8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c8a8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x44c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x44c8ac: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_44c8b0:
    // 0x44c8b0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x44C8B0u;
    {
        const bool branch_taken_0x44c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8B0u;
        // 0x44c8b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8b0) {
            ctx->pc = 0x44C990u;
            goto label_44c990;
        }
    }
    ctx->pc = 0x44C8B8u;
    // 0x44c8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c8bc: 0xc113272  jal         func_44C9C8
    ctx->pc = 0x44C8BCu;
    SET_GPR_U32(ctx, 31, 0x44C8C4u);
    ctx->pc = 0x44C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C8BCu;
    // 0x44c8c0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C8u, 0x44C8BCu, 0x44C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C8C4u;
label_44c8c4:
    // 0x44c8c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x44C8C4u;
    {
        const bool branch_taken_0x44c8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8C4u;
        // 0x44c8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8c4) {
            ctx->pc = 0x44C8DCu;
            goto label_44c8dc;
        }
    }
    ctx->pc = 0x44C8CCu;
    // 0x44c8cc: 0x0  nop
    ctx->pc = 0x44c8ccu;
    // NOP
label_44c8d0:
    // 0x44c8d0: 0xc113218  jal         func_44C860
    ctx->pc = 0x44C8D0u;
    SET_GPR_U32(ctx, 31, 0x44C8D8u);
    ctx->pc = 0x44C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C8D0u;
    // 0x44c8d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44C8D0u, 0x44C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C8D8u;
label_44c8d8:
    // 0x44c8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c8dc:
    // 0x44c8dc: 0xc112974  jal         func_44A5D0
    ctx->pc = 0x44C8DCu;
    SET_GPR_U32(ctx, 31, 0x44C8E4u);
    ctx->pc = 0x44C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C8DCu;
    // 0x44c8e0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44C8DCu, 0x44C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C8E4u;
label_44c8e4:
    // 0x44c8e4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44C8E4u;
    {
        const bool branch_taken_0x44c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x44C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8E4u;
        // 0x44c8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8e4) {
            ctx->pc = 0x44C8F8u;
            goto label_44c8f8;
        }
    }
    ctx->pc = 0x44C8ECu;
    // 0x44c8ec: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x44c8f0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x44C8F0u;
    {
        const bool branch_taken_0x44c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c8f0) {
            ctx->pc = 0x44C8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c8d0;
        }
    }
    ctx->pc = 0x44C8F8u;
label_44c8f8:
    // 0x44c8f8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C8F8u;
    SET_GPR_U32(ctx, 31, 0x44C900u);
    ctx->pc = 0x44C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C8F8u;
    // 0x44c8fc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C8F8u, 0x44C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C900u;
label_44c900:
    // 0x44c900: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44c900u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c904: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x44C904u;
    {
        const bool branch_taken_0x44c904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x44C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C904u;
        // 0x44c908: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c904) {
            ctx->pc = 0x44C93Cu;
            goto label_44c93c;
        }
    }
    ctx->pc = 0x44C90Cu;
    // 0x44c90c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44C90Cu;
    {
        const bool branch_taken_0x44c90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c90c) {
            ctx->pc = 0x44C924u;
            goto label_44c924;
        }
    }
    ctx->pc = 0x44C914u;
    // 0x44c914: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x44C914u;
    {
        const bool branch_taken_0x44c914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x44c914) {
            ctx->pc = 0x44C95Cu;
            goto label_44c95c;
        }
    }
    ctx->pc = 0x44C91Cu;
    // 0x44c91c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x44C91Cu;
    {
        const bool branch_taken_0x44c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C91Cu;
        // 0x44c920: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c91c) {
            ctx->pc = 0x44C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c8b0;
        }
    }
    ctx->pc = 0x44C924u;
label_44c924:
    // 0x44c924: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x44C924u;
    {
        const bool branch_taken_0x44c924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x44C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C924u;
        // 0x44c928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c924) {
            ctx->pc = 0x44C990u;
            goto label_44c990;
        }
    }
    ctx->pc = 0x44C92Cu;
    // 0x44c92c: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x44C92Cu;
    {
        const bool branch_taken_0x44c92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x44c92c) {
            ctx->pc = 0x44C94Cu;
            goto label_44c94c;
        }
    }
    ctx->pc = 0x44C934u;
    // 0x44c934: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x44C934u;
    {
        const bool branch_taken_0x44c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C934u;
        // 0x44c938: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c934) {
            ctx->pc = 0x44C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c8b0;
        }
    }
    ctx->pc = 0x44C93Cu;
label_44c93c:
    // 0x44c93c: 0xc112f5c  jal         func_44BD70
    ctx->pc = 0x44C93Cu;
    SET_GPR_U32(ctx, 31, 0x44C944u);
    ctx->pc = 0x44C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C93Cu;
    // 0x44c940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BD70u, 0x44C93Cu, 0x44C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C944u;
label_44c944:
    // 0x44c944: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x44C944u;
    {
        const bool branch_taken_0x44c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C944u;
        // 0x44c948: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c944) {
            ctx->pc = 0x44C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c8b0;
        }
    }
    ctx->pc = 0x44C94Cu;
label_44c94c:
    // 0x44c94c: 0xc113008  jal         func_44C020
    ctx->pc = 0x44C94Cu;
    SET_GPR_U32(ctx, 31, 0x44C954u);
    ctx->pc = 0x44C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C94Cu;
    // 0x44c950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C020u, 0x44C94Cu, 0x44C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C954u;
label_44c954:
    // 0x44c954: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x44C954u;
    {
        const bool branch_taken_0x44c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C954u;
        // 0x44c958: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c954) {
            ctx->pc = 0x44C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c8b0;
        }
    }
    ctx->pc = 0x44C95Cu;
label_44c95c:
    // 0x44c95c: 0xc113030  jal         func_44C0C0
    ctx->pc = 0x44C95Cu;
    SET_GPR_U32(ctx, 31, 0x44C964u);
    ctx->pc = 0x44C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C95Cu;
    // 0x44c960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C0C0u, 0x44C95Cu, 0x44C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C964u;
label_44c964:
    // 0x44c964: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x44c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x44c968: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x44c968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c96c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x44c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x44c970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x44c970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x44c974: 0xc111982  jal         func_446608
    ctx->pc = 0x44C974u;
    SET_GPR_U32(ctx, 31, 0x44C97Cu);
    ctx->pc = 0x44C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C974u;
    // 0x44c978: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x44C974u, 0x44C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C97Cu;
label_44c97c:
    // 0x44c97c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x44c97cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44c980: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x44c980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x44c984: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x44c984u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x44c988: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x44c988u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x44c98c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x44c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_44c990:
    // 0x44c990: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x44c990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44c994: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x44c994u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44c998: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x44c998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44c99c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x44c99cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44c9a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x44c9a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44c9a4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x44c9a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44c9a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x44c9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44c9ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x44c9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44c9b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x44c9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44c9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x44C9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C9B4u;
        // 0x44c9b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C9BCu;
    // 0x44c9bc: 0x0  nop
    ctx->pc = 0x44c9bcu;
    // NOP
    ctx->pc = 0x44c9c0u;
}
