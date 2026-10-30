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

// Function: sub_00223440
// Address: 0x223440 - 0x2234f8
void sub_00223440_0x223440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223440_0x223440");
#endif

    switch (ctx->pc) {
        case 0x223484u: goto label_223484;
        case 0x223494u: goto label_223494;
        case 0x2234a4u: goto label_2234a4;
        default: break;
    }

    ctx->pc = 0x223440u;

    // 0x223440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223444: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22344c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22344cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223454: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x223454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x223458: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x22345c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22345Cu;
    {
        const bool branch_taken_0x22345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22345Cu;
        // 0x223460: 0xc6140334  lwc1        $f20, 0x334($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22345c) {
            ctx->pc = 0x22346Cu;
            goto label_22346c;
        }
    }
    ctx->pc = 0x223464u;
    // 0x223464: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x223464u;
    {
        const bool branch_taken_0x223464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223464u;
        // 0x223468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223464) {
            ctx->pc = 0x2234DCu;
            goto label_2234dc;
        }
    }
    ctx->pc = 0x22346Cu;
label_22346c:
    // 0x22346c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x22346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x223470: 0x8c6206d0  lw          $v0, 0x6D0($v1)
    ctx->pc = 0x223470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5106D0u));
    // 0x223474: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x223474u;
    {
        const bool branch_taken_0x223474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223474u;
        // 0x223478: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223474) {
            ctx->pc = 0x2234D8u;
            goto label_2234d8;
        }
    }
    ctx->pc = 0x22347Cu;
    // 0x22347c: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x22347Cu;
    SET_GPR_U32(ctx, 31, 0x223484u);
    ctx->pc = 0x223480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22347Cu;
    // 0x223480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x22347Cu, 0x223484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223484u;
label_223484:
    // 0x223484: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x223484u;
    {
        const bool branch_taken_0x223484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223484u;
        // 0x223488: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223484) {
            ctx->pc = 0x2234DCu;
            goto label_2234dc;
        }
    }
    ctx->pc = 0x22348Cu;
    // 0x22348c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x22348Cu;
    SET_GPR_U32(ctx, 31, 0x223494u);
    ctx->pc = 0x223490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22348Cu;
    // 0x223490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x22348Cu, 0x223494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223494u;
label_223494:
    // 0x223494: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x223494u;
    {
        const bool branch_taken_0x223494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223494u;
        // 0x223498: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223494) {
            ctx->pc = 0x2234DCu;
            goto label_2234dc;
        }
    }
    ctx->pc = 0x22349Cu;
    // 0x22349c: 0xc087502  jal         func_21D408
    ctx->pc = 0x22349Cu;
    SET_GPR_U32(ctx, 31, 0x2234A4u);
    ctx->pc = 0x2234A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22349Cu;
    // 0x2234a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22349Cu, 0x2234A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234A4u;
label_2234a4:
    // 0x2234a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2234a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2234a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2234a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2234ac: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2234ACu;
    {
        const bool branch_taken_0x2234ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2234B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234ACu;
        // 0x2234b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234ac) {
            ctx->pc = 0x2234D4u;
            goto label_2234d4;
        }
    }
    ctx->pc = 0x2234B4u;
    // 0x2234b4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2234b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2234b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2234b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2234bc: 0xc440cc60  lwc1        $f0, -0x33A0($v0)
    ctx->pc = 0x2234bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2234c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2234c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2234c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2234c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2234c8: 0x0  nop
    ctx->pc = 0x2234c8u;
    // NOP
    // 0x2234cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2234CCu;
    {
        const bool branch_taken_0x2234cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2234D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234CCu;
        // 0x2234d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234cc) {
            ctx->pc = 0x2234DCu;
            goto label_2234dc;
        }
    }
    ctx->pc = 0x2234D4u;
label_2234d4:
    // 0x2234d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2234d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2234d8:
    // 0x2234d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2234d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2234dc:
    // 0x2234dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2234dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2234e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2234e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2234e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2234e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2234e8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2234e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2234ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2234ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234ECu;
        // 0x2234f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2234ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2234F4u;
    // 0x2234f4: 0x0  nop
    ctx->pc = 0x2234f4u;
    // NOP
    ctx->pc = 0x2234f8u;
}
