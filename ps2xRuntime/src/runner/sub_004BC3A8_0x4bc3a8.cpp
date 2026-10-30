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

// Function: sub_004BC3A8
// Address: 0x4bc3a8 - 0x4bc6d0
void sub_004BC3A8_0x4bc3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC3A8_0x4bc3a8");
#endif

    ctx->pc = 0x4bc3a8u;

    // 0x4bc3a8: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x4bc3a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4bc3ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4bc3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc3b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bc3b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc3b8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4bc3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4bc3bc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4BC3BCu;
    {
        const bool branch_taken_0x4bc3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC3BCu;
        // 0x4bc3c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc3bc) {
            ctx->pc = 0x4BC420u;
            goto label_4bc420;
        }
    }
    ctx->pc = 0x4BC3C4u;
    // 0x4bc3c4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bc3c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc3cc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4bc3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4bc3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC3D0u;
    {
        const bool branch_taken_0x4bc3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC3D0u;
        // 0x4bc3d4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc3d0) {
            ctx->pc = 0x4BC3E0u;
            goto label_4bc3e0;
        }
    }
    ctx->pc = 0x4BC3D8u;
    // 0x4bc3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC3D8u;
        // 0x4bc3dc: 0xc4401494  lwc1        $f0, 0x1494($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC3E0u;
label_4bc3e0:
    // 0x4bc3e0: 0x4e10009  bgez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BC3E0u;
    {
        const bool branch_taken_0x4bc3e0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4BC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC3E0u;
        // 0x4bc3e4: 0x2408ffe7  addiu       $t0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc3e0) {
            ctx->pc = 0x4BC408u;
            goto label_4bc408;
        }
    }
    ctx->pc = 0x4BC3E8u;
    // 0x4bc3e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4bc3e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc3ec: 0x46000041  sub.s       $f1, $f0, $f0
    ctx->pc = 0x4bc3ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x4bc3f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bc3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc3f4: 0x0  nop
    ctx->pc = 0x4bc3f4u;
    // NOP
    // 0x4bc3f8: 0x0  nop
    ctx->pc = 0x4bc3f8u;
    // NOP
    // 0x4bc3fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4bc3fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4bc400: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC408u;
label_4bc408:
    // 0x4bc408: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x4bc408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x4bc40c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc410: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4bc410u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc414: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4bc414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4bc418: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4bc418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4bc41c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4bc41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bc420:
    // 0x4bc420: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x4bc420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x4bc424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc428: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4bc428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4bc42c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC42Cu;
    {
        const bool branch_taken_0x4bc42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC42Cu;
        // 0x4bc430: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc42c) {
            ctx->pc = 0x4BC440u;
            goto label_4bc440;
        }
    }
    ctx->pc = 0x4BC434u;
    // 0x4bc434: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4bc434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc438: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC438u;
        // 0x4bc43c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC440u;
label_4bc440:
    // 0x4bc440: 0x735c3  sra         $a2, $a3, 23
    ctx->pc = 0x4bc440u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 23));
    // 0x4bc444: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bc444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bc448: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x4bc448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x4bc44c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4bc44cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4bc450: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x4bc450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x4bc454: 0x2502ff81  addiu       $v0, $t0, -0x7F
    ctx->pc = 0x4bc454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
    // 0x4bc458: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4bc458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4bc45c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x4bc45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x4bc460: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x4bc460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4bc464: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bc464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4bc468: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bc468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc46c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x4bc46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x4bc470: 0xe22025  or          $a0, $a3, $v0
    ctx->pc = 0x4bc470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4bc474: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x4bc474u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x4bc478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc480: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x4bc480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x4bc484: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4bc484u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc488: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4bc488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4bc48c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4bc48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4bc490: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x4bc490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4bc494: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4BC494u;
    {
        const bool branch_taken_0x4bc494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC494u;
        // 0x4bc498: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc494) {
            ctx->pc = 0x4BC54Cu;
            goto label_4bc54c;
        }
    }
    ctx->pc = 0x4BC49Cu;
    // 0x4bc49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bc49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc4a0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x4bc4a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bc4a4: 0x0  nop
    ctx->pc = 0x4bc4a4u;
    // NOP
    // 0x4bc4a8: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x4BC4A8u;
    {
        const bool branch_taken_0x4bc4a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bc4a8) {
            ctx->pc = 0x4BC4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC4A8u;
            // 0x4bc4ac: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC4E8u;
            goto label_4bc4e8;
        }
    }
    ctx->pc = 0x4BC4B0u;
    // 0x4bc4b0: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x4BC4B0u;
    {
        const bool branch_taken_0x4bc4b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc4b0) {
            ctx->pc = 0x4BC6C4u;
            goto label_4bc6c4;
        }
    }
    ctx->pc = 0x4BC4B8u;
    // 0x4bc4b8: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x4bc4b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x4bc4bc: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x4bc4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x4bc4c0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x4bc4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x4bc4c4: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x4bc4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x4bc4c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc4cc: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x4bc4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x4bc4d0: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x4bc4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x4bc4d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc4d8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x4bc4d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x4bc4dc: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x4bc4dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x4bc4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC4E0u;
        // 0x4bc4e4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC4E8u;
label_4bc4e8:
    // 0x4bc4e8: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x4bc4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x4bc4ec: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bc4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bc4f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc4f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bc4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bc4f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc4fc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bc4fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bc500: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4bc500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4bc504: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC504u;
    {
        const bool branch_taken_0x4bc504 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC504u;
        // 0x4bc508: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc504) {
            ctx->pc = 0x4BC514u;
            goto label_4bc514;
        }
    }
    ctx->pc = 0x4BC50Cu;
    // 0x4bc50c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC50Cu;
        // 0x4bc510: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC514u;
label_4bc514:
    // 0x4bc514: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x4bc514u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x4bc518: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x4bc518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x4bc51c: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x4bc51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x4bc520: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x4bc520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x4bc524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc528: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x4bc528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x4bc52c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x4bc52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x4bc530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc534: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x4bc534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x4bc538: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x4bc538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x4bc53c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4bc53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4bc540: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x4bc540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x4bc544: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC544u;
        // 0x4bc548: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC54Cu;
label_4bc54c:
    // 0x4bc54c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4bc54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4bc550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc554: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x4bc554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x4bc558: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x4bc558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x4bc55c: 0x34218897  ori         $at, $at, 0x8897
    ctx->pc = 0x4bc55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34967);
    // 0x4bc560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc564: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x4bc564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x4bc568: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x4bc568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4bc56c: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x4bc56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x4bc570: 0x34213325  ori         $at, $at, 0x3325
    ctx->pc = 0x4bc570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13093);
    // 0x4bc574: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4bc574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4bc578: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x4bc578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x4bc57c: 0x3421d04f  ori         $at, $at, 0xD04F
    ctx->pc = 0x4bc57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53327);
    // 0x4bc580: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc584: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x4bc584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x4bc588: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x4bc588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x4bc58c: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x4bc58cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x4bc590: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bc590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bc594: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x4bc594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x4bc598: 0x0  nop
    ctx->pc = 0x4bc598u;
    // NOP
    // 0x4bc59c: 0x0  nop
    ctx->pc = 0x4bc59cu;
    // NOP
    // 0x4bc5a0: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x4bc5a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x4bc5a4: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x4bc5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x4bc5a8: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x4bc5a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x4bc5ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4bc5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4bc5b0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x4bc5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x4bc5b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4bc5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x4bc5b8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4bc5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4bc5bc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4bc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4bc5c0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x4bc5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x4bc5c4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bc5c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bc5c8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x4bc5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4bc5cc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4bc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4bc5d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bc5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bc5d4: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x4bc5d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x4bc5d8: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x4bc5d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x4bc5dc: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x4bc5dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x4bc5e0: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x4bc5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x4bc5e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4bc5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bc5e8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x4bc5e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4bc5ec: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x4bc5ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x4bc5f0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x4bc5f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x4bc5f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4bc5f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bc5f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x4bc5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4bc5fc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4bc5fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4bc600: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x4bc600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x4bc604: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4bc604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bc608: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4bc608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4bc60c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x4bc60cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x4bc610: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x4bc610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x4bc614: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BC614u;
    {
        const bool branch_taken_0x4bc614 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4BC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC614u;
        // 0x4bc618: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc614) {
            ctx->pc = 0x4BC680u;
            goto label_4bc680;
        }
    }
    ctx->pc = 0x4BC61Cu;
    // 0x4bc61c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bc61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bc620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc624: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bc624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bc628: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC628u;
    {
        const bool branch_taken_0x4bc628 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC628u;
        // 0x4bc62c: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc628) {
            ctx->pc = 0x4BC644u;
            goto label_4bc644;
        }
    }
    ctx->pc = 0x4BC630u;
    // 0x4bc630: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x4bc630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x4bc634: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x4bc634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x4bc638: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x4bc638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4bc63c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC63Cu;
        // 0x4bc640: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC644u;
label_4bc644:
    // 0x4bc644: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x4bc644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x4bc648: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x4bc648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x4bc64c: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x4bc64cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x4bc650: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc654: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x4bc654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x4bc658: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x4bc658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x4bc65c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc660: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x4bc660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x4bc664: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x4bc664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x4bc668: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x4bc668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x4bc66c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4bc66cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bc670: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x4bc670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4bc674: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x4bc674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x4bc678: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC678u;
        // 0x4bc67c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC680u;
label_4bc680:
    // 0x4bc680: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC680u;
    {
        const bool branch_taken_0x4bc680 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC680u;
        // 0x4bc684: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc680) {
            ctx->pc = 0x4BC694u;
            goto label_4bc694;
        }
    }
    ctx->pc = 0x4BC688u;
    // 0x4bc688: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x4bc688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x4bc68c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC68Cu;
        // 0x4bc690: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC694u;
label_4bc694:
    // 0x4bc694: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x4bc694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x4bc698: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x4bc698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x4bc69c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc6a0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x4bc6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x4bc6a4: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x4bc6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x4bc6a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc6ac: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x4bc6acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x4bc6b0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x4bc6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x4bc6b4: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x4bc6b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x4bc6b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bc6b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4bc6bc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x4bc6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x4bc6c0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4bc6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4bc6c4:
    // 0x4bc6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC6CCu;
    // 0x4bc6cc: 0x0  nop
    ctx->pc = 0x4bc6ccu;
    // NOP
    ctx->pc = 0x4bc6d0u;
}
