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

// Function: sub_00254508
// Address: 0x254508 - 0x254568
void sub_00254508_0x254508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254508_0x254508");
#endif

    ctx->pc = 0x254508u;

    // 0x254508: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x254508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x25450c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25450cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x254510: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x254510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x254514: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x254514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x254518: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25451c: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x25451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x254520: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x254520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x254524: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x254524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x254528: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x254528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25452c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25452cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254530: 0x0  nop
    ctx->pc = 0x254530u;
    // NOP
    // 0x254534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25453c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25453cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254540: 0x0  nop
    ctx->pc = 0x254540u;
    // NOP
    // 0x254544: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x254544u;
    {
        const bool branch_taken_0x254544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254544) {
            ctx->pc = 0x25455Cu;
            goto label_25455c;
        }
    }
    ctx->pc = 0x25454Cu;
    // 0x25454c: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x25454cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x254550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254554: 0x0  nop
    ctx->pc = 0x254554u;
    // NOP
    // 0x254558: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x254558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_25455c:
    // 0x25455c: 0x3e00008  jr          $ra
    ctx->pc = 0x25455Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25455Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254564u;
    // 0x254564: 0x0  nop
    ctx->pc = 0x254564u;
    // NOP
    ctx->pc = 0x254568u;
}
