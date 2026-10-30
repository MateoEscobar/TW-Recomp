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

// Function: sub_00454918
// Address: 0x454918 - 0x454d08
void sub_00454918_0x454918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454918_0x454918");
#endif

    switch (ctx->pc) {
        case 0x454990u: goto label_454990;
        case 0x4549a4u: goto label_4549a4;
        case 0x454aa0u: goto label_454aa0;
        case 0x454b70u: goto label_454b70;
        case 0x454c80u: goto label_454c80;
        case 0x454c98u: goto label_454c98;
        case 0x454cbcu: goto label_454cbc;
        case 0x454cccu: goto label_454ccc;
        default: break;
    }

    ctx->pc = 0x454918u;

    // 0x454918: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x454918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x45491c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x45491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x454920: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x454920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x454924: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x454924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x454928: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x454928u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45492c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x45492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x454930: 0x24579080  addiu       $s7, $v0, -0x6F80
    ctx->pc = 0x454930u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x454934: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x454934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x454938: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x454938u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45493c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x45493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x454940: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x454940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x454944: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x454944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x454948: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x454948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x45494c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x45494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x454950: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x454950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x454954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x454954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x454958: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x454958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x45495c: 0x10c000db  beqz        $a2, . + 4 + (0xDB << 2)
    ctx->pc = 0x45495Cu;
    {
        const bool branch_taken_0x45495c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x454960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45495Cu;
        // 0x454960: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45495c) {
            ctx->pc = 0x454CCCu;
            goto label_454ccc;
        }
    }
    ctx->pc = 0x454964u;
    // 0x454964: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x454964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x454968: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x454968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45496c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x45496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x454970: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x454970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454974: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x454974u;
    {
        const bool branch_taken_0x454974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x454978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454974u;
        // 0x454978: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454974) {
            ctx->pc = 0x454CACu;
            goto label_454cac;
        }
    }
    ctx->pc = 0x45497Cu;
    // 0x45497c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x45497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x454980: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x454980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x454984: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x454984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x454988: 0x26d4001c  addiu       $s4, $s6, 0x1C
    ctx->pc = 0x454988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x45498c: 0x158180  sll         $s0, $s5, 6
    ctx->pc = 0x45498cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_454990:
    // 0x454990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x454990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454994: 0x3d08821  addu        $s1, $fp, $s0
    ctx->pc = 0x454994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x454998: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x454998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45499c: 0xc120042  jal         func_480108
    ctx->pc = 0x45499Cu;
    SET_GPR_U32(ctx, 31, 0x4549A4u);
    ctx->pc = 0x4549A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45499Cu;
    // 0x4549a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480108u, 0x45499Cu, 0x4549A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4549A4u;
label_4549a4:
    // 0x4549a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4549a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4549a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4549ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4549acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4549b0: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x4549B0u;
    {
        const bool branch_taken_0x4549b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4549B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4549B0u;
        // 0x4549b4: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4549b0) {
            ctx->pc = 0x454A68u;
            goto label_454a68;
        }
    }
    ctx->pc = 0x4549B8u;
    // 0x4549b8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x4549b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4549bc: 0xc6270020  lwc1        $f7, 0x20($s1)
    ctx->pc = 0x4549bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4549c0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4549c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4549c4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x4549c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4549c8: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x4549c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x4549cc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x4549ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4549d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4549d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4549d4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4549d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4549d8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x4549d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4549dc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x4549dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x4549e0: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x4549e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4549e4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x4549e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x4549e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x4549e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4549ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4549ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4549f0: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x4549f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4549f4: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x4549f4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x4549f8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x4549f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4549fc: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x4549fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x454a00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x454a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x454a04: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x454a04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x454a08: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x454a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x454a0c: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x454a0cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x454a10: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x454a10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x454a14: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x454a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x454a18: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x454a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454a1c: 0x0  nop
    ctx->pc = 0x454a1cu;
    // NOP
    // 0x454a20: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x454A20u;
    {
        const bool branch_taken_0x454a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454A20u;
        // 0x454a24: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454a20) {
            ctx->pc = 0x454A34u;
            goto label_454a34;
        }
    }
    ctx->pc = 0x454A28u;
    // 0x454a28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x454a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x454A2Cu;
    {
        const bool branch_taken_0x454a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454a2c) {
            ctx->pc = 0x454A38u;
            goto label_454a38;
        }
    }
    ctx->pc = 0x454A34u;
label_454a34:
    // 0x454a34: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x454a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_454a38:
    // 0x454a38: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x454A38u;
    {
        const bool branch_taken_0x454a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x454a38) {
            ctx->pc = 0x454A54u;
            goto label_454a54;
        }
    }
    ctx->pc = 0x454A40u;
    // 0x454a40: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x454a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454a44: 0x0  nop
    ctx->pc = 0x454a44u;
    // NOP
    // 0x454a48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x454A48u;
    {
        const bool branch_taken_0x454a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454A48u;
        // 0x454a4c: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454a48) {
            ctx->pc = 0x454A54u;
            goto label_454a54;
        }
    }
    ctx->pc = 0x454A50u;
    // 0x454a50: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x454a50u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_454a54:
    // 0x454a54: 0x46000044  c1          0x44
    ctx->pc = 0x454a54u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x454a58: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x454a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454a5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x454A5Cu;
    {
        const bool branch_taken_0x454a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454A5Cu;
        // 0x454a60: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x454a5c) {
            ctx->pc = 0x454A6Cu;
            goto label_454a6c;
        }
    }
    ctx->pc = 0x454A64u;
    // 0x454a64: 0x0  nop
    ctx->pc = 0x454a64u;
    // NOP
label_454a68:
    // 0x454a68: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x454a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454a6c:
    // 0x454a6c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x454a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x454a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x454a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x454a74: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x454a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x454a78: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x454a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x454a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454a80: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x454a80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x454a84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x454a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x454a88: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x454a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454a8c: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x454a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x454a90: 0x24640094  addiu       $a0, $v1, 0x94
    ctx->pc = 0x454a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x454a94: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x454a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454a98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x454A98u;
    {
        const bool branch_taken_0x454a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454A98u;
        // 0x454a9c: 0xc4830004  lwc1        $f3, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x454a98) {
            ctx->pc = 0x454ABCu;
            goto label_454abc;
        }
    }
    ctx->pc = 0x454AA0u;
label_454aa0:
    // 0x454aa0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x454aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x454aa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x454aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x454aa8: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x454AA8u;
    {
        const bool branch_taken_0x454aa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x454AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454AA8u;
        // 0x454aac: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454aa8) {
            ctx->pc = 0x454AFCu;
            goto label_454afc;
        }
    }
    ctx->pc = 0x454AB0u;
    // 0x454ab0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x454ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454ab4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x454ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454ab8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x454ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454abc:
    // 0x454abc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x454abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454ac0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x454ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x454ac4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x454ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454ac8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x454ac8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x454acc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x454accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454ad0: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x454ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454ad4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x454ad4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x454ad8: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x454ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454adc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x454adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x454ae0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x454ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x454ae4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x454ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x454ae8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x454ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454aec: 0x0  nop
    ctx->pc = 0x454aecu;
    // NOP
    // 0x454af0: 0x4502ffeb  bc1fl       . + 4 + (-0x15 << 2)
    ctx->pc = 0x454AF0u;
    {
        const bool branch_taken_0x454af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x454af0) {
            ctx->pc = 0x454AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454AF0u;
            // 0x454af4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454aa0;
        }
    }
    ctx->pc = 0x454AF8u;
    // 0x454af8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x454af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_454afc:
    // 0x454afc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x454afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x454b00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x454b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x454b04: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x454B04u;
    {
        const bool branch_taken_0x454b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x454B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454B04u;
        // 0x454b08: 0x8cc2ad18  lw          $v0, -0x52E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454b04) {
            ctx->pc = 0x454BC8u;
            goto label_454bc8;
        }
    }
    ctx->pc = 0x454B0Cu;
    // 0x454b0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x454b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x454b10: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x454b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x454b14: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x454b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x454b18: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x454b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454b1c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x454b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x454b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x454b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x454b24: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x454b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454b28: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x454b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x454b2c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x454b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454b30: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x454b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454b34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x454b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x454b38: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x454b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454b3c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x454b3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x454b40: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x454b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454b44: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x454b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454b48: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x454b48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x454b4c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x454b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454b50: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x454b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x454b54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x454b54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x454b58: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x454b58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x454b5c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x454b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x454b60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x454b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454b64: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x454B64u;
    {
        const bool branch_taken_0x454b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454B64u;
        // 0x454b68: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454b64) {
            ctx->pc = 0x454BBCu;
            goto label_454bbc;
        }
    }
    ctx->pc = 0x454B6Cu;
    // 0x454b6c: 0x0  nop
    ctx->pc = 0x454b6cu;
    // NOP
label_454b70:
    // 0x454b70: 0x10e60015  beq         $a3, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x454B70u;
    {
        const bool branch_taken_0x454b70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x454B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454B70u;
        // 0x454b74: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454b70) {
            ctx->pc = 0x454BC8u;
            goto label_454bc8;
        }
    }
    ctx->pc = 0x454B78u;
    // 0x454b78: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x454b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454b7c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x454b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454b80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x454b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454b84: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x454b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454b88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x454b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x454b8c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x454b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454b90: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x454b90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x454b94: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x454b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454b98: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x454b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454b9c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x454b9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x454ba0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x454ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454ba4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x454ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x454ba8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x454ba8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x454bac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x454bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x454bb0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x454bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x454bb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x454bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x454bb8: 0x0  nop
    ctx->pc = 0x454bb8u;
    // NOP
label_454bbc:
    // 0x454bbc: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x454BBCu;
    {
        const bool branch_taken_0x454bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x454bbc) {
            ctx->pc = 0x454BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454BBCu;
            // 0x454bc0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454b70;
        }
    }
    ctx->pc = 0x454BC4u;
    // 0x454bc4: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x454bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
label_454bc8:
    // 0x454bc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x454bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454bcc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x454BCCu;
    {
        const bool branch_taken_0x454bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x454BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454BCCu;
        // 0x454bd0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454bcc) {
            ctx->pc = 0x454C98u;
            goto label_454c98;
        }
    }
    ctx->pc = 0x454BD4u;
    // 0x454bd4: 0x21e2821  addu        $a1, $s0, $fp
    ctx->pc = 0x454bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x454bd8: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x454bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x454bdc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x454bdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x454be0: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x454be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x454be4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x454be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x454be8: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x454be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x454bec: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x454becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x454bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x454bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x454bf4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x454bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x454bf8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x454bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x454bfc: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x454bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x454c00: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x454c00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x454c04: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x454c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x454c08: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x454c08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x454c0c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x454c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x454c10: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x454c10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x454c14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x454c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454c18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x454c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x454c1c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x454c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x454c20: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x454c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x454c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x454c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x454c28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x454c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x454c2c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x454c2cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x454c30: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x454c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x454c34: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x454c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x454c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x454c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x454c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x454c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x454c40: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x454c40u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x454c44: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x454c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x454c48: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x454c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x454c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x454c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x454c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x454c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x454c54: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x454c54u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x454c58: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x454c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x454c5c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x454c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x454c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x454c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x454c64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x454c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x454c68: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x454c68u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x454c6c: 0x1667000a  bne         $s3, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x454C6Cu;
    {
        const bool branch_taken_0x454c6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 7));
        ctx->pc = 0x454C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454C6Cu;
        // 0x454c70: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x454c6c) {
            ctx->pc = 0x454C98u;
            goto label_454c98;
        }
    }
    ctx->pc = 0x454C74u;
    // 0x454c74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x454c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454c78: 0xc11884c  jal         func_462130
    ctx->pc = 0x454C78u;
    SET_GPR_U32(ctx, 31, 0x454C80u);
    ctx->pc = 0x454C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454C78u;
    // 0x454c7c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462130u, 0x454C78u, 0x454C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C80u;
label_454c80:
    // 0x454c80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x454c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454c84: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x454c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x454c88: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x454c88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454c8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x454c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454c90: 0xc129622  jal         func_4A5888
    ctx->pc = 0x454C90u;
    SET_GPR_U32(ctx, 31, 0x454C98u);
    ctx->pc = 0x454C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454C90u;
    // 0x454c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x454C90u, 0x454C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C98u;
label_454c98:
    // 0x454c98: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x454c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x454c9c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x454c9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454ca0: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x454ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x454ca4: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x454CA4u;
    {
        const bool branch_taken_0x454ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x454CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454CA4u;
        // 0x454ca8: 0x158180  sll         $s0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454ca4) {
            ctx->pc = 0x454990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454990;
        }
    }
    ctx->pc = 0x454CACu;
label_454cac:
    // 0x454cac: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x454CACu;
    {
        const bool branch_taken_0x454cac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x454CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454CACu;
        // 0x454cb0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454cac) {
            ctx->pc = 0x454CCCu;
            goto label_454ccc;
        }
    }
    ctx->pc = 0x454CB4u;
    // 0x454cb4: 0xc11884c  jal         func_462130
    ctx->pc = 0x454CB4u;
    SET_GPR_U32(ctx, 31, 0x454CBCu);
    ctx->pc = 0x454CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454CB4u;
    // 0x454cb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462130u, 0x454CB4u, 0x454CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454CBCu;
label_454cbc:
    // 0x454cbc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x454cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x454cc0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x454cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454cc4: 0xc129622  jal         func_4A5888
    ctx->pc = 0x454CC4u;
    SET_GPR_U32(ctx, 31, 0x454CCCu);
    ctx->pc = 0x454CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454CC4u;
    // 0x454cc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x454CC4u, 0x454CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454CCCu;
label_454ccc:
    // 0x454ccc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x454cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454cd0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x454cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x454cd4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x454cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x454cd8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x454cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x454cdc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x454cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x454ce0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x454ce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x454ce4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x454ce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x454ce8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x454ce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x454cec: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x454cecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x454cf0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x454cf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x454cf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x454cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x454cf8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x454cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x454cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x454CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454CFCu;
        // 0x454d00: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454D04u;
    // 0x454d04: 0x0  nop
    ctx->pc = 0x454d04u;
    // NOP
    ctx->pc = 0x454d08u;
}
