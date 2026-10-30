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

// Function: sub_00454D08
// Address: 0x454d08 - 0x455108
void sub_00454D08_0x454d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454D08_0x454d08");
#endif

    switch (ctx->pc) {
        case 0x454d70u: goto label_454d70;
        case 0x454d88u: goto label_454d88;
        case 0x454e80u: goto label_454e80;
        case 0x454f50u: goto label_454f50;
        case 0x455088u: goto label_455088;
        case 0x4550a0u: goto label_4550a0;
        case 0x4550c4u: goto label_4550c4;
        case 0x4550d4u: goto label_4550d4;
        default: break;
    }

    ctx->pc = 0x454d08u;

    // 0x454d08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x454d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x454d0c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x454d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x454d10: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x454d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x454d14: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x454d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x454d18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x454d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454d1c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x454d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x454d20: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x454d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454d24: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x454d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x454d28: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x454d28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454d2c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x454d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x454d30: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x454d30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454d34: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x454d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x454d38: 0x245e9080  addiu       $fp, $v0, -0x6F80
    ctx->pc = 0x454d38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x454d3c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x454d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x454d40: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x454d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x454d44: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x454d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x454d48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x454d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x454d4c: 0x8ee3006c  lw          $v1, 0x6C($s7)
    ctx->pc = 0x454d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 108)));
    // 0x454d50: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x454d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x454d54: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x454d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x454d58: 0x10c000d6  beqz        $a2, . + 4 + (0xD6 << 2)
    ctx->pc = 0x454D58u;
    {
        const bool branch_taken_0x454d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x454D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454D58u;
        // 0x454d5c: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454d58) {
            ctx->pc = 0x4550B4u;
            goto label_4550b4;
        }
    }
    ctx->pc = 0x454D60u;
    // 0x454d60: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x454d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x454d64: 0x26f5001c  addiu       $s5, $s7, 0x1C
    ctx->pc = 0x454d64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x454d68: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x454d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x454d6c: 0x0  nop
    ctx->pc = 0x454d6cu;
    // NOP
label_454d70:
    // 0x454d70: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x454d70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x454d74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x454d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454d78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x454d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454d7c: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x454d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x454d80: 0xc120042  jal         func_480108
    ctx->pc = 0x454D80u;
    SET_GPR_U32(ctx, 31, 0x454D88u);
    ctx->pc = 0x454D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454D80u;
    // 0x454d84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480108u, 0x454D80u, 0x454D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454D88u;
label_454d88:
    // 0x454d88: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x454d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x454d8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x454d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x454d90: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x454d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x454d94: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x454D94u;
    {
        const bool branch_taken_0x454d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x454D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454D94u;
        // 0x454d98: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454d94) {
            ctx->pc = 0x454E48u;
            goto label_454e48;
        }
    }
    ctx->pc = 0x454D9Cu;
    // 0x454d9c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x454d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x454da0: 0xc6270020  lwc1        $f7, 0x20($s1)
    ctx->pc = 0x454da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x454da4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x454da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454da8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x454da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454dac: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x454dacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x454db0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x454db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454db4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x454db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x454db8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x454db8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x454dbc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x454dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454dc0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x454dc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x454dc4: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x454dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454dc8: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x454dc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x454dcc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x454dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454dd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x454dd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x454dd4: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x454dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x454dd8: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x454dd8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x454ddc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x454ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454de0: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x454de0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x454de4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x454de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x454de8: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x454de8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x454dec: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x454decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x454df0: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x454df0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x454df4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x454df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x454df8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x454df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x454dfc: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x454dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454e00: 0x0  nop
    ctx->pc = 0x454e00u;
    // NOP
    // 0x454e04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x454E04u;
    {
        const bool branch_taken_0x454e04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454E04u;
        // 0x454e08: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454e04) {
            ctx->pc = 0x454E18u;
            goto label_454e18;
        }
    }
    ctx->pc = 0x454E0Cu;
    // 0x454e0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x454e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x454E10u;
    {
        const bool branch_taken_0x454e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454e10) {
            ctx->pc = 0x454E1Cu;
            goto label_454e1c;
        }
    }
    ctx->pc = 0x454E18u;
label_454e18:
    // 0x454e18: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x454e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_454e1c:
    // 0x454e1c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x454E1Cu;
    {
        const bool branch_taken_0x454e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x454e1c) {
            ctx->pc = 0x454E38u;
            goto label_454e38;
        }
    }
    ctx->pc = 0x454E24u;
    // 0x454e24: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x454e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454e28: 0x0  nop
    ctx->pc = 0x454e28u;
    // NOP
    // 0x454e2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x454E2Cu;
    {
        const bool branch_taken_0x454e2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454E2Cu;
        // 0x454e30: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454e2c) {
            ctx->pc = 0x454E38u;
            goto label_454e38;
        }
    }
    ctx->pc = 0x454E34u;
    // 0x454e34: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x454e34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_454e38:
    // 0x454e38: 0x46000044  c1          0x44
    ctx->pc = 0x454e38u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x454e3c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x454e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454e40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x454E40u;
    {
        const bool branch_taken_0x454e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454E40u;
        // 0x454e44: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454e40) {
            ctx->pc = 0x454E4Cu;
            goto label_454e4c;
        }
    }
    ctx->pc = 0x454E48u;
label_454e48:
    // 0x454e48: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x454e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454e4c:
    // 0x454e4c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x454e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x454e50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x454e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x454e54: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x454e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x454e58: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x454e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x454e5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454e60: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x454e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x454e64: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x454e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x454e68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x454e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454e6c: 0x24640094  addiu       $a0, $v1, 0x94
    ctx->pc = 0x454e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x454e70: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x454e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454e74: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x454e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454e78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x454E78u;
    {
        const bool branch_taken_0x454e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454E78u;
        // 0x454e7c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454e78) {
            ctx->pc = 0x454E9Cu;
            goto label_454e9c;
        }
    }
    ctx->pc = 0x454E80u;
label_454e80:
    // 0x454e80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x454e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x454e84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x454e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x454e88: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x454E88u;
    {
        const bool branch_taken_0x454e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x454E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454E88u;
        // 0x454e8c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454e88) {
            ctx->pc = 0x454EDCu;
            goto label_454edc;
        }
    }
    ctx->pc = 0x454E90u;
    // 0x454e90: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x454e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454e94: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x454e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454e98: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x454e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454e9c:
    // 0x454e9c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x454e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x454ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x454ea4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x454ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454ea8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x454ea8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x454eac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x454eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454eb0: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x454eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454eb4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x454eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x454eb8: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x454eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454ebc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x454ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x454ec0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x454ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x454ec4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x454ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x454ec8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x454ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454ecc: 0x0  nop
    ctx->pc = 0x454eccu;
    // NOP
    // 0x454ed0: 0x4500ffeb  bc1f        . + 4 + (-0x15 << 2)
    ctx->pc = 0x454ED0u;
    {
        const bool branch_taken_0x454ed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454ED0u;
        // 0x454ed4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454ed0) {
            ctx->pc = 0x454E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454e80;
        }
    }
    ctx->pc = 0x454ED8u;
    // 0x454ed8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x454ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_454edc:
    // 0x454edc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x454edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x454ee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x454ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x454ee4: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x454EE4u;
    {
        const bool branch_taken_0x454ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x454EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454EE4u;
        // 0x454ee8: 0x8cc2ad18  lw          $v0, -0x52E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454ee4) {
            ctx->pc = 0x454FA8u;
            goto label_454fa8;
        }
    }
    ctx->pc = 0x454EECu;
    // 0x454eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x454eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x454ef0: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x454ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x454ef4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x454ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x454ef8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x454ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454efc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x454efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x454f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x454f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x454f04: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x454f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454f08: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x454f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x454f0c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x454f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454f10: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x454f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454f14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x454f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x454f18: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x454f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454f1c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x454f1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x454f20: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x454f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454f24: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x454f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454f28: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x454f28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x454f2c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x454f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454f30: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x454f30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x454f34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x454f34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x454f38: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x454f38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x454f3c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x454f3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x454f40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x454f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454f44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x454F44u;
    {
        const bool branch_taken_0x454f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454F44u;
        // 0x454f48: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454f44) {
            ctx->pc = 0x454F9Cu;
            goto label_454f9c;
        }
    }
    ctx->pc = 0x454F4Cu;
    // 0x454f4c: 0x0  nop
    ctx->pc = 0x454f4cu;
    // NOP
label_454f50:
    // 0x454f50: 0x10660015  beq         $v1, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x454F50u;
    {
        const bool branch_taken_0x454f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x454F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454F50u;
        // 0x454f54: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454f50) {
            ctx->pc = 0x454FA8u;
            goto label_454fa8;
        }
    }
    ctx->pc = 0x454F58u;
    // 0x454f58: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x454f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454f5c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x454f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454f60: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x454f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454f64: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x454f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x454f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x454f6c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x454f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454f70: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x454f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x454f74: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x454f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454f78: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x454f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454f7c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x454f7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x454f80: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x454f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454f84: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x454f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x454f88: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x454f88u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x454f8c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x454f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x454f90: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x454f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x454f94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x454f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454f98: 0x0  nop
    ctx->pc = 0x454f98u;
    // NOP
label_454f9c:
    // 0x454f9c: 0x4500ffec  bc1f        . + 4 + (-0x14 << 2)
    ctx->pc = 0x454F9Cu;
    {
        const bool branch_taken_0x454f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454F9Cu;
        // 0x454fa0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454f9c) {
            ctx->pc = 0x454F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454f50;
        }
    }
    ctx->pc = 0x454FA4u;
    // 0x454fa4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x454fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_454fa8:
    // 0x454fa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x454fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454fac: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x454FACu;
    {
        const bool branch_taken_0x454fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x454FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454FACu;
        // 0x454fb0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454fac) {
            ctx->pc = 0x4550A0u;
            goto label_4550a0;
        }
    }
    ctx->pc = 0x454FB4u;
    // 0x454fb4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x454fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x454fb8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x454fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x454fbc: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x454fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x454fc0: 0x2841018  mult        $v0, $s4, $a0
    ctx->pc = 0x454fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x454fc4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x454fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x454fc8: 0x5e2021  addu        $a0, $v0, $fp
    ctx->pc = 0x454fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x454fcc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x454fccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x454fd0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x454fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x454fd4: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x454fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x454fd8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x454fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x454fdc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x454fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x454fe0: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x454fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x454fe4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x454fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x454fe8: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x454fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x454fec: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x454fecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x454ff0: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x454ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x454ff4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x454ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x454ff8: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x454ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x454ffc: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x454ffcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x455000: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x455000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x455004: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x455004u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x455008: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x455008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45500c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x455010: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x455010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x455014: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x455014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x455018: 0xc6c50004  lwc1        $f5, 0x4($s6)
    ctx->pc = 0x455018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45501c: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x45501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x455020: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x455020u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x455024: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x455024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x455028: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x455028u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x45502c: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x45502cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x455030: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x455030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x455034: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x455034u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x455038: 0xc4c90008  lwc1        $f9, 0x8($a2)
    ctx->pc = 0x455038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x45503c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x45503cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x455040: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x455040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x455044: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x455044u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x455048: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x455048u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x45504c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x45504cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x455050: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x455050u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x455054: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x455054u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x455058: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x455058u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x45505c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x45505cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x455060: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x455060u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x455064: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x455064u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x455068: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x455068u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x45506c: 0xe4840048  swc1        $f4, 0x48($a0)
    ctx->pc = 0x45506cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x455070: 0xe4880040  swc1        $f8, 0x40($a0)
    ctx->pc = 0x455070u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x455074: 0x1688000a  bne         $s4, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x455074u;
    {
        const bool branch_taken_0x455074 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 8));
        ctx->pc = 0x455078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455074u;
        // 0x455078: 0xe4860044  swc1        $f6, 0x44($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x455074) {
            ctx->pc = 0x4550A0u;
            goto label_4550a0;
        }
    }
    ctx->pc = 0x45507Cu;
    // 0x45507c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x45507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455080: 0xc11884c  jal         func_462130
    ctx->pc = 0x455080u;
    SET_GPR_U32(ctx, 31, 0x455088u);
    ctx->pc = 0x455084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455080u;
    // 0x455084: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462130u, 0x455080u, 0x455088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455088u;
label_455088:
    // 0x455088: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x455088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45508c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x45508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x455090: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x455090u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455094: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x455094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455098: 0xc129622  jal         func_4A5888
    ctx->pc = 0x455098u;
    SET_GPR_U32(ctx, 31, 0x4550A0u);
    ctx->pc = 0x45509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455098u;
    // 0x45509c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x455098u, 0x4550A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550A0u;
label_4550a0:
    // 0x4550a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4550a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4550a4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x4550a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4550a8: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x4550a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4550ac: 0x1440ff30  bnez        $v0, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x4550ACu;
    {
        const bool branch_taken_0x4550ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4550B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4550ACu;
        // 0x4550b0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4550ac) {
            ctx->pc = 0x454D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454d70;
        }
    }
    ctx->pc = 0x4550B4u;
label_4550b4:
    // 0x4550b4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x4550B4u;
    {
        const bool branch_taken_0x4550b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4550B4u;
        // 0x4550b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4550b4) {
            ctx->pc = 0x4550D4u;
            goto label_4550d4;
        }
    }
    ctx->pc = 0x4550BCu;
    // 0x4550bc: 0xc11884c  jal         func_462130
    ctx->pc = 0x4550BCu;
    SET_GPR_U32(ctx, 31, 0x4550C4u);
    ctx->pc = 0x4550C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4550BCu;
    // 0x4550c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462130u, 0x4550BCu, 0x4550C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550C4u;
label_4550c4:
    // 0x4550c4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4550c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4550c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4550c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4550cc: 0xc129622  jal         func_4A5888
    ctx->pc = 0x4550CCu;
    SET_GPR_U32(ctx, 31, 0x4550D4u);
    ctx->pc = 0x4550D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4550CCu;
    // 0x4550d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x4550CCu, 0x4550D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550D4u;
label_4550d4:
    // 0x4550d4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4550d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4550d8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4550d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4550dc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4550dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4550e0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4550e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4550e4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4550e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4550e8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4550e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4550ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4550ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4550f0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4550f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4550f4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4550f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4550f8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4550f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4550fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4550fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x455100: 0x3e00008  jr          $ra
    ctx->pc = 0x455100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455100u;
        // 0x455104: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x455108u;
}
