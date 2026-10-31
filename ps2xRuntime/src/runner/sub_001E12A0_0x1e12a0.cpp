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

// Function: sub_001E12A0
// Address: 0x1e12a0 - 0x1e1338
void sub_001E12A0_0x1e12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E12A0_0x1e12a0");
#endif

    switch (ctx->pc) {
        case 0x1e12a0u: goto label_1e12a0;
        case 0x1e12a4u: goto label_1e12a4;
        case 0x1e12a8u: goto label_1e12a8;
        case 0x1e12acu: goto label_1e12ac;
        case 0x1e12b0u: goto label_1e12b0;
        case 0x1e12b4u: goto label_1e12b4;
        case 0x1e12b8u: goto label_1e12b8;
        case 0x1e12bcu: goto label_1e12bc;
        case 0x1e12c0u: goto label_1e12c0;
        case 0x1e12c4u: goto label_1e12c4;
        case 0x1e12c8u: goto label_1e12c8;
        case 0x1e12ccu: goto label_1e12cc;
        case 0x1e12d0u: goto label_1e12d0;
        case 0x1e12d4u: goto label_1e12d4;
        case 0x1e12d8u: goto label_1e12d8;
        case 0x1e12dcu: goto label_1e12dc;
        case 0x1e12e0u: goto label_1e12e0;
        case 0x1e12e4u: goto label_1e12e4;
        case 0x1e12e8u: goto label_1e12e8;
        case 0x1e12ecu: goto label_1e12ec;
        case 0x1e12f0u: goto label_1e12f0;
        case 0x1e12f4u: goto label_1e12f4;
        case 0x1e12f8u: goto label_1e12f8;
        case 0x1e12fcu: goto label_1e12fc;
        case 0x1e1300u: goto label_1e1300;
        case 0x1e1304u: goto label_1e1304;
        case 0x1e1308u: goto label_1e1308;
        case 0x1e130cu: goto label_1e130c;
        case 0x1e1310u: goto label_1e1310;
        case 0x1e1314u: goto label_1e1314;
        case 0x1e1318u: goto label_1e1318;
        case 0x1e131cu: goto label_1e131c;
        case 0x1e1320u: goto label_1e1320;
        case 0x1e1324u: goto label_1e1324;
        case 0x1e1328u: goto label_1e1328;
        case 0x1e132cu: goto label_1e132c;
        case 0x1e1330u: goto label_1e1330;
        case 0x1e1334u: goto label_1e1334;
        default: break;
    }

    ctx->pc = 0x1e12a0u;

label_1e12a0:
    // 0x1e12a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e12a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e12a4:
    // 0x1e12a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e12a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e12a8:
    // 0x1e12a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e12a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e12ac:
    // 0x1e12ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e12acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e12b0:
    // 0x1e12b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e12b4:
    // 0x1e12b4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1e12b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1e12b8:
    // 0x1e12b8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1e12bc:
    // 0x1e12bc: 0x40f809  jalr        $v0
label_1e12c0:
    if (ctx->pc == 0x1E12C0u) {
        ctx->pc = 0x1E12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12BCu;
        // 0x1e12c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12C4u;
        goto label_1e12c4;
    }
    ctx->pc = 0x1E12BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E12C4u);
        ctx->pc = 0x1E12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12BCu;
        // 0x1e12c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E12BCu, 0x1E12C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E12C4u;
label_1e12c4:
    // 0x1e12c4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_1e12c8:
    if (ctx->pc == 0x1E12C8u) {
        ctx->pc = 0x1E12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C4u;
        // 0x1e12c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12CCu;
        goto label_1e12cc;
    }
    ctx->pc = 0x1E12C4u;
    {
        const bool branch_taken_0x1e12c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12c4) {
            ctx->pc = 0x1E12C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12C4u;
            // 0x1e12c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E12CCu;
label_1e12cc:
    // 0x1e12cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e12d0:
    // 0x1e12d0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e12d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e12d4:
    // 0x1e12d4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e12d8:
    // 0x1e12d8: 0x40f809  jalr        $v0
label_1e12dc:
    if (ctx->pc == 0x1E12DCu) {
        ctx->pc = 0x1E12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12D8u;
        // 0x1e12dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12E0u;
        goto label_1e12e0;
    }
    ctx->pc = 0x1E12D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E12E0u);
        ctx->pc = 0x1E12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12D8u;
        // 0x1e12dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E12D8u, 0x1E12E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E12E0u;
label_1e12e0:
    // 0x1e12e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1e12e4:
    if (ctx->pc == 0x1E12E4u) {
        ctx->pc = 0x1E12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E0u;
        // 0x1e12e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12E8u;
        goto label_1e12e8;
    }
    ctx->pc = 0x1E12E0u;
    {
        const bool branch_taken_0x1e12e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12e0) {
            ctx->pc = 0x1E12E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12E0u;
            // 0x1e12e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E12E8u;
label_1e12e8:
    // 0x1e12e8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e12ec:
    // 0x1e12ec: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_1e12f0:
    if (ctx->pc == 0x1E12F0u) {
        ctx->pc = 0x1E12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12ECu;
        // 0x1e12f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12F4u;
        goto label_1e12f4;
    }
    ctx->pc = 0x1E12ECu;
    {
        const bool branch_taken_0x1e12ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12ec) {
            ctx->pc = 0x1E12F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12ECu;
            // 0x1e12f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E12F4u;
label_1e12f4:
    // 0x1e12f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e12f8:
    // 0x1e12f8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e12f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e12fc:
    // 0x1e12fc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e1300:
    // 0x1e1300: 0x60f809  jalr        $v1
label_1e1304:
    if (ctx->pc == 0x1E1304u) {
        ctx->pc = 0x1E1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1300u;
        // 0x1e1304: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1308u;
        goto label_1e1308;
    }
    ctx->pc = 0x1E1300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1308u);
        ctx->pc = 0x1E1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1300u;
        // 0x1e1304: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1300u, 0x1E1308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1308u;
label_1e1308:
    // 0x1e1308: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e1308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e130c:
    // 0x1e130c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1e1310:
    if (ctx->pc == 0x1E1310u) {
        ctx->pc = 0x1E1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E130Cu;
        // 0x1e1310: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1314u;
        goto label_1e1314;
    }
    ctx->pc = 0x1E130Cu;
    {
        const bool branch_taken_0x1e130c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E130Cu;
        // 0x1e1310: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e130c) {
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E1314u;
label_1e1314:
    // 0x1e1314: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1318:
    // 0x1e1318: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e1318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e131c:
    // 0x1e131c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e1320:
    // 0x1e1320: 0x60f809  jalr        $v1
label_1e1324:
    if (ctx->pc == 0x1E1324u) {
        ctx->pc = 0x1E1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1320u;
        // 0x1e1324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1328u;
        goto label_1e1328;
    }
    ctx->pc = 0x1E1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1328u);
        ctx->pc = 0x1E1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1320u;
        // 0x1e1324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1320u, 0x1E1328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1328u;
label_1e1328:
    // 0x1e1328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e132c:
    // 0x1e132c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1330:
    // 0x1e1330: 0x3e00008  jr          $ra
label_1e1334:
    if (ctx->pc == 0x1E1334u) {
        ctx->pc = 0x1E1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1330u;
        // 0x1e1334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1338u;
        goto label_fallthrough_0x1e1330;
    }
    ctx->pc = 0x1E1330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1330u;
        // 0x1e1334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1330:
    ctx->pc = 0x1E1338u;
}
