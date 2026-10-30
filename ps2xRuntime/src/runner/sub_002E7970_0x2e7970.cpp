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

// Function: sub_002E7970
// Address: 0x2e7970 - 0x2e7a68
void sub_002E7970_0x2e7970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7970_0x2e7970");
#endif

    switch (ctx->pc) {
        case 0x2e79e0u: goto label_2e79e0;
        case 0x2e7a48u: goto label_2e7a48;
        default: break;
    }

    ctx->pc = 0x2e7970u;

    // 0x2e7970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e7970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e7974: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e7974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7978: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e7978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e797c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e797cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e7980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e7980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e7984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7988: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e798c: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x2e798cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x2e7990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7998: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e7998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e799c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e799cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79a0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e79a4: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x2e79a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x2e79a8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2e79ac: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e79acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79b0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e79b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79b4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2e79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2e79b8: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x2e79b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e79bc: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x2e79bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e79c0: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x2e79c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79c4: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x2e79c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79c8: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x2e79c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79cc: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x2e79ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79d0: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x2e79d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79d4: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2e79d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e79d8: 0xc088b98  jal         func_222E60
    ctx->pc = 0x2E79D8u;
    SET_GPR_U32(ctx, 31, 0x2E79E0u);
    ctx->pc = 0x2E79DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E79D8u;
    // 0x2e79dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x2E79D8u, 0x2E79E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79E0u;
label_2e79e0:
    // 0x2e79e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e79e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e79e4: 0x0  nop
    ctx->pc = 0x2e79e4u;
    // NOP
    // 0x2e79e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e79e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e79ec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2e79ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2e79f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2e79f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2e79f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e79f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e79f8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E79F8u;
    {
        const bool branch_taken_0x2e79f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2E79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79F8u;
        // 0x2e79fc: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79f8) {
            ctx->pc = 0x2E7A14u;
            goto label_2e7a14;
        }
    }
    ctx->pc = 0x2E7A00u;
    // 0x2e7a00: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2e7a00u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a04: 0x0  nop
    ctx->pc = 0x2e7a04u;
    // NOP
    // 0x2e7a08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e7a0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7A0Cu;
    {
        const bool branch_taken_0x2e7a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A0Cu;
        // 0x2e7a10: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a0c) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E7A14u;
label_2e7a14:
    // 0x2e7a14: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2e7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2e7a18: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e7a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2e7a1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a24: 0x0  nop
    ctx->pc = 0x2e7a24u;
    // NOP
    // 0x2e7a28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e7a2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e7a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e7a30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e7a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e7a34:
    // 0x2e7a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e7a3c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e7a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7a40: 0xc088b90  jal         func_222E40
    ctx->pc = 0x2E7A40u;
    SET_GPR_U32(ctx, 31, 0x2E7A48u);
    ctx->pc = 0x2E7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A40u;
    // 0x2e7a44: 0xa602001a  sh          $v0, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2E7A40u, 0x2E7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A48u;
label_2e7a48:
    // 0x2e7a48: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x2e7a48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7a4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e7a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e7a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7a54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e7a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7a58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e7a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A60u;
        // 0x2e7a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7A68u;
}
