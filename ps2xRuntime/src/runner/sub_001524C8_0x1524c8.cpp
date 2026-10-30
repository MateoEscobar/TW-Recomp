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

// Function: sub_001524C8
// Address: 0x1524c8 - 0x1525c0
void sub_001524C8_0x1524c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001524C8_0x1524c8");
#endif

    switch (ctx->pc) {
        case 0x152524u: goto label_152524;
        case 0x152544u: goto label_152544;
        case 0x152564u: goto label_152564;
        case 0x1525a8u: goto label_1525a8;
        default: break;
    }

    ctx->pc = 0x1524c8u;

    // 0x1524c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1524c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1524cc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1524ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1524d0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1524d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1524d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1524d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1524d8: 0x8e23c5d8  lw          $v1, -0x3A28($s1)
    ctx->pc = 0x1524d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x1524dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1524DCu;
    {
        const bool branch_taken_0x1524dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524DCu;
        // 0x1524e0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524dc) {
            ctx->pc = 0x1524F8u;
            goto label_1524f8;
        }
    }
    ctx->pc = 0x1524E4u;
    // 0x1524e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1524e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1524e8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1524E8u;
    {
        const bool branch_taken_0x1524e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1524ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524E8u;
        // 0x1524ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524e8) {
            ctx->pc = 0x152578u;
            goto label_152578;
        }
    }
    ctx->pc = 0x1524F0u;
    // 0x1524f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1524F0u;
    {
        const bool branch_taken_0x1524f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524F0u;
        // 0x1524f4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524f0) {
            ctx->pc = 0x1525B0u;
            goto label_1525b0;
        }
    }
    ctx->pc = 0x1524F8u;
label_1524f8:
    // 0x1524f8: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x1524fc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152500: 0x261046a4  addiu       $s0, $s0, 0x46A4
    ctx->pc = 0x152500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18084));
    // 0x152504: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152508: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152508u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x15250c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152510: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x152510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x152514: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152518: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x15251c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x15251Cu;
    SET_GPR_U32(ctx, 31, 0x152524u);
    ctx->pc = 0x152520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15251Cu;
    // 0x152520: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15251Cu, 0x152524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152524u;
label_152524:
    // 0x152524: 0x8e05ffc8  lw          $a1, -0x38($s0)
    ctx->pc = 0x152524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x152528: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x15252c: 0x8e04ffc4  lw          $a0, -0x3C($s0)
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967236)));
    // 0x152530: 0x25294740  addiu       $t1, $t1, 0x4740
    ctx->pc = 0x152530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x152534: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15253c: 0xc111638  jal         func_4458E0
    ctx->pc = 0x15253Cu;
    SET_GPR_U32(ctx, 31, 0x152544u);
    ctx->pc = 0x152540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15253Cu;
    // 0x152540: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x15253Cu, 0x152544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152544u;
label_152544:
    // 0x152544: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152548: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152548u;
    {
        const bool branch_taken_0x152548 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152548u;
        // 0x15254c: 0x8e22c5d8  lw          $v0, -0x3A28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152548) {
            ctx->pc = 0x15256Cu;
            goto label_15256c;
        }
    }
    ctx->pc = 0x152550u;
    // 0x152550: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152554: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152558: 0xac43c5ec  sw          $v1, -0x3A14($v0)
    ctx->pc = 0x152558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x15255c: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x15255Cu;
    SET_GPR_U32(ctx, 31, 0x152564u);
    ctx->pc = 0x152560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15255Cu;
    // 0x152560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x15255Cu, 0x152564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152564u;
label_152564:
    // 0x152564: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152564u;
    {
        const bool branch_taken_0x152564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152564u;
        // 0x152568: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152564) {
            ctx->pc = 0x1525ACu;
            goto label_1525ac;
        }
    }
    ctx->pc = 0x15256Cu;
label_15256c:
    // 0x15256c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152570: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152570u;
    {
        const bool branch_taken_0x152570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152570u;
        // 0x152574: 0xae22c5d8  sw          $v0, -0x3A28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152570) {
            ctx->pc = 0x1525A8u;
            goto label_1525a8;
        }
    }
    ctx->pc = 0x152578u;
label_152578:
    // 0x152578: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x152578u;
    {
        const bool branch_taken_0x152578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152578u;
        // 0x15257c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152578) {
            ctx->pc = 0x1525B0u;
            goto label_1525b0;
        }
    }
    ctx->pc = 0x152580u;
    // 0x152580: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152580u;
    {
        const bool branch_taken_0x152580 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x152584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152580u;
        // 0x152584: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152580) {
            ctx->pc = 0x152594u;
            goto label_152594;
        }
    }
    ctx->pc = 0x152588u;
    // 0x152588: 0x8c43467c  lw          $v1, 0x467C($v0)
    ctx->pc = 0x152588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18044)));
    // 0x15258c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15258Cu;
    {
        const bool branch_taken_0x15258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15258Cu;
        // 0x152590: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15258c) {
            ctx->pc = 0x15259Cu;
            goto label_15259c;
        }
    }
    ctx->pc = 0x152594u;
label_152594:
    // 0x152594: 0x8c43467c  lw          $v1, 0x467C($v0)
    ctx->pc = 0x152594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18044)));
    // 0x152598: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x152598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15259c:
    // 0x15259c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1525a0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1525A0u;
    SET_GPR_U32(ctx, 31, 0x1525A8u);
    ctx->pc = 0x1525A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525A0u;
    // 0x1525a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1525A0u, 0x1525A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525A8u;
label_1525a8:
    // 0x1525a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1525a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1525ac:
    // 0x1525ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1525acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1525b0:
    // 0x1525b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1525b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1525b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1525B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1525B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525B4u;
        // 0x1525b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1525B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1525BCu;
    // 0x1525bc: 0x0  nop
    ctx->pc = 0x1525bcu;
    // NOP
    ctx->pc = 0x1525c0u;
}
