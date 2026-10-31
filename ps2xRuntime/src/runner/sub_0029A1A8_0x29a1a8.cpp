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

// Function: sub_0029A1A8
// Address: 0x29a1a8 - 0x29a268
void sub_0029A1A8_0x29a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A1A8_0x29a1a8");
#endif

    switch (ctx->pc) {
        case 0x29a1a8u: goto label_29a1a8;
        case 0x29a1acu: goto label_29a1ac;
        case 0x29a1b0u: goto label_29a1b0;
        case 0x29a1b4u: goto label_29a1b4;
        case 0x29a1b8u: goto label_29a1b8;
        case 0x29a1bcu: goto label_29a1bc;
        case 0x29a1c0u: goto label_29a1c0;
        case 0x29a1c4u: goto label_29a1c4;
        case 0x29a1c8u: goto label_29a1c8;
        case 0x29a1ccu: goto label_29a1cc;
        case 0x29a1d0u: goto label_29a1d0;
        case 0x29a1d4u: goto label_29a1d4;
        case 0x29a1d8u: goto label_29a1d8;
        case 0x29a1dcu: goto label_29a1dc;
        case 0x29a1e0u: goto label_29a1e0;
        case 0x29a1e4u: goto label_29a1e4;
        case 0x29a1e8u: goto label_29a1e8;
        case 0x29a1ecu: goto label_29a1ec;
        case 0x29a1f0u: goto label_29a1f0;
        case 0x29a1f4u: goto label_29a1f4;
        case 0x29a1f8u: goto label_29a1f8;
        case 0x29a1fcu: goto label_29a1fc;
        case 0x29a200u: goto label_29a200;
        case 0x29a204u: goto label_29a204;
        case 0x29a208u: goto label_29a208;
        case 0x29a20cu: goto label_29a20c;
        case 0x29a210u: goto label_29a210;
        case 0x29a214u: goto label_29a214;
        case 0x29a218u: goto label_29a218;
        case 0x29a21cu: goto label_29a21c;
        case 0x29a220u: goto label_29a220;
        case 0x29a224u: goto label_29a224;
        case 0x29a228u: goto label_29a228;
        case 0x29a22cu: goto label_29a22c;
        case 0x29a230u: goto label_29a230;
        case 0x29a234u: goto label_29a234;
        case 0x29a238u: goto label_29a238;
        case 0x29a23cu: goto label_29a23c;
        case 0x29a240u: goto label_29a240;
        case 0x29a244u: goto label_29a244;
        case 0x29a248u: goto label_29a248;
        case 0x29a24cu: goto label_29a24c;
        case 0x29a250u: goto label_29a250;
        case 0x29a254u: goto label_29a254;
        case 0x29a258u: goto label_29a258;
        case 0x29a25cu: goto label_29a25c;
        case 0x29a260u: goto label_29a260;
        case 0x29a264u: goto label_29a264;
        default: break;
    }

    ctx->pc = 0x29a1a8u;

label_29a1a8:
    // 0x29a1a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29a1ac:
    // 0x29a1ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_29a1b0:
    // 0x29a1b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29a1b4:
    // 0x29a1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a1b8:
    // 0x29a1b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_29a1bc:
    // 0x29a1bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29a1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a1c0:
    // 0x29a1c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a1c4:
    // 0x29a1c4: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x29a1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_29a1c8:
    // 0x29a1c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_29a1cc:
    if (ctx->pc == 0x29A1CCu) {
        ctx->pc = 0x29A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1C8u;
        // 0x29a1cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1D0u;
        goto label_29a1d0;
    }
    ctx->pc = 0x29A1C8u;
    {
        const bool branch_taken_0x29a1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1C8u;
        // 0x29a1cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1c8) {
            ctx->pc = 0x29A24Cu;
            goto label_29a24c;
        }
    }
    ctx->pc = 0x29A1D0u;
label_29a1d0:
    // 0x29a1d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29a1d4:
    // 0x29a1d4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_29a1d8:
    if (ctx->pc == 0x29A1D8u) {
        ctx->pc = 0x29A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1D4u;
        // 0x29a1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1DCu;
        goto label_29a1dc;
    }
    ctx->pc = 0x29A1D4u;
    {
        const bool branch_taken_0x29a1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1D4u;
        // 0x29a1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1d4) {
            ctx->pc = 0x29A250u;
            goto label_29a250;
        }
    }
    ctx->pc = 0x29A1DCu;
label_29a1dc:
    // 0x29a1dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_29a1e0:
    // 0x29a1e0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_29a1e4:
    if (ctx->pc == 0x29A1E4u) {
        ctx->pc = 0x29A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1E0u;
        // 0x29a1e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1E8u;
        goto label_29a1e8;
    }
    ctx->pc = 0x29A1E0u;
    {
        const bool branch_taken_0x29a1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a1e0) {
            ctx->pc = 0x29A1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A1E0u;
            // 0x29a1e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A250u;
            goto label_29a250;
        }
    }
    ctx->pc = 0x29A1E8u;
label_29a1e8:
    // 0x29a1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a1ec:
    // 0x29a1ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29a1f0:
    // 0x29a1f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29a1f4:
    // 0x29a1f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29a1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29a1f8:
    // 0x29a1f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29a1fc:
    // 0x29a1fc: 0x40f809  jalr        $v0
label_29a200:
    if (ctx->pc == 0x29A200u) {
        ctx->pc = 0x29A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1FCu;
        // 0x29a200: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A204u;
        goto label_29a204;
    }
    ctx->pc = 0x29A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29A204u);
        ctx->pc = 0x29A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1FCu;
        // 0x29a200: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A1FCu, 0x29A204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A204u;
label_29a204:
    // 0x29a204: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29a204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29a208:
    // 0x29a208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29a20c:
    // 0x29a20c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_29a210:
    // 0x29a210: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29a210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29a214:
    // 0x29a214: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29a218:
    // 0x29a218: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29a21c:
    // 0x29a21c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29a220:
    // 0x29a220: 0x40f809  jalr        $v0
label_29a224:
    if (ctx->pc == 0x29A224u) {
        ctx->pc = 0x29A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A220u;
        // 0x29a224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A228u;
        goto label_29a228;
    }
    ctx->pc = 0x29A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29A228u);
        ctx->pc = 0x29A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A220u;
        // 0x29a224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A220u, 0x29A228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A228u;
label_29a228:
    // 0x29a228: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29a228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_29a22c:
    // 0x29a22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a230:
    // 0x29a230: 0xc08750a  jal         func_21D428
label_29a234:
    if (ctx->pc == 0x29A234u) {
        ctx->pc = 0x29A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A230u;
        // 0x29a234: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A238u;
        goto label_29a238;
    }
    ctx->pc = 0x29A230u;
    SET_GPR_U32(ctx, 31, 0x29A238u);
    ctx->pc = 0x29A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A230u;
    // 0x29a234: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x29A230u, 0x29A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A238u;
label_29a238:
    // 0x29a238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a23c:
    // 0x29a23c: 0xc0a57ca  jal         func_295F28
label_29a240:
    if (ctx->pc == 0x29A240u) {
        ctx->pc = 0x29A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A23Cu;
        // 0x29a240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A244u;
        goto label_29a244;
    }
    ctx->pc = 0x29A23Cu;
    SET_GPR_U32(ctx, 31, 0x29A244u);
    ctx->pc = 0x29A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A23Cu;
    // 0x29a240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x29A23Cu, 0x29A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A244u;
label_29a244:
    // 0x29a244: 0x10000002  b           . + 4 + (0x2 << 2)
label_29a248:
    if (ctx->pc == 0x29A248u) {
        ctx->pc = 0x29A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A244u;
        // 0x29a248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A24Cu;
        goto label_29a24c;
    }
    ctx->pc = 0x29A244u;
    {
        const bool branch_taken_0x29a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A244u;
        // 0x29a248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a244) {
            ctx->pc = 0x29A250u;
            goto label_29a250;
        }
    }
    ctx->pc = 0x29A24Cu;
label_29a24c:
    // 0x29a24c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a250:
    // 0x29a250: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29a250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29a254:
    // 0x29a254: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29a254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29a258:
    // 0x29a258: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29a258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a25c:
    // 0x29a25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a260:
    // 0x29a260: 0x3e00008  jr          $ra
label_29a264:
    if (ctx->pc == 0x29A264u) {
        ctx->pc = 0x29A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A260u;
        // 0x29a264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A268u;
        goto label_fallthrough_0x29a260;
    }
    ctx->pc = 0x29A260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A260u;
        // 0x29a264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a260:
    ctx->pc = 0x29A268u;
}
