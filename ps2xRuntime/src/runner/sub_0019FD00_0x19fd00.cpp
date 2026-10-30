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

// Function: sub_0019FD00
// Address: 0x19fd00 - 0x19fda0
void sub_0019FD00_0x19fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FD00_0x19fd00");
#endif

    switch (ctx->pc) {
        case 0x19fd00u: goto label_19fd00;
        case 0x19fd04u: goto label_19fd04;
        case 0x19fd08u: goto label_19fd08;
        case 0x19fd0cu: goto label_19fd0c;
        case 0x19fd10u: goto label_19fd10;
        case 0x19fd14u: goto label_19fd14;
        case 0x19fd18u: goto label_19fd18;
        case 0x19fd1cu: goto label_19fd1c;
        case 0x19fd20u: goto label_19fd20;
        case 0x19fd24u: goto label_19fd24;
        case 0x19fd28u: goto label_19fd28;
        case 0x19fd2cu: goto label_19fd2c;
        case 0x19fd30u: goto label_19fd30;
        case 0x19fd34u: goto label_19fd34;
        case 0x19fd38u: goto label_19fd38;
        case 0x19fd3cu: goto label_19fd3c;
        case 0x19fd40u: goto label_19fd40;
        case 0x19fd44u: goto label_19fd44;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd4cu: goto label_19fd4c;
        case 0x19fd50u: goto label_19fd50;
        case 0x19fd54u: goto label_19fd54;
        case 0x19fd58u: goto label_19fd58;
        case 0x19fd5cu: goto label_19fd5c;
        case 0x19fd60u: goto label_19fd60;
        case 0x19fd64u: goto label_19fd64;
        case 0x19fd68u: goto label_19fd68;
        case 0x19fd6cu: goto label_19fd6c;
        case 0x19fd70u: goto label_19fd70;
        case 0x19fd74u: goto label_19fd74;
        case 0x19fd78u: goto label_19fd78;
        case 0x19fd7cu: goto label_19fd7c;
        case 0x19fd80u: goto label_19fd80;
        case 0x19fd84u: goto label_19fd84;
        case 0x19fd88u: goto label_19fd88;
        case 0x19fd8cu: goto label_19fd8c;
        case 0x19fd90u: goto label_19fd90;
        case 0x19fd94u: goto label_19fd94;
        case 0x19fd98u: goto label_19fd98;
        case 0x19fd9cu: goto label_19fd9c;
        default: break;
    }

    ctx->pc = 0x19fd00u;

label_19fd00:
    // 0x19fd00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19fd04:
    // 0x19fd04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_19fd08:
    // 0x19fd08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x19fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_19fd0c:
    // 0x19fd0c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_19fd10:
    // 0x19fd10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19fd10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fd14:
    // 0x19fd14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_19fd18:
    // 0x19fd18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_19fd1c:
    // 0x19fd1c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x19fd1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_19fd20:
    // 0x19fd20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x19fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_19fd24:
    // 0x19fd24: 0x26710044  addiu       $s1, $s3, 0x44
    ctx->pc = 0x19fd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_19fd28:
    // 0x19fd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19fd2c:
    // 0x19fd2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fd30:
    // 0x19fd30: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x19fd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_19fd34:
    // 0x19fd34: 0x0  nop
    ctx->pc = 0x19fd34u;
    // NOP
label_19fd38:
    // 0x19fd38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fd3c:
    // 0x19fd3c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19fd3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19fd40:
    // 0x19fd40: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19fd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_19fd44:
    // 0x19fd44: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x19fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_19fd48:
    // 0x19fd48: 0x60f809  jalr        $v1
label_19fd4c:
    if (ctx->pc == 0x19FD4Cu) {
        ctx->pc = 0x19FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD48u;
        // 0x19fd4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD50u;
        goto label_19fd50;
    }
    ctx->pc = 0x19FD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FD50u);
        ctx->pc = 0x19FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD48u;
        // 0x19fd4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD48u, 0x19FD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FD50u;
label_19fd50:
    // 0x19fd50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fd54:
    // 0x19fd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fd58:
    // 0x19fd58: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19fd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19fd5c:
    // 0x19fd5c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19fd60:
    // 0x19fd60: 0x60f809  jalr        $v1
label_19fd64:
    if (ctx->pc == 0x19FD64u) {
        ctx->pc = 0x19FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD60u;
        // 0x19fd64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD68u;
        goto label_19fd68;
    }
    ctx->pc = 0x19FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FD68u);
        ctx->pc = 0x19FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD60u;
        // 0x19fd64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD60u, 0x19FD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FD68u;
label_19fd68:
    // 0x19fd68: 0x26100250  addiu       $s0, $s0, 0x250
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_19fd6c:
    // 0x19fd6c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x19fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_19fd70:
    // 0x19fd70: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x19fd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_19fd74:
    // 0x19fd74: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_19fd78:
    if (ctx->pc == 0x19FD78u) {
        ctx->pc = 0x19FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD74u;
        // 0x19fd78: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD7Cu;
        goto label_19fd7c;
    }
    ctx->pc = 0x19FD74u;
    {
        const bool branch_taken_0x19fd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD74u;
        // 0x19fd78: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd74) {
            ctx->pc = 0x19FD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fd38;
        }
    }
    ctx->pc = 0x19FD7Cu;
label_19fd7c:
    // 0x19fd7c: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x19fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_19fd80:
    // 0x19fd80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19fd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19fd84:
    // 0x19fd84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19fd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19fd88:
    // 0x19fd88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19fd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19fd8c:
    // 0x19fd8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19fd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19fd90:
    // 0x19fd90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x19fd90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19fd94:
    // 0x19fd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fd98:
    // 0x19fd98: 0x3e00008  jr          $ra
label_19fd9c:
    if (ctx->pc == 0x19FD9Cu) {
        ctx->pc = 0x19FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD98u;
        // 0x19fd9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDA0u;
        goto label_fallthrough_0x19fd98;
    }
    ctx->pc = 0x19FD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD98u;
        // 0x19fd9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19fd98:
    ctx->pc = 0x19FDA0u;
}
