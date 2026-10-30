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

// Function: sub_00199258
// Address: 0x199258 - 0x199380
void sub_00199258_0x199258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199258_0x199258");
#endif

    switch (ctx->pc) {
        case 0x199258u: goto label_199258;
        case 0x19925cu: goto label_19925c;
        case 0x199260u: goto label_199260;
        case 0x199264u: goto label_199264;
        case 0x199268u: goto label_199268;
        case 0x19926cu: goto label_19926c;
        case 0x199270u: goto label_199270;
        case 0x199274u: goto label_199274;
        case 0x199278u: goto label_199278;
        case 0x19927cu: goto label_19927c;
        case 0x199280u: goto label_199280;
        case 0x199284u: goto label_199284;
        case 0x199288u: goto label_199288;
        case 0x19928cu: goto label_19928c;
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        case 0x1992f8u: goto label_1992f8;
        case 0x1992fcu: goto label_1992fc;
        case 0x199300u: goto label_199300;
        case 0x199304u: goto label_199304;
        case 0x199308u: goto label_199308;
        case 0x19930cu: goto label_19930c;
        case 0x199310u: goto label_199310;
        case 0x199314u: goto label_199314;
        case 0x199318u: goto label_199318;
        case 0x19931cu: goto label_19931c;
        case 0x199320u: goto label_199320;
        case 0x199324u: goto label_199324;
        case 0x199328u: goto label_199328;
        case 0x19932cu: goto label_19932c;
        case 0x199330u: goto label_199330;
        case 0x199334u: goto label_199334;
        case 0x199338u: goto label_199338;
        case 0x19933cu: goto label_19933c;
        case 0x199340u: goto label_199340;
        case 0x199344u: goto label_199344;
        case 0x199348u: goto label_199348;
        case 0x19934cu: goto label_19934c;
        case 0x199350u: goto label_199350;
        case 0x199354u: goto label_199354;
        case 0x199358u: goto label_199358;
        case 0x19935cu: goto label_19935c;
        case 0x199360u: goto label_199360;
        case 0x199364u: goto label_199364;
        case 0x199368u: goto label_199368;
        case 0x19936cu: goto label_19936c;
        case 0x199370u: goto label_199370;
        case 0x199374u: goto label_199374;
        case 0x199378u: goto label_199378;
        case 0x19937cu: goto label_19937c;
        default: break;
    }

    ctx->pc = 0x199258u;

label_199258:
    // 0x199258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19925c:
    // 0x19925c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199260:
    // 0x199260: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x199260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_199264:
    // 0x199264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199268:
    // 0x199268: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x199268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_19926c:
    // 0x19926c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_199270:
    // 0x199270: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x199270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_199274:
    // 0x199274: 0xc066efe  jal         func_19BBF8
label_199278:
    if (ctx->pc == 0x199278u) {
        ctx->pc = 0x199278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199274u;
        // 0x199278: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19927Cu;
        goto label_19927c;
    }
    ctx->pc = 0x199274u;
    SET_GPR_U32(ctx, 31, 0x19927Cu);
    ctx->pc = 0x199278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199274u;
    // 0x199278: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x199274u, 0x19927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19927Cu;
label_19927c:
    // 0x19927c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x19927cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_199280:
    // 0x199280: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x199280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_199284:
    // 0x199284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199288:
    // 0x199288: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x199288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_19928c:
    // 0x19928c: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x19928cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_199290:
    // 0x199290: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199294:
    // 0x199294: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x199294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
label_199298:
    // 0x199298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19929c:
    // 0x19929c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1992a0:
    // 0x1992a0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1992a4:
    // 0x1992a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1992a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1992a8:
    // 0x1992a8: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1992a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1992ac:
    // 0x1992ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1992acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1992b0:
    // 0x1992b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1992b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1992b4:
    // 0x1992b4: 0xc068848  jal         func_1A2120
label_1992b8:
    if (ctx->pc == 0x1992B8u) {
        ctx->pc = 0x1992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992B4u;
        // 0x1992b8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992BCu;
        goto label_1992bc;
    }
    ctx->pc = 0x1992B4u;
    SET_GPR_U32(ctx, 31, 0x1992BCu);
    ctx->pc = 0x1992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992B4u;
    // 0x1992b8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1992B4u, 0x1992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992BCu;
label_1992bc:
    // 0x1992bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1992bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1992c0:
    // 0x1992c0: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1992c4:
    // 0x1992c4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1992c8:
    // 0x1992c8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1992cc:
    // 0x1992cc: 0x60f809  jalr        $v1
label_1992d0:
    if (ctx->pc == 0x1992D0u) {
        ctx->pc = 0x1992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992CCu;
        // 0x1992d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992D4u;
        goto label_1992d4;
    }
    ctx->pc = 0x1992CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1992D4u);
        ctx->pc = 0x1992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992CCu;
        // 0x1992d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1992CCu, 0x1992D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1992D4u;
label_1992d4:
    // 0x1992d4: 0xc10d272  jal         func_4349C8
label_1992d8:
    if (ctx->pc == 0x1992D8u) {
        ctx->pc = 0x1992DCu;
        goto label_1992dc;
    }
    ctx->pc = 0x1992D4u;
    SET_GPR_U32(ctx, 31, 0x1992DCu);
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x1992D4u, 0x1992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992DCu;
label_1992dc:
    // 0x1992dc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1992dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1992e0:
    // 0x1992e0: 0x0  nop
    ctx->pc = 0x1992e0u;
    // NOP
label_1992e4:
    // 0x1992e4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1992e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1992e8:
    // 0x1992e8: 0xc10d272  jal         func_4349C8
label_1992ec:
    if (ctx->pc == 0x1992ECu) {
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992E8u;
        // 0x1992ec: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992F0u;
        goto label_1992f0;
    }
    ctx->pc = 0x1992E8u;
    SET_GPR_U32(ctx, 31, 0x1992F0u);
    ctx->pc = 0x1992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992E8u;
    // 0x1992ec: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x1992E8u, 0x1992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992F0u;
label_1992f0:
    // 0x1992f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1992f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1992f4:
    // 0x1992f4: 0x0  nop
    ctx->pc = 0x1992f4u;
    // NOP
label_1992f8:
    // 0x1992f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1992f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1992fc:
    // 0x1992fc: 0x922300a5  lbu         $v1, 0xA5($s1)
    ctx->pc = 0x1992fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 165)));
label_199300:
    // 0x199300: 0x922200a4  lbu         $v0, 0xA4($s1)
    ctx->pc = 0x199300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 164)));
label_199304:
    // 0x199304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199308:
    // 0x199308: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x199308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19930c:
    // 0x19930c: 0x0  nop
    ctx->pc = 0x19930cu;
    // NOP
label_199310:
    // 0x199310: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_199314:
    // 0x199314: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x199314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_199318:
    // 0x199318: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x199318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_19931c:
    // 0x19931c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19931cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199320:
    // 0x199320: 0x0  nop
    ctx->pc = 0x199320u;
    // NOP
label_199324:
    // 0x199324: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_199328:
    // 0x199328: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x199328u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_19932c:
    // 0x19932c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19932cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_199330:
    // 0x199330: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x199330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199334:
    // 0x199334: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x199334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_199338:
    // 0x199338: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x199338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_19933c:
    // 0x19933c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x19933cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_199340:
    // 0x199340: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x199340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199344:
    // 0x199344: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x199344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_199348:
    // 0x199348: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x199348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19934c:
    // 0x19934c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x19934cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199350:
    // 0x199350: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x199350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199354:
    // 0x199354: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x199354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199358:
    // 0x199358: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x199358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19935c:
    // 0x19935c: 0xc068864  jal         func_1A2190
label_199360:
    if (ctx->pc == 0x199360u) {
        ctx->pc = 0x199360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19935Cu;
        // 0x199360: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199364u;
        goto label_199364;
    }
    ctx->pc = 0x19935Cu;
    SET_GPR_U32(ctx, 31, 0x199364u);
    ctx->pc = 0x199360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19935Cu;
    // 0x199360: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x19935Cu, 0x199364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199364u;
label_199364:
    // 0x199364: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x199364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_199368:
    // 0x199368: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x199368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19936c:
    // 0x19936c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19936cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199370:
    // 0x199370: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x199370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_199374:
    // 0x199374: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x199374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_199378:
    // 0x199378: 0x3e00008  jr          $ra
label_19937c:
    if (ctx->pc == 0x19937Cu) {
        ctx->pc = 0x19937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199378u;
        // 0x19937c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199380u;
        goto label_fallthrough_0x199378;
    }
    ctx->pc = 0x199378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199378u;
        // 0x19937c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199378:
    ctx->pc = 0x199380u;
}
