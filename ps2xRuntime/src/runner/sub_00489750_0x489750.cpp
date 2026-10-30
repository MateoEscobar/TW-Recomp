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

// Function: sub_00489750
// Address: 0x489750 - 0x489848
void sub_00489750_0x489750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489750_0x489750");
#endif

    ctx->pc = 0x489750u;

    // 0x489750: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x489750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489754: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x489754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x489758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x48975c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x48975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x489760: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x489760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x489764: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x489764u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x489768: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x489768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48976c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x48976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489770: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x489770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x489774: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x489774u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x489778: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x489778u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48977c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48977cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x489780: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x489780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x489784: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x489784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x489788: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x489788u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x48978c: 0xc78582bc  lwc1        $f5, -0x7D44($gp)
    ctx->pc = 0x48978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x489790: 0xc78082c0  lwc1        $f0, -0x7D40($gp)
    ctx->pc = 0x489790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489794: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x489794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x489798: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x489798u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x48979c: 0xc78682c4  lwc1        $f6, -0x7D3C($gp)
    ctx->pc = 0x48979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4897a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4897a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4897a4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x4897a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4897a8: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x4897a8u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[6]); }
    // 0x4897ac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4897acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4897b0: 0x46001164  .word       0x46001164                   # cvt.w.s     $f5, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4897b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x4897b4: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x4897b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4897b8: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x4897b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4897bc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4897bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4897c0: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4897c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4897c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x4897c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4897c8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4897c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4897cc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x4897ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4897d0: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4897d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4897d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4897d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4897d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4897d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4897dc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x4897dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4897e0: 0x284300ff  slti        $v1, $v0, 0xFF
    ctx->pc = 0x4897e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x4897e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4897E4u;
    {
        const bool branch_taken_0x4897e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4897E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4897E4u;
        // 0x4897e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4897e4) {
            ctx->pc = 0x4897F8u;
            goto label_4897f8;
        }
    }
    ctx->pc = 0x4897ECu;
    // 0x4897ec: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x4897ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4897f0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4897f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4897f4: 0x0  nop
    ctx->pc = 0x4897f4u;
    // NOP
label_4897f8:
    // 0x4897f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4897fc: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x4897fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x489800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489800u;
    {
        const bool branch_taken_0x489800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x489804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489800u;
        // 0x489804: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489800) {
            ctx->pc = 0x489810u;
            goto label_489810;
        }
    }
    ctx->pc = 0x489808u;
    // 0x489808: 0x93a20014  lbu         $v0, 0x14($sp)
    ctx->pc = 0x489808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x48980c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x48980cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_489810:
    // 0x489810: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x489810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x489814: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x489814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x489818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489818u;
    {
        const bool branch_taken_0x489818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489818u;
        // 0x48981c: 0xa0850002  sb          $a1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489818) {
            ctx->pc = 0x489828u;
            goto label_489828;
        }
    }
    ctx->pc = 0x489820u;
    // 0x489820: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x489820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x489824: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x489824u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_489828:
    // 0x489828: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x489828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x48982c: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x48982cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x489830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489830u;
    {
        const bool branch_taken_0x489830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x489834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489830u;
        // 0x489834: 0xa0850003  sb          $a1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489830) {
            ctx->pc = 0x489840u;
            goto label_489840;
        }
    }
    ctx->pc = 0x489838u;
    // 0x489838: 0x93a2001c  lbu         $v0, 0x1C($sp)
    ctx->pc = 0x489838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x48983c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x48983cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_489840:
    // 0x489840: 0x3e00008  jr          $ra
    ctx->pc = 0x489840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489840u;
        // 0x489844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489848u;
}
