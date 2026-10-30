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

// Function: sub_002CD198
// Address: 0x2cd198 - 0x2cd258
void sub_002CD198_0x2cd198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD198_0x2cd198");
#endif

    switch (ctx->pc) {
        case 0x2cd198u: goto label_2cd198;
        case 0x2cd19cu: goto label_2cd19c;
        case 0x2cd1a0u: goto label_2cd1a0;
        case 0x2cd1a4u: goto label_2cd1a4;
        case 0x2cd1a8u: goto label_2cd1a8;
        case 0x2cd1acu: goto label_2cd1ac;
        case 0x2cd1b0u: goto label_2cd1b0;
        case 0x2cd1b4u: goto label_2cd1b4;
        case 0x2cd1b8u: goto label_2cd1b8;
        case 0x2cd1bcu: goto label_2cd1bc;
        case 0x2cd1c0u: goto label_2cd1c0;
        case 0x2cd1c4u: goto label_2cd1c4;
        case 0x2cd1c8u: goto label_2cd1c8;
        case 0x2cd1ccu: goto label_2cd1cc;
        case 0x2cd1d0u: goto label_2cd1d0;
        case 0x2cd1d4u: goto label_2cd1d4;
        case 0x2cd1d8u: goto label_2cd1d8;
        case 0x2cd1dcu: goto label_2cd1dc;
        case 0x2cd1e0u: goto label_2cd1e0;
        case 0x2cd1e4u: goto label_2cd1e4;
        case 0x2cd1e8u: goto label_2cd1e8;
        case 0x2cd1ecu: goto label_2cd1ec;
        case 0x2cd1f0u: goto label_2cd1f0;
        case 0x2cd1f4u: goto label_2cd1f4;
        case 0x2cd1f8u: goto label_2cd1f8;
        case 0x2cd1fcu: goto label_2cd1fc;
        case 0x2cd200u: goto label_2cd200;
        case 0x2cd204u: goto label_2cd204;
        case 0x2cd208u: goto label_2cd208;
        case 0x2cd20cu: goto label_2cd20c;
        case 0x2cd210u: goto label_2cd210;
        case 0x2cd214u: goto label_2cd214;
        case 0x2cd218u: goto label_2cd218;
        case 0x2cd21cu: goto label_2cd21c;
        case 0x2cd220u: goto label_2cd220;
        case 0x2cd224u: goto label_2cd224;
        case 0x2cd228u: goto label_2cd228;
        case 0x2cd22cu: goto label_2cd22c;
        case 0x2cd230u: goto label_2cd230;
        case 0x2cd234u: goto label_2cd234;
        case 0x2cd238u: goto label_2cd238;
        case 0x2cd23cu: goto label_2cd23c;
        case 0x2cd240u: goto label_2cd240;
        case 0x2cd244u: goto label_2cd244;
        case 0x2cd248u: goto label_2cd248;
        case 0x2cd24cu: goto label_2cd24c;
        case 0x2cd250u: goto label_2cd250;
        case 0x2cd254u: goto label_2cd254;
        default: break;
    }

    ctx->pc = 0x2cd198u;

label_2cd198:
    // 0x2cd198: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2cd19c:
    // 0x2cd19c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cd19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2cd1a0:
    // 0x2cd1a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cd1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd1a4:
    // 0x2cd1a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cd1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2cd1a8:
    // 0x2cd1a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cd1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2cd1ac:
    // 0x2cd1ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cd1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cd1b0:
    // 0x2cd1b0: 0xc0e40a2  jal         func_390288
label_2cd1b4:
    if (ctx->pc == 0x2CD1B4u) {
        ctx->pc = 0x2CD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1B0u;
        // 0x2cd1b4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD1B8u;
        goto label_2cd1b8;
    }
    ctx->pc = 0x2CD1B0u;
    SET_GPR_U32(ctx, 31, 0x2CD1B8u);
    ctx->pc = 0x2CD1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1B0u;
    // 0x2cd1b4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CD1B0u, 0x2CD1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1B8u;
label_2cd1b8:
    // 0x2cd1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd1bc:
    // 0x2cd1bc: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2cd1c0:
    if (ctx->pc == 0x2CD1C0u) {
        ctx->pc = 0x2CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1BCu;
        // 0x2cd1c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD1C4u;
        goto label_2cd1c4;
    }
    ctx->pc = 0x2CD1BCu;
    {
        const bool branch_taken_0x2cd1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1bc) {
            ctx->pc = 0x2CD1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD1BCu;
            // 0x2cd1c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1F0u;
            goto label_2cd1f0;
        }
    }
    ctx->pc = 0x2CD1C4u;
label_2cd1c4:
    // 0x2cd1c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cd1c8:
    // 0x2cd1c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cd1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd1cc:
    // 0x2cd1cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cd1d0:
    // 0x2cd1d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd1d4:
    // 0x2cd1d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd1d8:
    // 0x2cd1d8: 0x40f809  jalr        $v0
label_2cd1dc:
    if (ctx->pc == 0x2CD1DCu) {
        ctx->pc = 0x2CD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1D8u;
        // 0x2cd1dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD1E0u;
        goto label_2cd1e0;
    }
    ctx->pc = 0x2CD1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD1E0u);
        ctx->pc = 0x2CD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1D8u;
        // 0x2cd1dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD1D8u, 0x2CD1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD1E0u;
label_2cd1e0:
    // 0x2cd1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd1e4:
    // 0x2cd1e4: 0xc10586e  jal         func_4161B8
label_2cd1e8:
    if (ctx->pc == 0x2CD1E8u) {
        ctx->pc = 0x2CD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1E4u;
        // 0x2cd1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD1ECu;
        goto label_2cd1ec;
    }
    ctx->pc = 0x2CD1E4u;
    SET_GPR_U32(ctx, 31, 0x2CD1ECu);
    ctx->pc = 0x2CD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1E4u;
    // 0x2cd1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2CD1E4u, 0x2CD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1ECu;
label_2cd1ec:
    // 0x2cd1ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cd1f0:
    // 0x2cd1f0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2cd1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cd1f4:
    // 0x2cd1f4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2cd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2cd1f8:
    // 0x2cd1f8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2cd1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2cd1fc:
    // 0x2cd1fc: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x2cd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2cd200:
    // 0x2cd200: 0xa0620265  sb          $v0, 0x265($v1)
    ctx->pc = 0x2cd200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 2));
label_2cd204:
    // 0x2cd204: 0xa6510024  sh          $s1, 0x24($s2)
    ctx->pc = 0x2cd204u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 17));
label_2cd208:
    // 0x2cd208: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cd208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cd20c:
    // 0x2cd20c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cd20cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd210:
    // 0x2cd210: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cd210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2cd214:
    // 0x2cd214: 0xc0e4060  jal         func_390180
label_2cd218:
    if (ctx->pc == 0x2CD218u) {
        ctx->pc = 0x2CD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD214u;
        // 0x2cd218: 0xafb00024  sw          $s0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD21Cu;
        goto label_2cd21c;
    }
    ctx->pc = 0x2CD214u;
    SET_GPR_U32(ctx, 31, 0x2CD21Cu);
    ctx->pc = 0x2CD218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD214u;
    // 0x2cd218: 0xafb00024  sw          $s0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CD214u, 0x2CD21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD21Cu;
label_2cd21c:
    // 0x2cd21c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2cd21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2cd220:
    // 0x2cd220: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cd220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cd224:
    // 0x2cd224: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2cd224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2cd228:
    // 0x2cd228: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cd228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd22c:
    // 0x2cd22c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2cd22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2cd230:
    // 0x2cd230: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2cd230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2cd234:
    // 0x2cd234: 0x40f809  jalr        $v0
label_2cd238:
    if (ctx->pc == 0x2CD238u) {
        ctx->pc = 0x2CD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD234u;
        // 0x2cd238: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD23Cu;
        goto label_2cd23c;
    }
    ctx->pc = 0x2CD234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD23Cu);
        ctx->pc = 0x2CD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD234u;
        // 0x2cd238: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD234u, 0x2CD23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD23Cu;
label_2cd23c:
    // 0x2cd23c: 0xa6510024  sh          $s1, 0x24($s2)
    ctx->pc = 0x2cd23cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 17));
label_2cd240:
    // 0x2cd240: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cd240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd244:
    // 0x2cd244: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cd244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cd248:
    // 0x2cd248: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cd248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd24c:
    // 0x2cd24c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cd24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cd250:
    // 0x2cd250: 0x3e00008  jr          $ra
label_2cd254:
    if (ctx->pc == 0x2CD254u) {
        ctx->pc = 0x2CD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD250u;
        // 0x2cd254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD258u;
        goto label_fallthrough_0x2cd250;
    }
    ctx->pc = 0x2CD250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD250u;
        // 0x2cd254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd250:
    ctx->pc = 0x2CD258u;
}
