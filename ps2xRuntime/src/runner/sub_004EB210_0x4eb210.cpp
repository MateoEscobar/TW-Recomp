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

// Function: sub_004EB210
// Address: 0x4eb210 - 0x4eb290
void sub_004EB210_0x4eb210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB210_0x4eb210");
#endif

    switch (ctx->pc) {
        case 0x4eb230u: goto label_4eb230;
        default: break;
    }

    ctx->pc = 0x4eb210u;

    // 0x4eb210: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4eb210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb214: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4eb214u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb218: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x4eb218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4eb21c: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x4eb21cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4eb220: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4eb220u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4eb224: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4EB224u;
    {
        const bool branch_taken_0x4eb224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB224u;
        // 0x4eb228: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb224) {
            ctx->pc = 0x4EB254u;
            goto label_4eb254;
        }
    }
    ctx->pc = 0x4EB22Cu;
    // 0x4eb22c: 0x0  nop
    ctx->pc = 0x4eb22cu;
    // NOP
label_4eb230:
    // 0x4eb230: 0x14b1821  addu        $v1, $t2, $t3
    ctx->pc = 0x4eb230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x4eb234: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4eb234u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb238: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4eb238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4eb23c: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x4eb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4eb240: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4eb240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4eb244: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4eb244u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4eb248: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4eb248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4eb24c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4eb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4eb250: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x4eb250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_4eb254:
    // 0x4eb254: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4EB254u;
    {
        const bool branch_taken_0x4eb254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB254u;
        // 0x4eb258: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb254) {
            ctx->pc = 0x4EB280u;
            goto label_4eb280;
        }
    }
    ctx->pc = 0x4EB25Cu;
    // 0x4eb25c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4eb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4eb260: 0x90e50018  lbu         $a1, 0x18($a3)
    ctx->pc = 0x4eb260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4eb264: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x4eb264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4eb268: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4eb268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb26c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4eb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4eb270: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x4eb270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4eb274: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4eb274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4eb278: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4EB278u;
    {
        const bool branch_taken_0x4eb278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB278u;
        // 0x4eb27c: 0x92080  sll         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb278) {
            ctx->pc = 0x4EB230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb230;
        }
    }
    ctx->pc = 0x4EB280u;
label_4eb280:
    // 0x4eb280: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x4eb280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4eb284: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4eb284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4eb288: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB288u;
        // 0x4eb28c: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB290u;
}
