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

// Function: sub_00161218
// Address: 0x161218 - 0x1612b0
void sub_00161218_0x161218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161218_0x161218");
#endif

    switch (ctx->pc) {
        case 0x161218u: goto label_161218;
        case 0x16121cu: goto label_16121c;
        case 0x161220u: goto label_161220;
        case 0x161224u: goto label_161224;
        case 0x161228u: goto label_161228;
        case 0x16122cu: goto label_16122c;
        case 0x161230u: goto label_161230;
        case 0x161234u: goto label_161234;
        case 0x161238u: goto label_161238;
        case 0x16123cu: goto label_16123c;
        case 0x161240u: goto label_161240;
        case 0x161244u: goto label_161244;
        case 0x161248u: goto label_161248;
        case 0x16124cu: goto label_16124c;
        case 0x161250u: goto label_161250;
        case 0x161254u: goto label_161254;
        case 0x161258u: goto label_161258;
        case 0x16125cu: goto label_16125c;
        case 0x161260u: goto label_161260;
        case 0x161264u: goto label_161264;
        case 0x161268u: goto label_161268;
        case 0x16126cu: goto label_16126c;
        case 0x161270u: goto label_161270;
        case 0x161274u: goto label_161274;
        case 0x161278u: goto label_161278;
        case 0x16127cu: goto label_16127c;
        case 0x161280u: goto label_161280;
        case 0x161284u: goto label_161284;
        case 0x161288u: goto label_161288;
        case 0x16128cu: goto label_16128c;
        case 0x161290u: goto label_161290;
        case 0x161294u: goto label_161294;
        case 0x161298u: goto label_161298;
        case 0x16129cu: goto label_16129c;
        case 0x1612a0u: goto label_1612a0;
        case 0x1612a4u: goto label_1612a4;
        case 0x1612a8u: goto label_1612a8;
        case 0x1612acu: goto label_1612ac;
        default: break;
    }

    ctx->pc = 0x161218u;

label_161218:
    // 0x161218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16121c:
    // 0x16121c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161220:
    // 0x161220: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_161224:
    // 0x161224: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x161224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_161228:
    // 0x161228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16122c:
    // 0x16122c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x16122cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_161230:
    // 0x161230: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_161234:
    // 0x161234: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x161234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_161238:
    // 0x161238: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_16123c:
    // 0x16123c: 0x60f809  jalr        $v1
label_161240:
    if (ctx->pc == 0x161240u) {
        ctx->pc = 0x161240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16123Cu;
        // 0x161240: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161244u;
        goto label_161244;
    }
    ctx->pc = 0x16123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161244u);
        ctx->pc = 0x161240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16123Cu;
        // 0x161240: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16123Cu, 0x161244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161244u;
label_161244:
    // 0x161244: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_161248:
    // 0x161248: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_16124c:
    // 0x16124c: 0x24a52b08  addiu       $a1, $a1, 0x2B08
    ctx->pc = 0x16124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11016));
label_161250:
    // 0x161250: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_161254:
    // 0x161254: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_161258:
    // 0x161258: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x161258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_16125c:
    // 0x16125c: 0x60f809  jalr        $v1
label_161260:
    if (ctx->pc == 0x161260u) {
        ctx->pc = 0x161260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16125Cu;
        // 0x161260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161264u;
        goto label_161264;
    }
    ctx->pc = 0x16125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161264u);
        ctx->pc = 0x161260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16125Cu;
        // 0x161260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16125Cu, 0x161264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161264u;
label_161264:
    // 0x161264: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x161264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_161268:
    // 0x161268: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x161268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_16126c:
    // 0x16126c: 0x24a52b10  addiu       $a1, $a1, 0x2B10
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11024));
label_161270:
    // 0x161270: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_161274:
    // 0x161274: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_161278:
    // 0x161278: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_16127c:
    // 0x16127c: 0x60f809  jalr        $v1
label_161280:
    if (ctx->pc == 0x161280u) {
        ctx->pc = 0x161280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16127Cu;
        // 0x161280: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161284u;
        goto label_161284;
    }
    ctx->pc = 0x16127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161284u);
        ctx->pc = 0x161280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16127Cu;
        // 0x161280: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16127Cu, 0x161284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161284u;
label_161284:
    // 0x161284: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x161284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_161288:
    // 0x161288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16128c:
    // 0x16128c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_161290:
    // 0x161290: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x161290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_161294:
    // 0x161294: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x161294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_161298:
    // 0x161298: 0x60f809  jalr        $v1
label_16129c:
    if (ctx->pc == 0x16129Cu) {
        ctx->pc = 0x16129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161298u;
        // 0x16129c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612A0u;
        goto label_1612a0;
    }
    ctx->pc = 0x161298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1612A0u);
        ctx->pc = 0x16129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161298u;
        // 0x16129c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161298u, 0x1612A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1612A0u;
label_1612a0:
    // 0x1612a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1612a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1612a4:
    // 0x1612a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1612a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1612a8:
    // 0x1612a8: 0x3e00008  jr          $ra
label_1612ac:
    if (ctx->pc == 0x1612ACu) {
        ctx->pc = 0x1612ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612A8u;
        // 0x1612ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612B0u;
        goto label_fallthrough_0x1612a8;
    }
    ctx->pc = 0x1612A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612A8u;
        // 0x1612ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1612A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1612a8:
    ctx->pc = 0x1612B0u;
}
