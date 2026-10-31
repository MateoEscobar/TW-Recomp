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

// Function: sub_00231198
// Address: 0x231198 - 0x231574
void sub_00231198_0x231198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231198_0x231198");
#endif

    switch (ctx->pc) {
        case 0x2311b8u: goto label_2311b8;
        case 0x2311f0u: goto label_2311f0;
        case 0x23120cu: goto label_23120c;
        case 0x231228u: goto label_231228;
        case 0x231244u: goto label_231244;
        case 0x231258u: goto label_231258;
        case 0x2312acu: goto label_2312ac;
        case 0x2312c0u: goto label_2312c0;
        case 0x231314u: goto label_231314;
        case 0x231330u: goto label_231330;
        case 0x23134cu: goto label_23134c;
        case 0x231360u: goto label_231360;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313c8u: goto label_2313c8;
        case 0x23141cu: goto label_23141c;
        case 0x231438u: goto label_231438;
        case 0x231450u: goto label_231450;
        case 0x231478u: goto label_231478;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314ccu: goto label_2314cc;
        case 0x2314d8u: goto label_2314d8;
        case 0x23151cu: goto label_23151c;
        case 0x231534u: goto label_231534;
        case 0x23155cu: goto label_23155c;
        case 0x23156cu: goto label_23156c;
        default: break;
    }

    ctx->pc = 0x231198u;

    // 0x231198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23119c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2311a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2311a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2311a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2311a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2311a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2311ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2311acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311b0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2311B0u;
    SET_GPR_U32(ctx, 31, 0x2311B8u);
    ctx->pc = 0x2311B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311B0u;
    // 0x2311b4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2311B0u, 0x2311B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311B8u;
label_2311b8:
    // 0x2311b8: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2311B8u;
    {
        const bool branch_taken_0x2311b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311B8u;
        // 0x2311bc: 0x2623fffe  addiu       $v1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311b8) {
            ctx->pc = 0x231448u;
            goto label_231448;
        }
    }
    ctx->pc = 0x2311C0u;
    // 0x2311c0: 0x2c62002a  sltiu       $v0, $v1, 0x2A
    ctx->pc = 0x2311c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x2311c4: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2311C4u;
    {
        const bool branch_taken_0x2311c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311C4u;
        // 0x2311c8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311c4) {
            ctx->pc = 0x231574u;
            return;
        }
    }
    ctx->pc = 0x2311CCu;
    // 0x2311cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2311d0: 0x2442c230  addiu       $v0, $v0, -0x3DD0
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951472));
    // 0x2311d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2311d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2311dc: 0x800008  jr          $a0
    ctx->pc = 0x2311DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2311E4u: goto label_2311e4;
            case 0x231200u: goto label_231200;
            case 0x23121Cu: goto label_23121c;
            case 0x231238u: goto label_231238;
            case 0x2312A0u: goto label_2312a0;
            case 0x231308u: goto label_231308;
            case 0x231324u: goto label_231324;
            case 0x231340u: goto label_231340;
            case 0x2313A8u: goto label_2313a8;
            case 0x231410u: goto label_231410;
            case 0x23142Cu: goto label_23142c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2311DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2311E4u;
label_2311e4:
    // 0x2311e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2311e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311e8: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x2311E8u;
    SET_GPR_U32(ctx, 31, 0x2311F0u);
    ctx->pc = 0x2311ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311E8u;
    // 0x2311ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x2311E8u, 0x2311F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311F0u;
label_2311f0:
    // 0x2311f0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2311f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2311f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2311f8: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x2311F8u;
    {
        const bool branch_taken_0x2311f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2311f8) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231200u;
label_231200:
    // 0x231200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231204: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x231204u;
    SET_GPR_U32(ctx, 31, 0x23120Cu);
    ctx->pc = 0x231208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231204u;
    // 0x231208: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x231204u, 0x23120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23120Cu;
label_23120c:
    // 0x23120c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231210: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231214: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x231214u;
    {
        const bool branch_taken_0x231214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231214) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x23121Cu;
label_23121c:
    // 0x23121c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231220: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x231220u;
    SET_GPR_U32(ctx, 31, 0x231228u);
    ctx->pc = 0x231224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231220u;
    // 0x231224: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x231220u, 0x231228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231228u;
label_231228:
    // 0x231228: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x23122c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23122cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231230: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x231230u;
    {
        const bool branch_taken_0x231230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231230) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231238u;
label_231238:
    // 0x231238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23123c: 0xc040680  jal         func_101A00
    ctx->pc = 0x23123Cu;
    SET_GPR_U32(ctx, 31, 0x231244u);
    ctx->pc = 0x231240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23123Cu;
    // 0x231240: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x23123Cu, 0x231244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231244u;
label_231244:
    // 0x231244: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x231244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x231248: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231248u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23124c: 0x2484b870  addiu       $a0, $a0, -0x4790
    ctx->pc = 0x23124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    // 0x231250: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x231250u;
    SET_GPR_U32(ctx, 31, 0x231258u);
    ctx->pc = 0x231254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231250u;
    // 0x231254: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x231250u, 0x231258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231258u;
label_231258:
    // 0x231258: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231258u;
    {
        const bool branch_taken_0x231258 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231258u;
        // 0x23125c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231258) {
            ctx->pc = 0x231274u;
            goto label_231274;
        }
    }
    ctx->pc = 0x231260u;
    // 0x231260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231264: 0x0  nop
    ctx->pc = 0x231264u;
    // NOP
    // 0x231268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23126c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23126Cu;
    {
        const bool branch_taken_0x23126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23126Cu;
        // 0x231270: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23126c) {
            ctx->pc = 0x231290u;
            goto label_231290;
        }
    }
    ctx->pc = 0x231274u;
label_231274:
    // 0x231274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x231278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x231278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23127c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23127cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231280: 0x0  nop
    ctx->pc = 0x231280u;
    // NOP
    // 0x231284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231288: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x231288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23128c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x23128cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_231290:
    // 0x231290: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x231290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x231294: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231298: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x231298u;
    {
        const bool branch_taken_0x231298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231298) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x2312A0u;
label_2312a0:
    // 0x2312a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2312a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312a4: 0xc040680  jal         func_101A00
    ctx->pc = 0x2312A4u;
    SET_GPR_U32(ctx, 31, 0x2312ACu);
    ctx->pc = 0x2312A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312A4u;
    // 0x2312a8: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2312A4u, 0x2312ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312ACu;
label_2312ac:
    // 0x2312ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2312b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2312b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2312b4: 0x2484b870  addiu       $a0, $a0, -0x4790
    ctx->pc = 0x2312b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    // 0x2312b8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2312B8u;
    SET_GPR_U32(ctx, 31, 0x2312C0u);
    ctx->pc = 0x2312BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312B8u;
    // 0x2312bc: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2312B8u, 0x2312C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312C0u;
label_2312c0:
    // 0x2312c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2312C0u;
    {
        const bool branch_taken_0x2312c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2312C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312C0u;
        // 0x2312c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312c0) {
            ctx->pc = 0x2312DCu;
            goto label_2312dc;
        }
    }
    ctx->pc = 0x2312C8u;
    // 0x2312c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2312c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312cc: 0x0  nop
    ctx->pc = 0x2312ccu;
    // NOP
    // 0x2312d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2312d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2312d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2312D4u;
    {
        const bool branch_taken_0x2312d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312D4u;
        // 0x2312d8: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312d4) {
            ctx->pc = 0x2312F8u;
            goto label_2312f8;
        }
    }
    ctx->pc = 0x2312DCu;
label_2312dc:
    // 0x2312dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2312dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2312e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2312e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2312e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2312e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312e8: 0x0  nop
    ctx->pc = 0x2312e8u;
    // NOP
    // 0x2312ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2312ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2312f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2312f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2312f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2312f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2312f8:
    // 0x2312f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2312f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2312fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2312fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231300: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x231300u;
    {
        const bool branch_taken_0x231300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231300) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231308u;
label_231308:
    // 0x231308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23130c: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x23130Cu;
    SET_GPR_U32(ctx, 31, 0x231314u);
    ctx->pc = 0x231310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23130Cu;
    // 0x231310: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x23130Cu, 0x231314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231314u;
label_231314:
    // 0x231314: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231318: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23131c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x23131Cu;
    {
        const bool branch_taken_0x23131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23131c) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231324u;
label_231324:
    // 0x231324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231328: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x231328u;
    SET_GPR_U32(ctx, 31, 0x231330u);
    ctx->pc = 0x23132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231328u;
    // 0x23132c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x231328u, 0x231330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231330u;
label_231330:
    // 0x231330: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231338: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x231338u;
    {
        const bool branch_taken_0x231338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231338) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231340u;
label_231340:
    // 0x231340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231344: 0xc040680  jal         func_101A00
    ctx->pc = 0x231344u;
    SET_GPR_U32(ctx, 31, 0x23134Cu);
    ctx->pc = 0x231348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231344u;
    // 0x231348: 0x240500d4  addiu       $a1, $zero, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231344u, 0x23134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23134Cu;
label_23134c:
    // 0x23134c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x231350: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231350u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231354: 0x2484b870  addiu       $a0, $a0, -0x4790
    ctx->pc = 0x231354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    // 0x231358: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x231358u;
    SET_GPR_U32(ctx, 31, 0x231360u);
    ctx->pc = 0x23135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231358u;
    // 0x23135c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x231358u, 0x231360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231360u;
label_231360:
    // 0x231360: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231360u;
    {
        const bool branch_taken_0x231360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x231364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231360u;
        // 0x231364: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231360) {
            ctx->pc = 0x23137Cu;
            goto label_23137c;
        }
    }
    ctx->pc = 0x231368u;
    // 0x231368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23136c: 0x0  nop
    ctx->pc = 0x23136cu;
    // NOP
    // 0x231370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231374u;
    {
        const bool branch_taken_0x231374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231374u;
        // 0x231378: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231374) {
            ctx->pc = 0x231398u;
            goto label_231398;
        }
    }
    ctx->pc = 0x23137Cu;
label_23137c:
    // 0x23137c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x231380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x231380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x231384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231388: 0x0  nop
    ctx->pc = 0x231388u;
    // NOP
    // 0x23138c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23138cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231390: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x231390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x231394: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x231394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_231398:
    // 0x231398: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23139c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23139cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2313a0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2313A0u;
    {
        const bool branch_taken_0x2313a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313a0) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x2313A8u;
label_2313a8:
    // 0x2313a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2313a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313ac: 0xc040680  jal         func_101A00
    ctx->pc = 0x2313ACu;
    SET_GPR_U32(ctx, 31, 0x2313B4u);
    ctx->pc = 0x2313B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313ACu;
    // 0x2313b0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2313ACu, 0x2313B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313B4u;
label_2313b4:
    // 0x2313b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2313b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2313b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2313bc: 0x2484b870  addiu       $a0, $a0, -0x4790
    ctx->pc = 0x2313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    // 0x2313c0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2313C0u;
    SET_GPR_U32(ctx, 31, 0x2313C8u);
    ctx->pc = 0x2313C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313C0u;
    // 0x2313c4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2313C0u, 0x2313C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313C8u;
label_2313c8:
    // 0x2313c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2313C8u;
    {
        const bool branch_taken_0x2313c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2313CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313C8u;
        // 0x2313cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313c8) {
            ctx->pc = 0x2313E4u;
            goto label_2313e4;
        }
    }
    ctx->pc = 0x2313D0u;
    // 0x2313d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2313d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2313d4: 0x0  nop
    ctx->pc = 0x2313d4u;
    // NOP
    // 0x2313d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2313d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2313dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2313DCu;
    {
        const bool branch_taken_0x2313dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313DCu;
        // 0x2313e0: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313dc) {
            ctx->pc = 0x231400u;
            goto label_231400;
        }
    }
    ctx->pc = 0x2313E4u;
label_2313e4:
    // 0x2313e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2313e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2313e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2313e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2313ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2313ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2313f0: 0x0  nop
    ctx->pc = 0x2313f0u;
    // NOP
    // 0x2313f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2313f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2313f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2313f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2313fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2313fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_231400:
    // 0x231400: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x231400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x231404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231408: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x231408u;
    {
        const bool branch_taken_0x231408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231408) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231410u;
label_231410:
    // 0x231410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231414: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x231414u;
    SET_GPR_U32(ctx, 31, 0x23141Cu);
    ctx->pc = 0x231418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231414u;
    // 0x231418: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x231414u, 0x23141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23141Cu;
label_23141c:
    // 0x23141c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x231420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231424: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x231424u;
    {
        const bool branch_taken_0x231424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231424) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x23142Cu;
label_23142c:
    // 0x23142c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231430: 0xc0405e8  jal         func_1017A0
    ctx->pc = 0x231430u;
    SET_GPR_U32(ctx, 31, 0x231438u);
    ctx->pc = 0x231434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231430u;
    // 0x231434: 0x240500e3  addiu       $a1, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A0u, 0x231430u, 0x231438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231438u;
label_231438:
    // 0x231438: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x23143c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23143cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231440: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x231440u;
    {
        const bool branch_taken_0x231440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231440) {
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231448u;
label_231448:
    // 0x231448: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x231448u;
    SET_GPR_U32(ctx, 31, 0x231450u);
    ctx->pc = 0x23144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231448u;
    // 0x23144c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x231448u, 0x231450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231450u;
label_231450:
    // 0x231450: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231454: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231454u;
    {
        const bool branch_taken_0x231454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231454u;
        // 0x231458: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231454) {
            ctx->pc = 0x231470u;
            goto label_231470;
        }
    }
    ctx->pc = 0x23145Cu;
    // 0x23145c: 0x16220046  bne         $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x23145Cu;
    {
        const bool branch_taken_0x23145c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x231460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23145Cu;
        // 0x231460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23145c) {
            ctx->pc = 0x231578u;
            return;
        }
    }
    ctx->pc = 0x231464u;
    // 0x231464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231468: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x231468u;
    {
        const bool branch_taken_0x231468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231468u;
        // 0x23146c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231468) {
            ctx->pc = 0x231554u;
            goto label_231554;
        }
    }
    ctx->pc = 0x231470u;
label_231470:
    // 0x231470: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x231470u;
    SET_GPR_U32(ctx, 31, 0x231478u);
    ctx->pc = 0x231474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231470u;
    // 0x231474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x231470u, 0x231478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231478u;
label_231478:
    // 0x231478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x231478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23147c: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x23147Cu;
    {
        const bool branch_taken_0x23147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23147Cu;
        // 0x231480: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23147c) {
            ctx->pc = 0x23152Cu;
            goto label_23152c;
        }
    }
    ctx->pc = 0x231484u;
    // 0x231484: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231484u;
    {
        const bool branch_taken_0x231484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x231488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231484u;
        // 0x231488: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231484) {
            ctx->pc = 0x231498u;
            goto label_231498;
        }
    }
    ctx->pc = 0x23148Cu;
    // 0x23148c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231490: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x231490u;
    {
        const bool branch_taken_0x231490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231490u;
        // 0x231494: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231490) {
            ctx->pc = 0x231554u;
            goto label_231554;
        }
    }
    ctx->pc = 0x231498u;
label_231498:
    // 0x231498: 0x16220037  bne         $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x231498u;
    {
        const bool branch_taken_0x231498 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231498u;
        // 0x23149c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231498) {
            ctx->pc = 0x231578u;
            return;
        }
    }
    ctx->pc = 0x2314A0u;
    // 0x2314a0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2314A0u;
    SET_GPR_U32(ctx, 31, 0x2314A8u);
    ctx->pc = 0x2314A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314A0u;
    // 0x2314a4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2314A0u, 0x2314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2314a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314ac: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2314ACu;
    {
        const bool branch_taken_0x2314ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314ACu;
        // 0x2314b0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314ac) {
            ctx->pc = 0x231578u;
            return;
        }
    }
    ctx->pc = 0x2314B4u;
    // 0x2314b4: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x2314b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x2314b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2314b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2314bc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2314BCu;
    {
        const bool branch_taken_0x2314bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2314bc) {
            ctx->pc = 0x2314C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2314BCu;
            // 0x2314c0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23150Cu;
            goto label_23150c;
        }
    }
    ctx->pc = 0x2314C4u;
    // 0x2314c4: 0xc089944  jal         func_226510
    ctx->pc = 0x2314C4u;
    SET_GPR_U32(ctx, 31, 0x2314CCu);
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x2314C4u, 0x2314CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314CCu;
label_2314cc:
    // 0x2314cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2314ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2314d0: 0xc088cea  jal         func_2233A8
    ctx->pc = 0x2314D0u;
    SET_GPR_U32(ctx, 31, 0x2314D8u);
    ctx->pc = 0x2314D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314D0u;
    // 0x2314d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233A8u, 0x2314D0u, 0x2314D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314D8u;
label_2314d8:
    // 0x2314d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2314d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2314dc: 0x0  nop
    ctx->pc = 0x2314dcu;
    // NOP
    // 0x2314e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2314e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2314e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2314e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2314e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2314e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2314ec: 0x0  nop
    ctx->pc = 0x2314ecu;
    // NOP
    // 0x2314f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2314f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2314f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2314f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2314f8: 0x0  nop
    ctx->pc = 0x2314f8u;
    // NOP
    // 0x2314fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2314FCu;
    {
        const bool branch_taken_0x2314fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314FCu;
        // 0x231500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314fc) {
            ctx->pc = 0x231524u;
            goto label_231524;
        }
    }
    ctx->pc = 0x231504u;
    // 0x231504: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x231504u;
    {
        const bool branch_taken_0x231504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231504u;
        // 0x231508: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231504) {
            ctx->pc = 0x23157Cu;
            return;
        }
    }
    ctx->pc = 0x23150Cu;
label_23150c:
    // 0x23150c: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x23150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x231510: 0x2484b898  addiu       $a0, $a0, -0x4768
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    // 0x231514: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x231514u;
    SET_GPR_U32(ctx, 31, 0x23151Cu);
    ctx->pc = 0x231518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231514u;
    // 0x231518: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x231514u, 0x23151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23151Cu;
label_23151c:
    // 0x23151c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23151Cu;
    {
        const bool branch_taken_0x23151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23151Cu;
        // 0x231520: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23151c) {
            ctx->pc = 0x23157Cu;
            return;
        }
    }
    ctx->pc = 0x231524u;
label_231524:
    // 0x231524: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x231524u;
    {
        const bool branch_taken_0x231524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231524u;
        // 0x231528: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231524) {
            ctx->pc = 0x231578u;
            return;
        }
    }
    ctx->pc = 0x23152Cu;
label_23152c:
    // 0x23152c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x23152Cu;
    SET_GPR_U32(ctx, 31, 0x231534u);
    ctx->pc = 0x231530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23152Cu;
    // 0x231530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x23152Cu, 0x231534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231534u;
label_231534:
    // 0x231534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231538: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x231538u;
    {
        const bool branch_taken_0x231538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231538u;
        // 0x23153c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231538) {
            ctx->pc = 0x231578u;
            return;
        }
    }
    ctx->pc = 0x231540u;
    // 0x231540: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231544: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x231544u;
    {
        const bool branch_taken_0x231544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x231548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231544u;
        // 0x231548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231544) {
            ctx->pc = 0x231578u;
            return;
        }
    }
    ctx->pc = 0x23154Cu;
    // 0x23154c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231550: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x231550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_231554:
    // 0x231554: 0xc040680  jal         func_101A00
    ctx->pc = 0x231554u;
    SET_GPR_U32(ctx, 31, 0x23155Cu);
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x231554u, 0x23155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23155Cu;
label_23155c:
    // 0x23155c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x23155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x231560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_231564:
    // 0x231564: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x231564u;
    SET_GPR_U32(ctx, 31, 0x23156Cu);
    ctx->pc = 0x231568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231564u;
    // 0x231568: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x231564u, 0x23156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23156Cu;
label_23156c:
    // 0x23156c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23156Cu;
    {
        const bool branch_taken_0x23156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23156Cu;
        // 0x231570: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23156c) {
            ctx->pc = 0x23157Cu;
            return;
        }
    }
    ctx->pc = 0x231574u;
}
