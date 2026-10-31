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

// Function: sub_002D80C8
// Address: 0x2d80c8 - 0x2d84e0
void sub_002D80C8_0x2d80c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D80C8_0x2d80c8");
#endif

    switch (ctx->pc) {
        case 0x2d8108u: goto label_2d8108;
        case 0x2d811cu: goto label_2d811c;
        case 0x2d8140u: goto label_2d8140;
        case 0x2d815cu: goto label_2d815c;
        case 0x2d8174u: goto label_2d8174;
        case 0x2d8180u: goto label_2d8180;
        case 0x2d819cu: goto label_2d819c;
        case 0x2d81c0u: goto label_2d81c0;
        case 0x2d81e8u: goto label_2d81e8;
        case 0x2d8220u: goto label_2d8220;
        case 0x2d8248u: goto label_2d8248;
        case 0x2d8260u: goto label_2d8260;
        case 0x2d8290u: goto label_2d8290;
        case 0x2d82b0u: goto label_2d82b0;
        case 0x2d82ccu: goto label_2d82cc;
        case 0x2d82e0u: goto label_2d82e0;
        case 0x2d82ecu: goto label_2d82ec;
        case 0x2d8304u: goto label_2d8304;
        case 0x2d831cu: goto label_2d831c;
        case 0x2d8330u: goto label_2d8330;
        case 0x2d837cu: goto label_2d837c;
        case 0x2d83b4u: goto label_2d83b4;
        case 0x2d83c8u: goto label_2d83c8;
        case 0x2d83f0u: goto label_2d83f0;
        case 0x2d8404u: goto label_2d8404;
        case 0x2d8424u: goto label_2d8424;
        case 0x2d844cu: goto label_2d844c;
        case 0x2d8474u: goto label_2d8474;
        case 0x2d84a8u: goto label_2d84a8;
        default: break;
    }

    ctx->pc = 0x2d80c8u;

    // 0x2d80c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d80c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d80cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d80ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d80d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d80d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d80d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d80d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d80dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d80dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d80e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d80e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d80e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d80e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d80ec: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2d80ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d80f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d80f4: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x2d80f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2d80f8: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D80F8u;
    {
        const bool branch_taken_0x2d80f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80F8u;
        // 0x2d80fc: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80f8) {
            ctx->pc = 0x2D8108u;
            goto label_2d8108;
        }
    }
    ctx->pc = 0x2D8100u;
    // 0x2d8100: 0xc0b5f2a  jal         func_2D7CA8
    ctx->pc = 0x2D8100u;
    SET_GPR_U32(ctx, 31, 0x2D8108u);
    ctx->pc = 0x2D7CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CA8u, 0x2D8100u, 0x2D8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8108u;
label_2d8108:
    // 0x2d8108: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x2d8108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2d810c: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D810Cu;
    {
        const bool branch_taken_0x2d810c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d810c) {
            ctx->pc = 0x2D8110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D810Cu;
            // 0x2d8110: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8120u;
            goto label_2d8120;
        }
    }
    ctx->pc = 0x2D8114u;
    // 0x2d8114: 0xc0b5ff8  jal         func_2D7FE0
    ctx->pc = 0x2D8114u;
    SET_GPR_U32(ctx, 31, 0x2D811Cu);
    ctx->pc = 0x2D8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8114u;
    // 0x2d8118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7FE0u, 0x2D8114u, 0x2D811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D811Cu;
label_2d811c:
    // 0x2d811c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8120:
    // 0x2d8120: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d8120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d8124: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8124u;
    {
        const bool branch_taken_0x2d8124 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8124u;
        // 0x2d8128: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8124) {
            ctx->pc = 0x2D8148u;
            goto label_2d8148;
        }
    }
    ctx->pc = 0x2D812Cu;
    // 0x2d812c: 0x9202003b  lbu         $v0, 0x3B($s0)
    ctx->pc = 0x2d812cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2d8130: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2D8130u;
    {
        const bool branch_taken_0x2d8130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8130u;
        // 0x2d8134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8130) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D8138u;
    // 0x2d8138: 0xc0b5f60  jal         func_2D7D80
    ctx->pc = 0x2D8138u;
    SET_GPR_U32(ctx, 31, 0x2D8140u);
    ctx->pc = 0x2D813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8138u;
    // 0x2d813c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D80u, 0x2D8138u, 0x2D8140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8140u;
label_2d8140:
    // 0x2d8140: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2D8140u;
    {
        const bool branch_taken_0x2d8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8140u;
        // 0x2d8144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8140) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D8148u;
label_2d8148:
    // 0x2d8148: 0x82020040  lb          $v0, 0x40($s0)
    ctx->pc = 0x2d8148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2d814c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d814cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d8150: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d8154: 0xc105774  jal         func_415DD0
    ctx->pc = 0x2D8154u;
    SET_GPR_U32(ctx, 31, 0x2D815Cu);
    ctx->pc = 0x2D8158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8154u;
    // 0x2d8158: 0x84440010  lh          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x2D8154u, 0x2D815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D815Cu;
label_2d815c:
    // 0x2d815c: 0x9211003b  lbu         $s1, 0x3B($s0)
    ctx->pc = 0x2d815cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2d8160: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8160u;
    {
        const bool branch_taken_0x2d8160 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8160u;
        // 0x2d8164: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8160) {
            ctx->pc = 0x2D8188u;
            goto label_2d8188;
        }
    }
    ctx->pc = 0x2D8168u;
    // 0x2d8168: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d816c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D816Cu;
    SET_GPR_U32(ctx, 31, 0x2D8174u);
    ctx->pc = 0x2D8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D816Cu;
    // 0x2d8170: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D816Cu, 0x2D8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8174u;
label_2d8174:
    // 0x2d8174: 0xa212003c  sb          $s2, 0x3C($s0)
    ctx->pc = 0x2d8174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d8178: 0xc0b5f60  jal         func_2D7D80
    ctx->pc = 0x2D8178u;
    SET_GPR_U32(ctx, 31, 0x2D8180u);
    ctx->pc = 0x2D817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8178u;
    // 0x2d817c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D80u, 0x2D8178u, 0x2D8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8180u;
label_2d8180:
    // 0x2d8180: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2D8180u;
    {
        const bool branch_taken_0x2d8180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8180u;
        // 0x2d8184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8180) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D8188u;
label_2d8188:
    // 0x2d8188: 0x1632002a  bne         $s1, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D8188u;
    {
        const bool branch_taken_0x2d8188 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8188u;
        // 0x2d818c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8188) {
            ctx->pc = 0x2D8234u;
            goto label_2d8234;
        }
    }
    ctx->pc = 0x2D8190u;
    // 0x2d8190: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x2d8190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8194: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2D8194u;
    SET_GPR_U32(ctx, 31, 0x2D819Cu);
    ctx->pc = 0x2D8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8194u;
    // 0x2d8198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D8194u, 0x2D819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D819Cu;
label_2d819c:
    // 0x2d819c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d819cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d81a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d81a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d81a8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2d81a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2d81ac: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d81acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d81b0: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2d81b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2d81b4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d81b8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D81B8u;
    SET_GPR_U32(ctx, 31, 0x2D81C0u);
    ctx->pc = 0x2D81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81B8u;
    // 0x2d81bc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D81B8u, 0x2D81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81C0u;
label_2d81c0:
    // 0x2d81c0: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2d81c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x2d81c4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2d81c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2d81c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d81c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d81cc: 0x0  nop
    ctx->pc = 0x2d81ccu;
    // NOP
    // 0x2d81d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d81d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d81d4: 0x0  nop
    ctx->pc = 0x2d81d4u;
    // NOP
    // 0x2d81d8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2D81D8u;
    {
        const bool branch_taken_0x2d81d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81D8u;
        // 0x2d81dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81d8) {
            ctx->pc = 0x2D8228u;
            goto label_2d8228;
        }
    }
    ctx->pc = 0x2D81E0u;
    // 0x2d81e0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D81E0u;
    SET_GPR_U32(ctx, 31, 0x2D81E8u);
    ctx->pc = 0x2D81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81E0u;
    // 0x2d81e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D81E0u, 0x2D81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81E8u;
label_2d81e8:
    // 0x2d81e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d81e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81ec: 0x108000b0  beqz        $a0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D81ECu;
    {
        const bool branch_taken_0x2d81ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81ECu;
        // 0x2d81f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81ec) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D81F4u;
    // 0x2d81f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d81f8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d81f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2d81fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d81fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8200: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d8200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2d8204: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d8204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d8208: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d820c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d8210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8214: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d8214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8218: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2D8218u;
    SET_GPR_U32(ctx, 31, 0x2D8220u);
    ctx->pc = 0x2D821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8218u;
    // 0x2d821c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D8218u, 0x2D8220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8220u;
label_2d8220:
    // 0x2d8220: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2D8220u;
    {
        const bool branch_taken_0x2d8220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8220u;
        // 0x2d8224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8220) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D8228u;
label_2d8228:
    // 0x2d8228: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2d8228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d822c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2D822Cu;
    {
        const bool branch_taken_0x2d822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D822Cu;
        // 0x2d8230: 0xa202003b  sb          $v0, 0x3B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d822c) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D8234u;
label_2d8234:
    // 0x2d8234: 0x1622009f  bne         $s1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2D8234u;
    {
        const bool branch_taken_0x2d8234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8234u;
        // 0x2d8238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8234) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D823Cu;
    // 0x2d823c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8240: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D8240u;
    SET_GPR_U32(ctx, 31, 0x2D8248u);
    ctx->pc = 0x2D8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8240u;
    // 0x2d8244: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D8240u, 0x2D8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8248u;
label_2d8248:
    // 0x2d8248: 0x92050042  lbu         $a1, 0x42($s0)
    ctx->pc = 0x2d8248u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x2d824c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2d824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d8250: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D8250u;
    {
        const bool branch_taken_0x2d8250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8250u;
        // 0x2d8254: 0xa200003c  sb          $zero, 0x3C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8250) {
            ctx->pc = 0x2D82B8u;
            goto label_2d82b8;
        }
    }
    ctx->pc = 0x2D8258u;
    // 0x2d8258: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D8258u;
    SET_GPR_U32(ctx, 31, 0x2D8260u);
    ctx->pc = 0x2D825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8258u;
    // 0x2d825c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D8258u, 0x2D8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8260u;
label_2d8260:
    // 0x2d8260: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8260u;
    {
        const bool branch_taken_0x2d8260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8260u;
        // 0x2d8264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8260) {
            ctx->pc = 0x2D8290u;
            goto label_2d8290;
        }
    }
    ctx->pc = 0x2D8268u;
    // 0x2d8268: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d8268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d826c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d826cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d8270: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8274: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8278: 0x2406029e  addiu       $a2, $zero, 0x29E
    ctx->pc = 0x2d8278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x2d827c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d827cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8280: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d8280u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d8284: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d8284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8288: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2D8288u;
    SET_GPR_U32(ctx, 31, 0x2D8290u);
    ctx->pc = 0x2D828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8288u;
    // 0x2d828c: 0x240901f4  addiu       $t1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D8288u, 0x2D8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8290u;
label_2d8290:
    // 0x2d8290: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x2d8290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x2d8294: 0x92030044  lbu         $v1, 0x44($s0)
    ctx->pc = 0x2d8294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2d8298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d829c: 0x14720084  bne         $v1, $s2, . + 4 + (0x84 << 2)
    ctx->pc = 0x2D829Cu;
    {
        const bool branch_taken_0x2d829c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D829Cu;
        // 0x2d82a0: 0xa2020042  sb          $v0, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d829c) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D82A4u;
    // 0x2d82a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d82a8: 0xc0b600a  jal         func_2D8028
    ctx->pc = 0x2D82A8u;
    SET_GPR_U32(ctx, 31, 0x2D82B0u);
    ctx->pc = 0x2D82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82A8u;
    // 0x2d82ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8028u, 0x2D82A8u, 0x2D82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82B0u;
label_2d82b0:
    // 0x2d82b0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2D82B0u;
    {
        const bool branch_taken_0x2d82b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82B0u;
        // 0x2d82b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82b0) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D82B8u;
label_2d82b8:
    // 0x2d82b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d82b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d82bc: 0x14720013  bne         $v1, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D82BCu;
    {
        const bool branch_taken_0x2d82bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d82bc) {
            ctx->pc = 0x2D830Cu;
            goto label_2d830c;
        }
    }
    ctx->pc = 0x2D82C4u;
    // 0x2d82c4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D82C4u;
    SET_GPR_U32(ctx, 31, 0x2D82CCu);
    ctx->pc = 0x2D82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82C4u;
    // 0x2d82c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D82C4u, 0x2D82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82CCu;
label_2d82cc:
    // 0x2d82cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d82ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d82d0: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D82D0u;
    {
        const bool branch_taken_0x2d82d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82d0) {
            ctx->pc = 0x2D82D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D82D0u;
            // 0x2d82d4: 0x92020042  lbu         $v0, 0x42($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D82D8u;
    // 0x2d82d8: 0xc105896  jal         func_416258
    ctx->pc = 0x2D82D8u;
    SET_GPR_U32(ctx, 31, 0x2D82E0u);
    ctx->pc = 0x2D82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82D8u;
    // 0x2d82dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2D82D8u, 0x2D82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82E0u;
label_2d82e0:
    // 0x2d82e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d82e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d82e4: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2D82E4u;
    SET_GPR_U32(ctx, 31, 0x2D82ECu);
    ctx->pc = 0x2D82E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82E4u;
    // 0x2d82e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D82E4u, 0x2D82ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82ECu;
label_2d82ec:
    // 0x2d82ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d82f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d82f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d82f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d82f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d82f8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2d82f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2d82fc: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2D82FCu;
    SET_GPR_U32(ctx, 31, 0x2D8304u);
    ctx->pc = 0x2D8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82FCu;
    // 0x2d8300: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2D82FCu, 0x2D8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8304u;
label_2d8304:
    // 0x2d8304: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D8304u;
    {
        const bool branch_taken_0x2d8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8304u;
        // 0x2d8308: 0x92020042  lbu         $v0, 0x42($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8304) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D830Cu;
label_2d830c:
    // 0x2d830c: 0x1471000d  bne         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D830Cu;
    {
        const bool branch_taken_0x2d830c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D830Cu;
        // 0x2d8310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d830c) {
            ctx->pc = 0x2D8344u;
            goto label_2d8344;
        }
    }
    ctx->pc = 0x2D8314u;
    // 0x2d8314: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D8314u;
    SET_GPR_U32(ctx, 31, 0x2D831Cu);
    ctx->pc = 0x2D8318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8314u;
    // 0x2d8318: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D8314u, 0x2D831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D831Cu;
label_2d831c:
    // 0x2d831c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D831Cu;
    {
        const bool branch_taken_0x2d831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D831Cu;
        // 0x2d8320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d831c) {
            ctx->pc = 0x2D8330u;
            goto label_2d8330;
        }
    }
    ctx->pc = 0x2D8324u;
    // 0x2d8324: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8328: 0xc0bebdc  jal         func_2FAF70
    ctx->pc = 0x2D8328u;
    SET_GPR_U32(ctx, 31, 0x2D8330u);
    ctx->pc = 0x2D832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8328u;
    // 0x2d832c: 0x24060fa0  addiu       $a2, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2D8328u, 0x2D8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8330u;
label_2d8330:
    // 0x2d8330: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x2d8330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x2d8334: 0xa212003c  sb          $s2, 0x3C($s0)
    ctx->pc = 0x2d8334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 18));
label_2d8338:
    // 0x2d8338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d833c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2D833Cu;
    {
        const bool branch_taken_0x2d833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D833Cu;
        // 0x2d8340: 0xa2020042  sb          $v0, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d833c) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D8344u;
label_2d8344:
    // 0x2d8344: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D8344u;
    {
        const bool branch_taken_0x2d8344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8344u;
        // 0x2d8348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8344) {
            ctx->pc = 0x2D8498u;
            goto label_2d8498;
        }
    }
    ctx->pc = 0x2D834Cu;
    // 0x2d834c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8350: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d8350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d8354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d8354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d8358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8358u;
    {
        const bool branch_taken_0x2d8358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8358u;
        // 0x2d835c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8358) {
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D8360u;
    // 0x2d8360: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x2d8360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2d8364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8368: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2d8368u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2d836c:
    // 0x2d836c: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D836Cu;
    {
        const bool branch_taken_0x2d836c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D836Cu;
        // 0x2d8370: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d836c) {
            ctx->pc = 0x2D848Cu;
            goto label_2d848c;
        }
    }
    ctx->pc = 0x2D8374u;
    // 0x2d8374: 0xc0b5f1a  jal         func_2D7C68
    ctx->pc = 0x2D8374u;
    SET_GPR_U32(ctx, 31, 0x2D837Cu);
    ctx->pc = 0x2D8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8374u;
    // 0x2d8378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C68u, 0x2D8374u, 0x2D837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D837Cu;
label_2d837c:
    // 0x2d837c: 0x5452003e  bnel        $v0, $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D837Cu;
    {
        const bool branch_taken_0x2d837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d837c) {
            ctx->pc = 0x2D8380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D837Cu;
            // 0x2d8380: 0x92020042  lbu         $v0, 0x42($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8478u;
            goto label_2d8478;
        }
    }
    ctx->pc = 0x2D8384u;
    // 0x2d8384: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2d8384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2d8388: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2d8388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d838c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2d838cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d8390: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D8390u;
    {
        const bool branch_taken_0x2d8390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8390u;
        // 0x2d8394: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8390) {
            ctx->pc = 0x2D842Cu;
            goto label_2d842c;
        }
    }
    ctx->pc = 0x2D8398u;
    // 0x2d8398: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x2d8398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2d839c: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x2d839cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d83a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d83a4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2d83a8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2d83ac: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D83ACu;
    SET_GPR_U32(ctx, 31, 0x2D83B4u);
    ctx->pc = 0x2D83B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83ACu;
    // 0x2d83b0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D83ACu, 0x2D83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83B4u;
label_2d83b4:
    // 0x2d83b4: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2d83b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2d83b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D83B8u;
    {
        const bool branch_taken_0x2d83b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83b8) {
            ctx->pc = 0x2D83FCu;
            goto label_2d83fc;
        }
    }
    ctx->pc = 0x2D83C0u;
    // 0x2d83c0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D83C0u;
    SET_GPR_U32(ctx, 31, 0x2D83C8u);
    ctx->pc = 0x2D83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83C0u;
    // 0x2d83c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D83C0u, 0x2D83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83C8u;
label_2d83c8:
    // 0x2d83c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D83C8u;
    {
        const bool branch_taken_0x2d83c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83C8u;
        // 0x2d83cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83c8) {
            ctx->pc = 0x2D83F0u;
            goto label_2d83f0;
        }
    }
    ctx->pc = 0x2D83D0u;
    // 0x2d83d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d83d4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d83d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2d83d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d83d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d83dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d83dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d83e0: 0x2406029f  addiu       $a2, $zero, 0x29F
    ctx->pc = 0x2d83e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    // 0x2d83e4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d83e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d83e8: 0xc0be91a  jal         func_2FA468
    ctx->pc = 0x2D83E8u;
    SET_GPR_U32(ctx, 31, 0x2D83F0u);
    ctx->pc = 0x2D83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83E8u;
    // 0x2d83ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA468u, 0x2D83E8u, 0x2D83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83F0u;
label_2d83f0:
    // 0x2d83f0: 0xa2120045  sb          $s2, 0x45($s0)
    ctx->pc = 0x2d83f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d83f4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2D83F4u;
    {
        const bool branch_taken_0x2d83f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83F4u;
        // 0x2d83f8: 0xa200003c  sb          $zero, 0x3C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83f4) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D83FCu;
label_2d83fc:
    // 0x2d83fc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D83FCu;
    SET_GPR_U32(ctx, 31, 0x2D8404u);
    ctx->pc = 0x2D8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83FCu;
    // 0x2d8400: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D83FCu, 0x2D8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8404u;
label_2d8404:
    // 0x2d8404: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8404u;
    {
        const bool branch_taken_0x2d8404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8404u;
        // 0x2d8408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8404) {
            ctx->pc = 0x2D8424u;
            goto label_2d8424;
        }
    }
    ctx->pc = 0x2D840Cu;
    // 0x2d840c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d8418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d841c: 0xc0be7d2  jal         func_2F9F48
    ctx->pc = 0x2D841Cu;
    SET_GPR_U32(ctx, 31, 0x2D8424u);
    ctx->pc = 0x2D8420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D841Cu;
    // 0x2d8420: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2D841Cu, 0x2D8424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8424u;
label_2d8424:
    // 0x2d8424: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8424u;
    {
        const bool branch_taken_0x2d8424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8424u;
        // 0x2d8428: 0xa212003c  sb          $s2, 0x3C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8424) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D842Cu;
label_2d842c:
    // 0x2d842c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d842cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d8430: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D8430u;
    {
        const bool branch_taken_0x2d8430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8430u;
        // 0x2d8434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8430) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D8438u;
    // 0x2d8438: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x2d8438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x2d843c: 0x5452000e  bnel        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2D843Cu;
    {
        const bool branch_taken_0x2d843c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d843c) {
            ctx->pc = 0x2D8440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D843Cu;
            // 0x2d8440: 0x92020042  lbu         $v0, 0x42($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8478u;
            goto label_2d8478;
        }
    }
    ctx->pc = 0x2D8444u;
    // 0x2d8444: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D8444u;
    SET_GPR_U32(ctx, 31, 0x2D844Cu);
    ctx->pc = 0x2D8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8444u;
    // 0x2d8448: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D8444u, 0x2D844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D844Cu;
label_2d844c:
    // 0x2d844c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D844Cu;
    {
        const bool branch_taken_0x2d844c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D844Cu;
        // 0x2d8450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d844c) {
            ctx->pc = 0x2D8474u;
            goto label_2d8474;
        }
    }
    ctx->pc = 0x2D8454u;
    // 0x2d8454: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8458: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d8458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2d845c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d845cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d8460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8464: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2d8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2d8468: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2d8468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d846c: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2D846Cu;
    SET_GPR_U32(ctx, 31, 0x2D8474u);
    ctx->pc = 0x2D8470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D846Cu;
    // 0x2d8470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D846Cu, 0x2D8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8474u;
label_2d8474:
    // 0x2d8474: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x2d8474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
label_2d8478:
    // 0x2d8478: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x2d8478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d847c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8480: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2d8480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2d8484: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D8484u;
    {
        const bool branch_taken_0x2d8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8484u;
        // 0x2d8488: 0xa2020042  sb          $v0, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8484) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D848Cu;
label_2d848c:
    // 0x2d848c: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x2d848cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8490u;
    {
        const bool branch_taken_0x2d8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8490u;
        // 0x2d8494: 0xa2020042  sb          $v0, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8490) {
            ctx->pc = 0x2D84B0u;
            goto label_2d84b0;
        }
    }
    ctx->pc = 0x2D8498u;
label_2d8498:
    // 0x2d8498: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8498u;
    {
        const bool branch_taken_0x2d8498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8498u;
        // 0x2d849c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8498) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D84A0u;
    // 0x2d84a0: 0xc0b5f44  jal         func_2D7D10
    ctx->pc = 0x2D84A0u;
    SET_GPR_U32(ctx, 31, 0x2D84A8u);
    ctx->pc = 0x2D84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D84A0u;
    // 0x2d84a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D10u, 0x2D84A0u, 0x2D84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D84A8u;
label_2d84a8:
    // 0x2d84a8: 0xa200003b  sb          $zero, 0x3B($s0)
    ctx->pc = 0x2d84a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d84ac: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2d84acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
label_2d84b0:
    // 0x2d84b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d84b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d84b4:
    // 0x2d84b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d84b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d84b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d84b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d84bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d84bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d84c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d84c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d84c4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d84c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d84c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d84c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d84cc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2d84ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d84d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D84D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84D0u;
        // 0x2d84d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D84D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D84D8u;
    // 0x2d84d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d84d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d84dc: 0x0  nop
    ctx->pc = 0x2d84dcu;
    // NOP
    ctx->pc = 0x2d84e0u;
}
