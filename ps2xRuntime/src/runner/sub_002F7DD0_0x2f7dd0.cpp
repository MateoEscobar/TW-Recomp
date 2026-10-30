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

// Function: sub_002F7DD0
// Address: 0x2f7dd0 - 0x2f7ee0
void sub_002F7DD0_0x2f7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7DD0_0x2f7dd0");
#endif

    switch (ctx->pc) {
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e50u: goto label_2f7e50;
        case 0x2f7e58u: goto label_2f7e58;
        case 0x2f7e70u: goto label_2f7e70;
        case 0x2f7e7cu: goto label_2f7e7c;
        case 0x2f7eb4u: goto label_2f7eb4;
        default: break;
    }

    ctx->pc = 0x2f7dd0u;

    // 0x2f7dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f7dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7dd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f7dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2f7ddc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f7ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7de0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f7de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f7de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7de8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2f7de8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f7dec: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2f7decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2f7df0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2f7df4: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2f7df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2f7df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f7df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f7dfc: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2f7dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f7e00: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x2f7e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
    // 0x2f7e04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f7e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f7e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f7e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7e10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7e14: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x2f7e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2f7e18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2f7e1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f7e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f7e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7e24: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x2f7e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7e28: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f7e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f7e2c: 0x0  nop
    ctx->pc = 0x2f7e2cu;
    // NOP
label_2f7e30:
    // 0x2f7e30: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x2f7e30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2f7e34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f7e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f7e38: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2f7e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f7e3c: 0x0  nop
    ctx->pc = 0x2f7e3cu;
    // NOP
    // 0x2f7e40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F7E40u;
    {
        const bool branch_taken_0x2f7e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E40u;
        // 0x2f7e44: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e40) {
            ctx->pc = 0x2F7E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7e30;
        }
    }
    ctx->pc = 0x2F7E48u;
    // 0x2f7e48: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F7E48u;
    {
        const bool branch_taken_0x2f7e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E48u;
        // 0x2f7e4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e48) {
            ctx->pc = 0x2F7EACu;
            goto label_2f7eac;
        }
    }
    ctx->pc = 0x2F7E50u;
label_2f7e50:
    // 0x2f7e50: 0xc105774  jal         func_415DD0
    ctx->pc = 0x2F7E50u;
    SET_GPR_U32(ctx, 31, 0x2F7E58u);
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x2F7E50u, 0x2F7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E58u;
label_2f7e58:
    // 0x2f7e58: 0x944300d0  lhu         $v1, 0xD0($v0)
    ctx->pc = 0x2f7e58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2f7e5c: 0x38630021  xori        $v1, $v1, 0x21
    ctx->pc = 0x2f7e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)33);
    // 0x2f7e60: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7E60u;
    {
        const bool branch_taken_0x2f7e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E60u;
        // 0x2f7e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e60) {
            ctx->pc = 0x2F7EA8u;
            goto label_2f7ea8;
        }
    }
    ctx->pc = 0x2F7E68u;
    // 0x2f7e68: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2F7E68u;
    SET_GPR_U32(ctx, 31, 0x2F7E70u);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2F7E68u, 0x2F7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E70u;
label_2f7e70:
    // 0x2f7e70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f7e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e74: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2F7E74u;
    SET_GPR_U32(ctx, 31, 0x2F7E7Cu);
    ctx->pc = 0x2F7E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E74u;
    // 0x2f7e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F7E74u, 0x2F7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E7Cu;
label_2f7e7c:
    // 0x2f7e7c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f7e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7e80: 0x0  nop
    ctx->pc = 0x2f7e80u;
    // NOP
    // 0x2f7e84: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7E84u;
    {
        const bool branch_taken_0x2f7e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7e84) {
            ctx->pc = 0x2F7E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7E84u;
            // 0x2f7e88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7EACu;
            goto label_2f7eac;
        }
    }
    ctx->pc = 0x2F7E8Cu;
    // 0x2f7e8c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x2f7e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2f7e90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f7e94: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f7e98: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x2f7e98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2f7e9c: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x2f7e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2f7ea0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f7ea4: 0xa2030028  sb          $v1, 0x28($s0)
    ctx->pc = 0x2f7ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
label_2f7ea8:
    // 0x2f7ea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f7ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f7eac:
    // 0x2f7eac: 0xc10574c  jal         func_415D30
    ctx->pc = 0x2F7EACu;
    SET_GPR_U32(ctx, 31, 0x2F7EB4u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x2F7EACu, 0x2F7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7EB4u;
label_2f7eb4:
    // 0x2f7eb4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2f7eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f7eb8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F7EB8u;
    {
        const bool branch_taken_0x2f7eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7EB8u;
        // 0x2f7ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7eb8) {
            ctx->pc = 0x2F7E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7e50;
        }
    }
    ctx->pc = 0x2F7EC0u;
    // 0x2f7ec0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f7ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7ec4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f7ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f7ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7ecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f7eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7ed0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2f7ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7ED4u;
        // 0x2f7ed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7EDCu;
    // 0x2f7edc: 0x0  nop
    ctx->pc = 0x2f7edcu;
    // NOP
    ctx->pc = 0x2f7ee0u;
}
