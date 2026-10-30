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

// Function: sub_002352F8
// Address: 0x2352f8 - 0x235438
void sub_002352F8_0x2352f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002352F8_0x2352f8");
#endif

    switch (ctx->pc) {
        case 0x235314u: goto label_235314;
        case 0x23531cu: goto label_23531c;
        case 0x2353b8u: goto label_2353b8;
        default: break;
    }

    ctx->pc = 0x2352f8u;

    // 0x2352f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2352f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2352fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2352fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x235300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x235304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x235304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x235308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23530c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23530Cu;
    SET_GPR_U32(ctx, 31, 0x235314u);
    ctx->pc = 0x235310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23530Cu;
    // 0x235310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23530Cu, 0x235314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235314u;
label_235314:
    // 0x235314: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235314u;
    SET_GPR_U32(ctx, 31, 0x23531Cu);
    ctx->pc = 0x235318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235314u;
    // 0x235318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235314u, 0x23531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23531Cu;
label_23531c:
    // 0x23531c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23531Cu;
    {
        const bool branch_taken_0x23531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23531Cu;
        // 0x235320: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23531c) {
            ctx->pc = 0x235330u;
            goto label_235330;
        }
    }
    ctx->pc = 0x235324u;
    // 0x235324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235328: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x235328u;
    {
        const bool branch_taken_0x235328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235328u;
        // 0x23532c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235328) {
            ctx->pc = 0x235424u;
            goto label_235424;
        }
    }
    ctx->pc = 0x235330u;
label_235330:
    // 0x235330: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x235330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x235334: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x235334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x235338: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x235338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23533c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x23533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x235340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235344: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x235344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235348: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23534c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235350: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x235350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235354: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x235354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23535c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x23535Cu;
    {
        const bool branch_taken_0x23535c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x235360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23535Cu;
        // 0x235360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23535c) {
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x235364u;
    // 0x235364: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x235368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23536c: 0x0  nop
    ctx->pc = 0x23536cu;
    // NOP
    // 0x235370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x235370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235374: 0x0  nop
    ctx->pc = 0x235374u;
    // NOP
    // 0x235378: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x235378u;
    {
        const bool branch_taken_0x235378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x235378) {
            ctx->pc = 0x23537Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235378u;
            // 0x23537c: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x235394u;
            goto label_235394;
        }
    }
    ctx->pc = 0x235380u;
    // 0x235380: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x235384: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x235384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x235388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23538c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23538Cu;
    {
        const bool branch_taken_0x23538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23538Cu;
        // 0x235390: 0x86020002  lh          $v0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23538c) {
            ctx->pc = 0x2353D0u;
            goto label_2353d0;
        }
    }
    ctx->pc = 0x235394u;
label_235394:
    // 0x235394: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x235394u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x235398: 0x0  nop
    ctx->pc = 0x235398u;
    // NOP
    // 0x23539c: 0x0  nop
    ctx->pc = 0x23539cu;
    // NOP
    // 0x2353a0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2353a0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2353a4: 0x0  nop
    ctx->pc = 0x2353a4u;
    // NOP
    // 0x2353a8: 0x0  nop
    ctx->pc = 0x2353a8u;
    // NOP
    // 0x2353ac: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x2353acu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x2353b0: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x2353B0u;
    SET_GPR_U32(ctx, 31, 0x2353B8u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x2353B0u, 0x2353B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353B8u;
label_2353b8:
    // 0x2353b8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2353bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2353bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2353c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2353c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2353c4: 0x0  nop
    ctx->pc = 0x2353c4u;
    // NOP
    // 0x2353c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2353c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2353cc:
    // 0x2353cc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2353d0:
    // 0x2353d0: 0x26234b00  addiu       $v1, $s1, 0x4B00
    ctx->pc = 0x2353d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x2353d4: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x2353d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2353d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2353d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2353dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2353dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2353e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2353e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2353e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2353e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2353e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2353e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2353ec: 0x0  nop
    ctx->pc = 0x2353ecu;
    // NOP
    // 0x2353f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2353F0u;
    {
        const bool branch_taken_0x2353f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2353f0) {
            ctx->pc = 0x23540Cu;
            goto label_23540c;
        }
    }
    ctx->pc = 0x2353F8u;
    // 0x2353f8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2353f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2353fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2353fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x235400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235404: 0x0  nop
    ctx->pc = 0x235404u;
    // NOP
    // 0x235408: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x235408u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_23540c:
    // 0x23540c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x23540cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x235410: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x235410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x235414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235418: 0x0  nop
    ctx->pc = 0x235418u;
    // NOP
    // 0x23541c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23541cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x235420: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x235420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_235424:
    // 0x235424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x235424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23542c: 0x3e00008  jr          $ra
    ctx->pc = 0x23542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23542Cu;
        // 0x235430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235434u;
    // 0x235434: 0x0  nop
    ctx->pc = 0x235434u;
    // NOP
    ctx->pc = 0x235438u;
}
