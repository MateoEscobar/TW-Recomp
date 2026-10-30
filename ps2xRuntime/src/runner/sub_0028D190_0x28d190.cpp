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

// Function: sub_0028D190
// Address: 0x28d190 - 0x28d2e8
void sub_0028D190_0x28d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D190_0x28d190");
#endif

    switch (ctx->pc) {
        case 0x28d190u: goto label_28d190;
        case 0x28d194u: goto label_28d194;
        case 0x28d198u: goto label_28d198;
        case 0x28d19cu: goto label_28d19c;
        case 0x28d1a0u: goto label_28d1a0;
        case 0x28d1a4u: goto label_28d1a4;
        case 0x28d1a8u: goto label_28d1a8;
        case 0x28d1acu: goto label_28d1ac;
        case 0x28d1b0u: goto label_28d1b0;
        case 0x28d1b4u: goto label_28d1b4;
        case 0x28d1b8u: goto label_28d1b8;
        case 0x28d1bcu: goto label_28d1bc;
        case 0x28d1c0u: goto label_28d1c0;
        case 0x28d1c4u: goto label_28d1c4;
        case 0x28d1c8u: goto label_28d1c8;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d1d0u: goto label_28d1d0;
        case 0x28d1d4u: goto label_28d1d4;
        case 0x28d1d8u: goto label_28d1d8;
        case 0x28d1dcu: goto label_28d1dc;
        case 0x28d1e0u: goto label_28d1e0;
        case 0x28d1e4u: goto label_28d1e4;
        case 0x28d1e8u: goto label_28d1e8;
        case 0x28d1ecu: goto label_28d1ec;
        case 0x28d1f0u: goto label_28d1f0;
        case 0x28d1f4u: goto label_28d1f4;
        case 0x28d1f8u: goto label_28d1f8;
        case 0x28d1fcu: goto label_28d1fc;
        case 0x28d200u: goto label_28d200;
        case 0x28d204u: goto label_28d204;
        case 0x28d208u: goto label_28d208;
        case 0x28d20cu: goto label_28d20c;
        case 0x28d210u: goto label_28d210;
        case 0x28d214u: goto label_28d214;
        case 0x28d218u: goto label_28d218;
        case 0x28d21cu: goto label_28d21c;
        case 0x28d220u: goto label_28d220;
        case 0x28d224u: goto label_28d224;
        case 0x28d228u: goto label_28d228;
        case 0x28d22cu: goto label_28d22c;
        case 0x28d230u: goto label_28d230;
        case 0x28d234u: goto label_28d234;
        case 0x28d238u: goto label_28d238;
        case 0x28d23cu: goto label_28d23c;
        case 0x28d240u: goto label_28d240;
        case 0x28d244u: goto label_28d244;
        case 0x28d248u: goto label_28d248;
        case 0x28d24cu: goto label_28d24c;
        case 0x28d250u: goto label_28d250;
        case 0x28d254u: goto label_28d254;
        case 0x28d258u: goto label_28d258;
        case 0x28d25cu: goto label_28d25c;
        case 0x28d260u: goto label_28d260;
        case 0x28d264u: goto label_28d264;
        case 0x28d268u: goto label_28d268;
        case 0x28d26cu: goto label_28d26c;
        case 0x28d270u: goto label_28d270;
        case 0x28d274u: goto label_28d274;
        case 0x28d278u: goto label_28d278;
        case 0x28d27cu: goto label_28d27c;
        case 0x28d280u: goto label_28d280;
        case 0x28d284u: goto label_28d284;
        case 0x28d288u: goto label_28d288;
        case 0x28d28cu: goto label_28d28c;
        case 0x28d290u: goto label_28d290;
        case 0x28d294u: goto label_28d294;
        case 0x28d298u: goto label_28d298;
        case 0x28d29cu: goto label_28d29c;
        case 0x28d2a0u: goto label_28d2a0;
        case 0x28d2a4u: goto label_28d2a4;
        case 0x28d2a8u: goto label_28d2a8;
        case 0x28d2acu: goto label_28d2ac;
        case 0x28d2b0u: goto label_28d2b0;
        case 0x28d2b4u: goto label_28d2b4;
        case 0x28d2b8u: goto label_28d2b8;
        case 0x28d2bcu: goto label_28d2bc;
        case 0x28d2c0u: goto label_28d2c0;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2c8u: goto label_28d2c8;
        case 0x28d2ccu: goto label_28d2cc;
        case 0x28d2d0u: goto label_28d2d0;
        case 0x28d2d4u: goto label_28d2d4;
        case 0x28d2d8u: goto label_28d2d8;
        case 0x28d2dcu: goto label_28d2dc;
        case 0x28d2e0u: goto label_28d2e0;
        case 0x28d2e4u: goto label_28d2e4;
        default: break;
    }

    ctx->pc = 0x28d190u;

label_28d190:
    // 0x28d190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28d194:
    // 0x28d194: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28d198:
    // 0x28d198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d19c:
    // 0x28d19c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28d1a0:
    // 0x28d1a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_28d1a4:
    // 0x28d1a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28d1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d1a8:
    // 0x28d1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28d1ac:
    // 0x28d1ac: 0xc0a3678  jal         func_28D9E0
label_28d1b0:
    if (ctx->pc == 0x28D1B0u) {
        ctx->pc = 0x28D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1ACu;
        // 0x28d1b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1B4u;
        goto label_28d1b4;
    }
    ctx->pc = 0x28D1ACu;
    SET_GPR_U32(ctx, 31, 0x28D1B4u);
    ctx->pc = 0x28D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1ACu;
    // 0x28d1b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x28D1ACu, 0x28D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1B4u;
label_28d1b4:
    // 0x28d1b4: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_28d1b8:
    if (ctx->pc == 0x28D1B8u) {
        ctx->pc = 0x28D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1B4u;
        // 0x28d1b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1BCu;
        goto label_28d1bc;
    }
    ctx->pc = 0x28D1B4u;
    {
        const bool branch_taken_0x28d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d1b4) {
            ctx->pc = 0x28D1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1B4u;
            // 0x28d1b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D2D0u;
            goto label_28d2d0;
        }
    }
    ctx->pc = 0x28D1BCu;
label_28d1bc:
    // 0x28d1bc: 0xc088edc  jal         func_223B70
label_28d1c0:
    if (ctx->pc == 0x28D1C0u) {
        ctx->pc = 0x28D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1BCu;
        // 0x28d1c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1C4u;
        goto label_28d1c4;
    }
    ctx->pc = 0x28D1BCu;
    SET_GPR_U32(ctx, 31, 0x28D1C4u);
    ctx->pc = 0x28D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1BCu;
    // 0x28d1c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x28D1BCu, 0x28D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1C4u;
label_28d1c4:
    // 0x28d1c4: 0x50510042  beql        $v0, $s1, . + 4 + (0x42 << 2)
label_28d1c8:
    if (ctx->pc == 0x28D1C8u) {
        ctx->pc = 0x28D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1C4u;
        // 0x28d1c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1CCu;
        goto label_28d1cc;
    }
    ctx->pc = 0x28D1C4u;
    {
        const bool branch_taken_0x28d1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x28d1c4) {
            ctx->pc = 0x28D1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1C4u;
            // 0x28d1c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D2D0u;
            goto label_28d2d0;
        }
    }
    ctx->pc = 0x28D1CCu;
label_28d1cc:
    // 0x28d1cc: 0xc089f76  jal         func_227DD8
label_28d1d0:
    if (ctx->pc == 0x28D1D0u) {
        ctx->pc = 0x28D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1CCu;
        // 0x28d1d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1D4u;
        goto label_28d1d4;
    }
    ctx->pc = 0x28D1CCu;
    SET_GPR_U32(ctx, 31, 0x28D1D4u);
    ctx->pc = 0x28D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1CCu;
    // 0x28d1d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x28D1CCu, 0x28D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1D4u;
label_28d1d4:
    // 0x28d1d4: 0x1051003d  beq         $v0, $s1, . + 4 + (0x3D << 2)
label_28d1d8:
    if (ctx->pc == 0x28D1D8u) {
        ctx->pc = 0x28D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1D4u;
        // 0x28d1d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1DCu;
        goto label_28d1dc;
    }
    ctx->pc = 0x28D1D4u;
    {
        const bool branch_taken_0x28d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x28D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1D4u;
        // 0x28d1d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1d4) {
            ctx->pc = 0x28D2CCu;
            goto label_28d2cc;
        }
    }
    ctx->pc = 0x28D1DCu;
label_28d1dc:
    // 0x28d1dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28d1e0:
    // 0x28d1e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_28d1e4:
    if (ctx->pc == 0x28D1E4u) {
        ctx->pc = 0x28D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1E0u;
        // 0x28d1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1E8u;
        goto label_28d1e8;
    }
    ctx->pc = 0x28D1E0u;
    {
        const bool branch_taken_0x28d1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1E0u;
        // 0x28d1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1e0) {
            ctx->pc = 0x28D1FCu;
            goto label_28d1fc;
        }
    }
    ctx->pc = 0x28D1E8u;
label_28d1e8:
    // 0x28d1e8: 0xc0a3658  jal         func_28D960
label_28d1ec:
    if (ctx->pc == 0x28D1ECu) {
        ctx->pc = 0x28D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1E8u;
        // 0x28d1ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1F0u;
        goto label_28d1f0;
    }
    ctx->pc = 0x28D1E8u;
    SET_GPR_U32(ctx, 31, 0x28D1F0u);
    ctx->pc = 0x28D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1E8u;
    // 0x28d1ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28D1E8u, 0x28D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1F0u;
label_28d1f0:
    // 0x28d1f0: 0x4430037  bgezl       $v0, . + 4 + (0x37 << 2)
label_28d1f4:
    if (ctx->pc == 0x28D1F4u) {
        ctx->pc = 0x28D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1F0u;
        // 0x28d1f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1F8u;
        goto label_28d1f8;
    }
    ctx->pc = 0x28D1F0u;
    {
        const bool branch_taken_0x28d1f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28d1f0) {
            ctx->pc = 0x28D1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1F0u;
            // 0x28d1f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D2D0u;
            goto label_28d2d0;
        }
    }
    ctx->pc = 0x28D1F8u;
label_28d1f8:
    // 0x28d1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d1fc:
    // 0x28d1fc: 0xc0a3658  jal         func_28D960
label_28d200:
    if (ctx->pc == 0x28D200u) {
        ctx->pc = 0x28D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1FCu;
        // 0x28d200: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D204u;
        goto label_28d204;
    }
    ctx->pc = 0x28D1FCu;
    SET_GPR_U32(ctx, 31, 0x28D204u);
    ctx->pc = 0x28D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1FCu;
    // 0x28d200: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28D1FCu, 0x28D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D204u;
label_28d204:
    // 0x28d204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d208:
    // 0x28d208: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
label_28d20c:
    if (ctx->pc == 0x28D20Cu) {
        ctx->pc = 0x28D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D208u;
        // 0x28d20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D210u;
        goto label_28d210;
    }
    ctx->pc = 0x28D208u;
    {
        const bool branch_taken_0x28d208 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x28D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D208u;
        // 0x28d20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d208) {
            ctx->pc = 0x28D238u;
            goto label_28d238;
        }
    }
    ctx->pc = 0x28D210u;
label_28d210:
    // 0x28d210: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28d210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28d214:
    // 0x28d214: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x28d214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28d218:
    // 0x28d218: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_28d21c:
    if (ctx->pc == 0x28D21Cu) {
        ctx->pc = 0x28D220u;
        goto label_28d220;
    }
    ctx->pc = 0x28D218u;
    {
        const bool branch_taken_0x28d218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d218) {
            ctx->pc = 0x28D238u;
            goto label_28d238;
        }
    }
    ctx->pc = 0x28D220u;
label_28d220:
    // 0x28d220: 0xc0a35f6  jal         func_28D7D8
label_28d224:
    if (ctx->pc == 0x28D224u) {
        ctx->pc = 0x28D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D220u;
        // 0x28d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D228u;
        goto label_28d228;
    }
    ctx->pc = 0x28D220u;
    SET_GPR_U32(ctx, 31, 0x28D228u);
    ctx->pc = 0x28D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D220u;
    // 0x28d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28D220u, 0x28D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D228u;
label_28d228:
    // 0x28d228: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28d228u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28d22c:
    // 0x28d22c: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x28d22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28d230:
    // 0x28d230: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_28d234:
    if (ctx->pc == 0x28D234u) {
        ctx->pc = 0x28D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D230u;
        // 0x28d234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D238u;
        goto label_28d238;
    }
    ctx->pc = 0x28D230u;
    {
        const bool branch_taken_0x28d230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D230u;
        // 0x28d234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d230) {
            ctx->pc = 0x28D220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d220;
        }
    }
    ctx->pc = 0x28D238u;
label_28d238:
    // 0x28d238: 0xc0a3658  jal         func_28D960
label_28d23c:
    if (ctx->pc == 0x28D23Cu) {
        ctx->pc = 0x28D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D238u;
        // 0x28d23c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D240u;
        goto label_28d240;
    }
    ctx->pc = 0x28D238u;
    SET_GPR_U32(ctx, 31, 0x28D240u);
    ctx->pc = 0x28D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D238u;
    // 0x28d23c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28D238u, 0x28D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D240u;
label_28d240:
    // 0x28d240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d244:
    // 0x28d244: 0x622000d  bltzl       $s1, . + 4 + (0xD << 2)
label_28d248:
    if (ctx->pc == 0x28D248u) {
        ctx->pc = 0x28D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D244u;
        // 0x28d248: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D24Cu;
        goto label_28d24c;
    }
    ctx->pc = 0x28D244u;
    {
        const bool branch_taken_0x28d244 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x28d244) {
            ctx->pc = 0x28D248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D244u;
            // 0x28d248: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D27Cu;
            goto label_28d27c;
        }
    }
    ctx->pc = 0x28D24Cu;
label_28d24c:
    // 0x28d24c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28d24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28d250:
    // 0x28d250: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x28d250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28d254:
    // 0x28d254: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_28d258:
    if (ctx->pc == 0x28D258u) {
        ctx->pc = 0x28D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D254u;
        // 0x28d258: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D25Cu;
        goto label_28d25c;
    }
    ctx->pc = 0x28D254u;
    {
        const bool branch_taken_0x28d254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d254) {
            ctx->pc = 0x28D258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D254u;
            // 0x28d258: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D27Cu;
            goto label_28d27c;
        }
    }
    ctx->pc = 0x28D25Cu;
label_28d25c:
    // 0x28d25c: 0x0  nop
    ctx->pc = 0x28d25cu;
    // NOP
label_28d260:
    // 0x28d260: 0xc0a35f6  jal         func_28D7D8
label_28d264:
    if (ctx->pc == 0x28D264u) {
        ctx->pc = 0x28D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D260u;
        // 0x28d264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D268u;
        goto label_28d268;
    }
    ctx->pc = 0x28D260u;
    SET_GPR_U32(ctx, 31, 0x28D268u);
    ctx->pc = 0x28D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D260u;
    // 0x28d264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28D260u, 0x28D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D268u;
label_28d268:
    // 0x28d268: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28d268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28d26c:
    // 0x28d26c: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x28d26cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28d270:
    // 0x28d270: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_28d274:
    if (ctx->pc == 0x28D274u) {
        ctx->pc = 0x28D278u;
        goto label_28d278;
    }
    ctx->pc = 0x28D270u;
    {
        const bool branch_taken_0x28d270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d270) {
            ctx->pc = 0x28D260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d260;
        }
    }
    ctx->pc = 0x28D278u;
label_28d278:
    // 0x28d278: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28d278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d27c:
    // 0x28d27c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28d280:
    // 0x28d280: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28d280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28d284:
    // 0x28d284: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28d288:
    // 0x28d288: 0x40f809  jalr        $v0
label_28d28c:
    if (ctx->pc == 0x28D28Cu) {
        ctx->pc = 0x28D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D288u;
        // 0x28d28c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D290u;
        goto label_28d290;
    }
    ctx->pc = 0x28D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D290u);
        ctx->pc = 0x28D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D288u;
        // 0x28d28c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D288u, 0x28D290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D290u;
label_28d290:
    // 0x28d290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d294:
    // 0x28d294: 0xc0ab742  jal         func_2ADD08
label_28d298:
    if (ctx->pc == 0x28D298u) {
        ctx->pc = 0x28D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D294u;
        // 0x28d298: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D29Cu;
        goto label_28d29c;
    }
    ctx->pc = 0x28D294u;
    SET_GPR_U32(ctx, 31, 0x28D29Cu);
    ctx->pc = 0x28D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D294u;
    // 0x28d298: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x28D294u, 0x28D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D29Cu;
label_28d29c:
    // 0x28d29c: 0xc0a4e54  jal         func_293950
label_28d2a0:
    if (ctx->pc == 0x28D2A0u) {
        ctx->pc = 0x28D2A4u;
        goto label_28d2a4;
    }
    ctx->pc = 0x28D29Cu;
    SET_GPR_U32(ctx, 31, 0x28D2A4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28D29Cu, 0x28D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2A4u;
label_28d2a4:
    // 0x28d2a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d2a8:
    // 0x28d2a8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_28d2ac:
    if (ctx->pc == 0x28D2ACu) {
        ctx->pc = 0x28D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2A8u;
        // 0x28d2ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2B0u;
        goto label_28d2b0;
    }
    ctx->pc = 0x28D2A8u;
    {
        const bool branch_taken_0x28d2a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2A8u;
        // 0x28d2ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2a8) {
            ctx->pc = 0x28D2C0u;
            goto label_28d2c0;
        }
    }
    ctx->pc = 0x28D2B0u;
label_28d2b0:
    // 0x28d2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d2b4:
    // 0x28d2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d2b8:
    // 0x28d2b8: 0xc0acb08  jal         func_2B2C20
label_28d2bc:
    if (ctx->pc == 0x28D2BCu) {
        ctx->pc = 0x28D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2B8u;
        // 0x28d2bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2C0u;
        goto label_28d2c0;
    }
    ctx->pc = 0x28D2B8u;
    SET_GPR_U32(ctx, 31, 0x28D2C0u);
    ctx->pc = 0x28D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2B8u;
    // 0x28d2bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x28D2B8u, 0x28D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2C0u;
label_28d2c0:
    // 0x28d2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d2c4:
    // 0x28d2c4: 0xc0a35d6  jal         func_28D758
label_28d2c8:
    if (ctx->pc == 0x28D2C8u) {
        ctx->pc = 0x28D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2C4u;
        // 0x28d2c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2CCu;
        goto label_28d2cc;
    }
    ctx->pc = 0x28D2C4u;
    SET_GPR_U32(ctx, 31, 0x28D2CCu);
    ctx->pc = 0x28D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2C4u;
    // 0x28d2c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x28D2C4u, 0x28D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2CCu;
label_28d2cc:
    // 0x28d2cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28d2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d2d0:
    // 0x28d2d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d2d4:
    // 0x28d2d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28d2d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d2d8:
    // 0x28d2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d2dc:
    // 0x28d2dc: 0x3e00008  jr          $ra
label_28d2e0:
    if (ctx->pc == 0x28D2E0u) {
        ctx->pc = 0x28D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2DCu;
        // 0x28d2e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2E4u;
        goto label_28d2e4;
    }
    ctx->pc = 0x28D2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2DCu;
        // 0x28d2e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D2E4u;
label_28d2e4:
    // 0x28d2e4: 0x0  nop
    ctx->pc = 0x28d2e4u;
    // NOP
    ctx->pc = 0x28d2e8u;
}
