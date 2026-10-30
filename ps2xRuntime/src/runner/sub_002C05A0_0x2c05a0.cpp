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

// Function: sub_002C05A0
// Address: 0x2c05a0 - 0x2c0748
void sub_002C05A0_0x2c05a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C05A0_0x2c05a0");
#endif

    switch (ctx->pc) {
        case 0x2c05ecu: goto label_2c05ec;
        case 0x2c0628u: goto label_2c0628;
        case 0x2c0634u: goto label_2c0634;
        case 0x2c065cu: goto label_2c065c;
        case 0x2c0674u: goto label_2c0674;
        case 0x2c0684u: goto label_2c0684;
        case 0x2c0694u: goto label_2c0694;
        case 0x2c06acu: goto label_2c06ac;
        case 0x2c06c8u: goto label_2c06c8;
        default: break;
    }

    ctx->pc = 0x2c05a0u;

    // 0x2c05a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c05a4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2c05a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2c05a8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2c05a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2c05ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c05acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05b0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2c05b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2c05b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2c05b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05b8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2c05b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2c05bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c05bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05c0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c05c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2c05c4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c05c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2c05c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c05c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2c05cc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c05ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2c05d0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2c05d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2c05d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c05d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c05d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c05d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c05dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2c05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2c05e0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2c05e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c05e4: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x2C05E4u;
    SET_GPR_U32(ctx, 31, 0x2C05ECu);
    ctx->pc = 0x2C05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C05E4u;
    // 0x2c05e8: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2C05E4u, 0x2C05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C05ECu;
label_2c05ec:
    // 0x2c05ec: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2c05ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2c05f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2c05f4: 0x24464b00  addiu       $a2, $v0, 0x4B00
    ctx->pc = 0x2c05f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c05f8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2c05fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2c0600: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x2c0600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
    // 0x2c0604: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c0604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c0608: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c0608u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c060c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c060cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0610: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c0610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2c0614: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x2c0614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x2c0618: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C0618u;
    {
        const bool branch_taken_0x2c0618 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0618u;
        // 0x2c061c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0618) {
            ctx->pc = 0x2C070Cu;
            goto label_2c070c;
        }
    }
    ctx->pc = 0x2C0620u;
    // 0x2c0620: 0x24150228  addiu       $s5, $zero, 0x228
    ctx->pc = 0x2c0620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x2c0624: 0x0  nop
    ctx->pc = 0x2c0624u;
    // NOP
label_2c0628:
    // 0x2c0628: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x2c0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
    // 0x2c062c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C062Cu;
    SET_GPR_U32(ctx, 31, 0x2C0634u);
    ctx->pc = 0x2C0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C062Cu;
    // 0x2c0630: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C062Cu, 0x2C0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0634u;
label_2c0634:
    // 0x2c0634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0638: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C0638u;
    {
        const bool branch_taken_0x2c0638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0638u;
        // 0x2c063c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0638) {
            ctx->pc = 0x2C06F4u;
            goto label_2c06f4;
        }
    }
    ctx->pc = 0x2C0640u;
    // 0x2c0640: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2c0640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2c0644: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c0648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c0648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c064c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c064cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c0650: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c0650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0654: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x2C0654u;
    SET_GPR_U32(ctx, 31, 0x2C065Cu);
    ctx->pc = 0x2C0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0654u;
    // 0x2c0658: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2C0654u, 0x2C065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C065Cu;
label_2c065c:
    // 0x2c065c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2c065cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2c0660: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2c0660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c0664: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c0668: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2c0668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2c066c: 0xc0a2fe2  jal         func_28BF88
    ctx->pc = 0x2C066Cu;
    SET_GPR_U32(ctx, 31, 0x2C0674u);
    ctx->pc = 0x2C0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C066Cu;
    // 0x2c0670: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF88u, 0x2C066Cu, 0x2C0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0674u;
label_2c0674:
    // 0x2c0674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0678: 0x2603ff9c  addiu       $v1, $s0, -0x64
    ctx->pc = 0x2c0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
    // 0x2c067c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2C067Cu;
    SET_GPR_U32(ctx, 31, 0x2C0684u);
    ctx->pc = 0x2C0680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C067Cu;
    // 0x2c0680: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2C067Cu, 0x2C0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0684u;
label_2c0684:
    // 0x2c0684: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0684u;
    {
        const bool branch_taken_0x2c0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c0684) {
            ctx->pc = 0x2C0688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0684u;
            // 0x2c0688: 0x2610ffce  addiu       $s0, $s0, -0x32 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967246));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C06A0u;
            goto label_2c06a0;
        }
    }
    ctx->pc = 0x2C068Cu;
    // 0x2c068c: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x2C068Cu;
    SET_GPR_U32(ctx, 31, 0x2C0694u);
    ctx->pc = 0x2C0690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C068Cu;
    // 0x2c0690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2C068Cu, 0x2C0694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0694u;
label_2c0694:
    // 0x2c0694: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0694u;
    {
        const bool branch_taken_0x2c0694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0694u;
        // 0x2c0698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0694) {
            ctx->pc = 0x2C06A4u;
            goto label_2c06a4;
        }
    }
    ctx->pc = 0x2C069Cu;
    // 0x2c069c: 0x2610ffce  addiu       $s0, $s0, -0x32
    ctx->pc = 0x2c069cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967246));
label_2c06a0:
    // 0x2c06a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c06a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c06a4:
    // 0x2c06a4: 0xc088976  jal         func_2225D8
    ctx->pc = 0x2C06A4u;
    SET_GPR_U32(ctx, 31, 0x2C06ACu);
    ctx->pc = 0x2C06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C06A4u;
    // 0x2c06a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D8u, 0x2C06A4u, 0x2C06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C06ACu;
label_2c06ac:
    // 0x2c06ac: 0x26030032  addiu       $v1, $s0, 0x32
    ctx->pc = 0x2c06acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x2c06b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c06b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06b4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2c06b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2c06b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c06b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c06bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06c0: 0xc0888a2  jal         func_222288
    ctx->pc = 0x2C06C0u;
    SET_GPR_U32(ctx, 31, 0x2C06C8u);
    ctx->pc = 0x2C06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C06C0u;
    // 0x2c06c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C06C0u, 0x2C06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C06C8u;
label_2c06c8:
    // 0x2c06c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c06c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c06cc: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x2c06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2c06d0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2c06d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2c06d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c06d8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2c06d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c06dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C06DCu;
    {
        const bool branch_taken_0x2c06dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c06dc) {
            ctx->pc = 0x2C06E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C06DCu;
            // 0x2c06e0: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C06F0u;
            goto label_2c06f0;
        }
    }
    ctx->pc = 0x2C06E4u;
    // 0x2c06e4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C06E4u;
    {
        const bool branch_taken_0x2c06e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06E4u;
        // 0x2c06e8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06e4) {
            ctx->pc = 0x2C06F8u;
            goto label_2c06f8;
        }
    }
    ctx->pc = 0x2C06ECu;
    // 0x2c06ec: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2c06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2c06f0:
    // 0x2c06f0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2c06f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c06f4:
    // 0x2c06f4: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x2c06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c06f8:
    // 0x2c06f8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2c06f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2c06fc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2c06fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x2c0700: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2c0700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0704: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2C0704u;
    {
        const bool branch_taken_0x2c0704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0704u;
        // 0x2c0708: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0704) {
            ctx->pc = 0x2C0628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0628;
        }
    }
    ctx->pc = 0x2C070Cu;
label_2c070c:
    // 0x2c070c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2c070cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0710: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c0710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0714: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c0714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c0718: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c0718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c071c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2c071cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0720: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2c0720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0724: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c0724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0728: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2c0728u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c072c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2c072cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0730: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2c0730u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0738: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c0738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c073c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C073Cu;
        // 0x2c0740: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0744u;
    // 0x2c0744: 0x0  nop
    ctx->pc = 0x2c0744u;
    // NOP
    ctx->pc = 0x2c0748u;
}
