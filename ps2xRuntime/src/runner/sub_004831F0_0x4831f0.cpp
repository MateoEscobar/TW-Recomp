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

// Function: sub_004831F0
// Address: 0x4831f0 - 0x483258
void sub_004831F0_0x4831f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004831F0_0x4831f0");
#endif

    switch (ctx->pc) {
        case 0x4831f0u: goto label_4831f0;
        case 0x4831f4u: goto label_4831f4;
        case 0x4831f8u: goto label_4831f8;
        case 0x4831fcu: goto label_4831fc;
        case 0x483200u: goto label_483200;
        case 0x483204u: goto label_483204;
        case 0x483208u: goto label_483208;
        case 0x48320cu: goto label_48320c;
        case 0x483210u: goto label_483210;
        case 0x483214u: goto label_483214;
        case 0x483218u: goto label_483218;
        case 0x48321cu: goto label_48321c;
        case 0x483220u: goto label_483220;
        case 0x483224u: goto label_483224;
        case 0x483228u: goto label_483228;
        case 0x48322cu: goto label_48322c;
        case 0x483230u: goto label_483230;
        case 0x483234u: goto label_483234;
        case 0x483238u: goto label_483238;
        case 0x48323cu: goto label_48323c;
        case 0x483240u: goto label_483240;
        case 0x483244u: goto label_483244;
        case 0x483248u: goto label_483248;
        case 0x48324cu: goto label_48324c;
        case 0x483250u: goto label_483250;
        case 0x483254u: goto label_483254;
        default: break;
    }

    ctx->pc = 0x4831f0u;

label_4831f0:
    // 0x4831f0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4831f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4831f4:
    // 0x4831f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4831f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4831f8:
    // 0x4831f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4831f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4831fc:
    // 0x4831fc: 0x8c62ad2c  lw          $v0, -0x52D4($v1)
    ctx->pc = 0x4831fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946092)));
label_483200:
    // 0x483200: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x483200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_483204:
    // 0x483204: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x483204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_483208:
    // 0x483208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48320c:
    // 0x48320c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48320cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483210:
    // 0x483210: 0x40f809  jalr        $v0
label_483214:
    if (ctx->pc == 0x483214u) {
        ctx->pc = 0x483214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483210u;
        // 0x483214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483218u;
        goto label_483218;
    }
    ctx->pc = 0x483210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483218u);
        ctx->pc = 0x483214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483210u;
        // 0x483214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483210u, 0x483218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483218u;
label_483218:
    // 0x483218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48321c:
    // 0x48321c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_483220:
    if (ctx->pc == 0x483220u) {
        ctx->pc = 0x483220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48321Cu;
        // 0x483220: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x483224u;
        goto label_483224;
    }
    ctx->pc = 0x48321Cu;
    {
        const bool branch_taken_0x48321c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48321Cu;
        // 0x483220: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48321c) {
            ctx->pc = 0x483248u;
            goto label_483248;
        }
    }
    ctx->pc = 0x483224u;
label_483224:
    // 0x483224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483228:
    // 0x483228: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x483228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_48322c:
    // 0x48322c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_483230:
    // 0x483230: 0xc11eff2  jal         func_47BFC8
label_483234:
    if (ctx->pc == 0x483234u) {
        ctx->pc = 0x483234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483230u;
        // 0x483234: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483238u;
        goto label_483238;
    }
    ctx->pc = 0x483230u;
    SET_GPR_U32(ctx, 31, 0x483238u);
    ctx->pc = 0x483234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483230u;
    // 0x483234: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x483230u, 0x483238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483238u;
label_483238:
    // 0x483238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x483238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_48323c:
    // 0x48323c: 0xc11f024  jal         func_47C090
label_483240:
    if (ctx->pc == 0x483240u) {
        ctx->pc = 0x483240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48323Cu;
        // 0x483240: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483244u;
        goto label_483244;
    }
    ctx->pc = 0x48323Cu;
    SET_GPR_U32(ctx, 31, 0x483244u);
    ctx->pc = 0x483240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48323Cu;
    // 0x483240: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x48323Cu, 0x483244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483244u;
label_483244:
    // 0x483244: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x483244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_483248:
    // 0x483248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48324c:
    // 0x48324c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48324cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483250:
    // 0x483250: 0x3e00008  jr          $ra
label_483254:
    if (ctx->pc == 0x483254u) {
        ctx->pc = 0x483254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483250u;
        // 0x483254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483258u;
        goto label_fallthrough_0x483250;
    }
    ctx->pc = 0x483250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483250u;
        // 0x483254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x483250:
    ctx->pc = 0x483258u;
}
