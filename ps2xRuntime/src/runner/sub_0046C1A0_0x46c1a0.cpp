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

// Function: sub_0046C1A0
// Address: 0x46c1a0 - 0x46c448
void sub_0046C1A0_0x46c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C1A0_0x46c1a0");
#endif

    ctx->pc = 0x46c1a0u;

    // 0x46c1a0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x46c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c1a4: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x46c1a4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x46c1a8: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x46c1a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x46c1ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46c1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c1b0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x46c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x46c1b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x46c1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x46c1b8: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x46c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x46c1bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x46c1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x46c1c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x46c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x46c1c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x46c1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x46c1c8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x46C1C8u;
    {
        const bool branch_taken_0x46c1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c1c8) {
            ctx->pc = 0x46C1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46C1C8u;
            // 0x46c1cc: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46C1E8u;
            goto label_46c1e8;
        }
    }
    ctx->pc = 0x46C1D0u;
    // 0x46c1d0: 0xc78d81ac  lwc1        $f13, -0x7E54($gp)
    ctx->pc = 0x46c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x46c1d4: 0x18800099  blez        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x46C1D4u;
    {
        const bool branch_taken_0x46c1d4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x46C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C1D4u;
        // 0x46c1d8: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c1d4) {
            ctx->pc = 0x46C43Cu;
            goto label_46c43c;
        }
    }
    ctx->pc = 0x46C1DCu;
    // 0x46c1dc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x46c1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x46c1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x46C1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C1E0u;
        // 0x46c1e4: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C1E8u;
label_46c1e8:
    // 0x46c1e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x46c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x46c1ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x46c1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x46c1f0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x46C1F0u;
    {
        const bool branch_taken_0x46c1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C1F0u;
        // 0x46c1f4: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c1f0) {
            ctx->pc = 0x46C2ACu;
            goto label_46c2ac;
        }
    }
    ctx->pc = 0x46C1F8u;
    // 0x46c1f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x46c1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x46c1fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46C1FCu;
    {
        const bool branch_taken_0x46c1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c1fc) {
            ctx->pc = 0x46C200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46C1FCu;
            // 0x46c200: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46C210u;
            goto label_46c210;
        }
    }
    ctx->pc = 0x46C204u;
    // 0x46c204: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x46c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x46c208: 0x3e00008  jr          $ra
    ctx->pc = 0x46C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C208u;
        // 0x46c20c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C210u;
label_46c210:
    // 0x46c210: 0xc78081b4  lwc1        $f0, -0x7E4C($gp)
    ctx->pc = 0x46c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c214: 0xc78381b8  lwc1        $f3, -0x7E48($gp)
    ctx->pc = 0x46c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46c218: 0xc78681bc  lwc1        $f6, -0x7E44($gp)
    ctx->pc = 0x46c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x46c21c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c220: 0xc78181c0  lwc1        $f1, -0x7E40($gp)
    ctx->pc = 0x46c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46c224: 0xc78281c4  lwc1        $f2, -0x7E3C($gp)
    ctx->pc = 0x46c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46c228: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c22c: 0xc78781c8  lwc1        $f7, -0x7E38($gp)
    ctx->pc = 0x46c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x46c230: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x46c230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x46c234: 0xc78481cc  lwc1        $f4, -0x7E34($gp)
    ctx->pc = 0x46c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46c238: 0xc78981d0  lwc1        $f9, -0x7E30($gp)
    ctx->pc = 0x46c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x46c23c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x46c23cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x46c240: 0xc78381d4  lwc1        $f3, -0x7E2C($gp)
    ctx->pc = 0x46c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46c244: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c248: 0xc78881d8  lwc1        $f8, -0x7E28($gp)
    ctx->pc = 0x46c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x46c24c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x46c24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x46c250: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x46c250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x46c254: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c258: 0xc78281dc  lwc1        $f2, -0x7E24($gp)
    ctx->pc = 0x46c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46c25c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x46c25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x46c260: 0xc78a81e0  lwc1        $f10, -0x7E20($gp)
    ctx->pc = 0x46c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x46c264: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x46c264u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x46c268: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c26c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c26cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c270: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x46c270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x46c274: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x46c274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x46c278: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c27c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c280: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x46c280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x46c284: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x46c284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x46c288: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c28c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x46c28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x46c290: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c294: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x46c294u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x46c298: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x46c298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x46c29c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x46c29cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x46c2a0: 0x46026881  sub.s       $f2, $f13, $f2
    ctx->pc = 0x46c2a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x46c2a4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x46C2A4u;
    {
        const bool branch_taken_0x46c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C2A4u;
        // 0x46c2a8: 0x46025341  sub.s       $f13, $f10, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c2a4) {
            ctx->pc = 0x46C438u;
            goto label_46c438;
        }
    }
    ctx->pc = 0x46C2ACu;
label_46c2ac:
    // 0x46c2ac: 0x481002e  bgez        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x46C2ACu;
    {
        const bool branch_taken_0x46c2ac = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x46c2ac) {
            ctx->pc = 0x46C368u;
            goto label_46c368;
        }
    }
    ctx->pc = 0x46C2B4u;
    // 0x46c2b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x46c2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x46c2b8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x46c2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x46c2bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x46c2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x46c2c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x46c2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x46c2c4: 0x460a6880  add.s       $f2, $f13, $f10
    ctx->pc = 0x46c2c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x46c2c8: 0xc78081e4  lwc1        $f0, -0x7E1C($gp)
    ctx->pc = 0x46c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c2cc: 0xc78481e8  lwc1        $f4, -0x7E18($gp)
    ctx->pc = 0x46c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46c2d0: 0xc78681ec  lwc1        $f6, -0x7E14($gp)
    ctx->pc = 0x46c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x46c2d4: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x46c2d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x46c2d8: 0xc78181f0  lwc1        $f1, -0x7E10($gp)
    ctx->pc = 0x46c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46c2dc: 0xc78281f4  lwc1        $f2, -0x7E0C($gp)
    ctx->pc = 0x46c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46c2e0: 0xc78781f8  lwc1        $f7, -0x7E08($gp)
    ctx->pc = 0x46c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x46c2e4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c2e8: 0xc78381fc  lwc1        $f3, -0x7E04($gp)
    ctx->pc = 0x46c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46c2ec: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c2f0: 0xc7888200  lwc1        $f8, -0x7E00($gp)
    ctx->pc = 0x46c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x46c2f4: 0xc7858204  lwc1        $f5, -0x7DFC($gp)
    ctx->pc = 0x46c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x46c2f8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46c2f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x46c2fc: 0xc7898208  lwc1        $f9, -0x7DF8($gp)
    ctx->pc = 0x46c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x46c300: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x46c300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x46c304: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c308: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c30c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x46c30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x46c310: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x46c310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x46c314: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c318: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c31c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x46c31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x46c320: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x46c320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x46c324: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c328: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c32c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x46c32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x46c330: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x46c330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x46c334: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c338: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x46c338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x46c33c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c340: 0x460c0344  c1          0xC0344
    ctx->pc = 0x46c340u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x46c344: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x46c344u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x46c348: 0xc782820c  lwc1        $f2, -0x7DF4($gp)
    ctx->pc = 0x46c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46c34c: 0xc7838210  lwc1        $f3, -0x7DF0($gp)
    ctx->pc = 0x46c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46c350: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x46c350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x46c354: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x46c354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x46c358: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x46c358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x46c35c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x46c35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x46c360: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x46C360u;
    {
        const bool branch_taken_0x46c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C360u;
        // 0x46c364: 0x46001b41  sub.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c360) {
            ctx->pc = 0x46C438u;
            goto label_46c438;
        }
    }
    ctx->pc = 0x46C368u;
label_46c368:
    // 0x46c368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x46c368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x46c36c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x46c36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x46c370: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x46c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x46c374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x46c374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x46c378: 0x460d5801  sub.s       $f0, $f11, $f13
    ctx->pc = 0x46c378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[13]);
    // 0x46c37c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x46c37cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x46c380: 0x460c0344  c1          0xC0344
    ctx->pc = 0x46c380u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x46c384: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x46c384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x46c388: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x46c388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c38c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x46c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x46c390: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x46c390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x46c394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x46c394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x46c398: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x46c398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x46c39c: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x46c39cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x46c3a0: 0xc7808214  lwc1        $f0, -0x7DEC($gp)
    ctx->pc = 0x46c3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c3a4: 0xc7848218  lwc1        $f4, -0x7DE8($gp)
    ctx->pc = 0x46c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46c3a8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c3ac: 0xc78a821c  lwc1        $f10, -0x7DE4($gp)
    ctx->pc = 0x46c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x46c3b0: 0xc7818220  lwc1        $f1, -0x7DE0($gp)
    ctx->pc = 0x46c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46c3b4: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x46c3b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x46c3b8: 0xc7868224  lwc1        $f6, -0x7DDC($gp)
    ctx->pc = 0x46c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x46c3bc: 0x46056141  sub.s       $f5, $f12, $f5
    ctx->pc = 0x46c3bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x46c3c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x46c3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x46c3c4: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x46c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x46c3c8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c3cc: 0xc784822c  lwc1        $f4, -0x7DD4($gp)
    ctx->pc = 0x46c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46c3d0: 0xc7898230  lwc1        $f9, -0x7DD0($gp)
    ctx->pc = 0x46c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x46c3d4: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x46c3d4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x46c3d8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c3dc: 0xc7838234  lwc1        $f3, -0x7DCC($gp)
    ctx->pc = 0x46c3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46c3e0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x46c3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x46c3e4: 0xc7888238  lwc1        $f8, -0x7DC8($gp)
    ctx->pc = 0x46c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x46c3e8: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x46c3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x46c3ec: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c3ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c3f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c3f4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x46c3f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x46c3f8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x46c3f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x46c3fc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c400: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c404: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x46c404u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x46c408: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x46c408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x46c40c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x46c40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x46c410: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c414: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x46c414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x46c418: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x46c418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x46c41c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x46c41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x46c420: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x46c420u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x46c424: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x46c424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x46c428: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x46c428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x46c42c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x46c42cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x46c430: 0x46021340  add.s       $f13, $f2, $f2
    ctx->pc = 0x46c430u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x46c434: 0x0  nop
    ctx->pc = 0x46c434u;
    // NOP
label_46c438:
    // 0x46c438: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x46c438u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
label_46c43c:
    // 0x46c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C444u;
    // 0x46c444: 0x0  nop
    ctx->pc = 0x46c444u;
    // NOP
    ctx->pc = 0x46c448u;
}
