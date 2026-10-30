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

// Function: sub_002700A8
// Address: 0x2700a8 - 0x270270
void sub_002700A8_0x2700a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002700A8_0x2700a8");
#endif

    switch (ctx->pc) {
        case 0x2700d4u: goto label_2700d4;
        case 0x2700ecu: goto label_2700ec;
        case 0x2700f8u: goto label_2700f8;
        case 0x270128u: goto label_270128;
        case 0x270150u: goto label_270150;
        case 0x270168u: goto label_270168;
        case 0x270178u: goto label_270178;
        case 0x27019cu: goto label_27019c;
        case 0x2701ccu: goto label_2701cc;
        case 0x2701e0u: goto label_2701e0;
        case 0x270218u: goto label_270218;
        case 0x270228u: goto label_270228;
        case 0x270244u: goto label_270244;
        default: break;
    }

    ctx->pc = 0x2700a8u;

    // 0x2700a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2700a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2700ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2700acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2700b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2700b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2700b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2700b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2700b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2700bc: 0x260400c4  addiu       $a0, $s0, 0xC4
    ctx->pc = 0x2700bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x2700c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2700c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2700c4: 0x2413000b  addiu       $s3, $zero, 0xB
    ctx->pc = 0x2700c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2700c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2700c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2700cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2700CCu;
    SET_GPR_U32(ctx, 31, 0x2700D4u);
    ctx->pc = 0x2700D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700CCu;
    // 0x2700d0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2700CCu, 0x2700D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700D4u;
label_2700d4:
    // 0x2700d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2700d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700d8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2700d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2700dc: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2700DCu;
    {
        const bool branch_taken_0x2700dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700DCu;
        // 0x2700e0: 0xac530018  sw          $s3, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700dc) {
            ctx->pc = 0x27024Cu;
            goto label_27024c;
        }
    }
    ctx->pc = 0x2700E4u;
    // 0x2700e4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2700E4u;
    SET_GPR_U32(ctx, 31, 0x2700ECu);
    ctx->pc = 0x2700E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700E4u;
    // 0x2700e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2700E4u, 0x2700ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700ECu;
label_2700ec:
    // 0x2700ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2700ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700f0: 0xc09512e  jal         func_2544B8
    ctx->pc = 0x2700F0u;
    SET_GPR_U32(ctx, 31, 0x2700F8u);
    ctx->pc = 0x2700F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700F0u;
    // 0x2700f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544B8u, 0x2700F0u, 0x2700F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700F8u;
label_2700f8:
    // 0x2700f8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2700f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2700fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2700fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x270100: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270108: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x270108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
    // 0x27010c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x27010cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x270110: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270118: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x270118u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27011c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x27011cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270120: 0xc08a684  jal         func_229A10
    ctx->pc = 0x270120u;
    SET_GPR_U32(ctx, 31, 0x270128u);
    ctx->pc = 0x270124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270120u;
    // 0x270124: 0x4601a528  max.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x270120u, 0x270128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270128u;
label_270128:
    // 0x270128: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x270128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27012c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27012cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x270130: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270134: 0x0  nop
    ctx->pc = 0x270134u;
    // NOP
    // 0x270138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27013c: 0x0  nop
    ctx->pc = 0x27013cu;
    // NOP
    // 0x270140: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x270140u;
    {
        const bool branch_taken_0x270140 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270140u;
        // 0x270144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270140) {
            ctx->pc = 0x270170u;
            goto label_270170;
        }
    }
    ctx->pc = 0x270148u;
    // 0x270148: 0xc08a658  jal         func_229960
    ctx->pc = 0x270148u;
    SET_GPR_U32(ctx, 31, 0x270150u);
    ctx->pc = 0x27014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270148u;
    // 0x27014c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x270148u, 0x270150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270150u;
label_270150:
    // 0x270150: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x270150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270154: 0x0  nop
    ctx->pc = 0x270154u;
    // NOP
    // 0x270158: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x270158u;
    {
        const bool branch_taken_0x270158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270158u;
        // 0x27015c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270158) {
            ctx->pc = 0x270170u;
            goto label_270170;
        }
    }
    ctx->pc = 0x270160u;
    // 0x270160: 0xc087090  jal         func_21C240
    ctx->pc = 0x270160u;
    SET_GPR_U32(ctx, 31, 0x270168u);
    ctx->pc = 0x270164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270160u;
    // 0x270164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x270160u, 0x270168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270168u;
label_270168:
    // 0x270168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270168u;
    {
        const bool branch_taken_0x270168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270168u;
        // 0x27016c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270168) {
            ctx->pc = 0x270180u;
            goto label_270180;
        }
    }
    ctx->pc = 0x270170u;
label_270170:
    // 0x270170: 0xc09c51c  jal         func_271470
    ctx->pc = 0x270170u;
    SET_GPR_U32(ctx, 31, 0x270178u);
    ctx->pc = 0x270174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270170u;
    // 0x270174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x270170u, 0x270178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270178u;
label_270178:
    // 0x270178: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x270178u;
    {
        const bool branch_taken_0x270178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270178u;
        // 0x27017c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270178) {
            ctx->pc = 0x270250u;
            goto label_270250;
        }
    }
    ctx->pc = 0x270180u;
label_270180:
    // 0x270180: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x270180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x270184: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x270184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x270188: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27018c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27018cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270190: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x270190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x270194: 0xc09dc92  jal         func_277248
    ctx->pc = 0x270194u;
    SET_GPR_U32(ctx, 31, 0x27019Cu);
    ctx->pc = 0x270198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270194u;
    // 0x270198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277248u, 0x270194u, 0x27019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27019Cu;
label_27019c:
    // 0x27019c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2701a0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2701a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2701a4: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x2701a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x2701a8: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x2701a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2701ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2701acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2701b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2701b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2701b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2701b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2701b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2701b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2701bc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2701BCu;
    {
        const bool branch_taken_0x2701bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2701bc) {
            ctx->pc = 0x270210u;
            goto label_270210;
        }
    }
    ctx->pc = 0x2701C4u;
    // 0x2701c4: 0xc09efcc  jal         func_27BF30
    ctx->pc = 0x2701C4u;
    SET_GPR_U32(ctx, 31, 0x2701CCu);
    ctx->pc = 0x2701C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701C4u;
    // 0x2701c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF30u, 0x2701C4u, 0x2701CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701CCu;
label_2701cc:
    // 0x2701cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2701CCu;
    {
        const bool branch_taken_0x2701cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701CCu;
        // 0x2701d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701cc) {
            ctx->pc = 0x270230u;
            goto label_270230;
        }
    }
    ctx->pc = 0x2701D4u;
    // 0x2701d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2701d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2701d8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2701D8u;
    SET_GPR_U32(ctx, 31, 0x2701E0u);
    ctx->pc = 0x2701DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701D8u;
    // 0x2701dc: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2701D8u, 0x2701E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701E0u;
label_2701e0:
    // 0x2701e0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2701E0u;
    {
        const bool branch_taken_0x2701e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2701e0) {
            ctx->pc = 0x2701E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2701E0u;
            // 0x2701e4: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270234u;
            goto label_270234;
        }
    }
    ctx->pc = 0x2701E8u;
    // 0x2701e8: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2701e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2701ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2701ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2701f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2701f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2701f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2701f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2701f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2701fc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2701fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270204: 0x0  nop
    ctx->pc = 0x270204u;
    // NOP
    // 0x270208: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x270208u;
    {
        const bool branch_taken_0x270208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270208u;
        // 0x27020c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270208) {
            ctx->pc = 0x270220u;
            goto label_270220;
        }
    }
    ctx->pc = 0x270210u;
label_270210:
    // 0x270210: 0xc09c51c  jal         func_271470
    ctx->pc = 0x270210u;
    SET_GPR_U32(ctx, 31, 0x270218u);
    ctx->pc = 0x270214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270210u;
    // 0x270214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x270210u, 0x270218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270218u;
label_270218:
    // 0x270218: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270218u;
    {
        const bool branch_taken_0x270218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270218u;
        // 0x27021c: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270218) {
            ctx->pc = 0x270248u;
            goto label_270248;
        }
    }
    ctx->pc = 0x270220u;
label_270220:
    // 0x270220: 0xc09c8fa  jal         func_2723E8
    ctx->pc = 0x270220u;
    SET_GPR_U32(ctx, 31, 0x270228u);
    ctx->pc = 0x270224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270220u;
    // 0x270224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2723E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2723E8u, 0x270220u, 0x270228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270228u;
label_270228:
    // 0x270228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x270228u;
    {
        const bool branch_taken_0x270228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270228u;
        // 0x27022c: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270228) {
            ctx->pc = 0x270248u;
            goto label_270248;
        }
    }
    ctx->pc = 0x270230u;
label_270230:
    // 0x270230: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x270230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_270234:
    // 0x270234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27023c: 0xc0993e8  jal         func_264FA0
    ctx->pc = 0x27023Cu;
    SET_GPR_U32(ctx, 31, 0x270244u);
    ctx->pc = 0x270240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27023Cu;
    // 0x270240: 0x8c4600b4  lw          $a2, 0xB4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x27023Cu, 0x270244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270244u;
label_270244:
    // 0x270244: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x270244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_270248:
    // 0x270248: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x270248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_27024c:
    // 0x27024c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27024cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_270250:
    // 0x270250: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x270250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270258: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x270258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270260: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x270260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270264: 0x3e00008  jr          $ra
    ctx->pc = 0x270264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270264u;
        // 0x270268: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27026Cu;
    // 0x27026c: 0x0  nop
    ctx->pc = 0x27026cu;
    // NOP
    ctx->pc = 0x270270u;
}
