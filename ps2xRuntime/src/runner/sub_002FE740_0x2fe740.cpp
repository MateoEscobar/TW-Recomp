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

// Function: sub_002FE740
// Address: 0x2fe740 - 0x2feaf8
void sub_002FE740_0x2fe740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE740_0x2fe740");
#endif

    switch (ctx->pc) {
        case 0x2fe794u: goto label_2fe794;
        case 0x2fe7a8u: goto label_2fe7a8;
        case 0x2fe7bcu: goto label_2fe7bc;
        case 0x2fe804u: goto label_2fe804;
        case 0x2fe82cu: goto label_2fe82c;
        case 0x2fe8a0u: goto label_2fe8a0;
        case 0x2fe9bcu: goto label_2fe9bc;
        case 0x2fe9fcu: goto label_2fe9fc;
        case 0x2fea14u: goto label_2fea14;
        case 0x2fea48u: goto label_2fea48;
        case 0x2fea58u: goto label_2fea58;
        case 0x2fea68u: goto label_2fea68;
        case 0x2fea84u: goto label_2fea84;
        case 0x2fea9cu: goto label_2fea9c;
        default: break;
    }

    ctx->pc = 0x2fe740u;

    // 0x2fe740: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2fe740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2fe744: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2fe744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2fe748: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2fe748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2fe74c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fe74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe750: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2fe750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2fe754: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2fe754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2fe758: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2fe758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2fe75c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2fe75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2fe760: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2fe760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2fe764: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2fe764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2fe768: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fe768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fe76c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2fe76cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fe770: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2fe770u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fe774: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2fe774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2fe778: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fe778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2fe77c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2fe77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fe780: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2FE780u;
    {
        const bool branch_taken_0x2fe780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE780u;
        // 0x2fe784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe780) {
            ctx->pc = 0x2FEACCu;
            goto label_2feacc;
        }
    }
    ctx->pc = 0x2FE788u;
    // 0x2fe788: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x2fe788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2fe78c: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2FE78Cu;
    SET_GPR_U32(ctx, 31, 0x2FE794u);
    ctx->pc = 0x2FE790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE78Cu;
    // 0x2fe790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2FE78Cu, 0x2FE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE794u;
label_2fe794:
    // 0x2fe794: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2FE794u;
    {
        const bool branch_taken_0x2fe794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE794u;
        // 0x2fe798: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe794) {
            ctx->pc = 0x2FE99Cu;
            goto label_2fe99c;
        }
    }
    ctx->pc = 0x2FE79Cu;
    // 0x2fe79c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2fe79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe7a0: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x2FE7A0u;
    SET_GPR_U32(ctx, 31, 0x2FE7A8u);
    ctx->pc = 0x2FE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7A0u;
    // 0x2fe7a4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2FE7A0u, 0x2FE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7A8u;
label_2fe7a8:
    // 0x2fe7a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fe7a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fe7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe7b4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2FE7B4u;
    SET_GPR_U32(ctx, 31, 0x2FE7BCu);
    ctx->pc = 0x2FE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7B4u;
    // 0x2fe7b8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FE7B4u, 0x2FE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7BCu;
label_2fe7bc:
    // 0x2fe7bc: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x2fe7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2fe7c0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2fe7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2fe7c4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2fe7c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fe7c8: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2fe7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x2fe7cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2fe7ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7d0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2fe7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fe7d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fe7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2fe7d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fe7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fe7e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fe7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fe7e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe7e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2fe7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2fe7ec: 0x86c30092  lh          $v1, 0x92($s6)
    ctx->pc = 0x2fe7ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
    // 0x2fe7f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fe7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2fe7f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fe7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fe7f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fe7f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe7fc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2FE7FCu;
    SET_GPR_U32(ctx, 31, 0x2FE804u);
    ctx->pc = 0x2FE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7FCu;
    // 0x2fe800: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FE7FCu, 0x2FE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE804u;
label_2fe804:
    // 0x2fe804: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2fe804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2fe808: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fe808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fe80c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x2fe80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x2fe810: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fe810u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2fe814: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fe814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fe818: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2fe818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fe81c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fe81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fe820: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2fe820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fe824: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2FE824u;
    SET_GPR_U32(ctx, 31, 0x2FE82Cu);
    ctx->pc = 0x2FE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE824u;
    // 0x2fe828: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2FE824u, 0x2FE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE82Cu;
label_2fe82c:
    // 0x2fe82c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2fe82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2fe830: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2FE830u;
    {
        const bool branch_taken_0x2fe830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE830u;
        // 0x2fe834: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe830) {
            ctx->pc = 0x2FE9B0u;
            goto label_2fe9b0;
        }
    }
    ctx->pc = 0x2FE838u;
    // 0x2fe838: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE838u;
    {
        const bool branch_taken_0x2fe838 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe838) {
            ctx->pc = 0x2FE83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE838u;
            // 0x2fe83c: 0xc6410010  lwc1        $f1, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE854u;
            goto label_2fe854;
        }
    }
    ctx->pc = 0x2FE840u;
    // 0x2fe840: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x2fe840u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fe844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fe844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fe848: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2fe848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x2fe84c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FE84Cu;
    {
        const bool branch_taken_0x2fe84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE84Cu;
        // 0x2fe850: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe84c) {
            ctx->pc = 0x2FE894u;
            goto label_2fe894;
        }
    }
    ctx->pc = 0x2FE854u;
label_2fe854:
    // 0x2fe854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fe854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fe858: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2fe858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x2fe85c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2fe85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2fe860: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fe860u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fe864: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2fe864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fe868: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2fe868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe86c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fe86cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fe870: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fe870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fe874: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2fe874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe878: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fe878u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fe87c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2fe87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fe880: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2fe880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe884: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2fe884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fe888: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2fe888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fe88c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fe88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fe890: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2fe890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2fe894:
    // 0x2fe894: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe898: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2FE898u;
    SET_GPR_U32(ctx, 31, 0x2FE8A0u);
    ctx->pc = 0x2FE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE898u;
    // 0x2fe89c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FE898u, 0x2FE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8A0u;
label_2fe8a0:
    // 0x2fe8a0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2fe8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2fe8a4: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2fe8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x2fe8a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fe8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8ac: 0x0  nop
    ctx->pc = 0x2fe8acu;
    // NOP
    // 0x2fe8b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fe8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe8b4: 0x0  nop
    ctx->pc = 0x2fe8b4u;
    // NOP
    // 0x2fe8b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2FE8B8u;
    {
        const bool branch_taken_0x2fe8b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8B8u;
        // 0x2fe8bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8b8) {
            ctx->pc = 0x2FE8DCu;
            goto label_2fe8dc;
        }
    }
    ctx->pc = 0x2FE8C0u;
    // 0x2fe8c0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2fe8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2fe8c4: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE8C4u;
    {
        const bool branch_taken_0x2fe8c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2fe8c4) {
            ctx->pc = 0x2FE8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE8C4u;
            // 0x2fe8c8: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE8CCu;
            goto label_2fe8cc;
        }
    }
    ctx->pc = 0x2FE8CCu;
label_2fe8cc:
    // 0x2fe8cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fe8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe8d0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2fe8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fe8d4: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2FE8D4u;
    {
        const bool branch_taken_0x2fe8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8D4u;
        // 0x2fe8d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8d4) {
            ctx->pc = 0x2FEACCu;
            goto label_2feacc;
        }
    }
    ctx->pc = 0x2FE8DCu;
label_2fe8dc:
    // 0x2fe8dc: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2fe8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe8e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2fe8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fe8e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2fe8e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe8e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2fe8e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2fe8ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fe8ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fe8f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2fe8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fe8f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fe8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fe8f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fe8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fe8fc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2fe8fcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2fe900: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2fe900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe904: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fe904u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe908: 0x0  nop
    ctx->pc = 0x2fe908u;
    // NOP
    // 0x2fe90c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fe90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe910: 0x0  nop
    ctx->pc = 0x2fe910u;
    // NOP
    // 0x2fe914: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE914u;
    {
        const bool branch_taken_0x2fe914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe914) {
            ctx->pc = 0x2FE918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE914u;
            // 0x2fe918: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE91Cu;
            goto label_2fe91c;
        }
    }
    ctx->pc = 0x2FE91Cu;
label_2fe91c:
    // 0x2fe91c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2fe91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fe920: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fe920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fe924: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2fe924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fe928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fe928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fe92c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FE92Cu;
    {
        const bool branch_taken_0x2fe92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE92Cu;
        // 0x2fe930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe92c) {
            ctx->pc = 0x2FE96Cu;
            goto label_2fe96c;
        }
    }
    ctx->pc = 0x2FE934u;
    // 0x2fe934: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2fe934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fe938: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fe938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fe93c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2fe93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2fe940: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2fe940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fe944: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fe944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fe948: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE948u;
    {
        const bool branch_taken_0x2fe948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe948) {
            ctx->pc = 0x2FE94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE948u;
            // 0x2fe94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE970u;
            goto label_2fe970;
        }
    }
    ctx->pc = 0x2FE950u;
    // 0x2fe950: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x2fe950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2fe954: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fe954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fe958: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2fe958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2fe95c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2fe95cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fe960: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fe960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fe964: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE964u;
    {
        const bool branch_taken_0x2fe964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE964u;
        // 0x2fe968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe964) {
            ctx->pc = 0x2FE974u;
            goto label_2fe974;
        }
    }
    ctx->pc = 0x2FE96Cu;
label_2fe96c:
    // 0x2fe96c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fe96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe970:
    // 0x2fe970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe974:
    // 0x2fe974: 0x54a2000b  bnel        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE974u;
    {
        const bool branch_taken_0x2fe974 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe974) {
            ctx->pc = 0x2FE978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE974u;
            // 0x2fe978: 0x8ed501a8  lw          $s5, 0x1A8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE9A4u;
            goto label_2fe9a4;
        }
    }
    ctx->pc = 0x2FE97Cu;
    // 0x2fe97c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2fe97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2fe980: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2fe980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fe984: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE984u;
    {
        const bool branch_taken_0x2fe984 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2fe984) {
            ctx->pc = 0x2FE988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE984u;
            // 0x2fe988: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE98Cu;
            goto label_2fe98c;
        }
    }
    ctx->pc = 0x2FE98Cu;
label_2fe98c:
    // 0x2fe98c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fe98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe990: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2fe990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fe994: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE994u;
    {
        const bool branch_taken_0x2fe994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe994) {
            ctx->pc = 0x2FE998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE994u;
            // 0x2fe998: 0x8ed501a8  lw          $s5, 0x1A8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE9A4u;
            goto label_2fe9a4;
        }
    }
    ctx->pc = 0x2FE99Cu;
label_2fe99c:
    // 0x2fe99c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2FE99Cu;
    {
        const bool branch_taken_0x2fe99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE99Cu;
        // 0x2fe9a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe99c) {
            ctx->pc = 0x2FEACCu;
            goto label_2feacc;
        }
    }
    ctx->pc = 0x2FE9A4u;
label_2fe9a4:
    // 0x2fe9a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fe9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe9a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FE9A8u;
    {
        const bool branch_taken_0x2fe9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9A8u;
        // 0x2fe9ac: 0x55a80a  movz        $s5, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9a8) {
            ctx->pc = 0x2FEA38u;
            goto label_2fea38;
        }
    }
    ctx->pc = 0x2FE9B0u;
label_2fe9b0:
    // 0x2fe9b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fe9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fe9b4: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FE9B4u;
    SET_GPR_U32(ctx, 31, 0x2FE9BCu);
    ctx->pc = 0x2FE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9B4u;
    // 0x2fe9b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FE9B4u, 0x2FE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9BCu;
label_2fe9bc:
    // 0x2fe9bc: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2fe9bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fe9c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fe9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe9c4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x2fe9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fe9c8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2fe9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2fe9cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2fe9ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2fe9d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fe9d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fe9d4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2fe9d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fe9d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fe9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fe9dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fe9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fe9e0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x2fe9e0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2fe9e4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2fe9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2fe9e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fe9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe9ec: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x2fe9ecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fe9f0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2fe9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2fe9f4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2FE9F4u;
    SET_GPR_U32(ctx, 31, 0x2FE9FCu);
    ctx->pc = 0x2FE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9F4u;
    // 0x2fe9f8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2FE9F4u, 0x2FE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9FCu;
label_2fe9fc:
    // 0x2fe9fc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fe9fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fea00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fea04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fea04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea08: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2fea08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fea0c: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2FEA0Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA14u);
    ctx->pc = 0x2FEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA0Cu;
    // 0x2fea10: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2FEA0Cu, 0x2FEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA14u;
label_2fea14:
    // 0x2fea14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fea14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fea18: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x2fea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x2fea1c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fea1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fea20: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2fea20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fea24: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x2fea24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x2fea28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FEA28u;
    {
        const bool branch_taken_0x2fea28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA28u;
        // 0x2fea2c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea28) {
            ctx->pc = 0x2FEA34u;
            goto label_2fea34;
        }
    }
    ctx->pc = 0x2FEA30u;
    // 0x2fea30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2fea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2fea34:
    // 0x2fea34: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x2fea34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
label_2fea38:
    // 0x2fea38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fea3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fea40: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FEA40u;
    SET_GPR_U32(ctx, 31, 0x2FEA48u);
    ctx->pc = 0x2FEA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA40u;
    // 0x2fea44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FEA40u, 0x2FEA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA48u;
label_2fea48:
    // 0x2fea48: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2fea48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fea4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fea50: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2FEA50u;
    SET_GPR_U32(ctx, 31, 0x2FEA58u);
    ctx->pc = 0x2FEA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA50u;
    // 0x2fea54: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FEA50u, 0x2FEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA58u;
label_2fea58:
    // 0x2fea58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2fea58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fea5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fea5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2fea60: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FEA60u;
    SET_GPR_U32(ctx, 31, 0x2FEA68u);
    ctx->pc = 0x2FEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA60u;
    // 0x2fea64: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FEA60u, 0x2FEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA68u;
label_2fea68:
    // 0x2fea68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fea6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fea70: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2fea70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2fea74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fea74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fea78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fea78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fea7c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2FEA7Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA84u);
    ctx->pc = 0x2FEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA7Cu;
    // 0x2fea80: 0xe4540110  swc1        $f20, 0x110($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2FEA7Cu, 0x2FEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA84u;
label_2fea84:
    // 0x2fea84: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fea84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fea88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fea8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fea8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea90: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2fea90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fea94: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2FEA94u;
    SET_GPR_U32(ctx, 31, 0x2FEA9Cu);
    ctx->pc = 0x2FEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA94u;
    // 0x2fea98: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2FEA94u, 0x2FEA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA9Cu;
label_2fea9c:
    // 0x2fea9c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2fea9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2feaa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2feaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2feaa4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2feaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2feaa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2feaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feaac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2feaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2feab0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2feab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2feab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2feab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feab8: 0x7c830090  sq          $v1, 0x90($a0)
    ctx->pc = 0x2feab8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 3));
    // 0x2feabc: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x2feabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2feac0: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x2feac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x2feac4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2feac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2feac8: 0xa065011c  sb          $a1, 0x11C($v1)
    ctx->pc = 0x2feac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 5));
label_2feacc:
    // 0x2feacc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2feaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fead0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2fead0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fead4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2fead4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fead8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2fead8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2feadc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2feadcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2feae0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2feae0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2feae4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2feae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2feae8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2feae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2feaec: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2feaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2feaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAF0u;
        // 0x2feaf4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEAF8u;
}
