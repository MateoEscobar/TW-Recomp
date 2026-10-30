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

// Function: sub_00234530
// Address: 0x234530 - 0x2345d8
void sub_00234530_0x234530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234530_0x234530");
#endif

    switch (ctx->pc) {
        case 0x234550u: goto label_234550;
        default: break;
    }

    ctx->pc = 0x234530u;

    // 0x234530: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x234530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x234534: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x234534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x234538: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x234538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23453c: 0x246a06a0  addiu       $t2, $v1, 0x6A0
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1696));
    // 0x234540: 0x244b06b0  addiu       $t3, $v0, 0x6B0
    ctx->pc = 0x234540u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
    // 0x234544: 0x25080690  addiu       $t0, $t0, 0x690
    ctx->pc = 0x234544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1680));
    // 0x234548: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x234548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23454c: 0x0  nop
    ctx->pc = 0x23454cu;
    // NOP
label_234550:
    // 0x234550: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x234550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234554: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x234554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x234558: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x234558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23455c: 0x2d230003  sltiu       $v1, $t1, 0x3
    ctx->pc = 0x23455cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x234560: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x234560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x234564: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x234564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x234568: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x234568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23456c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x23456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x234570: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x234570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x234574: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x234578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x234578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23457c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x23457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x234580: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x234580u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x234584: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x234584u;
    {
        const bool branch_taken_0x234584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234584u;
        // 0x234588: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234584) {
            ctx->pc = 0x234550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234550;
        }
    }
    ctx->pc = 0x23458Cu;
    // 0x23458c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x234590: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x234590u;
    {
        const bool branch_taken_0x234590 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x234594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234590u;
        // 0x234594: 0x244406ac  addiu       $a0, $v0, 0x6AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234590) {
            ctx->pc = 0x2345ACu;
            goto label_2345ac;
        }
    }
    ctx->pc = 0x234598u;
    // 0x234598: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x234598u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23459c: 0x0  nop
    ctx->pc = 0x23459cu;
    // NOP
    // 0x2345a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2345a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2345a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2345A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345A4u;
        // 0x2345a8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345ACu;
label_2345ac:
    // 0x2345ac: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x2345acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x2345b0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2345b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2345b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2345b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2345b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2345b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2345bc: 0x0  nop
    ctx->pc = 0x2345bcu;
    // NOP
    // 0x2345c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2345c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2345c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2345c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2345c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2345c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2345cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2345CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345D4u;
    // 0x2345d4: 0x0  nop
    ctx->pc = 0x2345d4u;
    // NOP
    ctx->pc = 0x2345d8u;
}
