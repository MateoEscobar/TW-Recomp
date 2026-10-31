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

// Function: sub_002FA3E0
// Address: 0x2fa3e0 - 0x2fa468
void sub_002FA3E0_0x2fa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA3E0_0x2fa3e0");
#endif

    switch (ctx->pc) {
        case 0x2fa420u: goto label_2fa420;
        case 0x2fa44cu: goto label_2fa44c;
        default: break;
    }

    ctx->pc = 0x2fa3e0u;

    // 0x2fa3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa3e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa3f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2fa3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fa3f4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FA3F4u;
    {
        const bool branch_taken_0x2fa3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3F4u;
        // 0x2fa3f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3f4) {
            ctx->pc = 0x2FA440u;
            goto label_2fa440;
        }
    }
    ctx->pc = 0x2FA3FCu;
    // 0x2fa3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa400: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2fa400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fa404: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fa404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa408: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fa408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa40c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2fa40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa410: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fa410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fa414: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fa418: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2FA418u;
    SET_GPR_U32(ctx, 31, 0x2FA420u);
    ctx->pc = 0x2FA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA418u;
    // 0x2fa41c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2FA418u, 0x2FA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA420u;
label_2fa420:
    // 0x2fa420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA420u;
    {
        const bool branch_taken_0x2fa420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA420u;
        // 0x2fa424: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa420) {
            ctx->pc = 0x2FA430u;
            goto label_2fa430;
        }
    }
    ctx->pc = 0x2FA428u;
    // 0x2fa428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FA428u;
    {
        const bool branch_taken_0x2fa428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA428u;
        // 0x2fa42c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa428) {
            ctx->pc = 0x2FA458u;
            goto label_2fa458;
        }
    }
    ctx->pc = 0x2FA430u;
label_2fa430:
    // 0x2fa430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa438: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA438u;
    {
        const bool branch_taken_0x2fa438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA438u;
        // 0x2fa43c: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa438) {
            ctx->pc = 0x2FA458u;
            goto label_2fa458;
        }
    }
    ctx->pc = 0x2FA440u;
label_2fa440:
    // 0x2fa440: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2fa440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fa444: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA444u;
    SET_GPR_U32(ctx, 31, 0x2FA44Cu);
    ctx->pc = 0x2FA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA444u;
    // 0x2fa448: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA444u, 0x2FA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA44Cu;
label_2fa44c:
    // 0x2fa44c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fa44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa454: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2fa454u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2fa458:
    // 0x2fa458: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa460: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA460u;
        // 0x2fa464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA468u;
}
