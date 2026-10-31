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

// Function: sub_0023B778
// Address: 0x23b778 - 0x23b838
void sub_0023B778_0x23b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B778_0x23b778");
#endif

    switch (ctx->pc) {
        case 0x23b794u: goto label_23b794;
        default: break;
    }

    ctx->pc = 0x23b778u;

    // 0x23b778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b77c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23b77cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23b780: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23b780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23b784: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x23b784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x23b788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b78c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23B78Cu;
    SET_GPR_U32(ctx, 31, 0x23B794u);
    ctx->pc = 0x23B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B78Cu;
    // 0x23b790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23B78Cu, 0x23B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B794u;
label_23b794:
    // 0x23b794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b798: 0x0  nop
    ctx->pc = 0x23b798u;
    // NOP
    // 0x23b79c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x23b79cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b7a0: 0x0  nop
    ctx->pc = 0x23b7a0u;
    // NOP
    // 0x23b7a4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x23B7A4u;
    {
        const bool branch_taken_0x23b7a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7A4u;
        // 0x23b7a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7a4) {
            ctx->pc = 0x23B7FCu;
            goto label_23b7fc;
        }
    }
    ctx->pc = 0x23B7ACu;
    // 0x23b7ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b7b4: 0x0  nop
    ctx->pc = 0x23b7b4u;
    // NOP
    // 0x23b7b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23b7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b7bc: 0x0  nop
    ctx->pc = 0x23b7bcu;
    // NOP
    // 0x23b7c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23B7C0u;
    {
        const bool branch_taken_0x23b7c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7C0u;
        // 0x23b7c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7c0) {
            ctx->pc = 0x23B7FCu;
            goto label_23b7fc;
        }
    }
    ctx->pc = 0x23B7C8u;
    // 0x23b7c8: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x23b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x23b7cc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x23b7ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x23b7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b7d4: 0x0  nop
    ctx->pc = 0x23b7d4u;
    // NOP
    // 0x23b7d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x23b7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23b7dc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B7DCu;
    {
        const bool branch_taken_0x23b7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7DCu;
        // 0x23b7e0: 0xe44002cc  swc1        $f0, 0x2CC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7dc) {
            ctx->pc = 0x23B824u;
            goto label_23b824;
        }
    }
    ctx->pc = 0x23B7E4u;
    // 0x23b7e4: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x23b7e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23b7e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23b7ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B7ECu;
    {
        const bool branch_taken_0x23b7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7ECu;
        // 0x23b7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7ec) {
            ctx->pc = 0x23B824u;
            goto label_23b824;
        }
    }
    ctx->pc = 0x23B7F4u;
    // 0x23b7f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23B7F4u;
    {
        const bool branch_taken_0x23b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F4u;
        // 0x23b7f8: 0xa06203bb  sb          $v0, 0x3BB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 955), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7f4) {
            ctx->pc = 0x23B824u;
            goto label_23b824;
        }
    }
    ctx->pc = 0x23B7FCu;
label_23b7fc:
    // 0x23b7fc: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x23b7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x23b800: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x23b800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x23b804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b808: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23b80c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B80Cu;
    {
        const bool branch_taken_0x23b80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B80Cu;
        // 0x23b810: 0xe44002cc  swc1        $f0, 0x2CC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b80c) {
            ctx->pc = 0x23B824u;
            goto label_23b824;
        }
    }
    ctx->pc = 0x23B814u;
    // 0x23b814: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x23b814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x23b818: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23b818u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23b81c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23B81Cu;
    {
        const bool branch_taken_0x23b81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b81c) {
            ctx->pc = 0x23B820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B81Cu;
            // 0x23b820: 0xa06003bb  sb          $zero, 0x3BB($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 955), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B824u;
            goto label_23b824;
        }
    }
    ctx->pc = 0x23B824u;
label_23b824:
    // 0x23b824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b828: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b82c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B82Cu;
        // 0x23b830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B834u;
    // 0x23b834: 0x0  nop
    ctx->pc = 0x23b834u;
    // NOP
    ctx->pc = 0x23b838u;
}
