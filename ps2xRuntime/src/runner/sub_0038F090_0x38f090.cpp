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

// Function: sub_0038F090
// Address: 0x38f090 - 0x38f170
void sub_0038F090_0x38f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F090_0x38f090");
#endif

    switch (ctx->pc) {
        case 0x38f090u: goto label_38f090;
        case 0x38f094u: goto label_38f094;
        case 0x38f098u: goto label_38f098;
        case 0x38f09cu: goto label_38f09c;
        case 0x38f0a0u: goto label_38f0a0;
        case 0x38f0a4u: goto label_38f0a4;
        case 0x38f0a8u: goto label_38f0a8;
        case 0x38f0acu: goto label_38f0ac;
        case 0x38f0b0u: goto label_38f0b0;
        case 0x38f0b4u: goto label_38f0b4;
        case 0x38f0b8u: goto label_38f0b8;
        case 0x38f0bcu: goto label_38f0bc;
        case 0x38f0c0u: goto label_38f0c0;
        case 0x38f0c4u: goto label_38f0c4;
        case 0x38f0c8u: goto label_38f0c8;
        case 0x38f0ccu: goto label_38f0cc;
        case 0x38f0d0u: goto label_38f0d0;
        case 0x38f0d4u: goto label_38f0d4;
        case 0x38f0d8u: goto label_38f0d8;
        case 0x38f0dcu: goto label_38f0dc;
        case 0x38f0e0u: goto label_38f0e0;
        case 0x38f0e4u: goto label_38f0e4;
        case 0x38f0e8u: goto label_38f0e8;
        case 0x38f0ecu: goto label_38f0ec;
        case 0x38f0f0u: goto label_38f0f0;
        case 0x38f0f4u: goto label_38f0f4;
        case 0x38f0f8u: goto label_38f0f8;
        case 0x38f0fcu: goto label_38f0fc;
        case 0x38f100u: goto label_38f100;
        case 0x38f104u: goto label_38f104;
        case 0x38f108u: goto label_38f108;
        case 0x38f10cu: goto label_38f10c;
        case 0x38f110u: goto label_38f110;
        case 0x38f114u: goto label_38f114;
        case 0x38f118u: goto label_38f118;
        case 0x38f11cu: goto label_38f11c;
        case 0x38f120u: goto label_38f120;
        case 0x38f124u: goto label_38f124;
        case 0x38f128u: goto label_38f128;
        case 0x38f12cu: goto label_38f12c;
        case 0x38f130u: goto label_38f130;
        case 0x38f134u: goto label_38f134;
        case 0x38f138u: goto label_38f138;
        case 0x38f13cu: goto label_38f13c;
        case 0x38f140u: goto label_38f140;
        case 0x38f144u: goto label_38f144;
        case 0x38f148u: goto label_38f148;
        case 0x38f14cu: goto label_38f14c;
        case 0x38f150u: goto label_38f150;
        case 0x38f154u: goto label_38f154;
        case 0x38f158u: goto label_38f158;
        case 0x38f15cu: goto label_38f15c;
        case 0x38f160u: goto label_38f160;
        case 0x38f164u: goto label_38f164;
        case 0x38f168u: goto label_38f168;
        case 0x38f16cu: goto label_38f16c;
        default: break;
    }

    ctx->pc = 0x38f090u;

label_38f090:
    // 0x38f090: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_38f094:
    // 0x38f094: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38f094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38f098:
    // 0x38f098: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x38f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_38f09c:
    // 0x38f09c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x38f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_38f0a0:
    // 0x38f0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f0a4:
    // 0x38f0a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x38f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_38f0a8:
    // 0x38f0a8: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x38f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_38f0ac:
    // 0x38f0ac: 0xc0616ac  jal         func_185AB0
label_38f0b0:
    if (ctx->pc == 0x38F0B0u) {
        ctx->pc = 0x38F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0ACu;
        // 0x38f0b0: 0x960500b2  lhu         $a1, 0xB2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0B4u;
        goto label_38f0b4;
    }
    ctx->pc = 0x38F0ACu;
    SET_GPR_U32(ctx, 31, 0x38F0B4u);
    ctx->pc = 0x38F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0ACu;
    // 0x38f0b0: 0x960500b2  lhu         $a1, 0xB2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x38F0ACu, 0x38F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0B4u;
label_38f0b4:
    // 0x38f0b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38f0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f0b8:
    // 0x38f0b8: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
label_38f0bc:
    if (ctx->pc == 0x38F0BCu) {
        ctx->pc = 0x38F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0B8u;
        // 0x38f0bc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0C0u;
        goto label_38f0c0;
    }
    ctx->pc = 0x38F0B8u;
    {
        const bool branch_taken_0x38f0b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f0b8) {
            ctx->pc = 0x38F0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F0B8u;
            // 0x38f0bc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F15Cu;
            goto label_38f15c;
        }
    }
    ctx->pc = 0x38F0C0u;
label_38f0c0:
    // 0x38f0c0: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x38f0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_38f0c4:
    // 0x38f0c4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_38f0c8:
    if (ctx->pc == 0x38F0C8u) {
        ctx->pc = 0x38F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0C4u;
        // 0x38f0c8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0CCu;
        goto label_38f0cc;
    }
    ctx->pc = 0x38F0C4u;
    {
        const bool branch_taken_0x38f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f0c4) {
            ctx->pc = 0x38F0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F0C4u;
            // 0x38f0c8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F15Cu;
            goto label_38f15c;
        }
    }
    ctx->pc = 0x38F0CCu;
label_38f0cc:
    // 0x38f0cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f0d0:
    // 0x38f0d0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38f0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38f0d4:
    // 0x38f0d4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38f0d8:
    // 0x38f0d8: 0x40f809  jalr        $v0
label_38f0dc:
    if (ctx->pc == 0x38F0DCu) {
        ctx->pc = 0x38F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0D8u;
        // 0x38f0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0E0u;
        goto label_38f0e0;
    }
    ctx->pc = 0x38F0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F0E0u);
        ctx->pc = 0x38F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0D8u;
        // 0x38f0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F0D8u, 0x38F0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F0E0u;
label_38f0e0:
    // 0x38f0e0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_38f0e4:
    if (ctx->pc == 0x38F0E4u) {
        ctx->pc = 0x38F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E0u;
        // 0x38f0e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0E8u;
        goto label_38f0e8;
    }
    ctx->pc = 0x38F0E0u;
    {
        const bool branch_taken_0x38f0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f0e0) {
            ctx->pc = 0x38F0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F0E0u;
            // 0x38f0e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F15Cu;
            goto label_38f15c;
        }
    }
    ctx->pc = 0x38F0E8u;
label_38f0e8:
    // 0x38f0e8: 0xc060b58  jal         func_182D60
label_38f0ec:
    if (ctx->pc == 0x38F0ECu) {
        ctx->pc = 0x38F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E8u;
        // 0x38f0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0F0u;
        goto label_38f0f0;
    }
    ctx->pc = 0x38F0E8u;
    SET_GPR_U32(ctx, 31, 0x38F0F0u);
    ctx->pc = 0x38F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0E8u;
    // 0x38f0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x38F0E8u, 0x38F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0F0u;
label_38f0f0:
    // 0x38f0f0: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x38f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_38f0f4:
    // 0x38f0f4: 0xc06078e  jal         func_181E38
label_38f0f8:
    if (ctx->pc == 0x38F0F8u) {
        ctx->pc = 0x38F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0F4u;
        // 0x38f0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0FCu;
        goto label_38f0fc;
    }
    ctx->pc = 0x38F0F4u;
    SET_GPR_U32(ctx, 31, 0x38F0FCu);
    ctx->pc = 0x38F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0F4u;
    // 0x38f0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x38F0F4u, 0x38F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0FCu;
label_38f0fc:
    // 0x38f0fc: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x38f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_38f100:
    // 0x38f100: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x38f100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_38f104:
    // 0x38f104: 0x920800b4  lbu         $t0, 0xB4($s0)
    ctx->pc = 0x38f104u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 180)));
label_38f108:
    // 0x38f108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f10c:
    // 0x38f10c: 0x33a02  srl         $a3, $v1, 8
    ctx->pc = 0x38f10cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_38f110:
    // 0x38f110: 0x33602  srl         $a2, $v1, 24
    ctx->pc = 0x38f110u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_38f114:
    // 0x38f114: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x38f114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_38f118:
    // 0x38f118: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x38f118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_38f11c:
    // 0x38f11c: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x38f11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_38f120:
    // 0x38f120: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x38f120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_38f124:
    // 0x38f124: 0xb3a9006b  sdl         $t1, 0x6B($sp)
    ctx->pc = 0x38f124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f128:
    // 0x38f128: 0xb7a90064  sdr         $t1, 0x64($sp)
    ctx->pc = 0x38f128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f12c:
    // 0x38f12c: 0xb3aa0073  sdl         $t2, 0x73($sp)
    ctx->pc = 0x38f12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f130:
    // 0x38f130: 0xb7aa006c  sdr         $t2, 0x6C($sp)
    ctx->pc = 0x38f130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f134:
    // 0x38f134: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x38f134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_38f138:
    // 0x38f138: 0xa3a60074  sb          $a2, 0x74($sp)
    ctx->pc = 0x38f138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 6));
label_38f13c:
    // 0x38f13c: 0xa3a30075  sb          $v1, 0x75($sp)
    ctx->pc = 0x38f13cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 3));
label_38f140:
    // 0x38f140: 0xa3a70076  sb          $a3, 0x76($sp)
    ctx->pc = 0x38f140u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 7));
label_38f144:
    // 0x38f144: 0xc0cda36  jal         func_3368D8
label_38f148:
    if (ctx->pc == 0x38F148u) {
        ctx->pc = 0x38F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F144u;
        // 0x38f148: 0xa3a80077  sb          $t0, 0x77($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F14Cu;
        goto label_38f14c;
    }
    ctx->pc = 0x38F144u;
    SET_GPR_U32(ctx, 31, 0x38F14Cu);
    ctx->pc = 0x38F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F144u;
    // 0x38f148: 0xa3a80077  sb          $t0, 0x77($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x38F144u, 0x38F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F14Cu;
label_38f14c:
    // 0x38f14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f150:
    // 0x38f150: 0xc060c70  jal         func_1831C0
label_38f154:
    if (ctx->pc == 0x38F154u) {
        ctx->pc = 0x38F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F150u;
        // 0x38f154: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F158u;
        goto label_38f158;
    }
    ctx->pc = 0x38F150u;
    SET_GPR_U32(ctx, 31, 0x38F158u);
    ctx->pc = 0x38F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F150u;
    // 0x38f154: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1831C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1831C0u, 0x38F150u, 0x38F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F158u;
label_38f158:
    // 0x38f158: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38f158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38f15c:
    // 0x38f15c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x38f15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38f160:
    // 0x38f160: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x38f160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38f164:
    // 0x38f164: 0x3e00008  jr          $ra
label_38f168:
    if (ctx->pc == 0x38F168u) {
        ctx->pc = 0x38F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F164u;
        // 0x38f168: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F16Cu;
        goto label_38f16c;
    }
    ctx->pc = 0x38F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F164u;
        // 0x38f168: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F16Cu;
label_38f16c:
    // 0x38f16c: 0x0  nop
    ctx->pc = 0x38f16cu;
    // NOP
    ctx->pc = 0x38f170u;
}
