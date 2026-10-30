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

// Function: sub_00430640
// Address: 0x430640 - 0x4306ec
void sub_00430640_0x430640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430640_0x430640");
#endif

    switch (ctx->pc) {
        case 0x430664u: goto label_430664;
        case 0x43069cu: goto label_43069c;
        case 0x4306ccu: goto label_4306cc;
        default: break;
    }

    ctx->pc = 0x430640u;

    // 0x430640: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x430640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430644: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x430644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x430648: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x430648u;
    {
        const bool branch_taken_0x430648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430648u;
        // 0x43064c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430648) {
            ctx->pc = 0x4306BCu;
            goto label_4306bc;
        }
    }
    ctx->pc = 0x430650u;
    // 0x430650: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x430650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x430654: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x430654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x430658: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x430658u;
    {
        const bool branch_taken_0x430658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430658) {
            ctx->pc = 0x43065Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430658u;
            // 0x43065c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4306C0u;
            goto label_4306c0;
        }
    }
    ctx->pc = 0x430660u;
    // 0x430660: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x430660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_430664:
    // 0x430664: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430668: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x430668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x43066c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x43066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x430670: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x430670u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x430674: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x430674u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x430678: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x430678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43067c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43067cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430680: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x430680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x430684: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x430684u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x430688: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x430688u;
    {
        const bool branch_taken_0x430688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430688u;
        // 0x43068c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430688) {
            ctx->pc = 0x430664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430664;
        }
    }
    ctx->pc = 0x430690u;
    // 0x430690: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x430690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x430694: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x430694u;
    {
        const bool branch_taken_0x430694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430694u;
        // 0x430698: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430694) {
            ctx->pc = 0x4306BCu;
            goto label_4306bc;
        }
    }
    ctx->pc = 0x43069Cu;
label_43069c:
    // 0x43069c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x43069cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4306a0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4306a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4306a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4306a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4306a8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x4306a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4306ac: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x4306acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x4306b0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4306B0u;
    {
        const bool branch_taken_0x4306b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4306B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306B0u;
        // 0x4306b4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4306b0) {
            ctx->pc = 0x43069Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43069c;
        }
    }
    ctx->pc = 0x4306B8u;
    // 0x4306b8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4306b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4306bc:
    // 0x4306bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4306bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4306c0:
    // 0x4306c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4306c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4306c4: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4306C4u;
    {
        const bool branch_taken_0x4306c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4306C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306C4u;
        // 0x4306c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4306c4) {
            ctx->pc = 0x4306E4u;
            goto label_4306e4;
        }
    }
    ctx->pc = 0x4306CCu;
label_4306cc:
    // 0x4306cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4306ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4306d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4306d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4306d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4306d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4306d8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4306d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4306dc: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4306DCu;
    {
        const bool branch_taken_0x4306dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x4306E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306DCu;
        // 0x4306e0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4306dc) {
            ctx->pc = 0x4306CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4306cc;
        }
    }
    ctx->pc = 0x4306E4u;
label_4306e4:
    // 0x4306e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4306E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4306E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306E4u;
        // 0x4306e8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4306E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4306ECu;
}
