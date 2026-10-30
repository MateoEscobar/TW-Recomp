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

// Function: sub_0017A1E0
// Address: 0x17a1e0 - 0x17a258
void sub_0017A1E0_0x17a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A1E0_0x17a1e0");
#endif

    switch (ctx->pc) {
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1e4u: goto label_17a1e4;
        case 0x17a1e8u: goto label_17a1e8;
        case 0x17a1ecu: goto label_17a1ec;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a1f4u: goto label_17a1f4;
        case 0x17a1f8u: goto label_17a1f8;
        case 0x17a1fcu: goto label_17a1fc;
        case 0x17a200u: goto label_17a200;
        case 0x17a204u: goto label_17a204;
        case 0x17a208u: goto label_17a208;
        case 0x17a20cu: goto label_17a20c;
        case 0x17a210u: goto label_17a210;
        case 0x17a214u: goto label_17a214;
        case 0x17a218u: goto label_17a218;
        case 0x17a21cu: goto label_17a21c;
        case 0x17a220u: goto label_17a220;
        case 0x17a224u: goto label_17a224;
        case 0x17a228u: goto label_17a228;
        case 0x17a22cu: goto label_17a22c;
        case 0x17a230u: goto label_17a230;
        case 0x17a234u: goto label_17a234;
        case 0x17a238u: goto label_17a238;
        case 0x17a23cu: goto label_17a23c;
        case 0x17a240u: goto label_17a240;
        case 0x17a244u: goto label_17a244;
        case 0x17a248u: goto label_17a248;
        case 0x17a24cu: goto label_17a24c;
        case 0x17a250u: goto label_17a250;
        case 0x17a254u: goto label_17a254;
        default: break;
    }

    ctx->pc = 0x17a1e0u;

label_17a1e0:
    // 0x17a1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a1e4:
    // 0x17a1e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17a1e8:
    // 0x17a1e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17a1ec:
    // 0x17a1ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17a1f0:
    // 0x17a1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a1f4:
    // 0x17a1f4: 0x8c43ce84  lw          $v1, -0x317C($v0)
    ctx->pc = 0x17a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954628)));
label_17a1f8:
    // 0x17a1f8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17a1fc:
    // 0x17a1fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_17a200:
    // 0x17a200: 0x84a40008  lh          $a0, 0x8($a1)
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_17a204:
    // 0x17a204: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x17a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17a208:
    // 0x17a208: 0x40f809  jalr        $v0
label_17a20c:
    if (ctx->pc == 0x17A20Cu) {
        ctx->pc = 0x17A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A208u;
        // 0x17a20c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A210u;
        goto label_17a210;
    }
    ctx->pc = 0x17A208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A210u);
        ctx->pc = 0x17A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A208u;
        // 0x17a20c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A208u, 0x17A210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A210u;
label_17a210:
    // 0x17a210: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17a214:
    // 0x17a214: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x17a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_17a218:
    // 0x17a218: 0x8c45d268  lw          $a1, -0x2D98($v0)
    ctx->pc = 0x17a218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955624)));
label_17a21c:
    // 0x17a21c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_17a220:
    // 0x17a220: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x17a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_17a224:
    // 0x17a224: 0x40f809  jalr        $v0
label_17a228:
    if (ctx->pc == 0x17A228u) {
        ctx->pc = 0x17A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A224u;
        // 0x17a228: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A22Cu;
        goto label_17a22c;
    }
    ctx->pc = 0x17A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A22Cu);
        ctx->pc = 0x17A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A224u;
        // 0x17a228: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A224u, 0x17A22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A22Cu;
label_17a22c:
    // 0x17a22c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17a230:
    // 0x17a230: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17a230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_17a234:
    // 0x17a234: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17a234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17a238:
    // 0x17a238: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17a238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17a23c:
    // 0x17a23c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17a240:
    // 0x17a240: 0x40f809  jalr        $v0
label_17a244:
    if (ctx->pc == 0x17A244u) {
        ctx->pc = 0x17A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A240u;
        // 0x17a244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A248u;
        goto label_17a248;
    }
    ctx->pc = 0x17A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A248u);
        ctx->pc = 0x17A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A240u;
        // 0x17a244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A240u, 0x17A248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A248u;
label_17a248:
    // 0x17a248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a24c:
    // 0x17a24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a250:
    // 0x17a250: 0x3e00008  jr          $ra
label_17a254:
    if (ctx->pc == 0x17A254u) {
        ctx->pc = 0x17A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A250u;
        // 0x17a254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A258u;
        goto label_fallthrough_0x17a250;
    }
    ctx->pc = 0x17A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A250u;
        // 0x17a254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a250:
    ctx->pc = 0x17A258u;
}
