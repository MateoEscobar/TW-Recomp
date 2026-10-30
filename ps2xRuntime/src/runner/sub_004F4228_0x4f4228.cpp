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

// Function: sub_004F4228
// Address: 0x4f4228 - 0x4f42a0
void sub_004F4228_0x4f4228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4228_0x4f4228");
#endif

    switch (ctx->pc) {
        case 0x4f4240u: goto label_4f4240;
        default: break;
    }

    ctx->pc = 0x4f4228u;

    // 0x4f4228: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F4228u;
    {
        const bool branch_taken_0x4f4228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4228u;
        // 0x4f422c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4228) {
            ctx->pc = 0x4F4294u;
            goto label_4f4294;
        }
    }
    ctx->pc = 0x4F4230u;
    // 0x4f4230: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f4230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f4234: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F4234u;
    {
        const bool branch_taken_0x4f4234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4234u;
        // 0x4f4238: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4234) {
            ctx->pc = 0x4F4294u;
            goto label_4f4294;
        }
    }
    ctx->pc = 0x4F423Cu;
    // 0x4f423c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f423cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f4240:
    // 0x4f4240: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f4240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f4244: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f4244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f4248: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f424c: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F424Cu;
    {
        const bool branch_taken_0x4f424c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F424Cu;
        // 0x4f4250: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f424c) {
            ctx->pc = 0x4F4284u;
            goto label_4f4284;
        }
    }
    ctx->pc = 0x4F4254u;
    // 0x4f4254: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f4254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f4258: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f4258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f425c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f425cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f4260: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f4264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f4264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f4268: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f4268u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f426c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f4270: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f4270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f4274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f4278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f4278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f427c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F427Cu;
        // 0x4f4280: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4284u;
label_4f4284:
    // 0x4f4284: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f4284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4288: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f4288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f428c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F428Cu;
    {
        const bool branch_taken_0x4f428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f428c) {
            ctx->pc = 0x4F4290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F428Cu;
            // 0x4f4290: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f4240;
        }
    }
    ctx->pc = 0x4F4294u;
label_4f4294:
    // 0x4f4294: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F429Cu;
    // 0x4f429c: 0x0  nop
    ctx->pc = 0x4f429cu;
    // NOP
    ctx->pc = 0x4f42a0u;
}
