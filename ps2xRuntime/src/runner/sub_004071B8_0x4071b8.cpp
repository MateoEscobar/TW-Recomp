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

// Function: sub_004071B8
// Address: 0x4071b8 - 0x407318
void sub_004071B8_0x4071b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004071B8_0x4071b8");
#endif

    switch (ctx->pc) {
        case 0x4071b8u: goto label_4071b8;
        case 0x4071bcu: goto label_4071bc;
        case 0x4071c0u: goto label_4071c0;
        case 0x4071c4u: goto label_4071c4;
        case 0x4071c8u: goto label_4071c8;
        case 0x4071ccu: goto label_4071cc;
        case 0x4071d0u: goto label_4071d0;
        case 0x4071d4u: goto label_4071d4;
        case 0x4071d8u: goto label_4071d8;
        case 0x4071dcu: goto label_4071dc;
        case 0x4071e0u: goto label_4071e0;
        case 0x4071e4u: goto label_4071e4;
        case 0x4071e8u: goto label_4071e8;
        case 0x4071ecu: goto label_4071ec;
        case 0x4071f0u: goto label_4071f0;
        case 0x4071f4u: goto label_4071f4;
        case 0x4071f8u: goto label_4071f8;
        case 0x4071fcu: goto label_4071fc;
        case 0x407200u: goto label_407200;
        case 0x407204u: goto label_407204;
        case 0x407208u: goto label_407208;
        case 0x40720cu: goto label_40720c;
        case 0x407210u: goto label_407210;
        case 0x407214u: goto label_407214;
        case 0x407218u: goto label_407218;
        case 0x40721cu: goto label_40721c;
        case 0x407220u: goto label_407220;
        case 0x407224u: goto label_407224;
        case 0x407228u: goto label_407228;
        case 0x40722cu: goto label_40722c;
        case 0x407230u: goto label_407230;
        case 0x407234u: goto label_407234;
        case 0x407238u: goto label_407238;
        case 0x40723cu: goto label_40723c;
        case 0x407240u: goto label_407240;
        case 0x407244u: goto label_407244;
        case 0x407248u: goto label_407248;
        case 0x40724cu: goto label_40724c;
        case 0x407250u: goto label_407250;
        case 0x407254u: goto label_407254;
        case 0x407258u: goto label_407258;
        case 0x40725cu: goto label_40725c;
        case 0x407260u: goto label_407260;
        case 0x407264u: goto label_407264;
        case 0x407268u: goto label_407268;
        case 0x40726cu: goto label_40726c;
        case 0x407270u: goto label_407270;
        case 0x407274u: goto label_407274;
        case 0x407278u: goto label_407278;
        case 0x40727cu: goto label_40727c;
        case 0x407280u: goto label_407280;
        case 0x407284u: goto label_407284;
        case 0x407288u: goto label_407288;
        case 0x40728cu: goto label_40728c;
        case 0x407290u: goto label_407290;
        case 0x407294u: goto label_407294;
        case 0x407298u: goto label_407298;
        case 0x40729cu: goto label_40729c;
        case 0x4072a0u: goto label_4072a0;
        case 0x4072a4u: goto label_4072a4;
        case 0x4072a8u: goto label_4072a8;
        case 0x4072acu: goto label_4072ac;
        case 0x4072b0u: goto label_4072b0;
        case 0x4072b4u: goto label_4072b4;
        case 0x4072b8u: goto label_4072b8;
        case 0x4072bcu: goto label_4072bc;
        case 0x4072c0u: goto label_4072c0;
        case 0x4072c4u: goto label_4072c4;
        case 0x4072c8u: goto label_4072c8;
        case 0x4072ccu: goto label_4072cc;
        case 0x4072d0u: goto label_4072d0;
        case 0x4072d4u: goto label_4072d4;
        case 0x4072d8u: goto label_4072d8;
        case 0x4072dcu: goto label_4072dc;
        case 0x4072e0u: goto label_4072e0;
        case 0x4072e4u: goto label_4072e4;
        case 0x4072e8u: goto label_4072e8;
        case 0x4072ecu: goto label_4072ec;
        case 0x4072f0u: goto label_4072f0;
        case 0x4072f4u: goto label_4072f4;
        case 0x4072f8u: goto label_4072f8;
        case 0x4072fcu: goto label_4072fc;
        case 0x407300u: goto label_407300;
        case 0x407304u: goto label_407304;
        case 0x407308u: goto label_407308;
        case 0x40730cu: goto label_40730c;
        case 0x407310u: goto label_407310;
        case 0x407314u: goto label_407314;
        default: break;
    }

    ctx->pc = 0x4071b8u;

label_4071b8:
    // 0x4071b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4071b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4071bc:
    // 0x4071bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4071bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4071c0:
    // 0x4071c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4071c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4071c4:
    // 0x4071c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4071c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4071c8:
    // 0x4071c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4071c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4071cc:
    // 0x4071cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4071ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4071d0:
    // 0x4071d0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x4071d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4071d4:
    // 0x4071d4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x4071d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4071d8:
    // 0x4071d8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x4071d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4071dc:
    // 0x4071dc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x4071dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_4071e0:
    // 0x4071e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4071e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4071e4:
    // 0x4071e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4071e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4071e8:
    // 0x4071e8: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x4071e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_4071ec:
    // 0x4071ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4071ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4071f0:
    // 0x4071f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4071f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4071f4:
    // 0x4071f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4071f8:
    // 0x4071f8: 0x40f809  jalr        $v0
label_4071fc:
    if (ctx->pc == 0x4071FCu) {
        ctx->pc = 0x4071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4071F8u;
        // 0x4071fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407200u;
        goto label_407200;
    }
    ctx->pc = 0x4071F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407200u);
        ctx->pc = 0x4071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4071F8u;
        // 0x4071fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4071F8u, 0x407200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407200u;
label_407200:
    // 0x407200: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x407200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407204:
    // 0x407204: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x407204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_407208:
    // 0x407208: 0xc0e858c  jal         func_3A1630
label_40720c:
    if (ctx->pc == 0x40720Cu) {
        ctx->pc = 0x40720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407208u;
        // 0x40720c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407210u;
        goto label_407210;
    }
    ctx->pc = 0x407208u;
    SET_GPR_U32(ctx, 31, 0x407210u);
    ctx->pc = 0x40720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407208u;
    // 0x40720c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x407208u, 0x407210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407210u;
label_407210:
    // 0x407210: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x407210u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_407214:
    // 0x407214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x407214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_407218:
    // 0x407218: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x407218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_40721c:
    // 0x40721c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x40721cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_407220:
    // 0x407220: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x407220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_407224:
    // 0x407224: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x407224u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_407228:
    // 0x407228: 0xc0cd508  jal         func_335420
label_40722c:
    if (ctx->pc == 0x40722Cu) {
        ctx->pc = 0x40722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407228u;
        // 0x40722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407230u;
        goto label_407230;
    }
    ctx->pc = 0x407228u;
    SET_GPR_U32(ctx, 31, 0x407230u);
    ctx->pc = 0x40722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407228u;
    // 0x40722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x407228u, 0x407230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407230u;
label_407230:
    // 0x407230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407234:
    // 0x407234: 0xc0cd550  jal         func_335540
label_407238:
    if (ctx->pc == 0x407238u) {
        ctx->pc = 0x407238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407234u;
        // 0x407238: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40723Cu;
        goto label_40723c;
    }
    ctx->pc = 0x407234u;
    SET_GPR_U32(ctx, 31, 0x40723Cu);
    ctx->pc = 0x407238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407234u;
    // 0x407238: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x407234u, 0x40723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40723Cu;
label_40723c:
    // 0x40723c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x40723cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_407240:
    // 0x407240: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x407240u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_407244:
    // 0x407244: 0x263131a0  addiu       $s1, $s1, 0x31A0
    ctx->pc = 0x407244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12704));
label_407248:
    // 0x407248: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x407248u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40724c:
    // 0x40724c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x40724cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_407250:
    // 0x407250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407254:
    // 0x407254: 0xc0cd508  jal         func_335420
label_407258:
    if (ctx->pc == 0x407258u) {
        ctx->pc = 0x407258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407254u;
        // 0x407258: 0xe6340010  swc1        $f20, 0x10($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40725Cu;
        goto label_40725c;
    }
    ctx->pc = 0x407254u;
    SET_GPR_U32(ctx, 31, 0x40725Cu);
    ctx->pc = 0x407258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407254u;
    // 0x407258: 0xe6340010  swc1        $f20, 0x10($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x407254u, 0x40725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40725Cu;
label_40725c:
    // 0x40725c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407260:
    // 0x407260: 0xc0cd550  jal         func_335540
label_407264:
    if (ctx->pc == 0x407264u) {
        ctx->pc = 0x407264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407260u;
        // 0x407264: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407268u;
        goto label_407268;
    }
    ctx->pc = 0x407260u;
    SET_GPR_U32(ctx, 31, 0x407268u);
    ctx->pc = 0x407264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407260u;
    // 0x407264: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x407260u, 0x407268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407268u;
label_407268:
    // 0x407268: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x407268u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_40726c:
    // 0x40726c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x40726cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_407270:
    // 0x407270: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x407270u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_407274:
    // 0x407274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407278:
    // 0x407278: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x407278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_40727c:
    // 0x40727c: 0xc0cd508  jal         func_335420
label_407280:
    if (ctx->pc == 0x407280u) {
        ctx->pc = 0x407280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40727Cu;
        // 0x407280: 0xe6340014  swc1        $f20, 0x14($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407284u;
        goto label_407284;
    }
    ctx->pc = 0x40727Cu;
    SET_GPR_U32(ctx, 31, 0x407284u);
    ctx->pc = 0x407280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40727Cu;
    // 0x407280: 0xe6340014  swc1        $f20, 0x14($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x40727Cu, 0x407284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407284u;
label_407284:
    // 0x407284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407288:
    // 0x407288: 0xc0cd550  jal         func_335540
label_40728c:
    if (ctx->pc == 0x40728Cu) {
        ctx->pc = 0x40728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407288u;
        // 0x40728c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407290u;
        goto label_407290;
    }
    ctx->pc = 0x407288u;
    SET_GPR_U32(ctx, 31, 0x407290u);
    ctx->pc = 0x40728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407288u;
    // 0x40728c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x407288u, 0x407290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407290u;
label_407290:
    // 0x407290: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x407290u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_407294:
    // 0x407294: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x407294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_407298:
    // 0x407298: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x407298u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_40729c:
    // 0x40729c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4072a0:
    // 0x4072a0: 0xc0cd508  jal         func_335420
label_4072a4:
    if (ctx->pc == 0x4072A4u) {
        ctx->pc = 0x4072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4072A0u;
        // 0x4072a4: 0xe6340020  swc1        $f20, 0x20($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4072A8u;
        goto label_4072a8;
    }
    ctx->pc = 0x4072A0u;
    SET_GPR_U32(ctx, 31, 0x4072A8u);
    ctx->pc = 0x4072A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4072A0u;
    // 0x4072a4: 0xe6340020  swc1        $f20, 0x20($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x4072A0u, 0x4072A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4072A8u;
label_4072a8:
    // 0x4072a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4072a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4072ac:
    // 0x4072ac: 0xc0cd550  jal         func_335540
label_4072b0:
    if (ctx->pc == 0x4072B0u) {
        ctx->pc = 0x4072B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4072ACu;
        // 0x4072b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4072B4u;
        goto label_4072b4;
    }
    ctx->pc = 0x4072ACu;
    SET_GPR_U32(ctx, 31, 0x4072B4u);
    ctx->pc = 0x4072B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4072ACu;
    // 0x4072b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x4072ACu, 0x4072B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4072B4u;
label_4072b4:
    // 0x4072b4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x4072b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4072b8:
    // 0x4072b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4072b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4072bc:
    // 0x4072bc: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x4072bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_4072c0:
    // 0x4072c0: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x4072c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
label_4072c4:
    // 0x4072c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4072c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4072c8:
    // 0x4072c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4072c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4072cc:
    // 0x4072cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4072ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4072d0:
    // 0x4072d0: 0xe6340024  swc1        $f20, 0x24($s1)
    ctx->pc = 0x4072d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_4072d4:
    // 0x4072d4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x4072d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_4072d8:
    // 0x4072d8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x4072d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_4072dc:
    // 0x4072dc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4072dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4072e0:
    // 0x4072e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4072e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4072e4:
    // 0x4072e4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x4072e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_4072e8:
    // 0x4072e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4072e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4072ec:
    // 0x4072ec: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x4072ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_4072f0:
    // 0x4072f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4072f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4072f4:
    // 0x4072f4: 0x8ca38690  lw          $v1, -0x7970($a1)
    ctx->pc = 0x4072f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936208)));
label_4072f8:
    // 0x4072f8: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x4072f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_4072fc:
    // 0x4072fc: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x4072fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_407300:
    // 0x407300: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x407300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407304:
    // 0x407304: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x407304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_407308:
    // 0x407308: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x407308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40730c:
    // 0x40730c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x40730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_407310:
    // 0x407310: 0x3e00008  jr          $ra
label_407314:
    if (ctx->pc == 0x407314u) {
        ctx->pc = 0x407314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407310u;
        // 0x407314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407318u;
        goto label_fallthrough_0x407310;
    }
    ctx->pc = 0x407310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407310u;
        // 0x407314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x407310:
    ctx->pc = 0x407318u;
}
