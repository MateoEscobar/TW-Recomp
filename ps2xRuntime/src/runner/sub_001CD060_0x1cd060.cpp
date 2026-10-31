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

// Function: sub_001CD060
// Address: 0x1cd060 - 0x1cd180
void sub_001CD060_0x1cd060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD060_0x1cd060");
#endif

    switch (ctx->pc) {
        case 0x1cd060u: goto label_1cd060;
        case 0x1cd064u: goto label_1cd064;
        case 0x1cd068u: goto label_1cd068;
        case 0x1cd06cu: goto label_1cd06c;
        case 0x1cd070u: goto label_1cd070;
        case 0x1cd074u: goto label_1cd074;
        case 0x1cd078u: goto label_1cd078;
        case 0x1cd07cu: goto label_1cd07c;
        case 0x1cd080u: goto label_1cd080;
        case 0x1cd084u: goto label_1cd084;
        case 0x1cd088u: goto label_1cd088;
        case 0x1cd08cu: goto label_1cd08c;
        case 0x1cd090u: goto label_1cd090;
        case 0x1cd094u: goto label_1cd094;
        case 0x1cd098u: goto label_1cd098;
        case 0x1cd09cu: goto label_1cd09c;
        case 0x1cd0a0u: goto label_1cd0a0;
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0a8u: goto label_1cd0a8;
        case 0x1cd0acu: goto label_1cd0ac;
        case 0x1cd0b0u: goto label_1cd0b0;
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0b8u: goto label_1cd0b8;
        case 0x1cd0bcu: goto label_1cd0bc;
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0c4u: goto label_1cd0c4;
        case 0x1cd0c8u: goto label_1cd0c8;
        case 0x1cd0ccu: goto label_1cd0cc;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd0d4u: goto label_1cd0d4;
        case 0x1cd0d8u: goto label_1cd0d8;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd0e0u: goto label_1cd0e0;
        case 0x1cd0e4u: goto label_1cd0e4;
        case 0x1cd0e8u: goto label_1cd0e8;
        case 0x1cd0ecu: goto label_1cd0ec;
        case 0x1cd0f0u: goto label_1cd0f0;
        case 0x1cd0f4u: goto label_1cd0f4;
        case 0x1cd0f8u: goto label_1cd0f8;
        case 0x1cd0fcu: goto label_1cd0fc;
        case 0x1cd100u: goto label_1cd100;
        case 0x1cd104u: goto label_1cd104;
        case 0x1cd108u: goto label_1cd108;
        case 0x1cd10cu: goto label_1cd10c;
        case 0x1cd110u: goto label_1cd110;
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd11cu: goto label_1cd11c;
        case 0x1cd120u: goto label_1cd120;
        case 0x1cd124u: goto label_1cd124;
        case 0x1cd128u: goto label_1cd128;
        case 0x1cd12cu: goto label_1cd12c;
        case 0x1cd130u: goto label_1cd130;
        case 0x1cd134u: goto label_1cd134;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd13cu: goto label_1cd13c;
        case 0x1cd140u: goto label_1cd140;
        case 0x1cd144u: goto label_1cd144;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd14cu: goto label_1cd14c;
        case 0x1cd150u: goto label_1cd150;
        case 0x1cd154u: goto label_1cd154;
        case 0x1cd158u: goto label_1cd158;
        case 0x1cd15cu: goto label_1cd15c;
        case 0x1cd160u: goto label_1cd160;
        case 0x1cd164u: goto label_1cd164;
        case 0x1cd168u: goto label_1cd168;
        case 0x1cd16cu: goto label_1cd16c;
        case 0x1cd170u: goto label_1cd170;
        case 0x1cd174u: goto label_1cd174;
        case 0x1cd178u: goto label_1cd178;
        case 0x1cd17cu: goto label_1cd17c;
        default: break;
    }

    ctx->pc = 0x1cd060u;

label_1cd060:
    // 0x1cd060: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cd060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1cd064:
    // 0x1cd064: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1cd064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1cd068:
    // 0x1cd068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd06c:
    // 0x1cd06c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1cd06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1cd070:
    // 0x1cd070: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1cd070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1cd074:
    // 0x1cd074: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1cd074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cd078:
    // 0x1cd078: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cd078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1cd07c:
    // 0x1cd07c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1cd07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1cd080:
    // 0x1cd080: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cd080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1cd084:
    // 0x1cd084: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cd084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd088:
    // 0x1cd088: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1cd088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1cd08c:
    // 0x1cd08c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1cd08cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1cd090:
    // 0x1cd090: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1cd090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1cd094:
    // 0x1cd094: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cd094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cd098:
    // 0x1cd098: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1cd098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1cd09c:
    // 0x1cd09c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1cd09cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0a0:
    // 0x1cd0a0: 0x8fb600a0  lw          $s6, 0xA0($sp)
    ctx->pc = 0x1cd0a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1cd0a4:
    // 0x1cd0a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cd0a8:
    // 0x1cd0a8: 0xc0733fc  jal         func_1CCFF0
label_1cd0ac:
    if (ctx->pc == 0x1CD0ACu) {
        ctx->pc = 0x1CD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0A8u;
        // 0x1cd0ac: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0B0u;
        goto label_1cd0b0;
    }
    ctx->pc = 0x1CD0A8u;
    SET_GPR_U32(ctx, 31, 0x1CD0B0u);
    ctx->pc = 0x1CD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0A8u;
    // 0x1cd0ac: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFF0u, 0x1CD0A8u, 0x1CD0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0B0u;
label_1cd0b0:
    // 0x1cd0b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd0b4:
    // 0x1cd0b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0b8:
    // 0x1cd0b8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd0bc:
    // 0x1cd0bc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd0c0:
    // 0x1cd0c0: 0x60f809  jalr        $v1
label_1cd0c4:
    if (ctx->pc == 0x1CD0C4u) {
        ctx->pc = 0x1CD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0C0u;
        // 0x1cd0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0C8u;
        goto label_1cd0c8;
    }
    ctx->pc = 0x1CD0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD0C8u);
        ctx->pc = 0x1CD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0C0u;
        // 0x1cd0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0C0u, 0x1CD0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD0C8u;
label_1cd0c8:
    // 0x1cd0c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd0cc:
    // 0x1cd0cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0d0:
    // 0x1cd0d0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cd0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cd0d4:
    // 0x1cd0d4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cd0d8:
    // 0x1cd0d8: 0x60f809  jalr        $v1
label_1cd0dc:
    if (ctx->pc == 0x1CD0DCu) {
        ctx->pc = 0x1CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D8u;
        // 0x1cd0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0E0u;
        goto label_1cd0e0;
    }
    ctx->pc = 0x1CD0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD0E0u);
        ctx->pc = 0x1CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D8u;
        // 0x1cd0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0D8u, 0x1CD0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD0E0u;
label_1cd0e0:
    // 0x1cd0e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd0e4:
    // 0x1cd0e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0e8:
    // 0x1cd0e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cd0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0ec:
    // 0x1cd0ec: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1cd0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1cd0f0:
    // 0x1cd0f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1cd0f4:
    // 0x1cd0f4: 0x60f809  jalr        $v1
label_1cd0f8:
    if (ctx->pc == 0x1CD0F8u) {
        ctx->pc = 0x1CD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0F4u;
        // 0x1cd0f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0FCu;
        goto label_1cd0fc;
    }
    ctx->pc = 0x1CD0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD0FCu);
        ctx->pc = 0x1CD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0F4u;
        // 0x1cd0f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0F4u, 0x1CD0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD0FCu;
label_1cd0fc:
    // 0x1cd0fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd100:
    // 0x1cd100: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cd100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd104:
    // 0x1cd104: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1cd104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1cd108:
    // 0x1cd108: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1cd10c:
    // 0x1cd10c: 0x60f809  jalr        $v1
label_1cd110:
    if (ctx->pc == 0x1CD110u) {
        ctx->pc = 0x1CD110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD10Cu;
        // 0x1cd110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD114u;
        goto label_1cd114;
    }
    ctx->pc = 0x1CD10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD114u);
        ctx->pc = 0x1CD110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD10Cu;
        // 0x1cd110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD10Cu, 0x1CD114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD114u;
label_1cd114:
    // 0x1cd114: 0xae140074  sw          $s4, 0x74($s0)
    ctx->pc = 0x1cd114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 20));
label_1cd118:
    // 0x1cd118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd11c:
    // 0x1cd11c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cd120:
    // 0x1cd120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd124:
    // 0x1cd124: 0x6aa30007  ldl         $v1, 0x7($s5)
    ctx->pc = 0x1cd124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cd128:
    // 0x1cd128: 0x6ea30000  ldr         $v1, 0x0($s5)
    ctx->pc = 0x1cd128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cd12c:
    // 0x1cd12c: 0x6aa4000f  ldl         $a0, 0xF($s5)
    ctx->pc = 0x1cd12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1cd130:
    // 0x1cd130: 0x6ea40008  ldr         $a0, 0x8($s5)
    ctx->pc = 0x1cd130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1cd134:
    // 0x1cd134: 0xb203007f  sdl         $v1, 0x7F($s0)
    ctx->pc = 0x1cd134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd138:
    // 0x1cd138: 0xb6030078  sdr         $v1, 0x78($s0)
    ctx->pc = 0x1cd138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd13c:
    // 0x1cd13c: 0xb2040087  sdl         $a0, 0x87($s0)
    ctx->pc = 0x1cd13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd140:
    // 0x1cd140: 0xb6040080  sdr         $a0, 0x80($s0)
    ctx->pc = 0x1cd140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd144:
    // 0x1cd144: 0xae170070  sw          $s7, 0x70($s0)
    ctx->pc = 0x1cd144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 23));
label_1cd148:
    // 0x1cd148: 0xae1600a0  sw          $s6, 0xA0($s0)
    ctx->pc = 0x1cd148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 22));
label_1cd14c:
    // 0x1cd14c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1cd14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_1cd150:
    // 0x1cd150: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1cd150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_1cd154:
    // 0x1cd154: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1cd154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cd158:
    // 0x1cd158: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1cd158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cd15c:
    // 0x1cd15c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1cd15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cd160:
    // 0x1cd160: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cd160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cd164:
    // 0x1cd164: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cd164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cd168:
    // 0x1cd168: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1cd168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd16c:
    // 0x1cd16c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1cd16cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd170:
    // 0x1cd170: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1cd170u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd174:
    // 0x1cd174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd178:
    // 0x1cd178: 0x3e00008  jr          $ra
label_1cd17c:
    if (ctx->pc == 0x1CD17Cu) {
        ctx->pc = 0x1CD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD178u;
        // 0x1cd17c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD180u;
        goto label_fallthrough_0x1cd178;
    }
    ctx->pc = 0x1CD178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD178u;
        // 0x1cd17c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd178:
    ctx->pc = 0x1CD180u;
}
