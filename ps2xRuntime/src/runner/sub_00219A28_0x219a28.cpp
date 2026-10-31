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

// Function: sub_00219A28
// Address: 0x219a28 - 0x219ad0
void sub_00219A28_0x219a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A28_0x219a28");
#endif

    switch (ctx->pc) {
        case 0x219a70u: goto label_219a70;
        case 0x219a8cu: goto label_219a8c;
        default: break;
    }

    ctx->pc = 0x219a28u;

    // 0x219a28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x219a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x219a2c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x219a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x219a30: 0x8c620170  lw          $v0, 0x170($v1)
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x510170u));
    // 0x219a34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x219a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x219a38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x219a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x219a3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x219a40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x219a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x219a44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219A44u;
    {
        const bool branch_taken_0x219a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A44u;
        // 0x219a48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a44) {
            ctx->pc = 0x219A54u;
            goto label_219a54;
        }
    }
    ctx->pc = 0x219A4Cu;
    // 0x219a4c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x219A4Cu;
    {
        const bool branch_taken_0x219a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A4Cu;
        // 0x219a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a4c) {
            ctx->pc = 0x219AB4u;
            goto label_219ab4;
        }
    }
    ctx->pc = 0x219A54u;
label_219a54:
    // 0x219a54: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x219a58: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x219a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x219a5c: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x219a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x219a60: 0x24920090  addiu       $s2, $a0, 0x90
    ctx->pc = 0x219a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x219a64: 0x2470ff50  addiu       $s0, $v1, -0xB0
    ctx->pc = 0x219a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967120));
    // 0x219a68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a6c: 0x0  nop
    ctx->pc = 0x219a6cu;
    // NOP
label_219a70:
    // 0x219a70: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x219a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x219a74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x219A74u;
    {
        const bool branch_taken_0x219a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A74u;
        // 0x219a78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a74) {
            ctx->pc = 0x219AA0u;
            goto label_219aa0;
        }
    }
    ctx->pc = 0x219A7Cu;
    // 0x219a7c: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x219a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x219a80: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x219a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x219a84: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x219A84u;
    SET_GPR_U32(ctx, 31, 0x219A8Cu);
    ctx->pc = 0x219A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A84u;
    // 0x219a88: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x219A84u, 0x219A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A8Cu;
label_219a8c:
    // 0x219a8c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x219a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219a90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x219a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219a94: 0x0  nop
    ctx->pc = 0x219a94u;
    // NOP
    // 0x219a98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x219A98u;
    {
        const bool branch_taken_0x219a98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x219A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A98u;
        // 0x219a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a98) {
            ctx->pc = 0x219AB4u;
            goto label_219ab4;
        }
    }
    ctx->pc = 0x219AA0u;
label_219aa0:
    // 0x219aa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219aa4: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x219aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x219aa8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x219AA8u;
    {
        const bool branch_taken_0x219aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AA8u;
        // 0x219aac: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219aa8) {
            ctx->pc = 0x219A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219a70;
        }
    }
    ctx->pc = 0x219AB0u;
    // 0x219ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ab4:
    // 0x219ab4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x219ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219ab8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x219ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219ac0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x219ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x219AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC8u;
        // 0x219acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219AD0u;
}
