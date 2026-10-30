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

// Function: sub_003895D8
// Address: 0x3895d8 - 0x389700
void sub_003895D8_0x3895d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003895D8_0x3895d8");
#endif

    switch (ctx->pc) {
        case 0x389664u: goto label_389664;
        case 0x389670u: goto label_389670;
        case 0x38967cu: goto label_38967c;
        case 0x3896a4u: goto label_3896a4;
        case 0x3896b4u: goto label_3896b4;
        case 0x3896ccu: goto label_3896cc;
        case 0x3896d4u: goto label_3896d4;
        case 0x3896e4u: goto label_3896e4;
        default: break;
    }

    ctx->pc = 0x3895d8u;

    // 0x3895d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3895d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3895dc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3895dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3895e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3895e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3895e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3895e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3895e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3895e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3895ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3895ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3895f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3895f4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3895f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x3895f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3895f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3895fc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3895fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x389600: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x389600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x389604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x389604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x389608: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x389608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x38960c: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x38960Cu;
    {
        const bool branch_taken_0x38960c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38960Cu;
        // 0x389610: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38960c) {
            ctx->pc = 0x3896DCu;
            goto label_3896dc;
        }
    }
    ctx->pc = 0x389614u;
    // 0x389614: 0x9642006e  lhu         $v0, 0x6E($s2)
    ctx->pc = 0x389614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
    // 0x389618: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x389618u;
    {
        const bool branch_taken_0x389618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x38961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389618u;
        // 0x38961c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389618) {
            ctx->pc = 0x389634u;
            goto label_389634;
        }
    }
    ctx->pc = 0x389620u;
    // 0x389620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389624: 0x0  nop
    ctx->pc = 0x389624u;
    // NOP
    // 0x389628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x389628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x38962c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38962Cu;
    {
        const bool branch_taken_0x38962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38962c) {
            ctx->pc = 0x38964Cu;
            goto label_38964c;
        }
    }
    ctx->pc = 0x389634u;
label_389634:
    // 0x389634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x389634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x389638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x389638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x38963c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38963cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389640: 0x0  nop
    ctx->pc = 0x389640u;
    // NOP
    // 0x389644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x389644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x389648: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x389648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38964c:
    // 0x38964c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x38964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x389650: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x389650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x389654: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x389654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x389658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x389658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38965c: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x38965Cu;
    SET_GPR_U32(ctx, 31, 0x389664u);
    ctx->pc = 0x389660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38965Cu;
    // 0x389660: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x38965Cu, 0x389664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389664u;
label_389664:
    // 0x389664: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x389664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389668: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x389668u;
    SET_GPR_U32(ctx, 31, 0x389670u);
    ctx->pc = 0x38966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389668u;
    // 0x38966c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x389668u, 0x389670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389670u;
label_389670:
    // 0x389670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x389670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389674: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x389674u;
    SET_GPR_U32(ctx, 31, 0x38967Cu);
    ctx->pc = 0x389678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389674u;
    // 0x389678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x389674u, 0x38967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38967Cu;
label_38967c:
    // 0x38967c: 0x3c01c17a  lui         $at, 0xC17A
    ctx->pc = 0x38967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49530 << 16));
    // 0x389680: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x389680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x389684: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x389684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x389688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x389688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38968c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x38968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389690: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x389690u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x389694: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x389694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x389698: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x389698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38969c: 0xc0e2600  jal         func_389800
    ctx->pc = 0x38969Cu;
    SET_GPR_U32(ctx, 31, 0x3896A4u);
    ctx->pc = 0x3896A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38969Cu;
    // 0x3896a0: 0x460e0380  add.s       $f14, $f0, $f14 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x389800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389800u, 0x38969Cu, 0x3896A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896A4u;
label_3896a4:
    // 0x3896a4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3896a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3896a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3896a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896ac: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3896ACu;
    SET_GPR_U32(ctx, 31, 0x3896B4u);
    ctx->pc = 0x3896B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3896ACu;
    // 0x3896b0: 0x8c507198  lw          $s0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3896ACu, 0x3896B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896B4u;
label_3896b4:
    // 0x3896b4: 0x8e45130c  lw          $a1, 0x130C($s2)
    ctx->pc = 0x3896b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
    // 0x3896b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3896b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896bc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3896bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3896c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896c4: 0xc0cf89e  jal         func_33E278
    ctx->pc = 0x3896C4u;
    SET_GPR_U32(ctx, 31, 0x3896CCu);
    ctx->pc = 0x3896C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3896C4u;
    // 0x3896c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E278u, 0x3896C4u, 0x3896CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896CCu;
label_3896cc:
    // 0x3896cc: 0xc0e8568  jal         func_3A15A0
    ctx->pc = 0x3896CCu;
    SET_GPR_U32(ctx, 31, 0x3896D4u);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x3896CCu, 0x3896D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896D4u;
label_3896d4:
    // 0x3896d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3896D4u;
    {
        const bool branch_taken_0x3896d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3896D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896D4u;
        // 0x3896d8: 0xe6400050  swc1        $f0, 0x50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896d4) {
            ctx->pc = 0x3896E4u;
            goto label_3896e4;
        }
    }
    ctx->pc = 0x3896DCu;
label_3896dc:
    // 0x3896dc: 0xc0e88c4  jal         func_3A2310
    ctx->pc = 0x3896DCu;
    SET_GPR_U32(ctx, 31, 0x3896E4u);
    ctx->pc = 0x3896E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3896DCu;
    // 0x3896e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2310u, 0x3896DCu, 0x3896E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896E4u;
label_3896e4:
    // 0x3896e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3896e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3896e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3896e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3896ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3896ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3896f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3896f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3896f4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3896f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3896f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3896F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3896FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896F8u;
        // 0x3896fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3896F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389700u;
}
