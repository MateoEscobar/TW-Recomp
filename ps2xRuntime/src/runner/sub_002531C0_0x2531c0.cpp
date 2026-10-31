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

// Function: sub_002531C0
// Address: 0x2531c0 - 0x253268
void sub_002531C0_0x2531c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002531C0_0x2531c0");
#endif

    switch (ctx->pc) {
        case 0x253210u: goto label_253210;
        default: break;
    }

    ctx->pc = 0x2531c0u;

    // 0x2531c0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2531c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2531c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2531c8: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x2531c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2531cc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2531ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2531d0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x2531d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2531d4: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x2531d4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2531d8: 0x2ce203e9  sltiu       $v0, $a3, 0x3E9
    ctx->pc = 0x2531d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
    // 0x2531dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2531DCu;
    {
        const bool branch_taken_0x2531dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2531E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531DCu;
        // 0x2531e0: 0x74042  srl         $t0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531dc) {
            ctx->pc = 0x2531F0u;
            goto label_2531f0;
        }
    }
    ctx->pc = 0x2531E4u;
    // 0x2531e4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x2531e4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2531e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2531E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2531ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531E8u;
        // 0x2531ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2531F0u;
label_2531f0:
    // 0x2531f0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2531f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2531f4: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x2531f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2531f8: 0x8c4aa21c  lw          $t2, -0x5DE4($v0)
    ctx->pc = 0x2531f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x2531fc: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x2531fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x253200: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x253200u;
    {
        const bool branch_taken_0x253200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253200u;
        // 0x253204: 0x8a5821  addu        $t3, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253200) {
            ctx->pc = 0x253250u;
            goto label_253250;
        }
    }
    ctx->pc = 0x253208u;
    // 0x253208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x253208u;
    {
        const bool branch_taken_0x253208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253208u;
        // 0x25320c: 0x81840  sll         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253208) {
            ctx->pc = 0x25322Cu;
            goto label_25322c;
        }
    }
    ctx->pc = 0x253210u;
label_253210:
    // 0x253210: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x253210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x253214: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x253214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253218: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x253218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x25321c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x25321cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x253220: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x253220u;
    {
        const bool branch_taken_0x253220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253220u;
        // 0x253224: 0x74042  srl         $t0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253220) {
            ctx->pc = 0x253250u;
            goto label_253250;
        }
    }
    ctx->pc = 0x253228u;
    // 0x253228: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x253228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_25322c:
    // 0x25322c: 0x95640016  lhu         $a0, 0x16($t3)
    ctx->pc = 0x25322cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x253230: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x253230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x253234: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x253234u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253238: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x253238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x25323c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x25323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x253240: 0x94430016  lhu         $v1, 0x16($v0)
    ctx->pc = 0x253240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x253244: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x253244u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x253248: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x253248u;
    {
        const bool branch_taken_0x253248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253248u;
        // 0x25324c: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253248) {
            ctx->pc = 0x253210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253210;
        }
    }
    ctx->pc = 0x253250u;
label_253250:
    // 0x253250: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x253250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x253254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253258: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x253258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x25325c: 0x3e00008  jr          $ra
    ctx->pc = 0x25325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25325Cu;
        // 0x253260: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253264u;
    // 0x253264: 0x0  nop
    ctx->pc = 0x253264u;
    // NOP
    ctx->pc = 0x253268u;
}
