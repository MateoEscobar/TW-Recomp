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

// Function: sub_00175258
// Address: 0x175258 - 0x1752c8
void sub_00175258_0x175258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175258_0x175258");
#endif

    switch (ctx->pc) {
        case 0x175258u: goto label_175258;
        case 0x17525cu: goto label_17525c;
        case 0x175260u: goto label_175260;
        case 0x175264u: goto label_175264;
        case 0x175268u: goto label_175268;
        case 0x17526cu: goto label_17526c;
        case 0x175270u: goto label_175270;
        case 0x175274u: goto label_175274;
        case 0x175278u: goto label_175278;
        case 0x17527cu: goto label_17527c;
        case 0x175280u: goto label_175280;
        case 0x175284u: goto label_175284;
        case 0x175288u: goto label_175288;
        case 0x17528cu: goto label_17528c;
        case 0x175290u: goto label_175290;
        case 0x175294u: goto label_175294;
        case 0x175298u: goto label_175298;
        case 0x17529cu: goto label_17529c;
        case 0x1752a0u: goto label_1752a0;
        case 0x1752a4u: goto label_1752a4;
        case 0x1752a8u: goto label_1752a8;
        case 0x1752acu: goto label_1752ac;
        case 0x1752b0u: goto label_1752b0;
        case 0x1752b4u: goto label_1752b4;
        case 0x1752b8u: goto label_1752b8;
        case 0x1752bcu: goto label_1752bc;
        case 0x1752c0u: goto label_1752c0;
        case 0x1752c4u: goto label_1752c4;
        default: break;
    }

    ctx->pc = 0x175258u;

label_175258:
    // 0x175258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17525c:
    // 0x17525c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_175260:
    // 0x175260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175264:
    // 0x175264: 0xc05d462  jal         func_175188
label_175268:
    if (ctx->pc == 0x175268u) {
        ctx->pc = 0x175268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175264u;
        // 0x175268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17526Cu;
        goto label_17526c;
    }
    ctx->pc = 0x175264u;
    SET_GPR_U32(ctx, 31, 0x17526Cu);
    ctx->pc = 0x175268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175264u;
    // 0x175268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x175264u, 0x17526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17526Cu;
label_17526c:
    // 0x17526c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175270:
    // 0x175270: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x175270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_175274:
    // 0x175274: 0x8c6500fc  lw          $a1, 0xFC($v1)
    ctx->pc = 0x175274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_175278:
    // 0x175278: 0xa0f809  jalr        $a1
label_17527c:
    if (ctx->pc == 0x17527Cu) {
        ctx->pc = 0x17527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175278u;
        // 0x17527c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175280u;
        goto label_175280;
    }
    ctx->pc = 0x175278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x175280u);
        ctx->pc = 0x17527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175278u;
        // 0x17527c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175278u, 0x175280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175280u;
label_175280:
    // 0x175280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x175280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175284:
    // 0x175284: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_175288:
    // 0x175288: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_17528c:
    if (ctx->pc == 0x17528Cu) {
        ctx->pc = 0x17528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175288u;
        // 0x17528c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175290u;
        goto label_175290;
    }
    ctx->pc = 0x175288u;
    {
        const bool branch_taken_0x175288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x175288) {
            ctx->pc = 0x17528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175288u;
            // 0x17528c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1752B4u;
            goto label_1752b4;
        }
    }
    ctx->pc = 0x175290u;
label_175290:
    // 0x175290: 0xc05d482  jal         func_175208
label_175294:
    if (ctx->pc == 0x175294u) {
        ctx->pc = 0x175294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175290u;
        // 0x175294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175298u;
        goto label_175298;
    }
    ctx->pc = 0x175290u;
    SET_GPR_U32(ctx, 31, 0x175298u);
    ctx->pc = 0x175294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175290u;
    // 0x175294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175208u, 0x175290u, 0x175298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175298u;
label_175298:
    // 0x175298: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17529c:
    // 0x17529c: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1752a0:
    // 0x1752a0: 0x8c6500fc  lw          $a1, 0xFC($v1)
    ctx->pc = 0x1752a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1752a4:
    // 0x1752a4: 0xa0f809  jalr        $a1
label_1752a8:
    if (ctx->pc == 0x1752A8u) {
        ctx->pc = 0x1752A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752A4u;
        // 0x1752a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1752ACu;
        goto label_1752ac;
    }
    ctx->pc = 0x1752A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1752ACu);
        ctx->pc = 0x1752A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752A4u;
        // 0x1752a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1752A4u, 0x1752ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1752ACu;
label_1752ac:
    // 0x1752ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1752acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752b0:
    // 0x1752b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1752b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1752b4:
    // 0x1752b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1752b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1752b8:
    // 0x1752b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1752b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1752bc:
    // 0x1752bc: 0x3e00008  jr          $ra
label_1752c0:
    if (ctx->pc == 0x1752C0u) {
        ctx->pc = 0x1752C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752BCu;
        // 0x1752c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1752C4u;
        goto label_1752c4;
    }
    ctx->pc = 0x1752BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1752C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752BCu;
        // 0x1752c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1752BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1752C4u;
label_1752c4:
    // 0x1752c4: 0x0  nop
    ctx->pc = 0x1752c4u;
    // NOP
    ctx->pc = 0x1752c8u;
}
