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

// Function: sub_00423200
// Address: 0x423200 - 0x423280
void sub_00423200_0x423200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423200_0x423200");
#endif

    switch (ctx->pc) {
        case 0x423200u: goto label_423200;
        case 0x423204u: goto label_423204;
        case 0x423208u: goto label_423208;
        case 0x42320cu: goto label_42320c;
        case 0x423210u: goto label_423210;
        case 0x423214u: goto label_423214;
        case 0x423218u: goto label_423218;
        case 0x42321cu: goto label_42321c;
        case 0x423220u: goto label_423220;
        case 0x423224u: goto label_423224;
        case 0x423228u: goto label_423228;
        case 0x42322cu: goto label_42322c;
        case 0x423230u: goto label_423230;
        case 0x423234u: goto label_423234;
        case 0x423238u: goto label_423238;
        case 0x42323cu: goto label_42323c;
        case 0x423240u: goto label_423240;
        case 0x423244u: goto label_423244;
        case 0x423248u: goto label_423248;
        case 0x42324cu: goto label_42324c;
        case 0x423250u: goto label_423250;
        case 0x423254u: goto label_423254;
        case 0x423258u: goto label_423258;
        case 0x42325cu: goto label_42325c;
        case 0x423260u: goto label_423260;
        case 0x423264u: goto label_423264;
        case 0x423268u: goto label_423268;
        case 0x42326cu: goto label_42326c;
        case 0x423270u: goto label_423270;
        case 0x423274u: goto label_423274;
        case 0x423278u: goto label_423278;
        case 0x42327cu: goto label_42327c;
        default: break;
    }

    ctx->pc = 0x423200u;

label_423200:
    // 0x423200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x423200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_423204:
    // 0x423204: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x423204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423208:
    // 0x423208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x423208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_42320c:
    // 0x42320c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x42320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_423210:
    // 0x423210: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x423210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_423214:
    // 0x423214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_423218:
    // 0x423218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x423218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42321c:
    // 0x42321c: 0x0  nop
    ctx->pc = 0x42321cu;
    // NOP
label_423220:
    // 0x423220: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x423220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_423224:
    // 0x423224: 0x0  nop
    ctx->pc = 0x423224u;
    // NOP
label_423228:
    // 0x423228: 0x0  nop
    ctx->pc = 0x423228u;
    // NOP
label_42322c:
    // 0x42322c: 0x0  nop
    ctx->pc = 0x42322cu;
    // NOP
label_423230:
    // 0x423230: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_423234:
    if (ctx->pc == 0x423234u) {
        ctx->pc = 0x423234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423230u;
        // 0x423234: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423238u;
        goto label_423238;
    }
    ctx->pc = 0x423230u;
    {
        const bool branch_taken_0x423230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423230u;
        // 0x423234: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423230) {
            ctx->pc = 0x423220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423220;
        }
    }
    ctx->pc = 0x423238u;
label_423238:
    // 0x423238: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x423238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42323c:
    // 0x42323c: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x42323cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
label_423240:
    // 0x423240: 0x2652e790  addiu       $s2, $s2, -0x1870
    ctx->pc = 0x423240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961040));
label_423244:
    // 0x423244: 0x86300058  lh          $s0, 0x58($s1)
    ctx->pc = 0x423244u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_423248:
    // 0x423248: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x423248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_42324c:
    // 0x42324c: 0xc108cc0  jal         func_423300
label_423250:
    if (ctx->pc == 0x423250u) {
        ctx->pc = 0x423250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42324Cu;
        // 0x423250: 0x908021  addu        $s0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423254u;
        goto label_423254;
    }
    ctx->pc = 0x42324Cu;
    SET_GPR_U32(ctx, 31, 0x423254u);
    ctx->pc = 0x423250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42324Cu;
    // 0x423250: 0x908021  addu        $s0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423300u, 0x42324Cu, 0x423254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423254u;
label_423254:
    // 0x423254: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x423254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_423258:
    // 0x423258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x423258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42325c:
    // 0x42325c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_423260:
    // 0x423260: 0x60f809  jalr        $v1
label_423264:
    if (ctx->pc == 0x423264u) {
        ctx->pc = 0x423264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423260u;
        // 0x423264: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423268u;
        goto label_423268;
    }
    ctx->pc = 0x423260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x423268u);
        ctx->pc = 0x423264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423260u;
        // 0x423264: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423260u, 0x423268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423268u;
label_423268:
    // 0x423268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x423268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42326c:
    // 0x42326c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x42326cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423270:
    // 0x423270: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x423270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423274:
    // 0x423274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_423278:
    // 0x423278: 0x3e00008  jr          $ra
label_42327c:
    if (ctx->pc == 0x42327Cu) {
        ctx->pc = 0x42327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423278u;
        // 0x42327c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423280u;
        goto label_fallthrough_0x423278;
    }
    ctx->pc = 0x423278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423278u;
        // 0x42327c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x423278:
    ctx->pc = 0x423280u;
}
