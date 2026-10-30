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

// Function: sub_00482980
// Address: 0x482980 - 0x482a90
void sub_00482980_0x482980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482980_0x482980");
#endif

    switch (ctx->pc) {
        case 0x4829b4u: goto label_4829b4;
        case 0x482a70u: goto label_482a70;
        case 0x482a7cu: goto label_482a7c;
        default: break;
    }

    ctx->pc = 0x482980u;

    // 0x482980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x482980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x482984: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x482984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x482988: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x482988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x48298c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x482990: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x482990u;
    {
        const bool branch_taken_0x482990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x482994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482990u;
        // 0x482994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482990) {
            ctx->pc = 0x482A54u;
            goto label_482a54;
        }
    }
    ctx->pc = 0x482998u;
    // 0x482998: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x482998u;
    {
        const bool branch_taken_0x482998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482998u;
        // 0x48299c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482998) {
            ctx->pc = 0x482A58u;
            goto label_482a58;
        }
    }
    ctx->pc = 0x4829A0u;
    // 0x4829a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4829a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4829a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4829A4u;
    {
        const bool branch_taken_0x4829a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4829A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4829A4u;
        // 0x4829a8: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4829a4) {
            ctx->pc = 0x4829B4u;
            goto label_4829b4;
        }
    }
    ctx->pc = 0x4829ACu;
    // 0x4829ac: 0xc12105a  jal         func_484168
    ctx->pc = 0x4829ACu;
    SET_GPR_U32(ctx, 31, 0x4829B4u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x4829ACu, 0x4829B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4829B4u;
label_4829b4:
    // 0x4829b4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4829b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4829b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4829b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4829bc: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4829bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4829c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4829c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4829c4: 0xc446001c  lwc1        $f6, 0x1C($v0)
    ctx->pc = 0x4829c4u;
    { uint32_t bits = FAST_READ32(0x70AD34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4829c8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4829C8u;
    {
        const bool branch_taken_0x4829c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4829CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4829C8u;
        // 0x4829cc: 0xc4450018  lwc1        $f5, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4829c8) {
            ctx->pc = 0x4829E8u;
            goto label_4829e8;
        }
    }
    ctx->pc = 0x4829D0u;
    // 0x4829d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4829d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4829d4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4829D4u;
    {
        const bool branch_taken_0x4829d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4829d4) {
            ctx->pc = 0x4829E8u;
            goto label_4829e8;
        }
    }
    ctx->pc = 0x4829DCu;
    // 0x4829dc: 0xc6040084  lwc1        $f4, 0x84($s0)
    ctx->pc = 0x4829dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4829e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4829E0u;
    {
        const bool branch_taken_0x4829e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4829E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4829E0u;
        // 0x4829e4: 0xc6020080  lwc1        $f2, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4829e0) {
            ctx->pc = 0x482A00u;
            goto label_482a00;
        }
    }
    ctx->pc = 0x4829E8u;
label_4829e8:
    // 0x4829e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4829e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4829ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4829ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4829f0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x4829f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4829f4: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x4829f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4829f8: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x4829f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4829fc: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x4829fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_482a00:
    // 0x482a00: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x482a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x482a04: 0xc780828c  lwc1        $f0, -0x7D74($gp)
    ctx->pc = 0x482a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482a08: 0x460220c1  sub.s       $f3, $f4, $f2
    ctx->pc = 0x482a08u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x482a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482a10: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x482a10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x482a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x482a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x482a18: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x482a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x482a1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x482a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x482a20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x482a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x482a24: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x482a24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x482a28: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x482a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482a2c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x482a2cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x482a30: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x482a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x482a34: 0x46053000  add.s       $f0, $f6, $f5
    ctx->pc = 0x482a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x482a38: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x482a38u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x482a3c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x482a3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x482a40: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x482a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x482a44: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x482a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x482a48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x482a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x482a4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x482A4Cu;
    {
        const bool branch_taken_0x482a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482A4Cu;
        // 0x482a50: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482a4c) {
            ctx->pc = 0x482A80u;
            goto label_482a80;
        }
    }
    ctx->pc = 0x482A54u;
label_482a54:
    // 0x482a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x482a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_482a58:
    // 0x482a58: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x482a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x482a5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x482a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x482a60: 0x24a5efb8  addiu       $a1, $a1, -0x1048
    ctx->pc = 0x482a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963128));
    // 0x482a64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x482a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x482a68: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x482A68u;
    SET_GPR_U32(ctx, 31, 0x482A70u);
    ctx->pc = 0x482A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482A68u;
    // 0x482a6c: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x482A68u, 0x482A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482A70u;
label_482a70:
    // 0x482a70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x482a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482a74: 0xc11f024  jal         func_47C090
    ctx->pc = 0x482A74u;
    SET_GPR_U32(ctx, 31, 0x482A7Cu);
    ctx->pc = 0x482A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482A74u;
    // 0x482a78: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x482A74u, 0x482A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482A7Cu;
label_482a7c:
    // 0x482a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x482a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482a80:
    // 0x482a80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x482a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482a84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x482a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482a88: 0x3e00008  jr          $ra
    ctx->pc = 0x482A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482A88u;
        // 0x482a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482A90u;
}
