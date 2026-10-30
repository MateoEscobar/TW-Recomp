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

// Function: sub_004BE988
// Address: 0x4be988 - 0x4beb08
void sub_004BE988_0x4be988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE988_0x4be988");
#endif

    switch (ctx->pc) {
        case 0x4bea50u: goto label_4bea50;
        case 0x4beae4u: goto label_4beae4;
        case 0x4beaf0u: goto label_4beaf0;
        default: break;
    }

    ctx->pc = 0x4be988u;

label_4be988:
    // 0x4be988: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4be988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4be98c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4be98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4be990: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4be990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4be994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4be994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be998: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4be998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4be99c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4be99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4be9a0: 0x463002d  bgezl       $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x4BE9A0u;
    {
        const bool branch_taken_0x4be9a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4be9a0) {
            ctx->pc = 0x4BE9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BE9A0u;
            // 0x4be9a4: 0xc4a50008  lwc1        $f5, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BEA58u;
            goto label_4bea58;
        }
    }
    ctx->pc = 0x4BE9A8u;
    // 0x4be9a8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4be9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4be9ac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4be9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4be9b0: 0x8c5041f8  lw          $s0, 0x41F8($v0)
    ctx->pc = 0x4be9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4be9b4: 0x26230048  addiu       $v1, $s1, 0x48
    ctx->pc = 0x4be9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x4be9b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4be9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4be9bc: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x4be9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4be9c0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x4be9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x4be9c4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x4be9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4be9c8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x4be9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4be9cc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x4be9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x4be9d0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x4be9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4be9d4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x4be9d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x4be9d8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4be9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4be9dc: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x4be9dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x4be9e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4be9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4be9e4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x4be9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x4be9e8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4be9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4be9ec: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x4be9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x4be9f0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x4be9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4be9f4: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x4be9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x4be9f8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x4be9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4be9fc: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x4be9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x4bea00: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x4bea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bea04: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x4bea04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x4bea08: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x4bea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bea0c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x4bea0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x4bea10: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4bea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bea14: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x4bea14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x4bea18: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4bea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bea1c: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x4bea1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x4bea20: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4bea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bea24: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4bea24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4bea28: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4bea28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4bea2c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x4bea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bea30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4bea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bea34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bea34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4bea38: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x4bea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4bea3c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x4bea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bea40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4bea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bea44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bea44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4bea48: 0xc120034  jal         func_4800D0
    ctx->pc = 0x4BEA48u;
    SET_GPR_U32(ctx, 31, 0x4BEA50u);
    ctx->pc = 0x4BEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEA48u;
    // 0x4bea4c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4800D0u, 0x4BEA48u, 0x4BEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEA50u;
label_4bea50:
    // 0x4bea50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4BEA50u;
    {
        const bool branch_taken_0x4bea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEA50u;
        // 0x4bea54: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bea50) {
            ctx->pc = 0x4BEAF0u;
            goto label_4beaf0;
        }
    }
    ctx->pc = 0x4BEA58u;
label_4bea58:
    // 0x4bea58: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4bea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bea5c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x4bea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bea60: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x4bea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4bea64: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x4bea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4bea68: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x4bea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4bea6c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x4bea6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4bea70: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x4bea70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4bea74: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x4bea74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4bea78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x4bea78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x4bea7c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x4bea7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4bea80: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x4bea80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4bea84: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x4bea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4bea88: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x4bea88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4bea8c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x4bea8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4bea90: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x4bea90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4bea94: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x4bea94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4bea98: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x4bea98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4bea9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BEA9Cu;
    {
        const bool branch_taken_0x4bea9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEA9Cu;
        // 0x4beaa0: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bea9c) {
            ctx->pc = 0x4BEAB0u;
            goto label_4beab0;
        }
    }
    ctx->pc = 0x4BEAA4u;
    // 0x4beaa4: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x4beaa4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x4beaa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4BEAA8u;
    {
        const bool branch_taken_0x4beaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEAA8u;
        // 0x4beaac: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beaa8) {
            ctx->pc = 0x4BEAD8u;
            goto label_4bead8;
        }
    }
    ctx->pc = 0x4BEAB0u;
label_4beab0:
    // 0x4beab0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4beab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4beab4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BEAB4u;
    {
        const bool branch_taken_0x4beab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEAB4u;
        // 0x4beab8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beab4) {
            ctx->pc = 0x4BEAC8u;
            goto label_4beac8;
        }
    }
    ctx->pc = 0x4BEABCu;
    // 0x4beabc: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x4beabcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4beac0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4BEAC0u;
    {
        const bool branch_taken_0x4beac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEAC0u;
        // 0x4beac4: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beac0) {
            ctx->pc = 0x4BEAD8u;
            goto label_4bead8;
        }
    }
    ctx->pc = 0x4BEAC8u;
label_4beac8:
    // 0x4beac8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BEAC8u;
    {
        const bool branch_taken_0x4beac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4beac8) {
            ctx->pc = 0x4BEACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BEAC8u;
            // 0x4beacc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BEADCu;
            goto label_4beadc;
        }
    }
    ctx->pc = 0x4BEAD0u;
    // 0x4bead0: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x4bead0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4bead4: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x4bead4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4bead8:
    // 0x4bead8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4bead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4beadc:
    // 0x4beadc: 0xc12fa62  jal         func_4BE988
    ctx->pc = 0x4BEADCu;
    SET_GPR_U32(ctx, 31, 0x4BEAE4u);
    ctx->pc = 0x4BEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEADCu;
    // 0x4beae0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE988u;
    goto label_4be988;
    ctx->pc = 0x4BEAE4u;
label_4beae4:
    // 0x4beae4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4beae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4beae8: 0xc12fa62  jal         func_4BE988
    ctx->pc = 0x4BEAE8u;
    SET_GPR_U32(ctx, 31, 0x4BEAF0u);
    ctx->pc = 0x4BEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEAE8u;
    // 0x4beaec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE988u;
    goto label_4be988;
    ctx->pc = 0x4BEAF0u;
label_4beaf0:
    // 0x4beaf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4beaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beaf4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4beaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4beaf8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4beaf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4beafc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4beafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4beb00: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEB00u;
        // 0x4beb04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEB08u;
}
