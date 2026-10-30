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

// Function: sub_00419EE0
// Address: 0x419ee0 - 0x419fc8
void sub_00419EE0_0x419ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419EE0_0x419ee0");
#endif

    switch (ctx->pc) {
        case 0x419f40u: goto label_419f40;
        case 0x419f48u: goto label_419f48;
        case 0x419f64u: goto label_419f64;
        default: break;
    }

    ctx->pc = 0x419ee0u;

    // 0x419ee0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x419ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x419ee4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x419ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x419ee8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x419ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x419eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x419eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x419ef0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x419ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x419ef4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x419ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x419ef8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x419ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419efc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x419efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x419f00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x419f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419f04: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x419f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x419f08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x419f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419f0c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x419f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x419f10: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x419f10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419f14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x419f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x419f18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x419f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x419f1c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x419f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x419f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419f24: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x419f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x419f28: 0x86620224  lh          $v0, 0x224($s3)
    ctx->pc = 0x419f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x419f2c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x419F2Cu;
    {
        const bool branch_taken_0x419f2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x419F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F2Cu;
        // 0x419f30: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419f2c) {
            ctx->pc = 0x419F98u;
            goto label_419f98;
        }
    }
    ctx->pc = 0x419F34u;
    // 0x419f34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x419f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x419f38: 0x26710228  addiu       $s1, $s3, 0x228
    ctx->pc = 0x419f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 552));
    // 0x419f3c: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x419f3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_419f40:
    // 0x419f40: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419F40u;
    SET_GPR_U32(ctx, 31, 0x419F48u);
    ctx->pc = 0x419F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419F40u;
    // 0x419f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419F40u, 0x419F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419F48u;
label_419f48:
    // 0x419f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x419f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419f4c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x419F4Cu;
    {
        const bool branch_taken_0x419f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F4Cu;
        // 0x419f50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419f4c) {
            ctx->pc = 0x419F84u;
            goto label_419f84;
        }
    }
    ctx->pc = 0x419F54u;
    // 0x419f54: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x419f54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x419f58: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x419f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x419f5c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x419F5Cu;
    SET_GPR_U32(ctx, 31, 0x419F64u);
    ctx->pc = 0x419F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419F5Cu;
    // 0x419f60: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x419F5Cu, 0x419F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419F64u;
label_419f64:
    // 0x419f64: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x419f64u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x419f68: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x419f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x419f6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x419f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x419f70: 0x0  nop
    ctx->pc = 0x419f70u;
    // NOP
    // 0x419f74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x419F74u;
    {
        const bool branch_taken_0x419f74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x419f74) {
            ctx->pc = 0x419F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419F74u;
            // 0x419f78: 0x86620224  lh          $v0, 0x224($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419F88u;
            goto label_419f88;
        }
    }
    ctx->pc = 0x419F7Cu;
    // 0x419f7c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x419f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x419f80: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x419f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419f84:
    // 0x419f84: 0x86620224  lh          $v0, 0x224($s3)
    ctx->pc = 0x419f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
label_419f88:
    // 0x419f88: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x419f88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x419f8c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x419f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x419f90: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x419F90u;
    {
        const bool branch_taken_0x419f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F90u;
        // 0x419f94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419f90) {
            ctx->pc = 0x419F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419f40;
        }
    }
    ctx->pc = 0x419F98u;
label_419f98:
    // 0x419f98: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x419f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419f9c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x419f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x419fa0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x419fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x419fa4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x419fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x419fa8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x419fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x419fac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x419facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419fb0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x419fb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419fb4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x419fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419fb8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x419fb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x419FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419FC0u;
        // 0x419fc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419FC8u;
}
