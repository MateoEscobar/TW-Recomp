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

// Function: sub_0024E938
// Address: 0x24e938 - 0x24ea60
void sub_0024E938_0x24e938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E938_0x24e938");
#endif

    ctx->pc = 0x24e938u;

    // 0x24e938: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x24e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e93c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24e93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24e940: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x24e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e944: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x24e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e948: 0x460022c1  sub.s       $f11, $f4, $f0
    ctx->pc = 0x24e948u;
    ctx->f[11] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x24e94c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x24e94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24e950: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x24e950u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x24e954: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x24e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24e958: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x24e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e95c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24e95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e960: 0x46056281  sub.s       $f10, $f12, $f5
    ctx->pc = 0x24e960u;
    ctx->f[10] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x24e964: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e968: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x24e968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x24e96c: 0x46041241  sub.s       $f9, $f2, $f4
    ctx->pc = 0x24e96cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x24e970: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x24e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24e974: 0x460c0a01  sub.s       $f8, $f1, $f12
    ctx->pc = 0x24e974u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x24e978: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x24e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e97c: 0x46035102  mul.s       $f4, $f10, $f3
    ctx->pc = 0x24e97cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x24e980: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x24e980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24e984: 0x46005842  mul.s       $f1, $f11, $f0
    ctx->pc = 0x24e984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x24e988: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x24e988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24e98c: 0x46034142  mul.s       $f5, $f8, $f3
    ctx->pc = 0x24e98cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x24e990: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x24e990u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24e994: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x24e994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x24e998: 0xe7a90004  swc1        $f9, 0x4($sp)
    ctx->pc = 0x24e998u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24e99c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x24e99cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x24e9a0: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x24e9a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24e9a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24e9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24e9a8: 0x46002901  sub.s       $f4, $f5, $f0
    ctx->pc = 0x24e9a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x24e9ac: 0xe7ab0024  swc1        $f11, 0x24($sp)
    ctx->pc = 0x24e9acu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e9b0: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x24e9b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x24e9b4: 0x0  nop
    ctx->pc = 0x24e9b4u;
    // NOP
    // 0x24e9b8: 0x0  nop
    ctx->pc = 0x24e9b8u;
    // NOP
    // 0x24e9bc: 0x460409c3  div.s       $f7, $f1, $f4
    ctx->pc = 0x24e9bcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x24e9c0: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x24e9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e9c4: 0x0  nop
    ctx->pc = 0x24e9c4u;
    // NOP
    // 0x24e9c8: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x24E9C8u;
    {
        const bool branch_taken_0x24e9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9C8u;
        // 0x24e9cc: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9c8) {
            ctx->pc = 0x24EA54u;
            goto label_24ea54;
        }
    }
    ctx->pc = 0x24E9D0u;
    // 0x24e9d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e9d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e9d8: 0x0  nop
    ctx->pc = 0x24e9d8u;
    // NOP
    // 0x24e9dc: 0x46023836  c.le.s      $f7, $f2
    ctx->pc = 0x24e9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e9e0: 0x0  nop
    ctx->pc = 0x24e9e0u;
    // NOP
    // 0x24e9e4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x24E9E4u;
    {
        const bool branch_taken_0x24e9e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9E4u;
        // 0x24e9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9e4) {
            ctx->pc = 0x24EA58u;
            goto label_24ea58;
        }
    }
    ctx->pc = 0x24E9ECu;
    // 0x24e9ec: 0x46085802  mul.s       $f0, $f11, $f8
    ctx->pc = 0x24e9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x24e9f0: 0x46095042  mul.s       $f1, $f10, $f9
    ctx->pc = 0x24e9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x24e9f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24e9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24e9f8: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x24e9f8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x24e9fc: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x24e9fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ea00: 0x0  nop
    ctx->pc = 0x24ea00u;
    // NOP
    // 0x24ea04: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x24EA04u;
    {
        const bool branch_taken_0x24ea04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ea04) {
            ctx->pc = 0x24EA58u;
            goto label_24ea58;
        }
    }
    ctx->pc = 0x24EA0Cu;
    // 0x24ea0c: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x24ea0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ea10: 0x0  nop
    ctx->pc = 0x24ea10u;
    // NOP
    // 0x24ea14: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24EA14u;
    {
        const bool branch_taken_0x24ea14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA14u;
        // 0x24ea18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea14) {
            ctx->pc = 0x24EA54u;
            goto label_24ea54;
        }
    }
    ctx->pc = 0x24EA1Cu;
    // 0x24ea1c: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x24ea1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x24ea20: 0x46093882  mul.s       $f2, $f7, $f9
    ctx->pc = 0x24ea20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x24ea24: 0x460638c2  mul.s       $f3, $f7, $f6
    ctx->pc = 0x24ea24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x24ea28: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x24ea28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x24ea2c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x24ea2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x24ea30: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x24ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ea34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24ea34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24ea38: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x24ea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x24ea3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x24ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ea40: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24ea40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24ea44: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x24ea44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x24ea48: 0xe5270000  swc1        $f7, 0x0($t1)
    ctx->pc = 0x24ea48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x24ea4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24EA4Cu;
    {
        const bool branch_taken_0x24ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA4Cu;
        // 0x24ea50: 0xe5440000  swc1        $f4, 0x0($t2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea4c) {
            ctx->pc = 0x24EA58u;
            goto label_24ea58;
        }
    }
    ctx->pc = 0x24EA54u;
label_24ea54:
    // 0x24ea54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ea54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ea58:
    // 0x24ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x24EA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA58u;
        // 0x24ea5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EA60u;
}
