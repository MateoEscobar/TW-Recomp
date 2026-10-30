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

// Function: sub_0032D6E8
// Address: 0x32d6e8 - 0x32d828
void sub_0032D6E8_0x32d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D6E8_0x32d6e8");
#endif

    switch (ctx->pc) {
        case 0x32d71cu: goto label_32d71c;
        case 0x32d724u: goto label_32d724;
        case 0x32d738u: goto label_32d738;
        case 0x32d750u: goto label_32d750;
        case 0x32d768u: goto label_32d768;
        case 0x32d780u: goto label_32d780;
        case 0x32d790u: goto label_32d790;
        case 0x32d7acu: goto label_32d7ac;
        case 0x32d7c8u: goto label_32d7c8;
        case 0x32d800u: goto label_32d800;
        default: break;
    }

    ctx->pc = 0x32d6e8u;

    // 0x32d6e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32d6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32d6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d6f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32d6f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32d700: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32d704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d708: 0x8e720028  lw          $s2, 0x28($s3)
    ctx->pc = 0x32d708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x32d70c: 0x8e71002c  lw          $s1, 0x2C($s3)
    ctx->pc = 0x32d70cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x32d710: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x32d710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32d714: 0xc0c9d64  jal         func_327590
    ctx->pc = 0x32D714u;
    SET_GPR_U32(ctx, 31, 0x32D71Cu);
    ctx->pc = 0x32D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D714u;
    // 0x32d718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327590u, 0x32D714u, 0x32D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D71Cu;
label_32d71c:
    // 0x32d71c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32D71Cu;
    SET_GPR_U32(ctx, 31, 0x32D724u);
    ctx->pc = 0x32D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D71Cu;
    // 0x32d720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32D71Cu, 0x32D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D724u;
label_32d724:
    // 0x32d724: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x32d724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x32d728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d72c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x32d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32d730: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32D730u;
    SET_GPR_U32(ctx, 31, 0x32D738u);
    ctx->pc = 0x32D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D730u;
    // 0x32d734: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32D730u, 0x32D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D738u;
label_32d738:
    // 0x32d738: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x32d738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32d73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d740: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32d740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32d744: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x32d744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32d748: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32D748u;
    SET_GPR_U32(ctx, 31, 0x32D750u);
    ctx->pc = 0x32D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D748u;
    // 0x32d74c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32D748u, 0x32D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D750u;
label_32d750:
    // 0x32d750: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x32d750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d758: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x32d758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32d75c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x32d75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x32d760: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32D760u;
    SET_GPR_U32(ctx, 31, 0x32D768u);
    ctx->pc = 0x32D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D760u;
    // 0x32d764: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32D760u, 0x32D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D768u;
label_32d768:
    // 0x32d768: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x32d768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d770: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x32d770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32d774: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x32d774u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32d778: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32D778u;
    SET_GPR_U32(ctx, 31, 0x32D780u);
    ctx->pc = 0x32D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D778u;
    // 0x32d77c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32D778u, 0x32D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D780u;
label_32d780:
    // 0x32d780: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32d784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d788: 0xc0cb436  jal         func_32D0D8
    ctx->pc = 0x32D788u;
    SET_GPR_U32(ctx, 31, 0x32D790u);
    ctx->pc = 0x32D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D788u;
    // 0x32d78c: 0x8645001e  lh          $a1, 0x1E($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0D8u, 0x32D788u, 0x32D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D790u;
label_32d790:
    // 0x32d790: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x32d790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x32d794: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x32d794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d798: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x32d798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32d79c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x32d79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32d7a0: 0x3012  mflo        $a2
    ctx->pc = 0x32d7a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x32d7a4: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32D7A4u;
    SET_GPR_U32(ctx, 31, 0x32D7ACu);
    ctx->pc = 0x32D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7A4u;
    // 0x32d7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32D7A4u, 0x32D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7ACu;
label_32d7ac:
    // 0x32d7ac: 0x86060030  lh          $a2, 0x30($s0)
    ctx->pc = 0x32d7acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32d7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7b4: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x32d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32d7b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32d7bc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x32d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x32d7c0: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32D7C0u;
    SET_GPR_U32(ctx, 31, 0x32D7C8u);
    ctx->pc = 0x32D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7C0u;
    // 0x32d7c4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32D7C0u, 0x32D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7C8u;
label_32d7c8:
    // 0x32d7c8: 0x96040030  lhu         $a0, 0x30($s0)
    ctx->pc = 0x32d7c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32d7cc: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x32d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x32d7d0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x32d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x32d7d4: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x32d7d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
    // 0x32d7d8: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x32d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32d7dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d7e0: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x32d7e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x32d7e4: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x32d7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x32d7e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32d7ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x32d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x32d7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7f8: 0xc0ca50a  jal         func_329428
    ctx->pc = 0x32D7F8u;
    SET_GPR_U32(ctx, 31, 0x32D800u);
    ctx->pc = 0x32D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7F8u;
    // 0x32d7fc: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329428u, 0x32D7F8u, 0x32D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D800u;
label_32d800:
    // 0x32d800: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x32d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32d804: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32d804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d808: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x32d808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x32d80c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32d80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d814: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32d814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D81Cu;
        // 0x32d820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D824u;
    // 0x32d824: 0x0  nop
    ctx->pc = 0x32d824u;
    // NOP
    ctx->pc = 0x32d828u;
}
