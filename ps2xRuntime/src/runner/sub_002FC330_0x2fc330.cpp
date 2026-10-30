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

// Function: sub_002FC330
// Address: 0x2fc330 - 0x2fc3e8
void sub_002FC330_0x2fc330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC330_0x2fc330");
#endif

    switch (ctx->pc) {
        case 0x2fc380u: goto label_2fc380;
        default: break;
    }

    ctx->pc = 0x2fc330u;

    // 0x2fc330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fc330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc334: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc338: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fc338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fc33c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2fc33cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fc344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc34c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC34Cu;
    {
        const bool branch_taken_0x2fc34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC34Cu;
        // 0x2fc350: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc34c) {
            ctx->pc = 0x2FC35Cu;
            goto label_2fc35c;
        }
    }
    ctx->pc = 0x2FC354u;
    // 0x2fc354: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FC354u;
    {
        const bool branch_taken_0x2fc354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC354u;
        // 0x2fc358: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc354) {
            ctx->pc = 0x2FC3CCu;
            goto label_2fc3cc;
        }
    }
    ctx->pc = 0x2FC35Cu;
label_2fc35c:
    // 0x2fc35c: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x2fc35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x2fc360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fc364: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fc364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fc368: 0x2c63003d  sltiu       $v1, $v1, 0x3D
    ctx->pc = 0x2fc368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x2fc36c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FC36Cu;
    {
        const bool branch_taken_0x2fc36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC36Cu;
        // 0x2fc370: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc36c) {
            ctx->pc = 0x2FC3CCu;
            goto label_2fc3cc;
        }
    }
    ctx->pc = 0x2FC374u;
    // 0x2fc374: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2fc374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2fc378: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2FC378u;
    SET_GPR_U32(ctx, 31, 0x2FC380u);
    ctx->pc = 0x2FC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC378u;
    // 0x2fc37c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FC378u, 0x2FC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC380u;
label_2fc380:
    // 0x2fc380: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2fc380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2fc384: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2fc384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x2fc388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc38c: 0x0  nop
    ctx->pc = 0x2fc38cu;
    // NOP
    // 0x2fc390: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fc390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc394: 0x0  nop
    ctx->pc = 0x2fc394u;
    // NOP
    // 0x2fc398: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC398u;
    {
        const bool branch_taken_0x2fc398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC398u;
        // 0x2fc39c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc398) {
            ctx->pc = 0x2FC3B0u;
            goto label_2fc3b0;
        }
    }
    ctx->pc = 0x2FC3A0u;
    // 0x2fc3a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc3a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC3A8u;
    {
        const bool branch_taken_0x2fc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3A8u;
        // 0x2fc3ac: 0xac830284  sw          $v1, 0x284($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3a8) {
            ctx->pc = 0x2FC3D0u;
            goto label_2fc3d0;
        }
    }
    ctx->pc = 0x2FC3B0u;
label_2fc3b0:
    // 0x2fc3b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2fc3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc3b4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2fc3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2fc3b8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2fc3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc3bc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2fc3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2fc3c0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2fc3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc3c4: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x2fc3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc3c8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2fc3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2fc3cc:
    // 0x2fc3cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc3d0:
    // 0x2fc3d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fc3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3DCu;
        // 0x2fc3e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC3E4u;
    // 0x2fc3e4: 0x0  nop
    ctx->pc = 0x2fc3e4u;
    // NOP
    ctx->pc = 0x2fc3e8u;
}
