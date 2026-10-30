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

// Function: sub_001D0AA8
// Address: 0x1d0aa8 - 0x1d0b70
void sub_001D0AA8_0x1d0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0AA8_0x1d0aa8");
#endif

    switch (ctx->pc) {
        case 0x1d0ad0u: goto label_1d0ad0;
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b08u: goto label_1d0b08;
        case 0x1d0b14u: goto label_1d0b14;
        case 0x1d0b30u: goto label_1d0b30;
        case 0x1d0b3cu: goto label_1d0b3c;
        default: break;
    }

    ctx->pc = 0x1d0aa8u;

    // 0x1d0aa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0aac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d0ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ab4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d0ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d0ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0abc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d0abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d0ac0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0ac8: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D0AC8u;
    SET_GPR_U32(ctx, 31, 0x1D0AD0u);
    ctx->pc = 0x1D0ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0AC8u;
    // 0x1d0acc: 0x26300250  addiu       $s0, $s1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D0AC8u, 0x1D0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0AD0u;
label_1d0ad0:
    // 0x1d0ad0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0adc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d0ae0: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x1d0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
    // 0x1d0ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ae8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1d0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x1d0aec: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1d0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1d0af0: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1d0af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1d0af4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1d0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x1d0af8: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D0AF8u;
    SET_GPR_U32(ctx, 31, 0x1D0B00u);
    ctx->pc = 0x1D0AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0AF8u;
    // 0x1d0afc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D0AF8u, 0x1D0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B00u;
label_1d0b00:
    // 0x1d0b00: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D0B00u;
    SET_GPR_U32(ctx, 31, 0x1D0B08u);
    ctx->pc = 0x1D0B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B00u;
    // 0x1d0b04: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D0B00u, 0x1D0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B08u;
label_1d0b08:
    // 0x1d0b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b0c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B14u);
    ctx->pc = 0x1D0B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B0Cu;
    // 0x1d0b10: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D0B0Cu, 0x1D0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B14u;
label_1d0b14:
    // 0x1d0b14: 0x0  nop
    ctx->pc = 0x1d0b14u;
    // NOP
    // 0x1d0b18: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0B18u;
    {
        const bool branch_taken_0x1d0b18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B18u;
        // 0x1d0b1c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b18) {
            ctx->pc = 0x1D0B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b08;
        }
    }
    ctx->pc = 0x1D0B20u;
    // 0x1d0b20: 0x26300450  addiu       $s0, $s1, 0x450
    ctx->pc = 0x1d0b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    // 0x1d0b24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0b28: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d0b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0b2c: 0x0  nop
    ctx->pc = 0x1d0b2cu;
    // NOP
label_1d0b30:
    // 0x1d0b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b34: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D0B34u;
    SET_GPR_U32(ctx, 31, 0x1D0B3Cu);
    ctx->pc = 0x1D0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B34u;
    // 0x1d0b38: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D0B34u, 0x1D0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B3Cu;
label_1d0b3c:
    // 0x1d0b3c: 0x0  nop
    ctx->pc = 0x1d0b3cu;
    // NOP
    // 0x1d0b40: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0B40u;
    {
        const bool branch_taken_0x1d0b40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B40u;
        // 0x1d0b44: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b40) {
            ctx->pc = 0x1D0B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b30;
        }
    }
    ctx->pc = 0x1D0B48u;
    // 0x1d0b48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d0b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b4c: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x1d0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x1d0b50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d0b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0b54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d0b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0b5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d0b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B64u;
        // 0x1d0b68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B6Cu;
    // 0x1d0b6c: 0x0  nop
    ctx->pc = 0x1d0b6cu;
    // NOP
    ctx->pc = 0x1d0b70u;
}
