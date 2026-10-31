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

// Function: sub_0020DBE0
// Address: 0x20dbe0 - 0x20dc98
void sub_0020DBE0_0x20dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DBE0_0x20dbe0");
#endif

    switch (ctx->pc) {
        case 0x20dc30u: goto label_20dc30;
        case 0x20dc58u: goto label_20dc58;
        case 0x20dc80u: goto label_20dc80;
        default: break;
    }

    ctx->pc = 0x20dbe0u;

    // 0x20dbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20dbe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20dbe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20dbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20dbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dbf4: 0x26043ce0  addiu       $a0, $s0, 0x3CE0
    ctx->pc = 0x20dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15584));
    // 0x20dbf8: 0xae0040f8  sw          $zero, 0x40F8($s0)
    ctx->pc = 0x20dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16632), GPR_U32(ctx, 0));
    // 0x20dbfc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x20dbfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x20dc00: 0xae0040fc  sw          $zero, 0x40FC($s0)
    ctx->pc = 0x20dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16636), GPR_U32(ctx, 0));
    // 0x20dc04: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x20dc04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x20dc08: 0xae004100  sw          $zero, 0x4100($s0)
    ctx->pc = 0x20dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16640), GPR_U32(ctx, 0));
    // 0x20dc0c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x20dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x20dc10: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DC10u;
    {
        const bool branch_taken_0x20dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x20DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC10u;
        // 0x20dc14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc10) {
            ctx->pc = 0x20DC20u;
            goto label_20dc20;
        }
    }
    ctx->pc = 0x20DC18u;
    // 0x20dc18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20dc1c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x20dc1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20dc20:
    // 0x20dc20: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DC20u;
    {
        const bool branch_taken_0x20dc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc20) {
            ctx->pc = 0x20DC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DC20u;
            // 0x20dc24: 0x26043de0  addiu       $a0, $s0, 0x3DE0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15840));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DC34u;
            goto label_20dc34;
        }
    }
    ctx->pc = 0x20DC28u;
    // 0x20dc28: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20DC28u;
    SET_GPR_U32(ctx, 31, 0x20DC30u);
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20DC28u, 0x20DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC30u;
label_20dc30:
    // 0x20dc30: 0x26043de0  addiu       $a0, $s0, 0x3DE0
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15840));
label_20dc34:
    // 0x20dc34: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x20dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x20dc38: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DC38u;
    {
        const bool branch_taken_0x20dc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x20DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC38u;
        // 0x20dc3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc38) {
            ctx->pc = 0x20DC48u;
            goto label_20dc48;
        }
    }
    ctx->pc = 0x20DC40u;
    // 0x20dc40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20dc44: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x20dc44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20dc48:
    // 0x20dc48: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DC48u;
    {
        const bool branch_taken_0x20dc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc48) {
            ctx->pc = 0x20DC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DC48u;
            // 0x20dc4c: 0x26043ee0  addiu       $a0, $s0, 0x3EE0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16096));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DC5Cu;
            goto label_20dc5c;
        }
    }
    ctx->pc = 0x20DC50u;
    // 0x20dc50: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20DC50u;
    SET_GPR_U32(ctx, 31, 0x20DC58u);
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20DC50u, 0x20DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC58u;
label_20dc58:
    // 0x20dc58: 0x26043ee0  addiu       $a0, $s0, 0x3EE0
    ctx->pc = 0x20dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16096));
label_20dc5c:
    // 0x20dc5c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x20dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x20dc60: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DC60u;
    {
        const bool branch_taken_0x20dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x20DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC60u;
        // 0x20dc64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc60) {
            ctx->pc = 0x20DC70u;
            goto label_20dc70;
        }
    }
    ctx->pc = 0x20DC68u;
    // 0x20dc68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20dc6c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x20dc6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20dc70:
    // 0x20dc70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DC70u;
    {
        const bool branch_taken_0x20dc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC70u;
        // 0x20dc74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc70) {
            ctx->pc = 0x20DC84u;
            goto label_20dc84;
        }
    }
    ctx->pc = 0x20DC78u;
    // 0x20dc78: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20DC78u;
    SET_GPR_U32(ctx, 31, 0x20DC80u);
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20DC78u, 0x20DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC80u;
label_20dc80:
    // 0x20dc80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20dc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20dc84:
    // 0x20dc84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dc84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC8Cu;
        // 0x20dc90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DC94u;
    // 0x20dc94: 0x0  nop
    ctx->pc = 0x20dc94u;
    // NOP
    ctx->pc = 0x20dc98u;
}
