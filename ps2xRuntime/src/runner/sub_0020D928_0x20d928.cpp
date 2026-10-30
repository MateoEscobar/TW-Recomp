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

// Function: sub_0020D928
// Address: 0x20d928 - 0x20d9b0
void sub_0020D928_0x20d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D928_0x20d928");
#endif

    switch (ctx->pc) {
        case 0x20d970u: goto label_20d970;
        case 0x20d988u: goto label_20d988;
        case 0x20d99cu: goto label_20d99c;
        default: break;
    }

    ctx->pc = 0x20d928u;

    // 0x20d928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d92c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20d930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20d934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d938: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D938u;
    {
        const bool branch_taken_0x20d938 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D938u;
        // 0x20d93c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d938) {
            ctx->pc = 0x20D95Cu;
            goto label_20d95c;
        }
    }
    ctx->pc = 0x20D940u;
    // 0x20d940: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20d940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x20d944: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20d944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20d948: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20d948u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x20d94c: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x20d94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
    // 0x20d950: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20d950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x20d954: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20D954u;
    {
        const bool branch_taken_0x20d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D954u;
        // 0x20d958: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d954) {
            ctx->pc = 0x20D994u;
            goto label_20d994;
        }
    }
    ctx->pc = 0x20D95Cu;
label_20d95c:
    // 0x20d95c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d960: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D960u;
    {
        const bool branch_taken_0x20d960 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D960u;
        // 0x20d964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d960) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D968u;
    // 0x20d968: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x20D968u;
    SET_GPR_U32(ctx, 31, 0x20D970u);
    ctx->pc = 0x20D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D968u;
    // 0x20d96c: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20D968u, 0x20D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D970u;
label_20d970:
    // 0x20d970: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D970u;
    {
        const bool branch_taken_0x20d970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d970) {
            ctx->pc = 0x20D980u;
            goto label_20d980;
        }
    }
    ctx->pc = 0x20D978u;
    // 0x20d978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D978u;
    {
        const bool branch_taken_0x20d978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D978u;
        // 0x20d97c: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d978) {
            ctx->pc = 0x20D988u;
            goto label_20d988;
        }
    }
    ctx->pc = 0x20D980u;
label_20d980:
    // 0x20d980: 0xc057dca  jal         func_15F728
    ctx->pc = 0x20D980u;
    SET_GPR_U32(ctx, 31, 0x20D988u);
    ctx->pc = 0x15F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F728u, 0x20D980u, 0x20D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D988u;
label_20d988:
    // 0x20d988: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20d98c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20d990: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x20d990u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
label_20d994:
    // 0x20d994: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x20D994u;
    SET_GPR_U32(ctx, 31, 0x20D99Cu);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20D994u, 0x20D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D99Cu;
label_20d99c:
    // 0x20d99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d9a0:
    // 0x20d9a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9A8u;
        // 0x20d9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D9B0u;
}
