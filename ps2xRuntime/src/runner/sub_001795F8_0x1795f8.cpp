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

// Function: sub_001795F8
// Address: 0x1795f8 - 0x179758
void sub_001795F8_0x1795f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001795F8_0x1795f8");
#endif

    switch (ctx->pc) {
        case 0x17962cu: goto label_17962c;
        case 0x179698u: goto label_179698;
        case 0x1796c4u: goto label_1796c4;
        case 0x1796d0u: goto label_1796d0;
        case 0x179714u: goto label_179714;
        case 0x179720u: goto label_179720;
        default: break;
    }

    ctx->pc = 0x1795f8u;

    // 0x1795f8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1795f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1795fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1795fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x179600: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x179600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x179604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179608: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x179608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x17960c: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x17960cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x179610: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x179610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x179614: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x179614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x179618: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x179618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x17961c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x17961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x179620: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x179620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x179624: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x179624u;
    SET_GPR_U32(ctx, 31, 0x17962Cu);
    ctx->pc = 0x179628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179624u;
    // 0x179628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x179624u, 0x17962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17962Cu;
label_17962c:
    // 0x17962c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17962cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179630: 0x52600040  beql        $s3, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x179630u;
    {
        const bool branch_taken_0x179630 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x179630) {
            ctx->pc = 0x179634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179630u;
            // 0x179634: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179734u;
            goto label_179734;
        }
    }
    ctx->pc = 0x179638u;
    // 0x179638: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x179638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x17963c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x17963Cu;
    {
        const bool branch_taken_0x17963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17963Cu;
        // 0x179640: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17963c) {
            ctx->pc = 0x179730u;
            goto label_179730;
        }
    }
    ctx->pc = 0x179644u;
    // 0x179644: 0x26080040  addiu       $t0, $s0, 0x40
    ctx->pc = 0x179644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x179648: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x179648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x17964c: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x17964cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x179650: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x179650u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x179654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x179658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17965c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x17965cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x179660: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x179660u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x179664: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x179664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x179668: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x179668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x17966c: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x17966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x179670: 0x7fa600f0  sq          $a2, 0xF0($sp)
    ctx->pc = 0x179670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 6));
    // 0x179674: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x179674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x179678: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x179678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x17967c: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x17967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x179680: 0x10e0002b  beqz        $a3, . + 4 + (0x2B << 2)
    ctx->pc = 0x179680u;
    {
        const bool branch_taken_0x179680 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x179684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179680u;
        // 0x179684: 0x7fa600b0  sq          $a2, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179680) {
            ctx->pc = 0x179730u;
            goto label_179730;
        }
    }
    ctx->pc = 0x179688u;
    // 0x179688: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x179688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17968c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x17968cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x179690: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x179690u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x179694: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x179694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_179698:
    // 0x179698: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x179698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17969c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1796a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1796a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1796a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1796a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1796a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1796ac: 0xa3b40074  sb          $s4, 0x74($sp)
    ctx->pc = 0x1796acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 20));
    // 0x1796b0: 0xa3b40075  sb          $s4, 0x75($sp)
    ctx->pc = 0x1796b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 20));
    // 0x1796b4: 0xa3b40076  sb          $s4, 0x76($sp)
    ctx->pc = 0x1796b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 20));
    // 0x1796b8: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x1796b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1796bc: 0xc060b58  jal         func_182D60
    ctx->pc = 0x1796BCu;
    SET_GPR_U32(ctx, 31, 0x1796C4u);
    ctx->pc = 0x1796C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796BCu;
    // 0x1796c0: 0xa3a20077  sb          $v0, 0x77($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1796BCu, 0x1796C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796C4u;
label_1796c4:
    // 0x1796c4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1796c8: 0xc06078e  jal         func_181E38
    ctx->pc = 0x1796C8u;
    SET_GPR_U32(ctx, 31, 0x1796D0u);
    ctx->pc = 0x1796CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796C8u;
    // 0x1796cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1796C8u, 0x1796D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796D0u;
label_1796d0:
    // 0x1796d0: 0xc6a0cc94  lwc1        $f0, -0x336C($s5)
    ctx->pc = 0x1796d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294954132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1796d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796d8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1796d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1796dc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1796dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1796e0: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x1796e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1796e4: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x1796e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1796e8: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x1796e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1796ec: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x1796ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1796f0: 0xb3a50073  sdl         $a1, 0x73($sp)
    ctx->pc = 0x1796f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1796f4: 0xb7a5006c  sdr         $a1, 0x6C($sp)
    ctx->pc = 0x1796f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1796f8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1796f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1796fc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1796fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x179700: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x179700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x179704: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x179704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x179708: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x179708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17970c: 0xc0cda36  jal         func_3368D8
    ctx->pc = 0x17970Cu;
    SET_GPR_U32(ctx, 31, 0x179714u);
    ctx->pc = 0x179710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17970Cu;
    // 0x179710: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x17970Cu, 0x179714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179714u;
label_179714:
    // 0x179714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179718: 0xc060b78  jal         func_182DE0
    ctx->pc = 0x179718u;
    SET_GPR_U32(ctx, 31, 0x179720u);
    ctx->pc = 0x17971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179718u;
    // 0x17971c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x179718u, 0x179720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179720u;
label_179720:
    // 0x179720: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x179720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x179724: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x179724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x179728: 0x5460ffdb  bnel        $v1, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x179728u;
    {
        const bool branch_taken_0x179728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179728) {
            ctx->pc = 0x17972Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179728u;
            // 0x17972c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179698;
        }
    }
    ctx->pc = 0x179730u;
label_179730:
    // 0x179730: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x179730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_179734:
    // 0x179734: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x179734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x179738: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x179738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17973c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x17973cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x179740: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x179740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179744: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x179744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x179748: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x179748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17974c: 0x3e00008  jr          $ra
    ctx->pc = 0x17974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17974Cu;
        // 0x179750: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17974Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179754u;
    // 0x179754: 0x0  nop
    ctx->pc = 0x179754u;
    // NOP
    ctx->pc = 0x179758u;
}
