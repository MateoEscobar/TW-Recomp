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

// Function: sub_00226448
// Address: 0x226448 - 0x226510
void sub_00226448_0x226448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226448_0x226448");
#endif

    switch (ctx->pc) {
        case 0x226464u: goto label_226464;
        case 0x2264c0u: goto label_2264c0;
        default: break;
    }

    ctx->pc = 0x226448u;

    // 0x226448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22644c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226450: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x226450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x226454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22645c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x22645Cu;
    SET_GPR_U32(ctx, 31, 0x226464u);
    ctx->pc = 0x226460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22645Cu;
    // 0x226460: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22645Cu, 0x226464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226464u;
label_226464:
    // 0x226464: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x226464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x226468: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x226468u;
    {
        const bool branch_taken_0x226468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226468u;
        // 0x22646c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226468) {
            ctx->pc = 0x22647Cu;
            goto label_22647c;
        }
    }
    ctx->pc = 0x226470u;
    // 0x226470: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x226470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x226474: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x226474u;
    {
        const bool branch_taken_0x226474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226474) {
            ctx->pc = 0x226478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226474u;
            // 0x226478: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2264ECu;
            goto label_2264ec;
        }
    }
    ctx->pc = 0x22647Cu;
label_22647c:
    // 0x22647c: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x22647cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x226480: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x226484: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x226484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x226488: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x226488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22648c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x226490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x226490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x226494: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x226494u;
    {
        const bool branch_taken_0x226494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226494) {
            ctx->pc = 0x226498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226494u;
            // 0x226498: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2264ECu;
            goto label_2264ec;
        }
    }
    ctx->pc = 0x22649Cu;
    // 0x22649c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2264a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2264a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2264a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2264a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2264a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2264a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2264ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2264acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2264b0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2264B0u;
    {
        const bool branch_taken_0x2264b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2264b0) {
            ctx->pc = 0x2264B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2264B0u;
            // 0x2264b4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2264ECu;
            goto label_2264ec;
        }
    }
    ctx->pc = 0x2264B8u;
    // 0x2264b8: 0xc088c1a  jal         func_223068
    ctx->pc = 0x2264B8u;
    SET_GPR_U32(ctx, 31, 0x2264C0u);
    ctx->pc = 0x2264BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264B8u;
    // 0x2264bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x2264B8u, 0x2264C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264C0u;
label_2264c0:
    // 0x2264c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2264c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2264c4: 0x0  nop
    ctx->pc = 0x2264c4u;
    // NOP
    // 0x2264c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2264c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2264cc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2264d0: 0x94820148  lhu         $v0, 0x148($a0)
    ctx->pc = 0x2264d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2264d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2264d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2264d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2264d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2264dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2264dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2264e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2264e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2264e4: 0xa4820148  sh          $v0, 0x148($a0)
    ctx->pc = 0x2264e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x2264e8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2264e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2264ec:
    // 0x2264ec: 0x84820148  lh          $v0, 0x148($a0)
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2264f0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2264F0u;
    {
        const bool branch_taken_0x2264f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2264f0) {
            ctx->pc = 0x2264F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2264F0u;
            // 0x2264f4: 0xa4800148  sh          $zero, 0x148($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 328), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2264F8u;
            goto label_2264f8;
        }
    }
    ctx->pc = 0x2264F8u;
label_2264f8:
    // 0x2264f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2264f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2264fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2264fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226500: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x226500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226504: 0x3e00008  jr          $ra
    ctx->pc = 0x226504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226504u;
        // 0x226508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22650Cu;
    // 0x22650c: 0x0  nop
    ctx->pc = 0x22650cu;
    // NOP
    ctx->pc = 0x226510u;
}
