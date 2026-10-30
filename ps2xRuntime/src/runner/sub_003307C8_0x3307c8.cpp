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

// Function: sub_003307C8
// Address: 0x3307c8 - 0x330888
void sub_003307C8_0x3307c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003307C8_0x3307c8");
#endif

    switch (ctx->pc) {
        case 0x330808u: goto label_330808;
        case 0x330838u: goto label_330838;
        default: break;
    }

    ctx->pc = 0x3307c8u;

    // 0x3307c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3307c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3307cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3307ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3307d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3307d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3307d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3307d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3307d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3307dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3307dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3307e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3307e4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3307e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3307e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3307E8u;
    {
        const bool branch_taken_0x3307e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307E8u;
        // 0x3307ec: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307e8) {
            ctx->pc = 0x3307FCu;
            goto label_3307fc;
        }
    }
    ctx->pc = 0x3307F0u;
    // 0x3307f0: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x3307f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3307f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3307F4u;
    {
        const bool branch_taken_0x3307f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3307f4) {
            ctx->pc = 0x3307F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3307F4u;
            // 0x3307f8: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33080Cu;
            goto label_33080c;
        }
    }
    ctx->pc = 0x3307FCu;
label_3307fc:
    // 0x3307fc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3307fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x330800: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x330800u;
    SET_GPR_U32(ctx, 31, 0x330808u);
    ctx->pc = 0x330804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330800u;
    // 0x330804: 0x24a56008  addiu       $a1, $a1, 0x6008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x330800u, 0x330808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330808u;
label_330808:
    // 0x330808: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x330808u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_33080c:
    // 0x33080c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x33080cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330810: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x330810u;
    {
        const bool branch_taken_0x330810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x330814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330810u;
        // 0x330814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330810) {
            ctx->pc = 0x330870u;
            goto label_330870;
        }
    }
    ctx->pc = 0x330818u;
    // 0x330818: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x330818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33081c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33081cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x330820: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x330820u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x330824: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x330824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x330828: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x330828u;
    {
        const bool branch_taken_0x330828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330828u;
        // 0x33082c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330828) {
            ctx->pc = 0x33086Cu;
            goto label_33086c;
        }
    }
    ctx->pc = 0x330830u;
    // 0x330830: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x330830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330834: 0x0  nop
    ctx->pc = 0x330834u;
    // NOP
label_330838:
    // 0x330838: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x330838u;
    {
        const bool branch_taken_0x330838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x330838) {
            ctx->pc = 0x33083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330838u;
            // 0x33083c: 0x651826  xor         $v1, $v1, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330854u;
            goto label_330854;
        }
    }
    ctx->pc = 0x330840u;
    // 0x330840: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x330840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x330844: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x330844u;
    {
        const bool branch_taken_0x330844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x330844) {
            ctx->pc = 0x330848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330844u;
            // 0x330848: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330860u;
            goto label_330860;
        }
    }
    ctx->pc = 0x33084Cu;
    // 0x33084c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33084Cu;
    {
        const bool branch_taken_0x33084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33084Cu;
        // 0x330850: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33084c) {
            ctx->pc = 0x330870u;
            goto label_330870;
        }
    }
    ctx->pc = 0x330854u;
label_330854:
    // 0x330854: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x330854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x330858: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x330858u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x33085c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33085cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_330860:
    // 0x330860: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x330860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x330864: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x330864u;
    {
        const bool branch_taken_0x330864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330864) {
            ctx->pc = 0x330868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330864u;
            // 0x330868: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330838;
        }
    }
    ctx->pc = 0x33086Cu;
label_33086c:
    // 0x33086c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33086cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330870:
    // 0x330870: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x330870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x330874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330878: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x330878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33087c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330880: 0x3e00008  jr          $ra
    ctx->pc = 0x330880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330880u;
        // 0x330884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330888u;
}
