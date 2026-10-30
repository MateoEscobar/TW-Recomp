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

// Function: sub_0010E468
// Address: 0x10e468 - 0x10e530
void sub_0010E468_0x10e468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E468_0x10e468");
#endif

    ctx->pc = 0x10e468u;

    // 0x10e468: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10e468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10e46c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x10e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x10e470: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x10e470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x10e474: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x10e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x10e478: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x10e478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10e47c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E47Cu;
    {
        const bool branch_taken_0x10e47c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e47c) {
            ctx->pc = 0x10E498u;
            goto label_10e498;
        }
    }
    ctx->pc = 0x10E484u;
    // 0x10e484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10e484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e488: 0x0  nop
    ctx->pc = 0x10e488u;
    // NOP
    // 0x10e48c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10e48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10e490: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10E490u;
    {
        const bool branch_taken_0x10e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E490u;
        // 0x10e494: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e490) {
            ctx->pc = 0x10E4B4u;
            goto label_10e4b4;
        }
    }
    ctx->pc = 0x10E498u;
label_10e498:
    // 0x10e498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10e49c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10e49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10e4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10e4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e4a4: 0x0  nop
    ctx->pc = 0x10e4a4u;
    // NOP
    // 0x10e4a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10e4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10e4ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x10e4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x10e4b0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x10e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_10e4b4:
    // 0x10e4b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E4B4u;
    {
        const bool branch_taken_0x10e4b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B4u;
        // 0x10e4b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b4) {
            ctx->pc = 0x10E4D0u;
            goto label_10e4d0;
        }
    }
    ctx->pc = 0x10E4BCu;
    // 0x10e4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10e4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e4c0: 0x0  nop
    ctx->pc = 0x10e4c0u;
    // NOP
    // 0x10e4c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10e4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10e4c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10E4C8u;
    {
        const bool branch_taken_0x10e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e4c8) {
            ctx->pc = 0x10E4E8u;
            goto label_10e4e8;
        }
    }
    ctx->pc = 0x10E4D0u;
label_10e4d0:
    // 0x10e4d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10e4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10e4d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10e4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10e4d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10e4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e4dc: 0x0  nop
    ctx->pc = 0x10e4dcu;
    // NOP
    // 0x10e4e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10e4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10e4e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x10e4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_10e4e8:
    // 0x10e4e8: 0x0  nop
    ctx->pc = 0x10e4e8u;
    // NOP
    // 0x10e4ec: 0x0  nop
    ctx->pc = 0x10e4ecu;
    // NOP
    // 0x10e4f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10e4f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10e4f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e4f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e4fc: 0x0  nop
    ctx->pc = 0x10e4fcu;
    // NOP
    // 0x10e500: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10e500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e504: 0x0  nop
    ctx->pc = 0x10e504u;
    // NOP
    // 0x10e508: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E508u;
    {
        const bool branch_taken_0x10e508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e508) {
            ctx->pc = 0x10E50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E508u;
            // 0x10e50c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E510u;
            goto label_10e510;
        }
    }
    ctx->pc = 0x10E510u;
label_10e510:
    // 0x10e510: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10e510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e514: 0x0  nop
    ctx->pc = 0x10e514u;
    // NOP
    // 0x10e518: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e51c: 0x0  nop
    ctx->pc = 0x10e51cu;
    // NOP
    // 0x10e520: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E520u;
    {
        const bool branch_taken_0x10e520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e520) {
            ctx->pc = 0x10E524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E520u;
            // 0x10e524: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E528u;
            goto label_10e528;
        }
    }
    ctx->pc = 0x10E528u;
label_10e528:
    // 0x10e528: 0x3e00008  jr          $ra
    ctx->pc = 0x10E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E530u;
}
