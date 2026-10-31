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

// Function: sub_004D0240
// Address: 0x4d0240 - 0x4d02f0
void sub_004D0240_0x4d0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0240_0x4d0240");
#endif

    switch (ctx->pc) {
        case 0x4d0260u: goto label_4d0260;
        default: break;
    }

    ctx->pc = 0x4d0240u;

    // 0x4d0240: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d0240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0244: 0x3c0a03ff  lui         $t2, 0x3FF
    ctx->pc = 0x4d0244u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1023 << 16));
    // 0x4d0248: 0x3c09fc00  lui         $t1, 0xFC00
    ctx->pc = 0x4d0248u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64512 << 16));
    // 0x4d024c: 0x24e80200  addiu       $t0, $a3, 0x200
    ctx->pc = 0x4d024cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x4d0250: 0x354af7ff  ori         $t2, $t2, 0xF7FF
    ctx->pc = 0x4d0250u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)63487);
    // 0x4d0254: 0x35290800  ori         $t1, $t1, 0x800
    ctx->pc = 0x4d0254u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    // 0x4d0258: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x4d0258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4d025c: 0x0  nop
    ctx->pc = 0x4d025cu;
    // NOP
label_4d0260:
    // 0x4d0260: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d0260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d0264: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4d0264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0268: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4d0268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d026c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4d026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4d0270: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x4d0270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d0274: 0x144182a  slt         $v1, $t2, $a0
    ctx->pc = 0x4d0274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4d0278: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D0278u;
    {
        const bool branch_taken_0x4d0278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0278u;
        // 0x4d027c: 0x24c70002  addiu       $a3, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0278) {
            ctx->pc = 0x4D0294u;
            goto label_4d0294;
        }
    }
    ctx->pc = 0x4D0280u;
    // 0x4d0280: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x4d0280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4d0284: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D0284u;
    {
        const bool branch_taken_0x4d0284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0284u;
        // 0x4d0288: 0x412c2  srl         $v0, $a0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0284) {
            ctx->pc = 0x4D0298u;
            goto label_4d0298;
        }
    }
    ctx->pc = 0x4D028Cu;
    // 0x4d028c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D028Cu;
    {
        const bool branch_taken_0x4d028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D028Cu;
        // 0x4d0290: 0x24028001  addiu       $v0, $zero, -0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d028c) {
            ctx->pc = 0x4D0298u;
            goto label_4d0298;
        }
    }
    ctx->pc = 0x4D0294u;
label_4d0294:
    // 0x4d0294: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4d0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_4d0298:
    // 0x4d0298: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d0298u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d029c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4d029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4d02a0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4d02a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d02a4: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4d02a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d02a8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x4d02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x4d02ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d02acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d02b0: 0x143202a  slt         $a0, $t2, $v1
    ctx->pc = 0x4d02b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4d02b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D02B4u;
    {
        const bool branch_taken_0x4d02b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D02B4u;
        // 0x4d02b8: 0x24c80002  addiu       $t0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d02b4) {
            ctx->pc = 0x4D02D0u;
            goto label_4d02d0;
        }
    }
    ctx->pc = 0x4D02BCu;
    // 0x4d02bc: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x4d02bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4d02c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D02C0u;
    {
        const bool branch_taken_0x4d02c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D02C0u;
        // 0x4d02c4: 0x312c2  srl         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d02c0) {
            ctx->pc = 0x4D02D4u;
            goto label_4d02d4;
        }
    }
    ctx->pc = 0x4D02C8u;
    // 0x4d02c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D02C8u;
    {
        const bool branch_taken_0x4d02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D02C8u;
        // 0x4d02cc: 0x24028001  addiu       $v0, $zero, -0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d02c8) {
            ctx->pc = 0x4D02D4u;
            goto label_4d02d4;
        }
    }
    ctx->pc = 0x4D02D0u;
label_4d02d0:
    // 0x4d02d0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4d02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_4d02d4:
    // 0x4d02d4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d02d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d02d8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4d02d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4d02dc: 0x561ffe0  bgez        $t3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4D02DCu;
    {
        const bool branch_taken_0x4d02dc = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x4D02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D02DCu;
        // 0x4d02e0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d02dc) {
            ctx->pc = 0x4D0260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0260;
        }
    }
    ctx->pc = 0x4D02E4u;
    // 0x4d02e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D02E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D02E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D02ECu;
    // 0x4d02ec: 0x0  nop
    ctx->pc = 0x4d02ecu;
    // NOP
    ctx->pc = 0x4d02f0u;
}
