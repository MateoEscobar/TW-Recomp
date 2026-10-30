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

// Function: sub_002855F8
// Address: 0x2855f8 - 0x2856b8
void sub_002855F8_0x2855f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002855F8_0x2855f8");
#endif

    switch (ctx->pc) {
        case 0x285650u: goto label_285650;
        case 0x285660u: goto label_285660;
        case 0x285680u: goto label_285680;
        default: break;
    }

    ctx->pc = 0x2855f8u;

    // 0x2855f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2855fc: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x285600: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x285600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x285604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285608: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x285608u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28560c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x28560cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x285610: 0x46006d80  add.s       $f22, $f13, $f0
    ctx->pc = 0x285610u;
    ctx->f[22] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x285614: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x285614u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x285618: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x285618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28561c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x285620: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x285620u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x285624: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x285628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28562c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x28562cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x285630: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x285630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x285634: 0x3c013149  lui         $at, 0x3149
    ctx->pc = 0x285634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12617 << 16));
    // 0x285638: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x285638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28563c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x28563cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x285640: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x285640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x285644: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x285644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x285648: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x285648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28564c: 0x0  nop
    ctx->pc = 0x28564cu;
    // NOP
label_285650:
    // 0x285650: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x285650u;
    {
        const bool branch_taken_0x285650 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x285654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285650u;
        // 0x285654: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285650) {
            ctx->pc = 0x285694u;
            goto label_285694;
        }
    }
    ctx->pc = 0x285658u;
    // 0x285658: 0xc10d272  jal         func_4349C8
    ctx->pc = 0x285658u;
    SET_GPR_U32(ctx, 31, 0x285660u);
    ctx->pc = 0x28565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285658u;
    // 0x28565c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x285658u, 0x285660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285660u;
label_285660:
    // 0x285660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285664: 0x0  nop
    ctx->pc = 0x285664u;
    // NOP
    // 0x285668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28566c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x28566cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x285670: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x285670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x285674: 0x46150501  sub.s       $f20, $f0, $f21
    ctx->pc = 0x285674u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x285678: 0xc12e61c  jal         func_4B9870
    ctx->pc = 0x285678u;
    SET_GPR_U32(ctx, 31, 0x285680u);
    ctx->pc = 0x28567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285678u;
    // 0x28567c: 0x4617a301  sub.s       $f12, $f20, $f23 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9870u, 0x285678u, 0x285680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285680u;
label_285680:
    // 0x285680: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x285680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x285684: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x285684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285688: 0x0  nop
    ctx->pc = 0x285688u;
    // NOP
    // 0x28568c: 0x4500fff0  bc1f        . + 4 + (-0x10 << 2)
    ctx->pc = 0x28568Cu;
    {
        const bool branch_taken_0x28568c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28568Cu;
        // 0x285690: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28568c) {
            ctx->pc = 0x285650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285650;
        }
    }
    ctx->pc = 0x285694u;
label_285694:
    // 0x285694: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x285694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28569c: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x28569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2856a0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2856a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2856a4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2856a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2856a8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2856a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2856ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2856acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2856b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2856B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2856B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856B0u;
        // 0x2856b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2856B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2856B8u;
}
